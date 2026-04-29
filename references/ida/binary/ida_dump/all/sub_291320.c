__int64 __fastcall sub_291320(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  unsigned int v4; // r14d
  __int64 v6; // rbx
  int v7; // edx
  int v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rbp
  int v11; // edx
  int v12; // eax
  unsigned int v13; // edx
  char v14; // [rsp+Fh] [rbp-49h] BYREF
  _BYTE v15[8]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 72);
  v3 = *(_QWORD *)(a2 + 24);
  v16 = __readfsqword(0x28u);
  v14 = 0;
  v4 = sub_280520(*(_QWORD *)(v2 + 112), v3, a2 + 48, &v14);
  if ( (_BYTE)v4 )
  {
    v6 = v3;
    copy_tinfo_t();
    if ( *(_DWORD *)(v3 + 8) == 51 )
    {
      do
      {
        sub_32C540(v15, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v6 + 48);
        copy_tinfo_t();
        clear_tinfo_t();
        v6 = *(_QWORD *)(v6 + 24);
      }
      while ( *(_DWORD *)(v6 + 8) == 51 );
    }
    if ( !v14 )
    {
      v7 = *(_DWORD *)(v6 + 56);
      v8 = v7 | 0x20;
      v9 = v7 & 0xFFFFFFDF;
      if ( (*(_BYTE *)(a2 + 56) & 0x20) == 0 )
        v8 = v9;
      *(_DWORD *)(v6 + 56) = v8;
LABEL_9:
      sub_255850((__int64 *)a2, v3);
      return v4;
    }
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u )
    {
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u )
        goto LABEL_19;
      v10 = *(_QWORD *)(v6 + 32);
    }
    else
    {
      v10 = *(_QWORD *)(v6 + 24);
    }
    if ( v10 && *(_DWORD *)(v10 + 8) == 48 )
    {
      copy_tinfo_t();
      v11 = *(_DWORD *)(v10 + 56);
      v12 = v11 | 0x20;
      v13 = v11 & 0xFFFFFFDF;
      if ( (*(_BYTE *)(a2 + 56) & 0x20) == 0 )
        v12 = v13;
      *(_DWORD *)(v10 + 56) = v12;
      goto LABEL_9;
    }
LABEL_19:
    if ( !under_debugger )
      sub_383060(50710);
    BUG();
  }
  return v4;
}

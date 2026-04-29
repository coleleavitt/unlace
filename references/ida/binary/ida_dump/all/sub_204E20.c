unsigned __int64 __fastcall sub_204E20(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  int v11; // eax
  __int64 v12; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 184);
  if ( *(_DWORD *)(v2 + 40) == 58 && (*(_BYTE *)(a2 + 25) & 4) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(v4 + 4) & 0x40) == 0 )
      goto LABEL_8;
    v6 = v4 + 48;
    if ( *(_DWORD *)v4 == 56 )
      v6 = v4 + 32;
    if ( *(_BYTE *)v6 != 6 )
      goto LABEL_8;
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(v6 + 8);
    v9 = *(_QWORD **)(v7 + 1216);
    v10 = &v9[*(_QWORD *)(v7 + 1224)];
    if ( v9 == v10 )
      goto LABEL_8;
    while ( v8 != *v9 )
    {
      if ( v10 == ++v9 )
        goto LABEL_8;
    }
    if ( v10 == v9 )
      goto LABEL_8;
    v11 = *(_DWORD *)(a1 + 192);
    if ( v11 == -1 )
    {
      v12 = 0;
      *(_DWORD *)(a1 + 192) = (unsigned __int8)sub_F35D0(v7, (__int64)&v12);
      clear_tinfo_t();
      v11 = *(_DWORD *)(a1 + 192);
    }
    if ( !v11 )
    {
      v2 = *(_QWORD *)(a1 + 184);
LABEL_8:
      *(_DWORD *)(v2 + 40) = 26;
    }
  }
  return v13 - __readfsqword(0x28u);
}

__int64 __fastcall sub_35C350(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, _DWORD *a6, _DWORD *a7)
{
  _DWORD *v8; // rdx
  __int64 v10; // rbx
  __int64 v11; // r12
  int v12; // r15d
  __int64 v13; // r14
  int v14; // ebx
  const char *v15; // r9
  int v16; // ecx
  unsigned int v17; // eax
  int v19; // esi
  __int64 v20; // [rsp+8h] [rbp-50h]

  v8 = a6;
  v10 = *(_QWORD *)(a1 + 176);
  v11 = v10 + 120LL * *(_QWORD *)(a1 + 184);
  if ( v10 == v11 )
  {
    v19 = 0;
    v12 = 0;
    goto LABEL_22;
  }
  v20 = a3;
  v12 = 0;
  v13 = *(_QWORD *)(a1 + 176);
  v14 = 0;
  do
  {
    v17 = *(_DWORD *)(v13 + 100);
    if ( v17 == 2 )
    {
      ++v14;
    }
    else
    {
      if ( v17 > 2 )
      {
        if ( v17 - 3 > 1 )
          goto LABEL_15;
        goto LABEL_11;
      }
      if ( v17 != 1 )
      {
        if ( !a5 )
        {
LABEL_15:
          if ( !under_debugger )
            sub_37E160(51185);
          goto LABEL_26;
        }
        ++v14;
        ++v12;
LABEL_5:
        if ( *(_QWORD *)(v13 + 16) <= 1u )
          goto LABEL_11;
        goto LABEL_6;
      }
    }
    ++v12;
    if ( a5 )
      goto LABEL_5;
LABEL_6:
    v15 = (const char *)&unk_3FC793;
    v16 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 84LL);
    if ( v16 != 8 )
      v15 = "----";
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, const char *, _QWORD, _QWORD, const char *))(*(_QWORD *)a4 + 32LL))(
            a4,
            v20,
            "\n//----- (%0*a) ----------------------------------------------------%s\n",
            (unsigned int)(2 * v16),
            *(_QWORD *)(v13 + 32),
            v15) )
      return 0;
    if ( *(_QWORD *)(v13 + 16) <= 1u )
    {
      if ( !under_debugger )
        sub_37E160(51114);
LABEL_26:
      BUG();
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, void *, _QWORD))(*(_QWORD *)a4 + 32LL))(
            a4,
            v20,
            &unk_3FD0D2,
            *(_QWORD *)(v13 + 8)) )
      return 0;
LABEL_11:
    v13 += 120;
  }
  while ( v13 != v11 );
  v8 = a6;
  v19 = v14;
LABEL_22:
  *v8 = v12;
  *a7 = v19;
  return 1;
}

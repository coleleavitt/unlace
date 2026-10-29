__int64 __fastcall sub_ED1D00(
        __int64 a1,
        char a2,
        int a3,
        unsigned __int8 (__fastcall *a4)(__int64, _QWORD, __int64),
        __int64 a5,
        __int64 a6,
        void (__fastcall *a7)(__int64, __int64),
        __int64 a8)
{
  unsigned int v9; // ebp
  __int64 v10; // r14
  __int16 v11; // ax
  __int64 v12; // rdi

  v9 = 0;
  v10 = sub_EC6020(a1, 0);
  if ( !a3 )
    return 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *(_WORD *)v10 & 0x1FF;
      if ( ((v11 + 325) & 0x1FFu) > 4 )
        goto LABEL_3;
      a7(a8, v10);
      v11 = *(_WORD *)v10 & 0x1FF;
      if ( !*(_QWORD *)(*(_QWORD *)(v10 + 24) + 8LL * **(unsigned int **)(v10 + 24) + 24) )
        break;
      v10 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 8LL * **(unsigned int **)(v10 + 24) + 24);
    }
    if ( *(_DWORD *)(v10 + 36) )
      return 1;
LABEL_3:
    if ( v11 == 237 )
      v10 = *(_QWORD *)(v10 + 8);
    if ( a4(a5, v9, v10) )
      return 0;
    if ( (*(_WORD *)v10 & 0x1FF) == 0xF3 )
      v12 = *(_QWORD *)(v10 + 40);
    else
      v12 = *(_QWORD *)(v10 + 64);
    ++v9;
    v10 = (__int64)sub_ED16B0(v12, a2);
    if ( a3 == v9 )
      return 1;
  }
}


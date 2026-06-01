__int64 __fastcall sub_577340(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, char a6, __int64 a7)
{
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax

  if ( a5 && (a6 & 0x10) == 0 )
  {
    v11 = *(int *)(a1 + 8);
    v12 = *(_QWORD *)a1;
    if ( __ROR4__(-1030792151 * v11 + 85899344, 2) <= (unsigned int)&unk_28F5C28 )
    {
      if ( 40LL * ((int)v11 + 100) < (unsigned __int64)((int)v11 + 100) )
        goto LABEL_10;
      v13 = qrealloc(v12);
      v12 = v13;
      if ( !v13 )
        goto LABEL_10;
      *(_QWORD *)a1 = v13;
      v11 = *(int *)(a1 + 8);
    }
    v14 = v12 + 40 * v11;
    v15 = qstrdup(a7);
    *(_QWORD *)(v14 + 24) = v15;
    if ( v15 )
    {
      *(_QWORD *)v14 = a2;
      *(_DWORD *)(v14 + 32) = a3;
      *(_QWORD *)(v14 + 8) = a4;
      *(_QWORD *)(v14 + 16) = a5;
      ++*(_DWORD *)(a1 + 8);
      return 0;
    }
LABEL_10:
    sub_3B74D0((int)"arclist");
  }
  return 0;
}


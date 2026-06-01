__int64 __fastcall sub_2DD0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, char a6, __int64 a7)
{
  __int64 v7; // r9
  __int64 v8; // r14
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  char v21; // [rsp-38h] [rbp-38h]

  if ( a5 )
  {
    v7 = a6 & 0x10;
    if ( !(_DWORD)v7 )
    {
      v8 = a2;
      v13 = *(int *)(a1 + 8);
      v14 = *(_QWORD *)a1;
      v15 = (unsigned int)__ROR4__(-1030792151 * v13 + 85899344, 2);
      if ( (unsigned int)v15 <= 0x28F5C28 )
      {
        v16 = (int)v13 + 100;
        a2 = 40 * v16;
        if ( 40 * v16 < v16 )
          goto LABEL_10;
        v17 = qrealloc(v14);
        v14 = v17;
        if ( !v17 )
          goto LABEL_10;
        *(_QWORD *)a1 = v17;
        v13 = *(int *)(a1 + 8);
      }
      v18 = v14 + 40 * v13;
      v19 = qstrdup(a7);
      *(_QWORD *)(v18 + 24) = v19;
      if ( v19 )
      {
        *(_QWORD *)v18 = v8;
        *(_DWORD *)(v18 + 32) = a3;
        *(_QWORD *)(v18 + 8) = a4;
        *(_QWORD *)(v18 + 16) = a5;
        ++*(_DWORD *)(a1 + 8);
        return 0;
      }
LABEL_10:
      sub_2D10((__int64)"arclist", a2, v15, a4, a5, v7, v21);
    }
  }
  return 0;
}


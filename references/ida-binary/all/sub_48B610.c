__int64 __fastcall sub_48B610(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rax
  char *v10; // rsi
  __int64 v11; // rdx
  char *v12; // rcx
  char *v13; // rax
  __int64 v14; // rax
  char v16; // al

  v6 = *a3;
  v7 = a3[1];
  if ( *a3 == -1 && !v7 )
  {
    LODWORD(v11) = 0;
    v6 = -1;
    LODWORD(v7) = 0;
    goto LABEL_11;
  }
  v8 = *(_QWORD *)(a2 + 16);
  if ( !*(_QWORD *)(v8 + 1872) )
  {
    v16 = sub_4DFF10(v8);
    v6 = *a3;
    if ( !v16 )
    {
      v11 = a3[1];
      goto LABEL_11;
    }
    v8 = *(_QWORD *)(a2 + 16);
  }
  v9 = sub_4E07A0(v8, v6);
  if ( v9 )
  {
    v10 = *(char **)(v9 + 32);
    v11 = a3[1];
    v12 = &v10[8 * *(_QWORD *)(v9 + 40)];
    if ( v10 != v12 )
    {
      v13 = *(char **)(v9 + 32);
      while ( v11 != *(_QWORD *)v13 )
      {
        v13 += 8;
        if ( v12 == v13 )
          goto LABEL_12;
      }
      v14 = v13 - v10;
      v7 = v14 >> 3;
      if ( v14 >= 0 )
      {
        v6 = *a3;
LABEL_11:
        *(_DWORD *)a1 = v7;
        *(_DWORD *)(a1 + 4) = 0;
        *(_QWORD *)(a1 + 8) = (unsigned int)v11 | (unsigned __int64)(v6 << 32);
        *(_QWORD *)(a1 + 16) = a2;
        return a1;
      }
    }
  }
LABEL_12:
  *(_QWORD *)a1 = -1;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  return a1;
}

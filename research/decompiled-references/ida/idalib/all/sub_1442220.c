void __fastcall sub_1442220(_QWORD *a1, const char **a2, __int64 a3, __int64 a4)
{
  const char *v8; // rbp
  size_t v9; // rsi
  size_t v10; // rdx
  const char *v11; // r15
  size_t v12; // rbp
  size_t v13; // rdi
  size_t v14; // rdx
  __int64 v15; // rdx
  size_t v16; // rax

  v8 = *a2;
  v9 = 0;
  if ( v8 )
    v9 = strlen(v8);
  v11 = (const char *)sub_228AA60(v8, v9, 0);
  v12 = v10;
  if ( v10 )
  {
    v13 = a1[1];
    v14 = v10 + v13;
    if ( v14 <= a1[2] )
    {
LABEL_5:
      memcpy((void *)(*a1 + v13), v11, v12);
      v13 = v12 + a1[1];
      goto LABEL_6;
    }
    goto LABEL_16;
  }
  v11 = *a2;
  if ( !*a2 )
  {
    v13 = a1[1];
    if ( v13 <= a1[2] )
      goto LABEL_6;
    v14 = a1[1];
    goto LABEL_16;
  }
  v16 = strlen(*a2);
  v13 = a1[1];
  v12 = v16;
  v14 = v16 + v13;
  if ( v16 + v13 > a1[2] )
  {
LABEL_16:
    sub_2236E10(a1, a1 + 3, v14, 1);
    v13 = a1[1];
    if ( v12 )
      goto LABEL_5;
    goto LABEL_6;
  }
  if ( v16 )
    goto LABEL_5;
LABEL_6:
  a1[1] = v13;
  sub_FEAAC0(a3, (__int64)a1);
  if ( *(_BYTE *)(a3 + 816) )
  {
    v15 = 3;
    if ( *(_DWORD *)(a4 + 260) != 15 )
      v15 = 1;
    sub_228F0B0(a1, 0, v15);
  }
}

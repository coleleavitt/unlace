__int64 __fastcall sub_226EC40(__int64 a1, unsigned int *a2, unsigned int a3, __int64 a4, _BYTE *a5)
{
  char *v5; // rbp
  __int64 v6; // r10
  unsigned int v10; // ebx
  char *v11; // rax
  char *v12; // rdx
  char *i; // rsi
  char *v14; // rax
  _DWORD *v15; // r11
  char *v16; // rdx
  char *v17; // rsi
  char v18; // cl
  __int64 result; // rax
  char *v20; // rax
  char *v21; // rdi
  unsigned int v22; // edx
  const char *v23; // [rsp+0h] [rbp-58h] BYREF
  __int16 v24; // [rsp+20h] [rbp-38h]

  v6 = a1;
  v10 = 0;
  while ( 1 )
  {
    v11 = *(char **)(v6 + 40);
    v12 = *(char **)(v6 + 48);
    for ( i = v11; v12 != i && *i == 32; ++i )
      ;
    *(_QWORD *)(v6 + 40) = i;
    *(_DWORD *)(v6 + 60) += (_DWORD)i - (_DWORD)v11;
    v14 = sub_226DF60(v6, i);
    v16 = *(char **)(v6 + 40);
    if ( v14 != v16 )
      break;
    v17 = *(char **)(v6 + 48);
    if ( v16 == v17 )
      goto LABEL_8;
    v18 = *v16;
    if ( *v16 != 13 )
    {
      if ( v18 != 10 )
        goto LABEL_8;
LABEL_17:
      if ( *(_DWORD *)(v6 + 60) > v10 )
      {
        v5 = *(char **)(v6 + 40);
        v10 = *(_DWORD *)(v6 + 60);
      }
      v20 = v16 + 1;
      if ( v18 != 13 )
        goto LABEL_23;
      goto LABEL_20;
    }
    v20 = v16 + 1;
    v21 = v16 + 1;
    if ( v17 == v16 + 1 )
      goto LABEL_17;
    if ( v16[1] == 10 )
      v21 = v16 + 2;
    if ( v16 != v21 )
      goto LABEL_17;
LABEL_20:
    if ( v17 == v20 )
      goto LABEL_24;
    if ( v16[1] == 10 )
      v20 = v16 + 2;
LABEL_23:
    if ( v16 == v20 )
      goto LABEL_8;
LABEL_24:
    *(_DWORD *)(v6 + 60) = 0;
    ++*(_DWORD *)(v6 + 64);
    *(_QWORD *)(v6 + 40) = v20;
    ++*v15;
  }
  v22 = *(_DWORD *)(v6 + 60);
  if ( v22 <= a3 )
  {
LABEL_8:
    *a5 = 1;
    return 1;
  }
  *a2 = v22;
  result = 1;
  if ( v22 < v10 )
  {
    v23 = "Leading all-spaces line must be smaller than the block indent";
    v24 = 259;
    sub_226E270(v6, (__int64)&v23, v5);
    return 0;
  }
  return result;
}

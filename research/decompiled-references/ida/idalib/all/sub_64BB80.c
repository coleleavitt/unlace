int *__fastcall sub_64BB80(
        __int64 a1,
        const char *a2,
        const char *a3,
        const char *a4,
        const char *a5,
        const char *a6,
        char a7,
        __int64 a8,
        char a9)
{
  size_t v11; // rbx
  size_t v12; // rcx
  size_t v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  size_t v18; // rbx
  int *v19; // rbp
  int v20; // edx
  char *v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rsi
  int v25; // eax
  _DWORD *v26; // rdi
  size_t v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v34; // rax
  size_t v37; // [rsp+20h] [rbp-58h]
  size_t v38; // [rsp+20h] [rbp-58h]
  size_t v39; // [rsp+28h] [rbp-50h]
  size_t v40; // [rsp+30h] [rbp-48h]

  v11 = strlen(a2);
  v37 = strlen(a3);
  v39 = strlen(a5);
  v40 = strlen(a4);
  v12 = strlen(a6) + v40 + v39 + v37 + (-(__int64)(a9 == 0) & 0xFFFFFFFFFFFFFFFCLL) + 8 + v11 + 9;
  v13 = v12 + 1;
  v38 = v12;
  v14 = sub_64B9F0(a1, v12 + 1);
  v18 = v14 + v13;
  v19 = (int *)v14;
  v20 = *a2;
  if ( *a2 == 35 )
  {
    if ( !a2[1] )
    {
      v25 = 0x7FFFFFFF;
      goto LABEL_7;
    }
    v21 = (char *)(a2 + 1);
    goto LABEL_3;
  }
  v21 = (char *)(a2 + 1);
  v22 = 0;
  if ( (_BYTE)v20 )
  {
LABEL_3:
    v22 = 0;
    do
    {
      ++v21;
      v22 = v20 ^ __ROL4__(v22, 5);
      v20 = *(v21 - 1);
    }
    while ( *(v21 - 1) );
  }
  v23 = (int)(v22 % *(_DWORD *)(a1 + 16));
  v24 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 4LL * (int)v23);
  *v19 = v24 | *v19 & 0x80000000;
  if ( (int)v24 < 0 )
    sub_647850(a1, v24, v23, v38, v15, v16);
  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v23) = (_DWORD)v19 - *(_DWORD *)(a1 + 32);
  v25 = *v19;
LABEL_7:
  v26 = v19 + 1;
  v27 = v38 - 3;
  if ( a9 )
  {
    *v19 = v25 | 0x80000000;
    v34 = qstpncpy(v26, a2, v27);
    v29 = v34 + 9;
    *(_QWORD *)(v34 + 1) = a8;
  }
  else
  {
    *v19 = v25 & 0x7FFFFFFF;
    v28 = qstpncpy(v26, a2, v27);
    v29 = v28 + 5;
    *(_DWORD *)(v28 + 1) = a8;
  }
  v30 = qstpncpy(v29, a3, v18 - v29);
  v31 = qstpncpy(v30 + 1, a5, v18 - (v30 + 1));
  v32 = qstpncpy(v31 + 1, a4, v18 - (v31 + 1));
  *(_BYTE *)(qstpncpy(v32 + 1, a6, v18 - (v32 + 1)) + 1) = a7;
  return v19;
}

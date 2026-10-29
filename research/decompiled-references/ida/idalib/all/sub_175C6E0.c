__int64 __fastcall sub_175C6E0(__int64 *a1, unsigned __int16 **a2, int a3, char a4, __int64 a5, _BYTE *a6)
{
  unsigned __int16 **v8; // rbx
  unsigned __int16 *v9; // r14
  __int64 v10; // r12
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // [rsp+10h] [rbp-98h]
  unsigned __int64 v21; // [rsp+10h] [rbp-98h]
  unsigned __int16 *v22; // [rsp+18h] [rbp-90h]
  unsigned __int64 v23; // [rsp+18h] [rbp-90h]
  __int64 v25; // [rsp+28h] [rbp-80h]
  __int64 v26; // [rsp+38h] [rbp-70h]

  if ( !a3 )
    return 0;
  v8 = a2;
  v25 = (__int64)&a2[(unsigned int)(a3 - 1) + 1];
  v26 = a5 + 16;
  while ( 1 )
  {
    v9 = *v8;
    if ( !a4 )
    {
      if ( (*v9 & 0x1FF) != 0x16 )
      {
        v17 = sub_175B800(a1, *v8);
        goto LABEL_17;
      }
      goto LABEL_5;
    }
    if ( sub_BFDFF0((__int64)*v8) )
      break;
    v9 = *v8;
    if ( (**v8 & 0x1FF) != 0x16 )
    {
      v17 = sub_175C980(a1, *v8, 0);
LABEL_17:
      if ( v17 == 1 )
        return 1;
      v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
      if ( *v8 != (unsigned __int16 *)v18 && a6 )
        *a6 = 1;
      v19 = *(unsigned int *)(a5 + 8);
      if ( v19 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
      {
        v21 = v18;
        sub_2237220(a5, v26, v19 + 1, 8);
        v19 = *(unsigned int *)(a5 + 8);
        v18 = v21;
      }
      *(_QWORD *)(*(_QWORD *)a5 + 8 * v19) = v18;
      ++*(_DWORD *)(a5 + 8);
      goto LABEL_12;
    }
LABEL_5:
    v22 = *((unsigned __int16 **)v9 + 3);
    sub_1E4CA90(v22);
    v10 = *a1;
    v11 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(*a1 + 12632) = 0;
    v20 = v11;
    v12 = sub_175B800(a1, v22);
    if ( v12 == 1 || (v13 = sub_1E53EF0(*a1, v12 & 0xFFFFFFFFFFFFFFFELL), v13 == 1) )
    {
      *(_DWORD *)(v10 + 12632) = v20;
      return 1;
    }
    if ( a6 )
      *a6 = 1;
    v14 = *(unsigned int *)(a5 + 8);
    v15 = v13 & 0xFFFFFFFFFFFFFFFELL;
    if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
    {
      v23 = v15;
      sub_2237220(a5, v26, v14 + 1, 8);
      v14 = *(unsigned int *)(a5 + 8);
      v15 = v23;
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * v14) = v15;
    ++*(_DWORD *)(a5 + 8);
    *(_DWORD *)(v10 + 12632) = v20;
LABEL_12:
    if ( (unsigned __int16 **)v25 == ++v8 )
      return 0;
  }
  if ( !a6 )
    return 0;
  *a6 = 1;
  return 0;
}

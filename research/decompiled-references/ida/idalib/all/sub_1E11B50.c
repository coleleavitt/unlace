__int64 __fastcall sub_1E11B50(
        __int64 *a1,
        unsigned __int16 **a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        _BYTE *a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int16 **v10; // rbx
  unsigned __int16 *v11; // r14
  __int64 v12; // r12
  unsigned __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // [rsp+10h] [rbp-98h]
  unsigned __int64 v24; // [rsp+10h] [rbp-98h]
  unsigned __int16 *v25; // [rsp+18h] [rbp-90h]
  unsigned __int64 v26; // [rsp+18h] [rbp-90h]
  char v27; // [rsp+23h] [rbp-85h]
  __int64 v28; // [rsp+28h] [rbp-80h]
  __int64 v29; // [rsp+38h] [rbp-70h]

  v27 = a4;
  if ( !(_DWORD)a3 )
    return 0;
  v10 = a2;
  v28 = (__int64)&a2[(unsigned int)(a3 - 1) + 1];
  v29 = a5 + 16;
  while ( 1 )
  {
    v11 = *v10;
    if ( !v27 )
    {
      if ( (*v11 & 0x1FF) != 0x16 )
      {
        v21 = sub_1E11560(a1, *v10, a7, a8, a3, a4, a5);
        goto LABEL_17;
      }
      goto LABEL_5;
    }
    if ( sub_BFDFF0((__int64)*v10) )
      break;
    v11 = *v10;
    if ( (**v10 & 0x1FF) != 0x16 )
    {
      v21 = sub_1E11DF0(a1, *v10, 0);
LABEL_17:
      if ( v21 == 1 )
        return 1;
      v22 = v21 & 0xFFFFFFFFFFFFFFFELL;
      if ( *v10 != (unsigned __int16 *)v22 && a6 )
        *a6 = 1;
      a4 = *(unsigned int *)(a5 + 8);
      if ( a4 + 1 > *(unsigned int *)(a5 + 12) )
      {
        v24 = v22;
        sub_2237220(a5, v29, a4 + 1, 8);
        a4 = *(unsigned int *)(a5 + 8);
        v22 = v24;
      }
      a3 = *(_QWORD *)a5;
      *(_QWORD *)(*(_QWORD *)a5 + 8 * a4) = v22;
      ++*(_DWORD *)(a5 + 8);
      goto LABEL_12;
    }
LABEL_5:
    v25 = *((unsigned __int16 **)v11 + 3);
    sub_1E4CA90(v25);
    v12 = *a1;
    v13 = *((unsigned int *)v11 + 5);
    v14 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(*a1 + 12632) = 0;
    v23 = v14;
    v17 = sub_1E11560(a1, v25, a7, a8, v15, v13, v16);
    if ( v17 == 1 || (v18 = sub_1E53EF0(*a1, v17 & 0xFFFFFFFFFFFFFFFELL), v18 == 1) )
    {
      *(_DWORD *)(v12 + 12632) = v23;
      return 1;
    }
    if ( a6 )
      *a6 = 1;
    a4 = *(unsigned int *)(a5 + 8);
    v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
    if ( a4 + 1 > *(unsigned int *)(a5 + 12) )
    {
      v26 = v19;
      sub_2237220(a5, v29, a4 + 1, 8);
      a4 = *(unsigned int *)(a5 + 8);
      v19 = v26;
    }
    a3 = *(_QWORD *)a5;
    *(_QWORD *)(*(_QWORD *)a5 + 8 * a4) = v19;
    ++*(_DWORD *)(a5 + 8);
    *(_DWORD *)(v12 + 12632) = v23;
LABEL_12:
    if ( (unsigned __int16 **)v28 == ++v10 )
      return 0;
  }
  if ( !a6 )
    return 0;
  *a6 = 1;
  return 0;
}

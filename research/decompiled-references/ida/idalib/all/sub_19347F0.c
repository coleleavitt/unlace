__int64 __fastcall sub_19347F0(
        __int64 *a1,
        unsigned __int64 *a2,
        int a3,
        char a4,
        __int64 a5,
        _BYTE *a6,
        double a7,
        __m128 a8)
{
  unsigned __int64 *v10; // rbx
  unsigned __int64 v11; // r14
  __int64 v12; // r12
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // [rsp+10h] [rbp-98h]
  unsigned __int64 v23; // [rsp+10h] [rbp-98h]
  unsigned __int64 v24; // [rsp+18h] [rbp-90h]
  unsigned __int64 v25; // [rsp+18h] [rbp-90h]
  __int64 v27; // [rsp+28h] [rbp-80h]
  __int64 v28; // [rsp+38h] [rbp-70h]

  if ( !a3 )
    return 0;
  v10 = a2;
  v27 = (__int64)&a2[(unsigned int)(a3 - 1) + 1];
  v28 = a5 + 16;
  while ( 1 )
  {
    v11 = *v10;
    if ( !a4 )
    {
      if ( (*(_WORD *)v11 & 0x1FF) != 0x16 )
      {
        v19 = sub_1933BC0(a1, *v10, a7, a8);
        goto LABEL_17;
      }
      goto LABEL_5;
    }
    if ( sub_BFDFF0(*v10) )
      break;
    v11 = *v10;
    if ( (*(_WORD *)*v10 & 0x1FF) != 0x16 )
    {
      v19 = sub_1934A90(a1, *v10, 0);
LABEL_17:
      if ( v19 == 1 )
        return 1;
      v20 = v19 & 0xFFFFFFFFFFFFFFFELL;
      if ( *v10 != v20 && a6 )
        *a6 = 1;
      v21 = *(unsigned int *)(a5 + 8);
      if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
      {
        v23 = v20;
        sub_2237220(a5, v28, v21 + 1, 8);
        v21 = *(unsigned int *)(a5 + 8);
        v20 = v23;
      }
      *(_QWORD *)(*(_QWORD *)a5 + 8 * v21) = v20;
      ++*(_DWORD *)(a5 + 8);
      goto LABEL_12;
    }
LABEL_5:
    v24 = *(_QWORD *)(v11 + 24);
    sub_1E4CA90(v24);
    v12 = *a1;
    v13 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(*a1 + 12632) = 0;
    v22 = v13;
    v14 = sub_1933BC0(a1, v24, a7, a8);
    if ( v14 == 1 || (v15 = sub_1E53EF0(*a1, v14 & 0xFFFFFFFFFFFFFFFELL), v15 == 1) )
    {
      *(_DWORD *)(v12 + 12632) = v22;
      return 1;
    }
    if ( a6 )
      *a6 = 1;
    v16 = *(unsigned int *)(a5 + 8);
    v17 = v15 & 0xFFFFFFFFFFFFFFFELL;
    if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
    {
      v25 = v17;
      sub_2237220(a5, v28, v16 + 1, 8);
      v16 = *(unsigned int *)(a5 + 8);
      v17 = v25;
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * v16) = v17;
    ++*(_DWORD *)(a5 + 8);
    *(_DWORD *)(v12 + 12632) = v22;
LABEL_12:
    if ( (unsigned __int64 *)v27 == ++v10 )
      return 0;
  }
  if ( !a6 )
    return 0;
  *a6 = 1;
  return 0;
}

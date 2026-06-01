__int64 __fastcall sub_15B8AF0(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  int v10; // eax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  void *v16; // [rsp+8h] [rbp-90h] BYREF
  void *v17; // [rsp+10h] [rbp-88h] BYREF
  void *v18; // [rsp+18h] [rbp-80h]
  __int64 v19; // [rsp+20h] [rbp-78h]
  __int64 v20; // [rsp+30h] [rbp-68h] BYREF
  void *ptr; // [rsp+38h] [rbp-60h]
  __int64 v22; // [rsp+40h] [rbp-58h]
  int v23; // [rsp+48h] [rbp-50h]
  char v24; // [rsp+4Ch] [rbp-4Ch]
  __int64 v25; // [rsp+50h] [rbp-48h] BYREF

  v8 = *a2;
  v9 = a3[4];
  v23 = 0;
  v20 = v8;
  ptr = &v25;
  v22 = 4;
  v24 = 1;
  if ( !v9 )
  {
    v12 = a3[2];
    if ( v12 && !(unsigned __int8)sub_BFE300(v12) )
      v9 = a3[2];
    v13 = sub_15B84F0(&v20, a3[3], v9, (*a3 >> 19) & 1LL, a5, a6);
    sub_15B7680(a1, (__int64)&v20, v13, a3[6]);
    if ( v24 )
      return a1;
    goto LABEL_11;
  }
  v10 = sub_E90000(v9);
  if ( v10 )
  {
    if ( v10 != 3 || ((*(__int64 *)(v9 + 8) >> 1) & 3) != 2 )
      goto LABEL_4;
    v14 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF0LL;
    v15 = v14;
  }
  else
  {
    v14 = sub_15B7950(&v20, v9);
    v15 = v14 & 0xFFFFFFFFFFFFFFF0LL;
  }
  if ( !v15 )
  {
LABEL_4:
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)a1 = 0;
    goto LABEL_5;
  }
  sub_15B7680((__int64)&v17, (__int64)&v20, v14, a3[6]);
  if ( v18 == v17 )
  {
    if ( v18 )
      operator delete(v18);
    goto LABEL_4;
  }
  v16 = v18;
  *(_QWORD *)(a1 + 16) = v19;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v16);
LABEL_5:
  if ( v24 )
    return a1;
LABEL_11:
  free(ptr);
  return a1;
}

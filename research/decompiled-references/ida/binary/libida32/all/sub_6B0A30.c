__int64 __fastcall sub_6B0A30(
        __int64 *a1,
        int *a2,
        char *a3,
        char a4,
        double a5,
        __m128i a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        __m128 a12)
{
  __int64 v13; // rax
  __int64 *v15; // r14
  int v16; // r15d
  int v17; // esi
  double v18; // xmm4_8
  double v19; // xmm5_8
  char *v20; // rdx
  char *v21; // rax
  int v22; // eax
  unsigned __int8 v24; // [rsp+8h] [rbp-C8h]
  _QWORD *v25; // [rsp+8h] [rbp-C8h]
  _QWORD *v26; // [rsp+8h] [rbp-C8h]
  int v27; // [rsp+10h] [rbp-C0h] BYREF
  int v28; // [rsp+14h] [rbp-BCh] BYREF
  __int64 v29; // [rsp+18h] [rbp-B8h] BYREF
  void *v30; // [rsp+20h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+28h] [rbp-A8h]
  void *v32; // [rsp+40h] [rbp-90h] BYREF
  __int128 v33; // [rsp+48h] [rbp-88h]
  void *v34; // [rsp+60h] [rbp-70h] BYREF
  __int128 v35; // [rsp+68h] [rbp-68h]
  void *ptr; // [rsp+80h] [rbp-50h] BYREF
  __int128 v37; // [rsp+88h] [rbp-48h]
  unsigned __int64 v38; // [rsp+98h] [rbp-38h]

  v13 = *a1;
  v38 = __readfsqword(0x28u);
  v29 = 0;
  v15 = *(__int64 **)(v13 + 1480);
  v24 = sub_6AEB40(a1, (__int64)a2, (__int64)&v29, a4, -1, a5, a6, a7, a8, a9, a10, a11, a12);
  if ( !v24 )
    goto LABEL_18;
  v16 = a2[6];
  if ( v16 <= 0 )
  {
    v16 = sub_632AC0((__int64)v15, v15[1], a3);
    if ( v16 <= 0 )
      v16 = alloc_type_ordinals(v15[1], 1);
  }
  v35 = 0;
  v30 = nullptr;
  v32 = nullptr;
  v34 = nullptr;
  v31 = 0;
  v33 = 0;
  serialize_tinfo(&v30, &v32, &v34, &v29, 272);
  ptr = nullptr;
  v17 = *a2;
  v37 = 0;
  v25 = *(_QWORD **)(*v15 + 1680);
  v27 = sub_3B90A0(*(_QWORD **)(*v25 + 1480LL), v17);
  if ( sub_79B6F0(&v27, *v25, &ptr, 0, 83) <= 0 )
  {
    v26 = *(_QWORD **)(*v15 + 1680);
    v28 = sub_3B90A0(*(_QWORD **)(*v26 + 1480LL), *a2);
    sub_79B6F0(&v28, *v26, &ptr, 1, 83);
    v20 = nullptr;
    if ( (unsigned __int64)v35 <= 1 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v20 = nullptr;
  if ( (unsigned __int64)v35 > 1 )
LABEL_5:
    v20 = (char *)v34;
LABEL_6:
  v21 = nullptr;
  if ( (unsigned __int64)v37 > 1 )
    v21 = (char *)ptr;
  v22 = sub_63F060(
          v15[1],
          v16,
          5,
          a3,
          (char *)v30,
          (char *)v32,
          0.0,
          *(double *)a6.m128i_i64,
          a7,
          a8,
          v18,
          v19,
          a11,
          a12,
          v21,
          v20,
          nullptr);
  v24 = v22 == 0;
  if ( !v22 )
    a2[6] = v16;
  if ( ptr )
  {
    *(_QWORD *)&v37 = 0;
    qfree(ptr);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
LABEL_18:
  clear_tinfo_t(&v29);
  return v24;
}


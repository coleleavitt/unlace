__int64 __fastcall sub_2C4650(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  _QWORD *v12; // rdi
  __int64 v14; // rbx
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rbp
  unsigned int v20; // r15d
  double v21; // xmm4_8
  double v22; // xmm5_8
  unsigned __int64 v23; // r9
  size_t v24; // r10
  const char *v25; // rsi
  __int64 v26; // rdx
  char *v27; // rcx
  const char *v28; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  const void *v33; // rbp
  void *v34; // rax
  __int64 v35; // [rsp+0h] [rbp-98h]
  unsigned __int64 v36; // [rsp+8h] [rbp-90h]
  unsigned __int64 v37; // [rsp+8h] [rbp-90h]
  size_t v39; // [rsp+18h] [rbp-80h]
  _QWORD v40[2]; // [rsp+20h] [rbp-78h] BYREF
  int v41; // [rsp+30h] [rbp-68h]
  __int64 v42; // [rsp+38h] [rbp-60h]
  void *dest; // [rsp+40h] [rbp-58h] BYREF
  __int128 v44; // [rsp+48h] [rbp-50h]
  unsigned __int64 v45; // [rsp+58h] [rbp-40h]

  v12 = *(_QWORD **)(a1 + 440);
  v45 = __readfsqword(0x28u);
  if ( v12 )
    v12 = (_QWORD *)v12[1];
  v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 168LL))(v12);
  v17 = a3[1];
  if ( (int)v17 <= 0 )
  {
LABEL_18:
    sub_2C43C0(a1, v14, (__int64)a2, a4, a5, a6, a7, v15, v16, a10, a11);
    return 1;
  }
  else
  {
    v18 = 0;
    v35 = 16 * (3LL * (unsigned int)(v17 - 1) + 3);
    while ( 1 )
    {
      v19 = v18 + *a3;
      v20 = sub_29B240((int *)v14, (__int64 (__fastcall *)(__int64))v19);
      if ( v20 == -1 )
        break;
      sub_29BBD0(v14, v19, a4, a5, a6, a7, v21, v22, a10, a11);
      a4 = 0;
      v44 = 0;
      v40[0] = 56;
      v40[1] = -1;
      v41 = 0;
      v42 = -1;
      dest = nullptr;
      v42 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 256LL))(v14, v19);
      if ( &dest != (void **)(v19 + 24) )
      {
        v23 = *(_QWORD *)(v19 + 32);
        if ( v23 && (v24 = v23 - 1, v23 != 1) )
        {
          v33 = *(const void **)(v19 + 24);
          v34 = dest;
          if ( *((_QWORD *)&v44 + 1) < v23 )
          {
            v39 = v23 - 1;
            v37 = v23;
            v34 = (void *)qvector_reserve(&dest, dest, v23, 1);
            v24 = v39;
            v23 = v37;
            dest = v34;
          }
          *(_QWORD *)&v44 = v23;
          v36 = v23;
          memmove(v34, v33, v24);
          *((char *)dest + v36 - 1) = 0;
        }
        else
        {
          *(_QWORD *)&v44 = 0;
        }
      }
      set_node_info(*(_QWORD *)(v14 + 72), v20, v40, 12);
      v25 = (const char *)*a2;
      v26 = a2[1];
      v27 = (char *)(*a2 + 4 * v26);
      if ( (char *)*a2 == v27 )
        goto LABEL_19;
      v28 = (const char *)*a2;
      while ( v20 != *(_DWORD *)v28 )
      {
        v28 += 4;
        if ( v27 == v28 )
          goto LABEL_19;
      }
      if ( v27 == v28 )
      {
LABEL_19:
        v30 = v26 + 1;
        if ( a2[2] < v30 )
        {
          v31 = qvector_reserve(a2, v25, v30, 4);
          v32 = a2[1];
          *a2 = v31;
          v27 = (char *)(v31 + 4 * v32);
        }
        *(_DWORD *)v27 = v20;
        ++a2[1];
      }
      if ( dest )
      {
        *(_QWORD *)&v44 = 0;
        *(double *)a4.m128_u64 = qfree(dest, v25);
      }
      v18 += 48;
      if ( v35 == v18 )
        goto LABEL_18;
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    return 0;
  }
}

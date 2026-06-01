__int64 __fastcall sub_5D4820(
        __m128i *a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        void *a13,
        __int64 a14,
        int a15,
        int a16,
        int a17,
        __int64 a18)
{
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // r13d
  __int64 v23; // r14
  __int64 v24; // r15
  char *v25; // r12
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  void *v28; // rdi
  unsigned int v29; // r12d
  char *v30; // rax
  unsigned int v31; // edx
  __int64 v32; // r13
  __int64 v33; // rbx
  __int64 v34; // r13
  unsigned __int64 *v35; // rax
  unsigned __int64 *v36; // r15
  unsigned __int64 *v37; // rax
  __int64 v38; // [rsp+8h] [rbp-60h]
  unsigned __int64 v39; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v41; // [rsp+18h] [rbp-50h]
  unsigned __int64 v42; // [rsp+28h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( a2 && *(char *)(a2 + 17) >= 0 )
    return sub_5D4180((int)a1, a10, a11, a12, a13, a14, a15, a16, a17, a18);
  v20 = *(unsigned int *)(a2 + 32);
  if ( (int)v20 <= 0 )
  {
    sub_5CE170(a1, nullptr, (_QWORD *)a2, 1, a3, a4, a5);
    return 1;
  }
  else
  {
    sub_5C7D50(a1->m128i_i64, a2, v20);
    v21 = *(int *)(a2 + 32);
    ptr = nullptr;
    v41 = 0;
    v22 = v21;
    v23 = 8 * v21;
    v24 = v21;
    if ( v21 )
    {
      v38 = *(_QWORD *)(a2 + 40);
      v25 = (char *)qvector_reserve(&ptr, 0, v21, 8);
      ptr = v25;
      memmove(&v25[v23], v25, 8 * v41);
      v26 = 0;
      if ( v23 )
      {
        do
        {
          *(_QWORD *)&v25[v26] = *(_QWORD *)(v38 + v26);
          v26 += 8;
        }
        while ( v23 != v26 );
      }
      v27 = *(_QWORD *)a2;
      v28 = ptr;
      v29 = 1;
      *(_QWORD *)&v41 = v24 + v41;
      v39 = v27;
      v30 = (char *)ptr;
      if ( v22 > 0 )
      {
        v31 = v22 - 1;
        v29 = 1;
        v32 = v22 - 1;
        v33 = 8 * v32;
        v34 = 8 * (v32 - v31);
        while ( 1 )
        {
          v35 = sub_505D70((__int64)&a1[106].m128i_i64[1], *(_QWORD *)&v30[v33]);
          v36 = v35;
          if ( v35 && *((char *)v35 + 17) < 0 )
            v36 = sub_505D70((__int64)&a1[106].m128i_i64[1], v35[3]);
          v37 = sub_5C93A0(a1, (__int64)v36, v39);
          v29 &= sub_5CE320(a1, (__int64)v36, v37, 1, 0.0, a4, a5);
          v30 = (char *)ptr;
          v28 = ptr;
          if ( v34 == v33 )
            break;
          v33 -= 8;
        }
      }
      if ( v28 )
      {
        *(_QWORD *)&v41 = 0;
        qfree(v28);
      }
    }
    else
    {
      return 1;
    }
  }
  return v29;
}

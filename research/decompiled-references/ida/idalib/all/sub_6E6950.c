__int64 *__fastcall sub_6E6950(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128i a6,
        double a7,
        __m128 a8,
        double a9,
        double a10,
        double a11,
        __m128 a12)
{
  __int64 v15; // rdx
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  unsigned int v21; // edx
  char v22; // al
  __int64 v23; // rdx
  char *v24; // rsi
  char *v25; // r13
  _BYTE *v26; // rax
  char *v27; // rdi
  __int64 v28; // r12
  __int64 v29; // r13
  char *v30; // rbp
  void *v31; // rdi
  void *v32; // rdi
  char *v33; // rax
  const char *v34; // [rsp+8h] [rbp-A0h]
  __int64 v35; // [rsp+18h] [rbp-90h] BYREF
  _QWORD v36[2]; // [rsp+20h] [rbp-88h] BYREF
  void *ptr; // [rsp+30h] [rbp-78h] BYREF
  __int128 v38; // [rsp+38h] [rbp-70h]
  __int128 v39; // [rsp+48h] [rbp-60h]
  __int64 v40; // [rsp+58h] [rbp-50h]
  int v41; // [rsp+60h] [rbp-48h]
  unsigned __int64 v42; // [rsp+68h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  *a1 = 0;
  v15 = *(_QWORD *)(a4 + 32);
  v36[1] = 0x200000000LL;
  v36[0] = 0;
  sub_6E4130((__int64 *)&ptr, a2, v15, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  copy_tinfo_t(v36);
  clear_tinfo_t(&ptr);
  if ( LOBYTE(v36[0]) && (get_tinfo_property(v36[0], 2) & 0xF) == 9 )
  {
    v17 = get_tinfo_property(v36[0], 2) & 0x3F;
    switch ( v17 )
    {
      case 25:
        v34 = "__complex_double";
        break;
      case 41:
        v34 = "__complex_long_double";
        break;
      case 9:
        v34 = "__complex_float";
        break;
      default:
        goto LABEL_2;
    }
    v35 = 0;
    if ( (unsigned __int8)sub_6DC6D0(a2, &v35, v34) )
    {
      v18 = v35;
      v35 = *a1;
      *a1 = v18;
    }
    else
    {
      v19 = *(_QWORD *)(a2 + 48);
      ptr = nullptr;
      v20 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v41 = 16777217;
      sub_A97D20(v19, v20);
      v22 = log2floor(v21 >> 3);
      v23 = v38;
      v24 = (char *)ptr;
      BYTE1(v41) = v22 + 1;
      if ( *((_QWORD *)&v38 + 1) < (unsigned __int64)(v38 + 1) )
      {
        v33 = (char *)qvector_reserve(&ptr, ptr, v38 + 1, 144);
        v23 = v38;
        ptr = v33;
        v24 = v33;
      }
      v25 = &v24[144 * v23];
      *((_QWORD *)v25 + 2) = 0;
      *((_QWORD *)v25 + 5) = 0;
      *((_QWORD *)v25 + 14) = 1;
      *((_DWORD *)v25 + 30) = -1;
      *((_QWORD *)v25 + 16) = 0;
      v25[136] = 0;
      *(_OWORD *)v25 = 0;
      *(_OWORD *)(v25 + 24) = 0;
      *((_OWORD *)v25 + 3) = 0;
      *((_OWORD *)v25 + 4) = 0;
      *(_QWORD *)&v38 = v38 + 1;
      v26 = (_BYTE *)qvector_reserve(v25 + 16, 0, 2, 1);
      *((_QWORD *)v25 + 3) = 2;
      *((_QWORD *)v25 + 2) = v26;
      *v26 = 99;
      *(_BYTE *)(*((_QWORD *)v25 + 2) + 1LL) = 0;
      create_tinfo(v25 + 64, 11, 11, v36);
      if ( (unsigned __int8)create_tinfo(a1, 29, 13, &ptr) )
        sub_6DF2F0(a2, a1, 1, v34, nullptr, 0, 0);
      v27 = (char *)ptr;
      if ( ptr )
      {
        v28 = v38;
        if ( (_QWORD)v38 )
        {
          v29 = 0;
          do
          {
            v30 = &v27[144 * v29];
            clear_tinfo_t(v30 + 64);
            v31 = *((void **)v30 + 5);
            if ( v31 )
            {
              *((_QWORD *)v30 + 6) = 0;
              qfree(v31);
            }
            v32 = *((void **)v30 + 2);
            if ( v32 )
            {
              *((_QWORD *)v30 + 3) = 0;
              qfree(v32);
            }
            ++v29;
            v27 = (char *)ptr;
          }
          while ( v28 != v29 );
        }
        *(_QWORD *)&v38 = 0;
        qfree(v27);
      }
    }
    clear_tinfo_t(&v35);
  }
LABEL_2:
  clear_tinfo_t(v36);
  return a1;
}

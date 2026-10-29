__int64 __fastcall sub_7166A0(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        __int64 *a6,
        __int128 a7,
        char a8)
{
  unsigned __int8 v10; // r8
  int v11; // edx
  void **p_ptr; // rsi
  __int64 v13; // rcx
  int v14; // r12d
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  unsigned __int64 v18; // r12
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r12
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned int v27; // esi
  __int64 v28; // rbx
  int v29; // eax
  __int64 v30; // rax
  __int64 (*v31)(); // rax
  __int64 v32; // r12
  __int128 v33; // [rsp-20h] [rbp-2D8h]
  __int64 v34; // [rsp-10h] [rbp-2C8h]
  __int64 v35; // [rsp-8h] [rbp-2C0h]
  __m128i v36; // [rsp+0h] [rbp-2B8h]
  __int64 v38; // [rsp+28h] [rbp-290h]
  unsigned __int64 v39; // [rsp+28h] [rbp-290h]
  unsigned int v41; // [rsp+34h] [rbp-284h]
  char v43; // [rsp+3Ch] [rbp-27Ch]
  unsigned __int64 v44; // [rsp+40h] [rbp-278h]
  int v45; // [rsp+48h] [rbp-270h]
  int v46; // [rsp+4Ch] [rbp-26Ch]
  __int64 v47; // [rsp+50h] [rbp-268h] BYREF
  __int64 v48; // [rsp+58h] [rbp-260h] BYREF
  void *v49; // [rsp+60h] [rbp-258h] BYREF
  __int64 v50; // [rsp+68h] [rbp-250h]
  _BYTE v51[128]; // [rsp+70h] [rbp-248h] BYREF
  void *ptr; // [rsp+F0h] [rbp-1C8h] BYREF
  _DWORD v53[112]; // [rsp+F8h] [rbp-1C0h] BYREF

  v43 = a8;
  v44 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v36 = _mm_loadu_si128((const __m128i *)&a7);
  if ( (a2 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
  {
    v49 = v51;
    v50 = 0x2000000000LL;
    v10 = a4 | ((*(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0);
  }
  else
  {
    if ( !a3 && !a6 && !a4 )
      return sub_6CAA10((_QWORD *)a1);
    v10 = a4;
    v49 = v51;
    v50 = 0x2000000000LL;
  }
  v11 = a2;
  p_ptr = (void **)a1;
  sub_B17D40((unsigned int)&v49, a1, v11, a3, v10, (_DWORD)a6, v36.m128i_i64[0], v36.m128i_i64[1]);
  v14 = *(_DWORD *)(a1 + 744);
  v38 = *(_QWORD *)(a1 + 728);
  v15 = v34;
  v16 = v35;
  if ( v14 )
  {
    memset(v53, 0, 0x88u);
    ptr = &v53[2];
    v53[1] = 32;
    v45 = 1;
    v46 = v14 - 1;
    v41 = (v14 - 1) & sub_6999F0(v49, (__int64)v49 + 4 * (unsigned int)v50);
    while ( 1 )
    {
      v17 = v38 + 152LL * v41;
      p_ptr = (void **)v17;
      if ( (unsigned __int8)sub_25ABE00(&v49, v17) )
        break;
      p_ptr = &ptr;
      if ( (unsigned __int8)sub_25ABE00(v17, &ptr) )
      {
        if ( ptr != &v53[2] )
          free(ptr);
        goto LABEL_21;
      }
      v41 = (v45 + v41) & v46;
      ++v45;
    }
    if ( ptr != &v53[2] )
      free(ptr);
    v13 = 19LL * *(unsigned int *)(a1 + 744);
    if ( v17 && v17 != *(_QWORD *)(a1 + 728) + 152LL * *(unsigned int *)(a1 + 744) )
    {
      v18 = *(_QWORD *)(v17 + 144) & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_14;
    }
  }
LABEL_21:
  LODWORD(v20) = 0;
  if ( !v43 )
  {
    if ( v44 <= 0xF )
    {
      if ( a6 )
      {
        v30 = *a6;
        LOBYTE(v48) = 0;
        v31 = *(__int64 (**)())(v30 + 32);
        if ( v31 == sub_67A5D0 )
          v32 = sub_77A0C0(a6);
        else
          v32 = ((__int64 (__fastcall *)(__int64 *, void **, __int64 (*)(), __int64, __int64, __int64))v31)(
                  a6,
                  p_ptr,
                  sub_67A5D0,
                  v13,
                  v15,
                  v16);
        sub_718270(&ptr, a1, v36.m128i_i64[0], v36.m128i_i64[1], &v48);
        if ( a6 != (__int64 *)v32 || (_BYTE)v48 )
        {
          *((_QWORD *)&v33 + 1) = v53[0];
          *(_QWORD *)&v33 = ptr;
          LODWORD(v20) = sub_7166A0(a1, 0, a3, a4, a5, v32, v33, 1);
        }
        if ( ptr != &v53[2] )
          free(ptr);
      }
    }
    else
    {
      v20 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7;
    }
  }
  v21 = *(_QWORD *)(a1 + 2192);
  v22 = 24 * v36.m128i_i64[1] + 48;
  *(_QWORD *)(a1 + 2272) += v22;
  v23 = (v21 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(a1 + 2200) >= v22 + v23 && v21 )
  {
    *(_QWORD *)(a1 + 2192) = v22 + v23;
    v24 = (v21 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v23 = sub_6A76A0(a1 + 2192, v22, 4);
    v24 = v23;
  }
  v39 = v23;
  sub_B17C00(v24, a2, a3, a5 | (a4 != 0 ? 6 : 0), v20, (_DWORD)a6, v36.m128i_i64[0], v36.m128i_i64[1]);
  v25 = *(unsigned int *)(a1 + 16);
  v26 = v39;
  if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v25 + 1) )
  {
    sub_25D6060(a1 + 8, a1 + 24, v25 + 1, 8);
    v25 = *(unsigned int *)(a1 + 16);
    v26 = v39;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v25) = v26;
  ++*(_DWORD *)(a1 + 16);
  if ( !(unsigned __int8)sub_6F2180((__int64 *)(a1 + 728), (__int64)&v49, &v47) )
  {
    v27 = *(_DWORD *)(a1 + 744);
    v28 = v47;
    v29 = *(_DWORD *)(a1 + 736) + 1;
    v48 = v47;
    if ( 4 * v29 >= 3 * v27 )
    {
      v27 *= 2;
    }
    else if ( v27 >> 3 < v27 - *(_DWORD *)(a1 + 740) - v29 )
    {
LABEL_33:
      *(_DWORD *)(a1 + 736) = v29;
      memset(v53, 0, 0x88u);
      ptr = &v53[2];
      v53[1] = 32;
      if ( !(unsigned __int8)sub_25ABE00(v28, &ptr) )
        --*(_DWORD *)(a1 + 740);
      if ( ptr != &v53[2] )
        free(ptr);
      sub_6A7880(v28, (unsigned int **)&v49);
      *(_QWORD *)(v28 + 144) = v24;
      goto LABEL_28;
    }
    sub_716520(a1 + 728, v27);
    sub_6F2180((__int64 *)(a1 + 728), (__int64)&v49, &v48);
    v28 = v48;
    v29 = *(_DWORD *)(a1 + 736) + 1;
    goto LABEL_33;
  }
LABEL_28:
  v18 = v24 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_14:
  if ( v49 != v51 )
    free(v49);
  return v18;
}


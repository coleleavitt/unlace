unsigned __int64 __fastcall sub_1B1AE80(
        __int64 *a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8,
        int a9)
{
  __int64 v12; // rdx
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // r12d
  _QWORD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  size_t v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r13
  __int64 v40; // [rsp+8h] [rbp-120h]
  _QWORD *v41; // [rsp+18h] [rbp-110h]
  void *v42[2]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v43; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v44; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD v46[2]; // [rsp+60h] [rbp-C8h] BYREF
  unsigned int v47; // [rsp+70h] [rbp-B8h]
  void *ptr; // [rsp+78h] [rbp-B0h]
  __int64 v49; // [rsp+80h] [rbp-A8h]
  _BYTE v50[160]; // [rsp+88h] [rbp-A0h] BYREF

  if ( a2 == 1 && a6 )
  {
    sub_1AEE640(v42, 72, 0, 1u, nullptr, 0);
    sub_168B9F0((__int64)v46, a1, a6, 0x1217u, 0);
    v39 = sub_1682A40((__int64)v46, (__int64)v42);
    sub_1AF81E0(&v44, 0x48u);
    sub_1682AF0(v39, (__int64)&v44);
    if ( (__int64 *)v44.m128i_i64[0] != &v45 )
      operator delete((void *)v44.m128i_i64[0]);
    sub_15F7200(v46);
    if ( v42[0] != &v43 )
      operator delete(v42[0]);
    return 0;
  }
  v44.m128i_i64[0] = a3;
  if ( !(unsigned __int8)sub_1B12200((unsigned __int64 *)&v44, *a1, 72, 0, 103, nullptr, a7, a8, nullptr) )
    return 0;
  v12 = a1[1];
  v13 = 103;
  v14 = *(unsigned int *)(v12 + 344);
  if ( (_DWORD)v14 )
  {
    v24 = *(_QWORD *)(v12 + 336) + 6776 * v14 - 6776;
    if ( *(_QWORD *)(v24 + 6768) == *(_QWORD *)(v12 + 328) )
    {
      v25 = *(unsigned int *)(v24 + 8);
      v26 = *(unsigned int *)(v12 + 27504);
      if ( (unsigned int)v25 > (unsigned int)v26 )
      {
        v27 = v25 - v26;
        if ( v27 )
        {
          v28 = *(_QWORD *)v24 + 1688 * (v27 - 1);
          if ( v28 )
            v13 = *(_DWORD *)(v28 + 976);
        }
      }
    }
  }
  v15 = sub_168B6E0((__int64)a1);
  v16 = sub_1AE8290(v13, 72, *(unsigned int *)(v15 + 64), 0x67u);
  if ( v16 == 103 || (unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
  {
    v40 = 0;
  }
  else
  {
    v32 = sub_1AF29B0(*a1, v44.m128i_u64[0], a7, a8, v29, v30, v31);
    v46[0] = 0;
    v44.m128i_i64[0] = v32;
    v41 = (_QWORD *)v32;
    ptr = v50;
    v46[1] = 0;
    v47 = 0;
    v49 = 0;
    v33 = j__strlen(".capture_expr.");
    v44.m128i_i64[0] = sub_1B00390((_QWORD *)*a1, v41, (__int64)v46, ".capture_expr.", v33, a7, a8)
                     & 0xFFFFFFFFFFFFFFFELL;
    v34 = (_QWORD *)sub_168B6C0((__int64)a1);
    v40 = sub_1AEDEF0(v34, (__int64)v46, v35, v36, v37, v38);
    if ( ptr != v50 )
      free(ptr);
    operator delete(v46[0], 16LL * v47, 8);
  }
  v17 = (_QWORD *)sub_168B6C0((__int64)a1);
  v20 = v17[294];
  v17[304] += 48LL;
  v21 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v17[295] >= v21 + 48 && v20 )
  {
    v17[294] = v21 + 48;
    result = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    result = sub_986170((__int64)(v17 + 294), 48, 48, 3, v18, v19);
  }
  v23 = v44.m128i_i64[0];
  *(_DWORD *)result = a4;
  *(_DWORD *)(result + 8) = 72;
  *(_DWORD *)(result + 4) = a9;
  *(_DWORD *)(result + 12) = a5;
  *(_QWORD *)(result + 16) = v23;
  *(_DWORD *)(result + 36) = a2;
  *(_DWORD *)(result + 40) = a6;
  *(_QWORD *)(result + 24) = v40;
  *(_DWORD *)(result + 32) = v16;
  return result;
}

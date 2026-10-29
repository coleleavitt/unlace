unsigned __int64 __fastcall sub_1B46880(
        __int64 *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8,
        int a9)
{
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned int v16; // r13d
  __int64 v17; // rax
  int v18; // r13d
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 result; // rax
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int64 v30; // rax
  size_t v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r12
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // [rsp+8h] [rbp-120h]
  __int64 v45; // [rsp+8h] [rbp-120h]
  _QWORD *v46; // [rsp+18h] [rbp-110h]
  void *v47; // [rsp+20h] [rbp-108h] BYREF
  signed __int64 v48; // [rsp+28h] [rbp-100h]
  __int64 v49; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v50; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD v52[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+70h] [rbp-B8h]
  void *ptr; // [rsp+78h] [rbp-B0h]
  unsigned __int8 *v55; // [rsp+80h] [rbp-A8h] BYREF
  _BYTE v56[88]; // [rsp+88h] [rbp-A0h] BYREF
  unsigned int v57; // [rsp+E0h] [rbp-48h]
  char v58; // [rsp+E4h] [rbp-44h]

  if ( a6 && a2 == 2 )
  {
    sub_1AEE640(&v47, 26, 0, 2u, nullptr, 0);
    sub_168B9F0((__int64)v52, a1, a6, 0x1217u, 0);
    if ( v56[80] )
    {
      sub_AEC220(&v55, v47, v48);
    }
    else if ( v58 )
    {
      v41 = sub_168B9E0(v52);
      v42 = v53;
      if ( v53 )
        v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 32LL))(v53);
      v50.m128i_i64[0] = v42;
      v43 = sub_1587BC0(v41, v50.m128i_i64, v37, v38, v39, v40);
      sub_AEC220((unsigned __int8 **)(*v43 + 32LL * v57 + 8), v47, v48);
    }
    sub_1AF81E0(&v50, 0x1Au);
    sub_1682AF0((__int64)v52, (__int64)&v50);
    if ( (__int64 *)v50.m128i_i64[0] != &v51 )
      operator delete((void *)v50.m128i_i64[0]);
    sub_15F7200(v52);
    if ( v47 != &v49 )
      operator delete(v47);
    v50.m128i_i64[0] = a3;
    sub_1B108C0((unsigned __int64 *)&v50, *a1, 26, 0, 0, 0x67u, a7, a8, nullptr, nullptr);
    return 0;
  }
  else
  {
    v50.m128i_i64[0] = a3;
    if ( (unsigned __int8)sub_1B108C0((unsigned __int64 *)&v50, *a1, 26, 0, 0, 0x67u, a7, a8, nullptr, nullptr) )
    {
      v14 = a1[1];
      if ( !a2 )
      {
        v26 = *(_QWORD *)(v14 + 27512);
        v45 = v26 + 8LL * *(unsigned int *)(v14 + 27520);
        if ( v45 == sub_1AECFE0(v26, v45) )
        {
          sub_1606D30((__int64)v52, (_QWORD *)*a1, a4, 4476, 0);
          sub_15F7200(v52);
          v14 = a1[1];
        }
      }
      v15 = sub_1AE5FF0(v14);
      if ( v15 )
        v16 = *(_DWORD *)(v15 + 976);
      else
        v16 = 103;
      v17 = sub_168B6E0((__int64)a1);
      v18 = sub_1AE8290(v16, 26, *(unsigned int *)(v17 + 64), 0x67u);
      if ( v18 == 103 || (unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
      {
        v44 = 0;
      }
      else
      {
        v30 = sub_1AF29B0(*a1, v50.m128i_u64[0], a7, a8, v27, v28, v29);
        v52[0] = 0;
        v50.m128i_i64[0] = v30;
        v46 = (_QWORD *)v30;
        ptr = v56;
        v52[1] = 0;
        LODWORD(v53) = 0;
        v55 = nullptr;
        v31 = j__strlen(".capture_expr.");
        v50.m128i_i64[0] = sub_1B00390((_QWORD *)*a1, v46, (__int64)v52, ".capture_expr.", v31, a7, a8)
                         & 0xFFFFFFFFFFFFFFFELL;
        v32 = (_QWORD *)sub_168B6C0((__int64)a1);
        v44 = sub_1AEDEF0(v32, (__int64)v52, v33, v34, v35, v36);
        if ( ptr != v56 )
          free(ptr);
        operator delete(v52[0], 16LL * (unsigned int)v53, 8);
      }
      v19 = (_QWORD *)sub_168B6C0((__int64)a1);
      v22 = v19[294];
      v19[304] += 48LL;
      v23 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v19[295] >= v23 + 48 && v22 )
      {
        v19[294] = v23 + 48;
        result = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        result = sub_986170((__int64)(v19 + 294), 48, 48, 3, v20, v21);
      }
      v25 = v50.m128i_i64[0];
      *(_DWORD *)result = a4;
      *(_DWORD *)(result + 8) = 26;
      *(_DWORD *)(result + 4) = a9;
      *(_DWORD *)(result + 28) = a5;
      *(_DWORD *)(result + 32) = a2;
      *(_DWORD *)(result + 36) = a6;
      *(_QWORD *)(result + 40) = v25;
      *(_QWORD *)(result + 16) = v44;
      *(_DWORD *)(result + 24) = v18;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

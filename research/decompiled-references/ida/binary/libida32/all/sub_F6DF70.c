__int64 __fastcall sub_F6DF70(
        __int64 a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        std::__detail::_List_node_base *a8)
{
  int v8; // r13d
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r15
  __int64 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  int v36; // r15d
  int v37; // eax
  __int64 v38; // rdx
  __m128i *v39; // rdi
  int v40; // eax
  int v41; // esi
  __int64 v42; // r9
  __int64 v43; // r8
  bool v44; // zf
  char *v45; // rsi
  __int64 v46; // rax
  char *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned int v54; // eax
  char *v55; // rsi
  char *v56; // r9
  signed __int64 v57; // rbp
  __int64 v58; // rax
  __m128i v59; // xmm0
  char *v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdi
  void *v64; // rax
  __int64 v65; // rdx
  const void *v66; // rsi
  __int64 v67; // [rsp-10h] [rbp-A8h]
  __int64 v68; // [rsp-8h] [rbp-A0h]
  __m128i v69; // [rsp+0h] [rbp-98h] BYREF
  __m128i *v70; // [rsp+10h] [rbp-88h]
  __int64 v71; // [rsp+18h] [rbp-80h]
  __int64 **v72; // [rsp+20h] [rbp-78h]
  __int64 v73; // [rsp+28h] [rbp-70h]
  _QWORD *v74; // [rsp+30h] [rbp-68h]
  __int64 **v75; // [rsp+38h] [rbp-60h]
  __m128i *v76; // [rsp+40h] [rbp-58h] BYREF
  __m128i *v77; // [rsp+48h] [rbp-50h] BYREF
  __m128i v78; // [rsp+50h] [rbp-48h] BYREF

  v8 = a5;
  v69.m128i_i64[0] = a1;
  v73 = a4;
  v69.m128i_i64[1] = a6;
  if ( a3 != (char *)a5 || v73 != a6 )
  {
    v11 = (__int64)a3;
    v74 = sub_EBA840(v69.m128i_i64[0], a3, (__int64)a3, a4, a5, a6);
    result = sub_A56850((__int64)a3, v11, v12, v13, v14, v15);
    v71 = v17;
    v20 = result;
    if ( result == v17 )
      return result;
    v72 = (__int64 **)&v76;
    v70 = &v78;
    v75 = (__int64 **)&v77;
    while ( 1 )
    {
      v21 = sub_F55F20(*(__int64 **)(v20 + 16), v11, v17, v18, v19);
      v26 = sub_F3F530(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL), v11, v22, v23, v24, v25);
      v31 = (__int64)v26;
      v32 = (*(_BYTE *)(v20 + 12) & 1) != 0
          ? sub_F5E070((__int64 *)(a2 + 72), (__int64)v26, v27, v28, v29, v30)
          : sub_F5D7C0(v74 + 9, (__int64)v26, (__int64)v27, v28, v29, v30) + v73;
      v78.m128i_i64[0] = v31;
      v78.m128i_i64[1] = v32;
      if ( !(unsigned __int8)sub_F5CBC0((__int64 *)a7, v70->m128i_i64, v72) )
        break;
LABEL_7:
      sub_F6DF70(v69.m128i_i32[0], a2, v31, v32, v8, v69.m128i_i32[2], a7, a8);
      v11 = *(unsigned int *)(a7 + 16);
      result = v67;
      v34 = *(_QWORD *)(a7 + 32);
      v17 = v68;
      if ( (_DWORD)v11 )
      {
        v19 = *(_QWORD *)(v34 - 16);
        v35 = *(_QWORD *)(v34 - 8);
        v11 = (unsigned int)(v11 - 1);
        v36 = 1;
        for ( result = (unsigned int)v11
                     & ((unsigned int)((0xBF58476D1CE4E5B9LL
                                      * ((unsigned int)(37 * v35)
                                       | ((unsigned __int64)(((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4)) << 32))) >> 31)
                      ^ (756364221 * (_DWORD)v35)); ; result = (unsigned int)v11 & v37 )
        {
          v17 = *(_QWORD *)a7 + 16LL * (unsigned int)result;
          if ( __PAIR128__(v35, v19) == *(_OWORD *)v17 )
            break;
          if ( *(_QWORD *)v17 == -4096 && *(_QWORD *)(v17 + 8) == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_14;
          v37 = v36 + result;
          ++v36;
        }
        result = 0x7FFFFFFFFFFFFFFELL;
        *(_QWORD *)v17 = -8192;
        *(_QWORD *)(v17 + 8) = 0x7FFFFFFFFFFFFFFELL;
        --*(_DWORD *)(a7 + 8);
        ++*(_DWORD *)(a7 + 12);
      }
LABEL_14:
      v18 = v34 - 16;
      v20 += 24;
      *(_QWORD *)(a7 + 32) = v18;
      if ( v20 == v71 )
        return result;
    }
    v38 = *(unsigned int *)(a7 + 16);
    v39 = v76;
    v40 = *(_DWORD *)(a7 + 8) + 1;
    v41 = 2 * v38;
    v42 = (unsigned int)(4 * v40);
    v43 = (unsigned int)(3 * v38);
    v77 = v76;
    if ( (unsigned int)v42 < (unsigned int)v43 )
    {
      v43 = (unsigned int)v38 >> 3;
      if ( (int)v38 - *(_DWORD *)(a7 + 12) - v40 > (unsigned int)v43 )
        goto LABEL_19;
      v41 = v38;
    }
    sub_F6DDA0(a7, v41, v38, v33, v43, v42);
    sub_F5CBC0((__int64 *)a7, v70->m128i_i64, v75);
    v39 = v77;
    v40 = *(_DWORD *)(a7 + 8) + 1;
LABEL_19:
    v44 = v39->m128i_i64[0] == -4096;
    *(_DWORD *)(a7 + 8) = v40;
    if ( !v44 || v39->m128i_i64[1] != 0x7FFFFFFFFFFFFFFFLL )
      --*(_DWORD *)(a7 + 12);
    v45 = *(char **)(a7 + 32);
    *v39 = _mm_load_si128(&v78);
    if ( v45 == *(char **)(a7 + 40) )
    {
      sub_F5C260(a7 + 24, v45, v70);
    }
    else
    {
      v46 = v78.m128i_i64[1];
      v47 = v45 + 16;
      *((_QWORD *)v47 - 2) = v78.m128i_i64[0];
      *((_QWORD *)v47 - 1) = v46;
      *(_QWORD *)(a7 + 32) = v47;
    }
    goto LABEL_7;
  }
  v48 = operator new(0x40u);
  *(_QWORD *)(v48 + 16) = 0;
  v49 = v48;
  *(_QWORD *)(v48 + 24) = 0;
  *(_DWORD *)(v48 + 32) = 0;
  operator delete();
  v54 = *(_DWORD *)(a7 + 16);
  *(_DWORD *)(v49 + 32) = v54;
  if ( v54 )
  {
    v64 = (void *)sub_220C370(16LL * v54, 8, v50, v51, v52, v53);
    v65 = *(_QWORD *)(a7 + 8);
    v66 = *(const void **)a7;
    *(_QWORD *)(v49 + 16) = v64;
    *(_QWORD *)(v49 + 24) = v65;
    memcpy(v64, v66, 16LL * *(unsigned int *)(v49 + 32));
  }
  else
  {
    *(_QWORD *)(v49 + 16) = 0;
    *(_QWORD *)(v49 + 24) = 0;
  }
  v55 = *(char **)(a7 + 32);
  v56 = *(char **)(a7 + 24);
  *(_QWORD *)(v49 + 56) = 0;
  *(_OWORD *)(v49 + 40) = 0;
  v57 = v55 - v56;
  if ( (v55 - v56) >> 4 )
  {
    if ( (unsigned __int64)((v55 - v56) >> 4) > 0xFFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v58 = operator new(v55 - v56);
    v55 = *(char **)(a7 + 32);
    v56 = *(char **)(a7 + 24);
  }
  else
  {
    v58 = 0;
  }
  v69.m128i_i64[0] = v58;
  v59 = _mm_loadl_epi64(&v69);
  *(_QWORD *)(v49 + 56) = v58 + v57;
  *(__m128i *)(v49 + 40) = _mm_unpacklo_epi64(v59, v59);
  if ( v56 != v55 )
  {
    v60 = v56;
    v61 = v58;
    do
    {
      v62 = *(_QWORD *)v60;
      v63 = *((_QWORD *)v60 + 1);
      v60 += 16;
      v61 += 16;
      *(_QWORD *)(v61 - 16) = v62;
      *(_QWORD *)(v61 - 8) = v63;
    }
    while ( v55 != v60 );
    v58 += ((v55 - 16 - v56) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  *(_QWORD *)(v49 + 48) = v58;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v49, a8);
  ++*((_QWORD *)a8 + 2);
  return (__int64)a8;
}


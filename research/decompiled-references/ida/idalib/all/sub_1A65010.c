void __fastcall sub_1A65010(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        __int64 a4,
        char a5,
        char a6,
        double a7,
        double a8,
        char a9)
{
  __m128i v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r9
  std::__detail::_List_node_base *v19; // r15
  __int64 v20; // rsi
  _QWORD *v21; // r14
  _QWORD *v22; // rbx
  __int64 v23; // rdi
  void **v24; // rdi
  void **v25; // r13
  void **v26; // rdi
  std::__detail::_List_node_base *v27; // rbx
  std::__detail::_List_node_base **v28; // r13
  _QWORD *v29; // r14
  __int64 v30; // rax
  __int64 v31; // rsi
  _QWORD *v32; // r12
  __int64 v33; // rdi
  void **v34; // rdi
  void **v35; // r15
  void **v36; // rdi
  std::__detail::_List_node_base *v37; // rdi
  __int64 v38; // rsi
  _QWORD *v39; // rax
  char *v40; // rcx
  __int64 v41; // rdi
  char *v42; // rsi
  char *v43; // rdx
  char *v44; // rax
  __int64 v45; // rax
  std::__detail::_List_node_base **v46; // [rsp+8h] [rbp-170h] BYREF
  std::__detail::_List_node_base *v47[2]; // [rsp+10h] [rbp-168h] BYREF
  __int64 v48; // [rsp+20h] [rbp-158h]
  void *ptr; // [rsp+28h] [rbp-150h] BYREF
  __int64 v50; // [rsp+30h] [rbp-148h]
  int v51; // [rsp+38h] [rbp-140h]
  char v52; // [rsp+3Ch] [rbp-13Ch]
  __int64 v53; // [rsp+40h] [rbp-138h] BYREF
  __int64 v54; // [rsp+80h] [rbp-F8h]
  char v55; // [rsp+88h] [rbp-F0h]
  char v56; // [rsp+89h] [rbp-EFh]
  _QWORD v57[3]; // [rsp+90h] [rbp-E8h] BYREF
  _OWORD v58[5]; // [rsp+A8h] [rbp-D0h] BYREF
  __int64 v59; // [rsp+F8h] [rbp-80h]
  __int64 v60; // [rsp+100h] [rbp-78h]
  __int64 v61; // [rsp+108h] [rbp-70h]
  int v62; // [rsp+110h] [rbp-68h]
  _QWORD v63[2]; // [rsp+118h] [rbp-60h] BYREF
  int v64; // [rsp+128h] [rbp-50h]
  int v65; // [rsp+12Ch] [rbp-4Ch]
  __int64 v66; // [rsp+130h] [rbp-48h]

  v60 = a1;
  v46 = v47;
  v12 = _mm_loadl_epi64((const __m128i *)&v46);
  ptr = &v53;
  v52 = 1;
  v56 = a9;
  *(__m128i *)v47 = _mm_unpacklo_epi64(v12, v12);
  v57[1] = v58;
  v54 = a4;
  v55 = a6;
  v58[4] = 0;
  v57[2] = 0x800000000LL;
  v48 = 0;
  v50 = 8;
  v51 = 0;
  v57[0] = 0;
  v59 = 0;
  v61 = 0;
  v62 = 0;
  sub_B85890(v63, 0);
  v64 = a3;
  v66 = 0x101010000LL;
  v63[1] = 0;
  v65 = 0;
  sub_1A395A0((__int64)v57);
  BYTE5(v66) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  if ( a5 )
    goto LABEL_2;
  v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2264LL) + 80LL);
  v39 = sub_704780((__int64 *)(v38 + 72), v38, v13, v14, v15, v16);
  if ( v39 )
    v39 += 5;
  if ( v52 )
  {
    v40 = (char *)ptr;
    v41 = 8LL * HIDWORD(v50);
    v42 = (char *)ptr + v41;
    if ( ptr != (char *)ptr + v41 )
    {
      v43 = (char *)ptr;
      if ( v39 == *(_QWORD **)ptr )
        goto LABEL_39;
      v43 = (char *)ptr + 8;
      if ( v42 != (char *)ptr + 8 )
      {
        while ( v39 != *(_QWORD **)v43 )
        {
          v43 += 8;
          if ( v42 == v43 )
            goto LABEL_37;
        }
        goto LABEL_39;
      }
    }
LABEL_37:
    if ( HIDWORD(v50) < (unsigned int)v50 )
    {
      ++HIDWORD(v50);
      *(_QWORD *)v42 = v39;
      v40 = (char *)ptr;
      v43 = (char *)ptr + v41;
      goto LABEL_39;
    }
  }
  v45 = sub_2236760(&ptr, v39);
  v40 = (char *)ptr;
  v43 = (char *)v45;
  if ( !v52 )
  {
    v44 = (char *)ptr + 8 * (unsigned int)v50;
    goto LABEL_40;
  }
LABEL_39:
  v44 = &v40[8 * HIDWORD(v50)];
LABEL_40:
  if ( v44 != v43 && (*(_QWORD *)v43 == -2 || *(_QWORD *)v43 == -1) )
  {
    do
      v43 += 8;
    while ( v44 != v43 && *(_QWORD *)v43 >= 0xFFFFFFFFFFFFFFFELL );
  }
LABEL_2:
  v17 = operator new(0x28u);
  *(_QWORD *)(v17 + 16) = 0;
  *(_QWORD *)(v17 + 24) = 0;
  *(_DWORD *)(v17 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v17, (std::__detail::_List_node_base *)v47);
  ++v48;
  sub_1A63BF0((__int64)v47, a2, (__int64)v57, 1, 0, v18, 0.0, a8);
  v19 = v47[1];
  --v48;
  std::__detail::_List_node_base::_M_unhook(v47[1]);
  v20 = *((unsigned int *)v19 + 8);
  if ( (_DWORD)v20 )
  {
    v21 = *((_QWORD **)v19 + 2);
    v22 = &v21[2 * v20];
    do
    {
      while ( 1 )
      {
        if ( *v21 != -2 && *v21 != -1 )
        {
          v23 = v21[1];
          if ( v23 )
          {
            if ( (v23 & 4) != 0 )
            {
              v24 = (void **)(v23 & 0xFFFFFFFFFFFFFFF8LL);
              v25 = v24;
              if ( v24 )
                break;
            }
          }
        }
        v21 += 2;
        if ( v22 == v21 )
          goto LABEL_12;
      }
      v26 = (void **)*v24;
      if ( v26 != v25 + 2 )
        free(v26);
      v21 += 2;
      operator delete(v25, 0x30u);
    }
    while ( v22 != v21 );
LABEL_12:
    v20 = *((unsigned int *)v19 + 8);
  }
  operator delete(*((_QWORD *)v19 + 2), 16 * v20, 8);
  operator delete(v19);
  sub_169D230((__int64)v57);
  if ( !v52 )
    free(ptr);
  v27 = v47[0];
  if ( (std::__detail::_List_node_base **)v47[0] != v47 )
  {
    do
    {
      v28 = *(std::__detail::_List_node_base ***)v27;
      v29 = *((_QWORD **)v27 + 2);
      v30 = *((unsigned int *)v27 + 8);
      v31 = 2 * v30;
      if ( (_DWORD)v30 )
      {
        v32 = &v29[v31];
        do
        {
          while ( 1 )
          {
            if ( *v29 != -2 && *v29 != -1 )
            {
              v33 = v29[1];
              if ( v33 )
              {
                if ( (v33 & 4) != 0 )
                {
                  v34 = (void **)(v33 & 0xFFFFFFFFFFFFFFF8LL);
                  v35 = v34;
                  if ( v34 )
                    break;
                }
              }
            }
            v29 += 2;
            if ( v32 == v29 )
              goto LABEL_26;
          }
          v36 = (void **)*v34;
          if ( v36 != v35 + 2 )
            free(v36);
          v29 += 2;
          operator delete(v35, 0x30u);
        }
        while ( v32 != v29 );
LABEL_26:
        v29 = *((_QWORD **)v27 + 2);
        v31 = 2LL * *((unsigned int *)v27 + 8);
      }
      operator delete(v29, v31 * 8, 8);
      v37 = v27;
      v27 = (std::__detail::_List_node_base *)v28;
      operator delete(v37);
    }
    while ( v28 != v47 );
  }
}

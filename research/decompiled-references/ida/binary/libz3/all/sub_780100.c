__int64 __fastcall sub_780100(__m128i **a1, const __m128i **a2, __int64 a3, double a4)
{
  const __m128i *v7; // r14
  unsigned int v8; // edx
  unsigned int v9; // r12d
  _QWORD *v10; // rbx
  __m128i *v12; // r15
  __m128i *v13; // rcx
  __int64 v14; // rsi
  __m128i *v15; // rdi
  bool v16; // zf
  __int64 v17; // rsi
  _QWORD *v18; // rdi
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rsi
  int v24; // eax
  const __m128i *v25; // rdi
  unsigned int *v26; // r15
  __int64 v27; // r8
  unsigned int *v28; // rdx
  unsigned int *v29; // rcx
  __m128i *v30; // rax
  __int64 v31; // rsi
  unsigned int *v32; // rax
  const __m128i *v33; // r15
  unsigned int v34; // edx
  unsigned int v35; // ebx
  _QWORD *v36; // r12
  __int64 v37; // r12
  __int64 v38; // rax
  _QWORD *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rbx
  __int64 v47; // rax
  _QWORD *v48; // rdi
  __int64 v49; // rax
  __m128i *v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rdx
  _DWORD *v53; // rdx
  __int64 *v54; // rbx
  unsigned __int64 v55; // r15
  __int64 v56; // rsi
  __int64 *v57; // rbx
  unsigned __int64 v58; // r15
  __int64 v59; // rsi
  __int64 i; // rax
  __int64 m; // rax
  _QWORD *v62; // rax
  unsigned int j; // edx
  __int64 v64; // rcx
  _DWORD *v65; // rcx
  char v66; // al
  __m128i *v67; // rsi
  _QWORD *v68; // rax
  unsigned int v69; // ecx
  unsigned int v70; // edx
  __int64 v71; // rcx
  _QWORD *v72; // rax
  unsigned int v73; // ecx
  __int64 v74; // rdx
  _DWORD *v75; // rsi
  void (__fastcall ***v76)(void *); // rbx
  int v77; // eax
  __int64 v78; // rax
  const __m128i *v79; // rdx
  __int64 v80; // r15
  void (***v81)(void); // rdi
  int v82; // edx
  _DWORD *v83; // rdx
  _DWORD *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 v87; // r15
  __int64 v88; // rdx
  int v89; // eax
  __int64 v90; // rsi
  __m128i *v91; // [rsp+8h] [rbp-130h]
  const __m128i *v92; // [rsp+8h] [rbp-130h]
  unsigned int *v93; // [rsp+8h] [rbp-130h]
  const __m128i *v94; // [rsp+8h] [rbp-130h]
  unsigned int v95; // [rsp+8h] [rbp-130h]
  unsigned int k; // [rsp+8h] [rbp-130h]
  const __m128i *v97; // [rsp+8h] [rbp-130h]
  unsigned int v98; // [rsp+8h] [rbp-130h]
  _QWORD *v99; // [rsp+10h] [rbp-128h]
  __int64 v100; // [rsp+10h] [rbp-128h]
  unsigned int *v101; // [rsp+20h] [rbp-118h]
  __int64 v102; // [rsp+20h] [rbp-118h]
  __int64 v103; // [rsp+20h] [rbp-118h]
  _DWORD *ptr; // [rsp+28h] [rbp-110h]
  bool v105; // [rsp+30h] [rbp-108h]
  __int64 v106; // [rsp+40h] [rbp-F8h]
  char v107[8]; // [rsp+68h] [rbp-D0h] BYREF
  __m128i *v108; // [rsp+70h] [rbp-C8h] BYREF
  _QWORD *v109; // [rsp+78h] [rbp-C0h]
  __m128i *v110; // [rsp+80h] [rbp-B8h] BYREF
  _QWORD *v111; // [rsp+88h] [rbp-B0h]
  int v112[2]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v113; // [rsp+98h] [rbp-A0h]
  _BYTE v114[48]; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE v115[104]; // [rsp+D0h] [rbp-68h] BYREF

  sub_EE4940(v107, "nlsat", *a2);
  if ( (unsigned __int8)sub_ED2B90(*a2) )
  {
    v7 = *a2;
    if ( *a2 )
      ++v7[2].m128i_i32[0];
    v8 = *(_DWORD *)(a3 + 8);
    v9 = *(_DWORD *)(a3 + 12);
    if ( v8 >= v9 )
    {
      v37 = 2 * v9;
      v38 = sub_186B270(8 * v37);
      v8 = *(_DWORD *)(a3 + 8);
      v39 = *(_QWORD **)a3;
      v10 = (_QWORD *)v38;
      if ( v8 )
      {
        if ( v8 - 1 <= 2 || (_QWORD *)v38 == v39 + 1 )
        {
          for ( i = 0; i != v8; ++i )
            v10[i] = v39[i];
        }
        else
        {
          v40 = 0;
          do
          {
            *(__m128i *)&v10[v40] = _mm_loadu_si128((const __m128i *)&v39[v40]);
            v40 += 2;
          }
          while ( 2LL * (v8 >> 1) != v40 );
          if ( (v8 & 1) != 0 )
            v10[v8 & 0xFFFFFFFE] = v39[v8 & 0xFFFFFFFE];
        }
      }
      if ( v39 != (_QWORD *)(a3 + 16) )
      {
        if ( v39 )
        {
          sub_186B220(v39);
          v8 = *(_DWORD *)(a3 + 8);
        }
      }
      *(_QWORD *)a3 = v10;
      *(_DWORD *)(a3 + 12) = v37;
    }
    else
    {
      v10 = *(_QWORD **)a3;
    }
    v10[v8] = v7;
    *(_DWORD *)(a3 + 8) = v8 + 1;
    return sub_EE4A00(v107);
  }
  sub_EE4F60("nlsat");
  sub_16234C0(v114, *a1);
  sub_16234C0(v115, *a1);
  v99 = a1 + 6;
  sub_77CF70(a1 + 8, *a2, (__int64)(a1 + 1), (unsigned __int64)(a1 + 6), (__int64)v114, (__int64)v115);
  v12 = a1[5];
  if ( v12 )
  {
    v13 = (__m128i *)((char *)v12 + 8 * v12[-1].m128i_u32[3]);
    if ( v12 >= v13 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v14 = v12->m128i_i64[0];
        if ( v12->m128i_i64[0] )
        {
          v15 = a1[4];
          v16 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v16 )
            break;
        }
        v12 = (__m128i *)((char *)v12 + 8);
        if ( v12 >= v13 )
          goto LABEL_14;
      }
      v91 = v13;
      sub_15D7BC0(v15, v14);
      v13 = v91;
      v12 = (__m128i *)((char *)v12 + 8);
    }
    while ( v12 < v91 );
LABEL_14:
    v12 = a1[5];
    if ( v12 )
LABEL_15:
      v12[-1].m128i_i32[3] = 0;
  }
  sub_1623BC0(v115, a1 + 4);
  v17 = (__int64)(a1 + 2);
  v18 = v99;
  sub_1141FB0(v99, a1 + 2);
  if ( (unsigned int)sub_180B130(v99) > 0x270F )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v17 = sub_180B150(v99, v17);
      v18 = v99;
      sub_1143AE0((_DWORD)v99, v17, v19, v20, v21, v22);
      sub_186A500(v99, v17);
    }
    else
    {
      v18 = v99;
      v17 = sub_180B150(v99, v17);
      sub_1143AE0((_DWORD)v99, v17, v42, v43, v44, v45);
    }
  }
  if ( (unsigned int)sub_180B130(v18) > 0x270F )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v92 = *a2;
      v23 = sub_180B150(*a2, v17);
      sub_ED65F0(v92, v23);
      sub_186A500(v92, v23);
    }
    else
    {
      v94 = *a2;
      v41 = sub_180B150(*a2, v17);
      sub_ED65F0(v94, v41);
    }
  }
  v24 = sub_114A390(v99);
  if ( v24 )
  {
    if ( v24 == 1 )
    {
      v50 = *a1;
      v109 = nullptr;
      v111 = nullptr;
      v108 = v50;
      v110 = v50;
      sub_1623BC0(v114, &v110);
      sub_1623BC0(v115, &v108);
      v51 = v109;
      if ( v109 )
      {
        while ( &v109[*((unsigned int *)v109 - 1)] != v51 )
        {
          v52 = *v51;
          if ( *(_WORD *)(*v51 + 4LL) )
            goto LABEL_75;
          if ( *(_DWORD *)(v52 + 24) )
            goto LABEL_75;
          v53 = *(_DWORD **)(*(_QWORD *)(v52 + 16) + 24LL);
          if ( v53 )
          {
            if ( *v53 != -1 )
              goto LABEL_75;
          }
          ++v51;
        }
      }
      v62 = v111;
      for ( j = 0; v62; ++j )
      {
        if ( j >= *((_DWORD *)v62 - 1) )
          break;
        v64 = v62[j];
        if ( v64 )
        {
          if ( *(_WORD *)(v64 + 4)
            || *(_DWORD *)(v64 + 24)
            || (v65 = *(_DWORD **)(*(_QWORD *)(v64 + 16) + 24LL)) != nullptr && *v65 != -1 )
          {
            v95 = j;
            v66 = sub_1142D40(v99, j);
            j = v95;
            if ( !v66 )
              goto LABEL_75;
            v62 = v111;
          }
        }
      }
      ptr = (_DWORD *)sub_186B270(0xA0u);
      sub_1373200(ptr, *a1);
      v67 = *a1;
      ++ptr[4];
      sub_16669D0(v112, v67);
      v68 = v109;
      if ( v109 )
      {
        for ( k = 0; ; ++k )
        {
          v69 = k;
          if ( k >= *((_DWORD *)v68 - 1) )
            break;
          while ( 1 )
          {
            v70 = v69;
            v71 = v68[v69];
            v102 = v71;
            if ( !*(_WORD *)(v71 + 4) )
              break;
            k = v70 + 1;
            v69 = v70 + 1;
            if ( v70 + 1 >= *((_DWORD *)v68 - 1) )
              goto LABEL_116;
          }
          if ( !*(_DWORD *)(v71 + 24) )
          {
            v83 = *(_DWORD **)(*(_QWORD *)(v71 + 16) + 24LL);
            if ( !v83 || *v83 == -1 )
            {
              v84 = *(_DWORD **)(sub_15D1F10(v71) + 24);
              v105 = 0;
              if ( v84 && *v84 == 5 )
                v105 = v84[1] == 1;
              v106 = sub_1142CF0(v99, k);
              v85 = sub_1141F90(v99);
              v86 = v113;
              v87 = v85;
              if ( !v113 )
              {
                sub_16669E0(v112);
                v86 = v113;
              }
              v88 = sub_166B840(v86, v87, v106, v105);
              sub_135F9B0(ptr, *(_QWORD *)(v102 + 16), v88);
              v68 = v109;
              if ( !v109 )
                break;
            }
          }
        }
      }
LABEL_116:
      v72 = v111;
      if ( v111 )
      {
        v73 = 0;
        if ( *((_DWORD *)v111 - 1) )
        {
          do
          {
            v74 = v72[v73];
            if ( v74 )
            {
              if ( !*(_WORD *)(v74 + 4) && !*(_DWORD *)(v74 + 24) )
              {
                v75 = *(_DWORD **)(*(_QWORD *)(v74 + 16) + 24LL);
                if ( !v75 || *v75 == -1 )
                {
                  v103 = v72[v73];
                  v98 = v73;
                  v89 = sub_1142D20(v99, v73);
                  v73 = v98;
                  if ( v89 )
                  {
                    v90 = (*a1)[54].m128i_i64[0];
                    if ( v89 == 1 )
                      v90 = (*a1)[53].m128i_i64[1];
                    sub_135F9B0(ptr, *(_QWORD *)(v103 + 16), v90);
                    v72 = v111;
                    v73 = v98;
                  }
                  else
                  {
                    v72 = v111;
                  }
                  if ( !v72 )
                    break;
                }
              }
            }
            ++v73;
          }
          while ( v73 < *((_DWORD *)v72 - 1) );
        }
      }
      v76 = (void (__fastcall ***)(void *))sub_1336B20(ptr);
      v77 = ptr[4] - 1;
      if ( v76 )
      {
        ++*((_DWORD *)v76 + 2);
        ptr[4] = v77;
        if ( !v77 )
        {
          (**(void (__fastcall ***)(_DWORD *))ptr)(ptr);
          sub_186B220(ptr);
        }
      }
      else
      {
        ptr[4] = v77;
        if ( !v77 )
        {
          (**(void (__fastcall ***)(_DWORD *))ptr)(ptr);
          sub_186B220(ptr);
        }
      }
      sub_ED2DA0(*a2);
      v97 = *a2;
      v78 = sub_1336AB0((*a2)->m128i_i64[1], v76);
      v79 = v97;
      v80 = v78;
      if ( v78 )
        ++*(_DWORD *)(v78 + 8);
      v81 = (void (***)(void))v97->m128i_i64[1];
      if ( v81 )
      {
        v16 = (*((_DWORD *)v81 + 2))-- == 1;
        if ( v16 )
        {
          (**v81)();
          sub_186B220(v81);
          v79 = v97;
        }
      }
      v79->m128i_i64[1] = v80;
      if ( v76 )
      {
        v82 = *((_DWORD *)v76 + 2) - 1;
        *((_DWORD *)v76 + 2) = v82;
        if ( !v82 )
        {
          (**v76)(v76);
          sub_186B220(v76);
        }
      }
LABEL_75:
      v54 = v111;
      if ( v111 )
      {
        v55 = (unsigned __int64)&v111[*((unsigned int *)v111 - 1)];
        if ( (unsigned __int64)v111 >= v55 )
          goto LABEL_83;
        do
        {
          v56 = *v54;
          if ( *v54 )
          {
            v16 = (*(_DWORD *)(v56 + 8))-- == 1;
            if ( v16 )
              sub_15D7BC0(v110, v56);
          }
          ++v54;
        }
        while ( (unsigned __int64)v54 < v55 );
        v54 = v111;
        if ( v111 )
LABEL_83:
          sub_186B220(v54 - 1);
      }
      v57 = v109;
      if ( v109 )
      {
        v58 = (unsigned __int64)&v109[*((unsigned int *)v109 - 1)];
        if ( (unsigned __int64)v109 >= v58 )
          goto LABEL_94;
        do
        {
          v59 = *v57;
          if ( *v57 )
          {
            v16 = (*(_DWORD *)(v59 + 8))-- == 1;
            if ( v16 )
              sub_15D7BC0(v108, v59);
          }
          ++v57;
        }
        while ( (unsigned __int64)v57 < v58 );
        v57 = v109;
        if ( v109 )
LABEL_94:
          sub_186B220(v57 - 1);
      }
      goto LABEL_40;
    }
    if ( v24 == -1 )
    {
      v25 = *a2;
      if ( ((*a2)[7].m128i_i8[11] & 0x10) == 0 )
      {
        v26 = nullptr;
        goto LABEL_39;
      }
      *(_QWORD *)v112 = 0;
      sub_1143590(v99, v112);
      v26 = *(unsigned int **)v112;
      if ( *(_QWORD *)v112 )
      {
        v27 = *(_QWORD *)v112 + 8LL * *(unsigned int *)(*(_QWORD *)v112 - 4LL);
        if ( v27 == *(_QWORD *)v112 )
        {
          v32 = *(unsigned int **)v112;
          v26 = nullptr;
        }
        else
        {
          v28 = *(unsigned int **)v112;
          v26 = nullptr;
          do
          {
            v29 = *(unsigned int **)v28;
            if ( v26 )
            {
              v30 = *a1;
              if ( v29 )
              {
                do
                {
                  v93 = v29;
                  if ( v26 == v29 )
                    break;
                  v101 = v28;
                  v100 = v27;
                  v31 = sub_17E9C90(v30[41].m128i_i64[0], 24);
                  v27 = v100;
                  v28 = v101 + 2;
                  *v26 = (*v26 + 1) & 0x3FFFFFFF | *v26 & 0xC0000000;
                  *v93 = (*v93 + 1) & 0x3FFFFFFF | *v93 & 0xC0000000;
                  *(_QWORD *)v31 = 0;
                  *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64(
                                            (__m128i)(unsigned __int64)v26,
                                            (__m128i)(unsigned __int64)v93);
                  if ( v101 + 2 == (unsigned int *)v100 )
                  {
                    v26 = (unsigned int *)v31;
                    goto LABEL_35;
                  }
                  v29 = *(unsigned int **)v28;
                  v30 = *a1;
                  v26 = (unsigned int *)v31;
                }
                while ( *(_QWORD *)v28 );
              }
            }
            else
            {
              v26 = *(unsigned int **)v28;
            }
            v28 += 2;
          }
          while ( (unsigned int *)v27 != v28 );
LABEL_35:
          v32 = *(unsigned int **)v112;
          if ( !*(_QWORD *)v112 )
            goto LABEL_37;
        }
        sub_186B220(v32 - 2);
      }
LABEL_37:
      v25 = *a2;
LABEL_39:
      sub_EDB570(v25, (*a1)[54].m128i_i64[0], 0, v26);
    }
  }
LABEL_40:
  (*a2)[7].m128i_i32[2] = ((*a2)[7].m128i_i32[2] + 1) & 0x3FFFFFF | (*a2)[7].m128i_i32[2] & 0xFC000000;
  v33 = *a2;
  if ( *a2 )
    ++v33[2].m128i_i32[0];
  v34 = *(_DWORD *)(a3 + 8);
  v35 = *(_DWORD *)(a3 + 12);
  if ( v34 >= v35 )
  {
    v46 = 2 * v35;
    v47 = sub_186B270(8 * v46);
    v34 = *(_DWORD *)(a3 + 8);
    v48 = *(_QWORD **)a3;
    v36 = (_QWORD *)v47;
    if ( v34 )
    {
      if ( v34 - 1 <= 2 || (_QWORD *)v47 == v48 + 1 )
      {
        for ( m = 0; m != v34; ++m )
          v36[m] = v48[m];
      }
      else
      {
        v49 = 0;
        do
        {
          *(__m128i *)&v36[v49] = _mm_loadu_si128((const __m128i *)&v48[v49]);
          v49 += 2;
        }
        while ( v49 != 2LL * (v34 >> 1) );
        if ( (v34 & 1) != 0 )
          v36[v34 & 0xFFFFFFFE] = v48[v34 & 0xFFFFFFFE];
      }
    }
    if ( v48 != (_QWORD *)(a3 + 16) && v48 )
    {
      sub_186B220(v48);
      v34 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v36;
    *(_DWORD *)(a3 + 12) = v46;
  }
  else
  {
    v36 = *(_QWORD **)a3;
  }
  v36[v34] = v33;
  *(_DWORD *)(a3 + 8) = v34 + 1;
  sub_16234F0(v115);
  sub_16234F0(v114);
  return sub_EE4A00(v107);
}


__int64 __fastcall Z3_qe_model_project_with_witness(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r10
  char v10; // al
  __int64 *v11; // rbx
  __int64 *v12; // rbp
  __int64 v13; // rsi
  bool v14; // zf
  _QWORD *v16; // rax
  void (__fastcall ***v17)(void *); // rax
  __int64 v18; // rax
  unsigned __int64 *v19; // rcx
  __int64 v20; // r10
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // r8
  __int64 v23; // r14
  int v24; // esi
  unsigned int v25; // r9d
  __m128i *v26; // rbx
  unsigned int v27; // eax
  size_t v28; // r14
  __m128i *v29; // rbp
  int v30; // edi
  __m128i v31; // xmm0
  __int64 v32; // rax
  __m128i *v33; // r8
  __m128i *v34; // rax
  __m128i *v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 *v38; // rbx
  unsigned int v39; // eax
  __int64 *v40; // rbp
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rax
  unsigned int v46; // r9d
  __m128i *v47; // r15
  const __m128i *v48; // r12
  __m128i *v49; // r11
  __int64 v50; // rdx
  __m128i *v51; // rsi
  __m128i *v52; // rdx
  __m128i v53; // xmm0
  __int64 *v54; // rbx
  unsigned __int64 v55; // rbp
  __int64 v56; // rsi
  __int64 v58; // [rsp+0h] [rbp-E8h]
  unsigned __int64 *v59; // [rsp+0h] [rbp-E8h]
  int v60; // [rsp+0h] [rbp-E8h]
  int v61; // [rsp+0h] [rbp-E8h]
  __int64 v62; // [rsp+8h] [rbp-E0h]
  unsigned int v63; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v64; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v65; // [rsp+18h] [rbp-D0h]
  unsigned int v66; // [rsp+18h] [rbp-D0h]
  unsigned __int64 *v67; // [rsp+28h] [rbp-C0h]
  __int64 v68; // [rsp+30h] [rbp-B8h]
  int v69[2]; // [rsp+38h] [rbp-B0h]
  unsigned int v70; // [rsp+40h] [rbp-A8h]
  void (__fastcall ***ptr)(void *); // [rsp+48h] [rbp-A0h]
  char v72; // [rsp+5Bh] [rbp-8Dh]
  unsigned __int64 *v73; // [rsp+78h] [rbp-70h] BYREF
  char v74[8]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v75; // [rsp+88h] [rbp-60h] BYREF
  __int64 v76; // [rsp+90h] [rbp-58h] BYREF
  __int64 *v77; // [rsp+98h] [rbp-50h]
  __int64 v78; // [rsp+A0h] [rbp-48h] BYREF
  __int64 *v79; // [rsp+A8h] [rbp-40h]

  v6 = a6;
  v10 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v72 = v10;
  if ( v10 )
  {
    sub_2A20C0(a1, a2, a3, a4, a5, a6);
    v6 = a6;
  }
  v58 = v6;
  v77 = nullptr;
  *(_DWORD *)(a1 + 1520) = 0;
  *(_QWORD *)v69 = *(_QWORD *)(a1 + 232);
  v76 = *(_QWORD *)v69;
  if ( (unsigned __int8)sub_2B3870(a3, a4, (__int64)&v76) )
  {
    v79 = nullptr;
    v78 = *(_QWORD *)v69;
    if ( a5 )
      ++*(_DWORD *)(a5 + 8);
    v16 = (_QWORD *)sub_186B270(0x18u);
    v16[1] = a5;
    v79 = v16 + 1;
    *v16 = 0x100000002LL;
    v17 = *(void (__fastcall ****)(void *))(a2 + 24);
    ptr = v17;
    if ( v17 )
      ++*((_DWORD *)v17 + 4);
    v73 = nullptr;
    v75 = 0;
    sub_6EF8C0(v74, *(_QWORD *)v69, &v75);
    sub_18572D0(&v75);
    sub_6F0E90(v74, 1, &v76, ptr, &v78, &v73);
    v18 = sub_15E1AF0(v69[0]);
    v62 = v18;
    if ( v18 )
    {
      ++*(_DWORD *)(v18 + 8);
      sub_251FD0(a1, v18);
      v19 = v73;
      v20 = v58;
      if ( !v73 )
        goto LABEL_47;
      v59 = &v73[4 * *((unsigned int *)v73 - 1)];
      if ( v59 == v73 )
        goto LABEL_47;
    }
    else
    {
      sub_251FD0(a1, 0);
      v19 = v73;
      v20 = v58;
      if ( !v73 )
        goto LABEL_49;
      v59 = &v73[4 * *((unsigned int *)v73 - 1)];
      if ( v73 == v59 )
        goto LABEL_49;
    }
    while ( 1 )
    {
      v21 = *v19;
      if ( *v19 )
        ++*(_DWORD *)(v21 + 8);
      v22 = v19[2];
      if ( v22 )
        ++*(_DWORD *)(v22 + 8);
      v23 = *(unsigned int *)(v20 + 40);
      v24 = *(_DWORD *)(v20 + 48);
      v25 = 2 * v23;
      if ( 3 * (int)v23 < (unsigned int)(4 * (v24 + *(_DWORD *)(v20 + 44))) )
      {
        v68 = v20;
        v28 = 16LL * v25;
        v67 = v19;
        v65 = v22;
        v63 = v25;
        v45 = sub_186B270(v28);
        v46 = v63;
        v22 = v65;
        v26 = (__m128i *)v45;
        v47 = (__m128i *)(v28 + v45);
        v19 = v67;
        v20 = v68;
        if ( v63 )
        {
          if ( (v28 & 0x10) == 0 || (v45 += 16, *(_OWORD *)(v45 - 16) = 0, (__m128i *)v45 != v47) )
          {
            do
            {
              v45 += 32;
              *(_OWORD *)(v45 - 32) = 0;
              *(_OWORD *)(v45 - 16) = 0;
            }
            while ( (__m128i *)v45 != v47 );
          }
        }
        v48 = *(const __m128i **)(v68 + 32);
        v27 = v63 - 1;
        v29 = v47;
        v49 = (__m128i *)&v48[*(unsigned int *)(v68 + 40)];
        if ( v48 != v49 )
        {
          do
          {
            while ( v48->m128i_i64[0] <= 1uLL )
            {
              if ( v49 == ++v48 )
                goto LABEL_71;
            }
            v50 = 16LL * (*(_DWORD *)(v48->m128i_i64[0] + 12) & v27);
            v51 = &v26[(unsigned __int64)v50 / 0x10];
            if ( v28 == v50 )
            {
LABEL_75:
              if ( v26 == v51 )
              {
LABEL_83:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v52 = v26;
              while ( v52->m128i_i64[0] )
              {
                if ( v51 == ++v52 )
                  goto LABEL_83;
              }
            }
            else
            {
              v52 = &v26[(unsigned __int64)v50 / 0x10];
              while ( v52->m128i_i64[0] )
              {
                if ( v47 == ++v52 )
                  goto LABEL_75;
              }
            }
            v53 = _mm_loadu_si128(v48++);
            *v52 = v53;
          }
          while ( v49 != v48 );
LABEL_71:
          v49 = *(__m128i **)(v68 + 32);
        }
        if ( v49 )
        {
          v70 = v63;
          v66 = v63 - 1;
          v64 = v22;
          sub_186B220(v49);
          v46 = v70;
          v20 = v68;
          v19 = v67;
          v27 = v66;
          v22 = v64;
        }
        *(_QWORD *)(v20 + 32) = v26;
        v24 = 0;
        *(_DWORD *)(v20 + 40) = v46;
        *(_DWORD *)(v20 + 48) = 0;
      }
      else
      {
        v26 = *(__m128i **)(v20 + 32);
        v27 = v23 - 1;
        v28 = 16 * v23;
        v29 = &v26[v28 / 0x10];
      }
      v30 = *(_DWORD *)(v21 + 12);
      v31 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v22);
      v32 = 16LL * (v30 & v27);
      v33 = &v26[(unsigned __int64)v32 / 0x10];
      if ( v32 != v28 )
      {
        v34 = &v26[(unsigned __int64)v32 / 0x10];
        v35 = nullptr;
        while ( 1 )
        {
          v36 = v34->m128i_i64[0];
          if ( v34->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v36 + 12) == v30 && v21 == v36 )
            {
              *v34 = v31;
              goto LABEL_45;
            }
          }
          else
          {
            if ( !v36 )
            {
              if ( v35 )
                goto LABEL_81;
              v35 = v34;
              goto LABEL_82;
            }
            v35 = v34;
          }
          if ( ++v34 == v29 )
            goto LABEL_40;
        }
      }
      v35 = nullptr;
      while ( 1 )
      {
LABEL_40:
        if ( v33 == v26 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v37 = v26->m128i_i64[0];
        if ( v26->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(v37 + 12) == v30 && v21 == v37 )
        {
          *v26 = v31;
          goto LABEL_45;
        }
LABEL_39:
        ++v26;
      }
      if ( v37 )
        break;
      if ( v35 )
LABEL_81:
        *(_DWORD *)(v20 + 48) = v24 - 1;
      else
        v35 = v26;
LABEL_82:
      *v35 = v31;
      ++*(_DWORD *)(v20 + 44);
LABEL_45:
      v19 += 4;
      if ( v59 == v19 )
      {
        if ( v62 )
        {
LABEL_47:
          v60 = *(_DWORD *)(v62 + 8);
          *(_DWORD *)(v62 + 8) = v60 - 1;
          if ( v60 == 1 )
            sub_15D7BC0(*(_QWORD *)v69, v62);
        }
LABEL_49:
        sub_6EF670(v74);
        v38 = (__int64 *)v73;
        if ( v73 )
        {
          v39 = *((_DWORD *)v73 - 1);
          if ( v39 )
          {
            v40 = (__int64 *)&v73[4 * v39];
            do
            {
              while ( 1 )
              {
                v43 = v38[2];
                if ( v43 )
                {
                  v44 = v38[3];
                  v14 = (*(_DWORD *)(v43 + 8))-- == 1;
                  if ( v14 )
                    sub_15D7BC0(v44, v43);
                }
                v41 = *v38;
                if ( *v38 )
                {
                  v42 = v38[1];
                  v14 = (*(_DWORD *)(v41 + 8))-- == 1;
                  if ( v14 )
                    break;
                }
                v38 += 4;
                if ( v38 == v40 )
                  goto LABEL_87;
              }
              sub_15D7BC0(v42, v41);
              v38 += 4;
            }
            while ( v38 != v40 );
LABEL_87:
            v38 = (__int64 *)v73;
          }
          sub_186B220(v38 - 1);
        }
        if ( ptr )
        {
          v61 = *((_DWORD *)ptr + 4);
          *((_DWORD *)ptr + 4) = v61 - 1;
          if ( v61 == 1 )
          {
            (**ptr)(ptr);
            sub_186B220(ptr);
          }
        }
        v54 = v79;
        if ( v79 )
        {
          v55 = (unsigned __int64)&v79[*((unsigned int *)v79 - 1)];
          if ( (unsigned __int64)v79 >= v55 )
            goto LABEL_100;
          do
          {
            while ( 1 )
            {
              v56 = *v54;
              if ( *v54 )
              {
                v14 = (*(_DWORD *)(v56 + 8))-- == 1;
                if ( v14 )
                  break;
              }
              if ( (unsigned __int64)++v54 >= v55 )
                goto LABEL_99;
            }
            sub_15D7BC0(v78, v56);
            ++v54;
          }
          while ( (unsigned __int64)v54 < v55 );
LABEL_99:
          v54 = v79;
          if ( v79 )
LABEL_100:
            sub_186B220(v54 - 1);
        }
        v11 = v77;
        if ( !v77 )
        {
LABEL_14:
          if ( !v72 )
            return v62;
LABEL_107:
          byte_1C7EBA0 = 1;
          return v62;
        }
LABEL_6:
        v12 = &v11[*((unsigned int *)v11 - 1)];
        if ( v11 >= v12 )
          goto LABEL_13;
        do
        {
          while ( 1 )
          {
            v13 = *v11;
            if ( *v11 )
            {
              v14 = (*(_DWORD *)(v13 + 8))-- == 1;
              if ( v14 )
                break;
            }
            if ( ++v11 >= v12 )
              goto LABEL_12;
          }
          sub_15D7BC0(v76, v13);
          ++v11;
        }
        while ( v11 < v12 );
LABEL_12:
        v11 = v77;
        if ( v77 )
LABEL_13:
          sub_186B220(v11 - 1);
        goto LABEL_14;
      }
    }
    v35 = v26;
    goto LABEL_39;
  }
  if ( v72 )
  {
    sub_2BB620(0);
    v11 = v77;
    v62 = 0;
    if ( !v77 )
      goto LABEL_107;
    goto LABEL_6;
  }
  v11 = v77;
  v62 = 0;
  if ( v77 )
    goto LABEL_6;
  return v62;
}


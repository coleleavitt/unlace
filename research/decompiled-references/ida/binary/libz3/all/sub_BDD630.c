_QWORD *__fastcall sub_BDD630(__int64 a1, char *a2, __int64 *a3)
{
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rax
  unsigned int v7; // r14d
  __int64 *v8; // r15
  unsigned int v9; // r12d
  unsigned int v10; // ecx
  _QWORD *v11; // r14
  unsigned int v12; // r12d
  unsigned int v13; // ecx
  _QWORD *v14; // r14
  __int64 *v15; // rax
  __int64 v16; // r13
  __int64 v17; // r12
  char *v18; // rax
  _QWORD *v19; // rdi
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  __int64 *v22; // rax
  __int64 v23; // r12
  char *v24; // rax
  _QWORD *v25; // rdi
  unsigned __int64 v26; // rax
  __int64 v27; // r9
  __int64 *v28; // rdx
  char v29; // r12
  __int64 v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // r13
  unsigned int v33; // r15d
  __int64 v34; // r12
  __int64 v35; // r13
  __int64 v36; // rax
  __int64 v37; // r12
  int v39; // esi
  __int64 v40; // rdi
  _DWORD **v41; // r14
  _DWORD **v42; // r15
  __int64 v43; // rax
  _DWORD *v44; // r13
  __int64 v45; // rax
  _DWORD *v46; // r12
  __int64 v47; // r13
  int v48; // esi
  __int64 v49; // rdi
  _QWORD *result; // rax
  __int64 v51; // rsi
  int v52; // r14d
  unsigned __int64 v53; // rax
  __int64 v54; // r10
  unsigned __int64 v55; // rax
  __int64 v56; // r10
  int v57; // [rsp-8h] [rbp-1B8h]
  __int64 v58; // [rsp+0h] [rbp-1B0h]
  _QWORD *v59; // [rsp+8h] [rbp-1A8h]
  _QWORD *v60; // [rsp+10h] [rbp-1A0h]
  char *v61; // [rsp+18h] [rbp-198h]
  _DWORD *v62; // [rsp+20h] [rbp-190h]
  __int64 v63; // [rsp+28h] [rbp-188h]
  _DWORD *v64; // [rsp+28h] [rbp-188h]
  unsigned int v66; // [rsp+30h] [rbp-180h]
  __int64 *v67; // [rsp+38h] [rbp-178h]
  __int64 v68; // [rsp+38h] [rbp-178h]
  int v69; // [rsp+38h] [rbp-178h]
  int v70; // [rsp+38h] [rbp-178h]
  __int64 *v71; // [rsp+40h] [rbp-170h]
  __int64 *v72; // [rsp+40h] [rbp-170h]
  __int64 v73; // [rsp+48h] [rbp-168h]
  char *v74; // [rsp+48h] [rbp-168h]
  int v75; // [rsp+48h] [rbp-168h]
  int v76; // [rsp+48h] [rbp-168h]
  unsigned int v77; // [rsp+54h] [rbp-15Ch] BYREF
  __int64 v78; // [rsp+58h] [rbp-158h] BYREF
  void *v79; // [rsp+60h] [rbp-150h]
  unsigned int v80; // [rsp+68h] [rbp-148h]
  int v81; // [rsp+6Ch] [rbp-144h]
  _QWORD v82[16]; // [rsp+70h] [rbp-140h] BYREF
  void *ptr; // [rsp+F0h] [rbp-C0h]
  unsigned int v84; // [rsp+F8h] [rbp-B8h]
  int v85; // [rsp+FCh] [rbp-B4h]
  _QWORD v86[22]; // [rsp+100h] [rbp-B0h] BYREF

  v59 = v82;
  v4 = *(_QWORD *)a2;
  v79 = v82;
  v60 = v86;
  ptr = v86;
  v67 = a3 + 15;
  v5 = *((__int64 **)a2 + 14);
  v81 = 16;
  v6 = *v5;
  v85 = 16;
  if ( (*((_BYTE *)a3 + 44) & 8) != 0 )
  {
    v82[0] = v4;
    v7 = -1;
    v80 = 1;
    v86[0] = v6;
    v84 = 1;
  }
  else
  {
    v51 = *a3;
    v82[0] = v4;
    v80 = 1;
    v52 = *(_DWORD *)(v51 + 24);
    v86[0] = v6;
    v84 = 1;
    v7 = v52 - 1;
    if ( !v7 )
      goto LABEL_70;
  }
  v8 = a3;
  v9 = 16;
  v10 = 1;
  v63 = v7;
  v71 = &a3[v63];
  while ( 1 )
  {
    v15 = (__int64 *)v8[15];
    v16 = *v15;
    if ( v10 < v9 )
    {
      v73 = *v15;
      v11 = v79;
    }
    else
    {
      v17 = 2 * v9;
      v18 = (char *)sub_186B270(8 * v17);
      v10 = v80;
      v19 = v79;
      v11 = v18;
      if ( v80 )
      {
        if ( v80 - 1 <= 2 || v18 == (char *)v79 + 8 )
        {
          v55 = 0;
          v56 = 8LL * v80;
          do
          {
            v11[v55 / 8] = v19[v55 / 8];
            v55 += 8LL;
          }
          while ( v55 != v56 );
        }
        else
        {
          v20 = 0;
          v21 = 16LL * (v80 >> 1);
          do
          {
            *(__m128i *)&v11[v20 / 8] = _mm_loadu_si128((const __m128i *)&v19[v20 / 8]);
            v20 += 16LL;
          }
          while ( v21 != v20 );
          if ( (v10 & 1) != 0 )
            v11[v10 & 0xFFFFFFFE] = v19[v10 & 0xFFFFFFFE];
        }
      }
      if ( v19 && v19 != v82 )
      {
        sub_186B220(v19);
        v10 = v80;
      }
      v22 = (__int64 *)v8[15];
      v79 = v11;
      v81 = v17;
      v73 = *v22;
    }
    v12 = v85;
    v11[v10] = v16;
    v80 = v10 + 1;
    v13 = v84;
    if ( v84 >= v12 )
    {
      v23 = 2 * v12;
      v24 = (char *)sub_186B270(8 * v23);
      v13 = v84;
      v25 = ptr;
      v14 = v24;
      if ( v84 )
      {
        if ( v84 - 1 <= 2 || v24 == (char *)ptr + 8 )
        {
          v53 = 0;
          v54 = 8LL * v84;
          do
          {
            v14[v53 / 8] = v25[v53 / 8];
            v53 += 8LL;
          }
          while ( v53 != v54 );
        }
        else
        {
          v26 = 0;
          v27 = 16LL * (v84 >> 1);
          do
          {
            *(__m128i *)&v14[v26 / 8] = _mm_loadu_si128((const __m128i *)&v25[v26 / 8]);
            v26 += 16LL;
          }
          while ( v27 != v26 );
          if ( (v13 & 1) != 0 )
            v14[v13 & 0xFFFFFFFE] = v25[v13 & 0xFFFFFFFE];
        }
      }
      if ( v25 != v86 && v25 )
      {
        sub_186B220(v25);
        v13 = v84;
      }
      ptr = v14;
      v85 = v23;
    }
    else
    {
      v14 = ptr;
    }
    ++v8;
    v14[v13] = v73;
    v84 = v13 + 1;
    if ( v71 == v8 )
      break;
    v10 = v80;
    v9 = v81;
  }
  v28 = v67;
  v29 = 0;
  v62 = nullptr;
  v68 = 0;
  v58 = *(_QWORD *)(a1 + 24);
  v72 = v28;
  v30 = v63 * 8;
  v74 = a2;
  v64 = nullptr;
  v61 = &a2[v30];
  v66 = -2;
  while ( 1 )
  {
    v41 = *((_DWORD ***)v74 + 15);
    v42 = (_DWORD **)*v72;
    if ( v41[1] != *(_DWORD **)(*v72 + 8) )
      break;
LABEL_44:
    v74 += 8;
    ++v72;
    if ( v61 == v74 )
      goto LABEL_62;
  }
  if ( v29 )
  {
LABEL_58:
    v29 = sub_15D27F0(*(_QWORD *)(a1 + 24), *v41, *v42);
    if ( v29 )
    {
      v47 = *(_QWORD *)(a1 + 16);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v47 + 7488) + 48LL))(
        *(_QWORD *)(v47 + 7488),
        *(_QWORD *)(*(_QWORD *)(v47 + 8840) + 8LL * (v66 >> 1)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v47 + 7488) + 64LL))(*(_QWORD *)(v47 + 7488));
      v48 = *(_DWORD *)(a1 + 8);
      v49 = *(_QWORD *)(a1 + 16);
      v77 = v66;
      sub_B69FE0(v49, v48, 1, &v77, 0, 0, 1u);
    }
    else
    {
      v31 = sub_966380(a1, *v41, *v42);
      v32 = *(_QWORD *)(a1 + 16);
      v33 = v31;
      v34 = v31 >> 1;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v32 + 7488) + 48LL))(
        *(_QWORD *)(v32 + 7488),
        *(_QWORD *)(*(_QWORD *)(v32 + 8840) + 8 * v34));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v32 + 7488) + 64LL))(*(_QWORD *)(v32 + 7488));
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 7488LL) + 32LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 7488LL),
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8840LL) + 8 * v34),
        v33 & 1,
        v68);
      v35 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v35 + 912) )
      {
        v36 = sub_15E1B70(*(_QWORD *)(a1 + 24));
        v37 = v36;
        if ( v36 )
          ++*(_DWORD *)(v36 + 8);
        v78 = 0;
        sub_966750(a1, v36, -1, 0, 0, -1, (__int64 ***)&v78, v57, v58, (int)v59, (int)v60, v61);
        if ( v78 )
          sub_186B220((void *)(v78 - 8));
        if ( v37 )
        {
          if ( (*(_DWORD *)(v37 + 8))-- == 1 )
            sub_15D7BC0(v35, v37);
        }
      }
      v39 = *(_DWORD *)(a1 + 8);
      v40 = *(_QWORD *)(a1 + 16);
      v78 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v33), _mm_cvtsi32_si128(v66)).m128i_u64[0];
      sub_B69FE0(v40, v39, 2, (unsigned int *)&v78, 0, 0, 1u);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
        std::__ostream_insert<char,std::char_traits<char>>();
      v29 = 1;
    }
    goto LABEL_44;
  }
  v43 = sub_15DCAD0(*(_QWORD *)(a1 + 24), (int)v79, 0);
  v44 = (_DWORD *)v43;
  if ( v43 )
    ++*(_DWORD *)(v43 + 8);
  if ( v64 )
  {
    v69 = v64[2];
    v64[2] = v69 - 1;
    if ( v69 == 1 )
      sub_15D7BC0(v58, v64);
  }
  v45 = sub_15DCAD0(*(_QWORD *)(a1 + 24), (int)ptr, 0);
  v46 = (_DWORD *)v45;
  if ( v45 )
    ++*(_DWORD *)(v45 + 8);
  if ( !v62 || (v70 = v62[2], v62[2] = v70 - 1, v70 != 1) )
  {
    if ( (_DWORD *)v45 == v44 )
      goto LABEL_61;
    goto LABEL_57;
  }
  sub_15D7BC0(v58, v62);
  if ( v46 != v44 )
  {
LABEL_57:
    v66 = sub_966380(a1, v44, v46);
    v62 = v46;
    v64 = v44;
    v68 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8840LL) + 8LL * (v66 >> 1));
    goto LABEL_58;
  }
LABEL_61:
  v62 = v46;
  v64 = v46;
LABEL_62:
  if ( v62 )
  {
    v75 = v62[2];
    v62[2] = v75 - 1;
    if ( v75 == 1 )
      sub_15D7BC0(v58, v62);
  }
  if ( v64 )
  {
    v76 = v64[2];
    v64[2] = v76 - 1;
    if ( v76 == 1 )
      sub_15D7BC0(v58, v64);
  }
  if ( ptr != nullptr && ptr != v60 )
    sub_186B220(ptr);
LABEL_70:
  result = v59;
  if ( v79 != v59 )
  {
    if ( v79 )
      return (_QWORD *)sub_186B220(v79);
  }
  return result;
}


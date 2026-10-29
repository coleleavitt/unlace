__int64 __fastcall sub_B90460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  const void *v8; // r14
  size_t v9; // r13
  unsigned int *v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rbp
  bool v13; // sf
  const void *v14; // rdi
  unsigned __int64 v15; // rax
  const void *v16; // r14
  size_t v17; // rdx
  size_t v18; // r13
  int v19; // eax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rsi
  __int64 result; // rax
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rbx
  size_t v27; // rdx
  unsigned int *v28; // rax
  size_t v29; // rdx
  _BYTE *v30; // rax
  __int64 v31; // rax
  size_t v32; // rax
  _BYTE *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _BYTE *v36; // rdx
  __int64 v37; // rax
  _BYTE *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  size_t v41; // rax
  size_t v42; // r8
  _BYTE *v43; // rcx
  _BYTE *v44; // rdi
  size_t v45; // r9
  unsigned __int64 v46; // rax
  _BYTE *v47; // rdi
  _BYTE *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  _BYTE *v51; // rdx
  __int64 v52; // rax
  _BYTE *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned int v59; // [rsp+0h] [rbp-E8h]
  __int64 v60; // [rsp+8h] [rbp-E0h]
  size_t v61; // [rsp+8h] [rbp-E0h]
  size_t v62; // [rsp+8h] [rbp-E0h]
  __int64 v63; // [rsp+18h] [rbp-D0h]
  const void *v64; // [rsp+18h] [rbp-D0h]
  size_t v65; // [rsp+20h] [rbp-C8h]
  void *s2; // [rsp+28h] [rbp-C0h]
  __m128i v67; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v68; // [rsp+40h] [rbp-A8h] BYREF
  void *v69; // [rsp+50h] [rbp-98h] BYREF
  size_t v70; // [rsp+58h] [rbp-90h]
  _QWORD v71[2]; // [rsp+60h] [rbp-88h] BYREF
  __int64 (__fastcall **v72)(); // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v73; // [rsp+78h] [rbp-70h]
  __int128 v74; // [rsp+80h] [rbp-68h]
  __int64 v75; // [rsp+90h] [rbp-58h]
  char v76; // [rsp+98h] [rbp-50h]
  int v77; // [rsp+9Ch] [rbp-4Ch]
  __int64 v78; // [rsp+A0h] [rbp-48h]

  v67.m128i_i64[0] = a4;
  v67.m128i_i64[1] = a5;
  if ( (_DWORD)a4 || ((v67.m128i_i32[3] | v67.m128i_i32[1] | v67.m128i_i32[2]) & 0x7FFFFFFF) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 17448);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 17448);
    v24 = *(_DWORD *)(v5 + 376);
    v67 = _mm_loadu_si128((const __m128i *)(v5 + 376));
    if ( !v24 && ((v67.m128i_i32[1] | v67.m128i_i32[2] | v67.m128i_i32[3]) & 0x7FFFFFFF) == 0 )
      return 0;
  }
  v8 = *(const void **)(v5 + 360);
  v9 = *(_QWORD *)(v5 + 368);
  v10 = *(unsigned int **)(*(_QWORD *)(a2 + 40) + 16LL);
  v11 = *v10;
  v12 = (__int64)(v10 + 4);
  v13 = *(char *)(*(_QWORD *)(a1 + 2320) + 2LL) < 0;
  v72 = (__int64 (__fastcall **)())v12;
  v14 = (const void *)v12;
  v73 = v11;
  v15 = v11;
  if ( v13 )
  {
    v32 = j__strlen("_app_extension");
    v15 = sub_2246E40(&v72, "_app_extension", v32);
    if ( v15 == -1 )
    {
      v14 = v72;
      v15 = v73;
    }
    else
    {
      v14 = v72;
      if ( v73 <= v15 )
        v15 = v73;
    }
  }
  if ( v9 != v15 || v9 && memcmp(v14, v8, v9) )
    return 0;
  v16 = (const void *)sub_B8FAD0(v12, v11);
  v18 = v17;
  if ( !v17 )
  {
    v16 = (const void *)v12;
    v18 = v11;
  }
  v19 = *(_DWORD *)(a2 + 100);
  LOBYTE(v71[0]) = 0;
  v70 = 0;
  v69 = v71;
  if ( v19 )
  {
    v41 = j__strlen(" - ");
    sub_99BDC0(&v69, 0, 0, " - ", v41);
    v42 = *(unsigned int *)(a2 + 100);
    v43 = *(_BYTE **)(a2 + 104);
    if ( v42 > 0x7FFFFFFFFFFFFFFFLL - v70 )
      std::__throw_length_error("basic_string::append");
    v44 = v69;
    v45 = v42 + v70;
    if ( v69 == v71 )
      v46 = 15;
    else
      v46 = v71[0];
    if ( v45 > v46 )
    {
      v62 = v42 + v70;
      sub_998B30((__int64)&v69, v70, 0, v43, v42);
      v44 = v69;
      v45 = v62;
    }
    else if ( *(_DWORD *)(a2 + 100) )
    {
      v47 = (char *)v69 + v70;
      if ( v42 == 1 )
      {
        *v47 = *v43;
        v44 = v69;
      }
      else
      {
        v61 = v42 + v70;
        memcpy(v47, *(const void **)(a2 + 104), *(unsigned int *)(a2 + 100));
        v44 = v69;
        v45 = v61;
      }
    }
    v70 = v45;
    v44[v45] = 0;
  }
  if ( *(_BYTE *)(a2 + 96) )
  {
    if ( a3 )
    {
      v38 = *(_BYTE **)a3;
      *(_QWORD *)(a3 + 8) = 0;
      *v38 = 0;
      v78 = a3;
      v74 = 0;
      LODWORD(v73) = 0;
      v76 = 0;
      v77 = 1;
      v75 = 0;
      v72 = &off_2BEBE68;
      sub_227B8B0(&v72, 0, 0, 0);
      v39 = sub_995540((__int64)&v72, "not available on ");
      v40 = sub_9954E0(v39, v16, v18);
      sub_227BF10(v40, v69, v70);
      v72 = &off_2BEBE68;
      sub_227B7A0(&v72);
    }
  }
  else
  {
    v20 = *(_QWORD *)(a2 + 56);
    if ( (unsigned int)*(_QWORD *)(a2 + 48)
       | HIDWORD(v20) & 0x7FFFFFFF
       | ((unsigned int)v20 | HIDWORD(*(_QWORD *)(a2 + 48))) & 0x7FFFFFFF )
    {
      v72 = *(__int64 (__fastcall ***)())(a2 + 48);
      v73 = v20;
      if ( (unsigned __int8)sub_A09E20((unsigned int *)&v67, (unsigned int *)&v72) )
      {
        v63 = *(_QWORD *)(a1 + 17448);
        v60 = *(_QWORD *)(a2 + 136);
        s2 = (void *)sub_22B76B0(v63 + 216);
        v26 = v25;
        v64 = (const void *)sub_22B6CA0(*(unsigned int *)(v63 + 264));
        v65 = v27;
        if ( !v60
          || sub_B88030()
          && (v28 = *(unsigned int **)(v60 + 16), v29 = *v28, v29 == v26)
          && (!*v28 || !memcmp(v28 + 4, s2, v29)) )
        {
          if ( !a3 )
            goto LABEL_32;
          v53 = *(_BYTE **)a3;
          *(_QWORD *)(a3 + 8) = 0;
          *v53 = 0;
          v78 = a3;
          v74 = 0;
          v72 = &off_2BEBE68;
          LODWORD(v73) = 0;
          v76 = 0;
          v77 = 1;
          v75 = 0;
          sub_227B8B0(&v72, 0, 0, 0);
          v68 = _mm_loadu_si128((const __m128i *)(a2 + 48));
          v54 = sub_995540((__int64)&v72, "introduced in ");
          v55 = sub_9954E0(v54, v16, v18);
          v56 = sub_995540(v55, " ");
          sub_2257710(v56, &v68);
          if ( !sub_B88030() )
            goto LABEL_31;
        }
        else
        {
          if ( !a3 )
          {
LABEL_32:
            result = *(_BYTE *)(a2 + 112) == 0 ? 1 : 3;
            goto LABEL_17;
          }
          v30 = *(_BYTE **)a3;
          *(_QWORD *)(a3 + 8) = 0;
          *v30 = 0;
          v78 = a3;
          v74 = 0;
          v72 = &off_2BEBE68;
          LODWORD(v73) = 0;
          v76 = 0;
          v77 = 1;
          v75 = 0;
          sub_227B8B0(&v72, 0, 0, 0);
          v31 = sub_995540((__int64)&v72, "not available on ");
          sub_9954E0(v31, v16, v18);
          if ( !sub_B88030() )
          {
LABEL_31:
            sub_227BF10(&v72, v69, v70);
            v72 = &off_2BEBE68;
            sub_227B7A0(&v72);
            goto LABEL_32;
          }
        }
        v57 = sub_995540((__int64)&v72, " ");
        sub_9954E0(v57, v64, v65);
        goto LABEL_31;
      }
    }
    v21 = *(_QWORD *)(a2 + 88);
    if ( !((unsigned int)*(_QWORD *)(a2 + 80)
         | HIDWORD(*(_QWORD *)(a2 + 88)) & 0x7FFFFFFF
         | ((unsigned int)v21 | HIDWORD(*(_QWORD *)(a2 + 80))) & 0x7FFFFFFF)
      || (v72 = *(__int64 (__fastcall ***)())(a2 + 80),
          v73 = v21,
          (unsigned __int8)sub_A09E20((unsigned int *)&v67, (unsigned int *)&v72)) )
    {
      v22 = *(_QWORD *)(a2 + 72);
      if ( (unsigned int)*(_QWORD *)(a2 + 64)
         | HIDWORD(v22) & 0x7FFFFFFF
         | ((unsigned int)v22 | HIDWORD(*(_QWORD *)(a2 + 64))) & 0x7FFFFFFF
        && (v72 = *(__int64 (__fastcall ***)())(a2 + 64),
            v73 = v22,
            !(unsigned __int8)sub_A09E20((unsigned int *)&v67, (unsigned int *)&v72)) )
      {
        result = 2;
        if ( a3 )
        {
          v48 = *(_BYTE **)a3;
          *(_QWORD *)(a3 + 8) = 0;
          *v48 = 0;
          v78 = a3;
          v74 = 0;
          v72 = &off_2BEBE68;
          LODWORD(v73) = 0;
          v76 = 0;
          v77 = 1;
          v75 = 0;
          sub_227B8B0(&v72, 0, 0, 0);
          v68 = _mm_loadu_si128((const __m128i *)(a2 + 64));
          v49 = sub_995540((__int64)&v72, "first deprecated in ");
          v50 = sub_9954E0(v49, v16, v18);
          v51 = *(_BYTE **)(v50 + 32);
          if ( (unsigned __int64)v51 >= *(_QWORD *)(v50 + 24) )
          {
            v50 = sub_227BA10(v50, 32);
          }
          else
          {
            *(_QWORD *)(v50 + 32) = v51 + 1;
            *v51 = 32;
          }
          v52 = sub_2257710(v50, &v68);
          sub_227BF10(v52, v69, v70);
          v72 = &off_2BEBE68;
          sub_227B7A0(&v72);
          result = 2;
        }
      }
      else
      {
        result = 0;
      }
      goto LABEL_17;
    }
    if ( a3 )
    {
      v33 = *(_BYTE **)a3;
      *(_QWORD *)(a3 + 8) = 0;
      *v33 = 0;
      v78 = a3;
      v74 = 0;
      v72 = &off_2BEBE68;
      LODWORD(v73) = 0;
      v76 = 0;
      v77 = 1;
      v75 = 0;
      sub_227B8B0(&v72, 0, 0, 0);
      v68 = _mm_loadu_si128((const __m128i *)(a2 + 80));
      v34 = sub_995540((__int64)&v72, "obsoleted in ");
      v35 = sub_9954E0(v34, v16, v18);
      v36 = *(_BYTE **)(v35 + 32);
      if ( (unsigned __int64)v36 >= *(_QWORD *)(v35 + 24) )
      {
        v35 = sub_227BA10(v35, 32);
      }
      else
      {
        *(_QWORD *)(v35 + 32) = v36 + 1;
        *v36 = 32;
      }
      v37 = sub_2257710(v35, &v68);
      sub_227BF10(v37, v69, v70);
      v72 = &off_2BEBE68;
      sub_227B7A0(&v72);
      result = 3;
      goto LABEL_17;
    }
  }
  result = 3;
LABEL_17:
  if ( v69 != v71 )
  {
    v59 = result;
    operator delete(v69);
    return v59;
  }
  return result;
}

__int64 __fastcall sub_3D04F0(__int64 a1, __int64 *a2, _DWORD *a3, _BYTE *a4, _DWORD *a5, __int64 a6, _DWORD *a7)
{
  __int64 v8; // r13
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  int v20; // r14d
  int v21; // r8d
  int v22; // r11d
  unsigned __int64 v23; // rax
  _QWORD *v24; // rax
  unsigned int v25; // eax
  __m128i v26; // xmm2
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rsi
  int v30; // esi
  int v31; // r15d
  __int64 v32; // r15
  unsigned __int64 v33; // rdx
  __int64 v34; // rsi
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rbx
  _BYTE *v41; // rax
  __int64 v42; // rax
  __int64 func; // r14
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rdi
  int v47; // ebx
  int v48; // eax
  __int64 v49; // rsi
  __int64 v50; // r14
  unsigned __int64 v51; // rbx
  __int64 v52; // r8
  __int64 v53; // rbx
  __int64 i; // r15
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rbx
  _BYTE *v58; // rax
  _DWORD *v59; // rdx
  int v60; // edx
  int v61; // r15d
  __int64 v62; // r8
  unsigned __int64 v63; // rdx
  __int64 v64; // rsi
  unsigned __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // r14
  __int64 v68; // rbx
  _QWORD *v69; // rax
  const char *v70; // rdx
  unsigned int **v71; // rcx
  int v72; // r8d
  int v73; // r8d
  __int64 v74; // rcx
  const char *v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // [rsp+0h] [rbp-168h]
  __int64 v82; // [rsp+8h] [rbp-160h]
  const char *v83; // [rsp+18h] [rbp-150h]
  unsigned __int64 v84; // [rsp+20h] [rbp-148h]
  unsigned __int64 v85; // [rsp+20h] [rbp-148h]
  int v86; // [rsp+28h] [rbp-140h]
  int v87; // [rsp+30h] [rbp-138h]
  int v88; // [rsp+38h] [rbp-130h]
  int v89; // [rsp+3Ch] [rbp-12Ch]
  __int64 v90; // [rsp+48h] [rbp-120h]
  __m128i v91; // [rsp+50h] [rbp-118h] BYREF
  __int64 v92; // [rsp+60h] [rbp-108h]
  __int64 v93; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v94; // [rsp+78h] [rbp-F0h]
  __int64 v95; // [rsp+90h] [rbp-D8h] BYREF
  __int128 v96; // [rsp+98h] [rbp-D0h]
  __int64 v97; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v98; // [rsp+B8h] [rbp-B0h]
  _BYTE v99[32]; // [rsp+C8h] [rbp-A0h] BYREF
  _QWORD v100[2]; // [rsp+E8h] [rbp-80h] BYREF
  _QWORD v101[2]; // [rsp+F8h] [rbp-70h] BYREF
  _QWORD v102[2]; // [rsp+108h] [rbp-60h] BYREF
  int v103; // [rsp+118h] [rbp-50h]
  unsigned __int64 v104; // [rsp+128h] [rbp-40h]

  v104 = __readfsqword(0x28u);
  *a3 = 0;
  *a4 = 1;
  *a5 = -1;
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 || (unsigned int)(*(_DWORD *)(v8 + 60) - 1) > 1 )
  {
    v14 = a2[1];
    v15 = *a2;
    if ( a2[2] < (unsigned __int64)(v14 + 1) )
    {
      v37 = qvector_reserve();
      v14 = a2[1];
      *a2 = v37;
      v15 = v37;
    }
    sub_80DE0(v15 + 24 * v14, "Empty model");
    v12 = a2[1] + 1;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(v8 + 72) != a7[4] )
  {
    v16 = a2[1];
    v17 = *a2;
    if ( a2[2] < (unsigned __int64)(v16 + 1) )
    {
      v42 = qvector_reserve();
      v16 = a2[1];
      *a2 = v42;
      v17 = v42;
    }
    sub_80DE0(v17 + 24 * v16, "Inconsistent place for model");
    v12 = a2[1] + 1;
    goto LABEL_9;
  }
  v9 = a7[5];
  if ( v9 < 0 || v9 >= *(_DWORD *)(*(_QWORD *)(v8 + 64) + 64LL) )
  {
    v10 = a2[1];
    v11 = *a2;
    if ( a2[2] < (unsigned __int64)(v10 + 1) )
    {
      v36 = qvector_reserve();
      v10 = a2[1];
      *a2 = v36;
      v11 = v36;
    }
    sub_80DE0(v11 + 24 * v10, "Invalid block index");
    v12 = a2[1] + 1;
LABEL_9:
    a2[1] = v12;
    return 1;
  }
  v82 = sub_3C8640(*(_QWORD *)(a1 + 64), v9);
  v20 = a7[6];
  v81 = sub_3C8680(v8, a7[5], v20);
  v23 = *(_QWORD *)(v8 + 64);
  v92 = v8 + 160;
  v91 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(v23 + 1496)), (__m128i)v23);
  if ( !(v22 | v21) )
  {
    if ( (*(_DWORD *)v23 & 0x400000) != 0 )
      goto LABEL_59;
    v93 = 0;
    v94 = 0;
    get_ash();
    sub_6AEF0(&v93);
    sub_3CCF90(a2, (__int64)&v93);
    func = get_func();
    if ( func )
    {
      v97 = 0;
      v98 = 0;
      if ( get_func_cmt() > 0 )
        sub_3D0360(a2, &v97);
      if ( v97 )
      {
        *(_QWORD *)&v98 = 0;
        qfree();
      }
    }
    v95 = 0;
    v96 = 0;
    if ( !(unsigned __int8)print_type() )
    {
      *(_QWORD *)&v96 = 0;
      if ( get_ea_name() < 0 || !tag_strlen() )
      {
        *(_QWORD *)&v96 = 0;
        get_ea_name();
      }
    }
    sub_3CCF90(a2, (__int64)&v95);
    if ( func )
    {
      v98 = 0;
      v97 = 0;
      if ( get_func_cmt() > 0 )
        sub_3D0360(a2, &v97);
      if ( v97 )
      {
        *(_QWORD *)&v98 = 0;
        qfree();
      }
    }
    v44 = a2[1];
    v45 = *a2;
    if ( a2[2] < (unsigned __int64)(v44 + 1) )
    {
      v77 = qvector_reserve();
      *a2 = v77;
      v44 = a2[1];
      v45 = v77;
    }
    sub_80DE0(v45 + 24 * v44, (const char *)&unk_419691);
    v46 = v95;
    ++a2[1];
    if ( v46 )
    {
      *(_QWORD *)&v96 = 0;
      qfree();
    }
    if ( v93 )
    {
      *(_QWORD *)&v94 = 0;
      qfree();
    }
    v21 = a7[6];
    v20 = v21;
  }
  if ( !v21 )
  {
    if ( (**(_DWORD **)(v8 + 64) & 0x400000) == 0 )
    {
      v97 = 0;
      v98 = 0;
      sub_6AEF0(&v97);
      sub_F3E30(&v97);
      v70 = "Predecessors";
      v71 = (unsigned int **)(v82 + 344);
      if ( !*(_DWORD *)(v82 + 72) )
      {
        v71 = (unsigned int **)(v82 + 368);
        v70 = "Successors";
      }
      v72 = 0;
      if ( *(_DWORD *)(v8 + 80) - 1 >= 0 )
        v72 = *(_DWORD *)(v8 + 80) - 1;
      sub_3CE180(&v97, (__int64)&v91, v70, v71, v72);
      sub_3CCF90(a2, (__int64)&v97);
      if ( v97 )
      {
        *(_QWORD *)&v98 = 0;
        qfree();
      }
      v20 = a7[6];
      goto LABEL_19;
    }
    v22 = a7[5];
LABEL_59:
    v20 = v21;
    goto LABEL_20;
  }
LABEL_19:
  v22 = a7[5];
LABEL_20:
  v24 = (_QWORD *)sub_3C8A80(v8, v22, v20);
  if ( v24 && v24[1] > 1u )
    sub_3D0360(a2, v24);
  if ( !v81 )
  {
    result = a2[1];
    if ( !a7[6] )
    {
      if ( !result )
      {
        v76 = *a2;
        if ( !a2[2] )
        {
          v79 = qvector_reserve();
          *a2 = v79;
          v76 = v79;
          result = a2[1];
        }
        sub_80DE0(v76 + 24 * result, "; empty block");
        ++a2[1];
      }
      if ( *(_QWORD *)(v82 + 48) || (**(_DWORD **)(v8 + 64) & 0x400000) != 0 )
        return a2[1];
      if ( !*(_QWORD *)(v82 + 376) )
      {
        v97 = 0;
        v98 = 0;
        get_ash();
        sub_6AEF0(&v97);
        sub_3CCF90(a2, (__int64)&v97);
        if ( v97 )
        {
          *(_QWORD *)&v98 = 0;
          qfree();
        }
      }
      v38 = a2[1];
      v39 = *a2;
      if ( a2[2] < (unsigned __int64)(v38 + 1) )
      {
        v80 = qvector_reserve();
        *a2 = v80;
        v39 = v80;
        v38 = a2[1];
      }
      v40 = v39 + 24 * v38;
      *(_QWORD *)v40 = 0;
      *(_OWORD *)(v40 + 8) = 0;
      v41 = (_BYTE *)qvector_reserve();
      *(_QWORD *)v40 = v41;
      *(_QWORD *)(v40 + 8) = 1;
      *v41 = 0;
      result = a2[1] + 1;
      a2[1] = result;
    }
    return result;
  }
  v97 = -1;
  v100[0] = 0xFFFFFFFF00000000LL;
  *(_QWORD *)&v98 = 0;
  DWORD2(v98) = -1;
  v100[1] = 0;
  v101[0] = 0xFFFFFFFF00000000LL;
  v101[1] = 0;
  v102[0] = 0xFFFFFFFF00000000LL;
  v102[1] = 0;
  sub_32D4D0(v99, -1);
  v103 = 0;
  v25 = sub_1351F0(*(_QWORD *)(v8 + 64), v81, *(unsigned int *)(v82 + 72));
  v26 = _mm_cvtsi32_si128(*(_DWORD *)(v82 + 72));
  v27 = *(_QWORD *)(v81 + 24);
  LODWORD(v98) = *(_DWORD *)v81;
  v97 = v27;
  *(_QWORD *)((char *)&v98 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), v26).m128i_u64[0];
  v83 = "DELETED";
  if ( !sub_135890(*(_QWORD *)(v8 + 64), (__int64)&v97, 9u) )
  {
    v74 = sub_3C52A0(*(_QWORD *)(v8 + 64), (__int64)&v97, (_DWORD *)v81);
    v75 = "ADDED BY USER";
    if ( !v74 )
      v75 = 0;
    v83 = v75;
  }
  sub_11A960((__int64)v102);
  sub_11A960((__int64)v101);
  sub_11A960((__int64)v100);
  v28 = a7[6];
  v93 = 0;
  v94 = 0;
  v88 = v28;
  if ( *(_BYTE *)(v8 + 84) )
  {
    sub_6AEF0(&v93);
    *a4 = 6;
    v29 = *(int *)(v8 + 76);
    if ( v29 > 0 )
      goto LABEL_27;
  }
  else
  {
    v29 = *(int *)(v8 + 76);
    if ( v29 > 0 )
LABEL_27:
      sub_3C5FA0(&v93, v29);
  }
  v86 = tag_strlen();
  sub_1B1AE0(v81, &v93, &v91, 4);
  v87 = tag_strlen();
  v89 = *(_DWORD *)(v8 + 76);
  if ( v83 )
  {
    v30 = 0;
    v31 = *(_DWORD *)(v8 + 80) - 1;
    if ( v31 >= 0 )
      v30 = *(_DWORD *)(v8 + 80) - 1;
    if ( v30 > (int)tag_strlen() && v31 > 0 )
      sub_3C5FA0(&v93, v30);
    v32 = v94;
    v33 = 2;
    if ( (_QWORD)v94 )
    {
      v33 = v94 + 1;
      v32 = v94 - 1;
    }
    v34 = v93;
    if ( *((_QWORD *)&v94 + 1) < v33 )
    {
      v84 = v33;
      v93 = qvector_reserve();
      v33 = v84;
      v34 = v93;
    }
    *(_QWORD *)&v94 = v33;
    *(_BYTE *)(v34 + v32) = 32;
    *(_BYTE *)(v93 + v32 + 1) = 0;
    get_ash();
    sub_F3E30(&v93);
  }
  else if ( v81 == *(_QWORD *)(v82 + 56) && *(_QWORD *)(v82 + 376) )
  {
    v73 = 0;
    if ( *(_DWORD *)(v8 + 80) - 1 >= 0 )
      v73 = *(_DWORD *)(v8 + 80) - 1;
    sub_3CE180(&v93, (__int64)&v91, "Successors", (unsigned int **)(v82 + 368), v73);
  }
  v35 = (_QWORD *)sub_3C8A80(v8, *(_DWORD *)(v82 + 72), v88);
  if ( v35 && v35[1] > 1u )
  {
    v95 = 0;
    v96 = 0;
    sub_3C6F60(v35, &v95, "\n", 0);
    if ( (_QWORD)v96 )
    {
      v60 = 0;
      if ( *(_DWORD *)(v8 + 80) - 1 >= 0 )
        v60 = *(_DWORD *)(v8 + 80) - 1;
      v61 = v60;
      if ( *(_DWORD *)(v8 + 80) - 1 > 0 )
        sub_3C5FA0(&v93, v60);
      v62 = v94;
      v63 = 2;
      if ( (_QWORD)v94 )
      {
        v63 = v94 + 1;
        v62 = v94 - 1;
      }
      v64 = v93;
      if ( *((_QWORD *)&v94 + 1) < v63 )
      {
        v90 = v62;
        v85 = v63;
        v93 = qvector_reserve();
        v62 = v90;
        v64 = v93;
        v63 = v85;
      }
      *(_QWORD *)&v94 = v63;
      *(_BYTE *)(v64 + v62) = 32;
      *(_BYTE *)(v93 + v62 + 1) = 0;
      get_ash();
      sub_F3E30(&v93);
      *a3 = a2[1];
      sub_3CCF90(a2, (__int64)&v93);
      if ( (unsigned __int64)v96 > 1 )
      {
        v65 = 1;
        do
        {
          v97 = 0;
          v98 = 0;
          if ( *(_BYTE *)(v8 + 84) )
            sub_6AEF0(&v97);
          if ( v61 + 1 > 0 )
            sub_3C5FA0(&v97, v61 + 1);
          get_ash();
          sub_F3E30(&v97);
          sub_3CCF90(a2, (__int64)&v97);
          if ( v97 )
          {
            *(_QWORD *)&v98 = 0;
            qfree();
          }
          ++v65;
        }
        while ( v65 < (unsigned __int64)v96 );
      }
    }
    else
    {
      *a3 = a2[1];
      sub_3CCF90(a2, (__int64)&v93);
    }
    v66 = v95;
    if ( v95 )
    {
      v67 = v96;
      if ( (_QWORD)v96 )
      {
        v68 = 0;
        do
        {
          v69 = (_QWORD *)(v66 + 24 * v68);
          if ( *v69 )
          {
            v69[1] = 0;
            qfree();
            v66 = v95;
          }
          ++v68;
        }
        while ( v67 != v68 );
      }
      *(_QWORD *)&v96 = 0;
      qfree();
    }
  }
  else
  {
    *a3 = a2[1];
    sub_3CCF90(a2, (__int64)&v93);
  }
  if ( v93 )
  {
    *(_QWORD *)&v94 = 0;
    qfree();
  }
  if ( *(_QWORD *)(v82 + 56) != v81 || (**(_DWORD **)(v8 + 64) & 0x400000) != 0 )
    return a2[1];
  if ( *(_QWORD *)(v82 + 376) )
  {
    if ( !v83 )
      goto LABEL_99;
    v97 = 0;
    v98 = 0;
    v47 = v87 + v89 - v86;
    if ( *(_BYTE *)(v8 + 84) )
    {
      sub_6AEF0(&v97);
      v48 = *(_DWORD *)(v8 + 80) - 1;
      if ( v48 < 0 )
        v48 = 0;
      if ( v48 < v47 )
        v48 = v87 + v89 - v86;
      if ( !v48 )
      {
LABEL_92:
        v49 = v97;
        if ( (_QWORD)v98 )
        {
          v50 = v98 - 1;
          v51 = v98 + 1;
        }
        else
        {
          v50 = 0;
          v51 = 2;
        }
        if ( *((_QWORD *)&v98 + 1) >= v51 )
        {
LABEL_95:
          *(_QWORD *)&v98 = v51;
          *(_BYTE *)(v49 + v50) = 32;
          *(_BYTE *)(v97 + v50 + 1) = 0;
          get_ash();
          sub_F3E30(&v97);
          v52 = *(_QWORD *)(v82 + 368);
          v53 = v52 + 4LL * *(_QWORD *)(v82 + 376);
          for ( i = v52; v53 != i; i += 4 )
            sub_F3E30(&v97);
          sub_3CCF90(a2, (__int64)&v97);
          if ( v97 )
            goto LABEL_98;
          goto LABEL_99;
        }
LABEL_157:
        v97 = qvector_reserve();
        v49 = v97;
        goto LABEL_95;
      }
    }
    else
    {
      v48 = *(_DWORD *)(v8 + 80) - 1;
      if ( v48 < 0 )
        v48 = 0;
      if ( v48 < v47 )
        v48 = v87 + v89 - v86;
      if ( !v48 )
      {
        v51 = 2;
        v50 = 0;
        goto LABEL_157;
      }
    }
    sub_3C5FA0(&v97, v48);
    goto LABEL_92;
  }
  v97 = 0;
  v98 = 0;
  get_ash();
  sub_6AEF0(&v97);
  sub_3CCF90(a2, (__int64)&v97);
  if ( v97 )
  {
LABEL_98:
    *(_QWORD *)&v98 = 0;
    qfree();
  }
LABEL_99:
  v55 = a2[1];
  v56 = *a2;
  if ( a2[2] < (unsigned __int64)(v55 + 1) )
  {
    v78 = qvector_reserve();
    v55 = a2[1];
    *a2 = v78;
    v56 = v78;
  }
  v57 = v56 + 24 * v55;
  *(_QWORD *)v57 = 0;
  *(_OWORD *)(v57 + 8) = 0;
  v58 = (_BYTE *)qvector_reserve();
  *(_QWORD *)v57 = v58;
  *(_QWORD *)(v57 + 8) = 1;
  *v58 = 0;
  result = a2[1] + 1;
  a2[1] = result;
  if ( *(_QWORD *)(v82 + 56) == v81 )
  {
    v59 = *(_DWORD **)(v8 + 64);
    if ( a7[5] == v59[16] - 1 && (*v59 & 0x400000) == 0 )
    {
      v96 = 0;
      v95 = 0;
      v97 = 0;
      v98 = 0;
      get_ea_name();
      get_ash();
      sub_6AEF0(&v95);
      if ( v97 )
      {
        *(_QWORD *)&v98 = 0;
        qfree();
      }
      sub_3CCF90(a2, (__int64)&v95);
      if ( v95 )
      {
        *(_QWORD *)&v96 = 0;
        qfree();
      }
    }
    return a2[1];
  }
  return result;
}

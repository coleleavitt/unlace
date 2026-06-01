__int64 __fastcall sub_D2F80(__int64 a1, __int64 a2, int a3)
{
  char *v4; // rdi
  __int64 v6; // r14
  char *v7; // rdx
  int v8; // eax
  __int64 v10; // rdx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  unsigned int tinfo_size; // eax
  char v14; // al
  __int64 v15; // rax
  unsigned int v16; // r13d
  _DWORD *v17; // rcx
  _DWORD *v18; // rdx
  _DWORD *v19; // rax
  int v20; // r15d
  int v21; // eax
  __int64 v22; // r14
  int v23; // r8d
  int v24; // r9d
  int v25; // ecx
  int v26; // eax
  int v27; // r15d
  _DWORD *v28; // rdi
  int v29; // eax
  int *v30; // rsi
  __int64 v31; // rdx
  int *v32; // rcx
  int *v33; // rax
  int v34; // eax
  __int64 v35; // rdi
  int v36; // eax
  _DWORD *v37; // rcx
  _DWORD *v38; // rdx
  _DWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // edx
  int v43; // [rsp-10h] [rbp-140h]
  int *v44; // [rsp+0h] [rbp-130h]
  int v45; // [rsp+8h] [rbp-128h]
  unsigned int v46; // [rsp+Ch] [rbp-124h]
  int *v47; // [rsp+10h] [rbp-120h]
  __m128i *v48; // [rsp+18h] [rbp-118h]
  __int64 v49; // [rsp+20h] [rbp-110h]
  unsigned __int64 v50; // [rsp+28h] [rbp-108h]
  __int64 v51; // [rsp+30h] [rbp-100h]
  __int64 v52; // [rsp+40h] [rbp-F0h]
  _BYTE *v53; // [rsp+48h] [rbp-E8h]
  int v54; // [rsp+50h] [rbp-E0h]
  int v55; // [rsp+50h] [rbp-E0h]
  int v56; // [rsp+54h] [rbp-DCh]
  __int64 v57; // [rsp+58h] [rbp-D8h]
  int v58; // [rsp+60h] [rbp-D0h] BYREF
  int v59; // [rsp+64h] [rbp-CCh] BYREF
  int v60; // [rsp+68h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+70h] [rbp-C0h] BYREF
  unsigned __int64 v62; // [rsp+78h] [rbp-B8h]
  __int64 v63; // [rsp+80h] [rbp-B0h]
  _BYTE v64[32]; // [rsp+90h] [rbp-A0h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-80h]
  __int64 v66; // [rsp+B8h] [rbp-78h]
  __int64 v67; // [rsp+C8h] [rbp-68h]
  __int64 v68; // [rsp+D0h] [rbp-60h]
  unsigned __int64 v69; // [rsp+F8h] [rbp-38h]

  v57 = a1;
  v4 = *(char **)(a2 + 456);
  v69 = __readfsqword(0x28u);
  if ( *(_DWORD *)v4 != a3 )
    goto LABEL_2;
  if ( !(unsigned __int8)sub_36E1B0(a2) )
  {
LABEL_59:
    v4 = *(char **)(a2 + 456);
LABEL_2:
    v49 = 104LL * a3;
    v6 = v49 + *(_QWORD *)(a2 + 432);
    v7 = &v4[4 * *(_QWORD *)(a2 + 464)];
    if ( v7 != v4 )
    {
      while ( *(_DWORD *)v4 != a3 )
      {
        v4 += 4;
        if ( v7 == v4 )
          goto LABEL_8;
      }
      if ( v7 != v4 )
      {
        memmove(v4, v4 + 4, v7 - v4 - 4);
        --*(_QWORD *)(a2 + 464);
      }
    }
LABEL_8:
    v8 = *(_DWORD *)(v6 + 24);
    BYTE1(v8) &= 0x7Eu;
    *(_DWORD *)(v6 + 24) = v8 | 0x100000;
    if ( *(_DWORD *)v6 == 2 )
    {
      v10 = *(_QWORD *)(v6 + 8);
      v11 = *(_DWORD **)v10;
      v12 = *(_QWORD *)v10 + 24LL * *(_QWORD *)(v10 + 8);
      if ( *(_QWORD *)v10 == v12 )
        return 1;
      while ( (unsigned int)(*v11 - 3) > 1 )
      {
        v11 += 6;
        if ( (_DWORD *)v12 == v11 )
          return 1;
      }
    }
    else if ( (unsigned int)(*(_DWORD *)v6 - 3) > 1 )
    {
      return 1;
    }
    v52 = *(_QWORD *)(a2 + 1504);
    if ( (unsigned __int8)sub_36F620(v52, *(unsigned int *)(v57 + 72)) )
      return 1;
    v63 = 0;
    tinfo_size = get_tinfo_size();
    v61 = 0;
    v62 = 0;
    v14 = sub_D2BA0(v57, &v61, (_DWORD *)v6, tinfo_size, 0);
    v51 = v61;
    if ( !v14 || (v50 = v62, v62 <= 1) )
    {
LABEL_53:
      if ( v51 )
        qfree();
      return 1;
    }
    v48 = sub_D21A0(a2);
    v15 = 0;
    v56 = 0;
    v47 = &v58;
    while ( 1 )
    {
      v16 = *(_DWORD *)(v51 + 4 * v15);
      v17 = *(_DWORD **)(v57 + 88);
      v18 = &v17[*(_QWORD *)(v57 + 96)];
      if ( v17 == v18 )
        goto LABEL_60;
      v19 = *(_DWORD **)(v57 + 88);
      while ( v16 != *v19 )
      {
        if ( v18 == ++v19 )
          goto LABEL_60;
      }
      if ( v19 == v18 || (v20 = v19 - v17, v20 == -1) )
      {
LABEL_60:
        v37 = *(_DWORD **)(v57 + 112);
        v38 = &v37[*(_QWORD *)(v57 + 120)];
        if ( v37 == v38 )
          goto LABEL_52;
        v39 = *(_DWORD **)(v57 + 112);
        while ( v16 != *v39 )
        {
          if ( v38 == ++v39 )
            goto LABEL_52;
        }
        if ( v38 == v39 )
          goto LABEL_52;
        v20 = v39 - v37;
        if ( v20 == -1 )
          goto LABEL_52;
        if ( *(_DWORD *)v57 != 3 )
          v20 = -1;
      }
      v44 = &v59;
      v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v52 + 32LL))(v52, v16);
      v54 = sub_1C55C0(v6, *(_QWORD *)(a2 + 1496), v16, v46, *(unsigned int *)(v6 + 88), v47, &v59);
      if ( !v54 || v58 < 0 || (v21 = v59, v59 > 0) )
      {
        if ( !under_debugger )
          sub_383060(52377);
LABEL_89:
        BUG();
      }
      v59 = -v59;
      if ( v20 == -1 )
      {
        if ( *(_QWORD *)(v57 + 120) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v57 + 80) + 112LL) + 200LL))(
                 *(_QWORD *)(*(_QWORD *)(v57 + 80) + 112LL),
                 **(unsigned int **)(v57 + 112)) )
          {
            LODWORD(v22) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v57 + 80) + 112LL)
                                                                     + 32LL))(
                             *(_QWORD *)(*(_QWORD *)(v57 + 80) + 112LL),
                             **(unsigned int **)(v57 + 112));
          }
          else
          {
            LODWORD(v22) = 8;
          }
          if ( *(_QWORD *)(v57 + 120) > 1u
            && *(_DWORD *)(*(_QWORD *)(v57 + 112) + 4LL) - **(_DWORD **)(v57 + 112) < (unsigned int)v22 )
          {
            LODWORD(v22) = round_down_power2();
          }
        }
        else
        {
          LODWORD(v22) = 8;
        }
        sub_32C150(&v60, v52, (unsigned int)v22);
      }
      else
      {
        v22 = (unsigned int)sub_11CA90((unsigned int)(v54 - v21));
        sub_32C270(&v60, v52, v22);
      }
      v53 = v64;
      sub_1EF690((unsigned int)v64, v52, v16, v22, (unsigned int)&v60, 0, -2);
      v25 = v43;
      if ( !v59 )
        goto LABEL_33;
      v26 = sub_1F06C0(a2 + 432, v64, 1, 0);
      v27 = v26;
      if ( v26 == -1 )
        goto LABEL_33;
      v28 = (_DWORD *)(*(_QWORD *)(a2 + 432) + 104LL * v26);
      if ( (unsigned int)(*v28 - 3) > 1 )
        goto LABEL_33;
      v42 = v28[2];
      v25 = (unsigned __int16)v42;
      if ( *v28 == 4 )
        v42 = (unsigned __int16)v42;
      if ( v16 == v42 )
      {
        if ( v28[22] > v59 )
        {
          if ( !under_debugger )
            sub_383060(52529);
          goto LABEL_89;
        }
        sub_1EF530(v28, &v60);
      }
      else
      {
LABEL_33:
        v29 = sub_1F6560(
                a2,
                (unsigned int)v64,
                0,
                v25,
                v23,
                v24,
                (unsigned int)&v59,
                v45,
                (_DWORD)v47,
                (_DWORD)v48,
                v49,
                v50,
                v51,
                (unsigned int)&v60,
                v52,
                (unsigned int)v64,
                v54,
                v57,
                v58,
                v60,
                v61);
        v30 = *(int **)(a2 + 456);
        v31 = *(_QWORD *)(a2 + 464);
        v27 = v29;
        v32 = &v30[v31];
        if ( v30 != v32 )
        {
          v33 = *(int **)(a2 + 456);
          while ( v27 != *v33 )
          {
            if ( v32 == ++v33 )
              goto LABEL_40;
          }
          if ( v33 != v32 )
          {
            if ( !under_debugger )
              sub_383060(51603);
            goto LABEL_89;
          }
        }
LABEL_40:
        if ( *(_QWORD *)(a2 + 472) < (unsigned __int64)(v31 + 1) )
        {
          v40 = qvector_reserve();
          v41 = *(_QWORD *)(a2 + 464);
          *(_QWORD *)(a2 + 456) = v40;
          v32 = (int *)(v40 + 4 * v41);
        }
        *v32 = v27;
        ++*(_QWORD *)(a2 + 464);
        *(_DWORD *)(*(_QWORD *)(a2 + 432) + 104LL * v27 + 24) |= 0x100u;
      }
      v6 = *(_QWORD *)(a2 + 432) + v49;
      sub_D20B0((__int64)v48, a3, v58, v27, v59, v54);
      if ( v59 )
      {
        v34 = sub_1F06C0(a2 + 432, v53, (unsigned int)v59, 0);
        if ( v34 != -1 && v27 != v34 )
        {
          v55 = v34;
          v35 = *(_QWORD *)(a2 + 432) + 104LL * v34;
          v36 = sub_1C55C0(v35, *(_QWORD *)(a2 + 1496), v16, v46, *(unsigned int *)(v35 + 88), v47, v44);
          sub_D20B0((__int64)v48, v55, v58, v27, v59, v36);
        }
      }
      clear_tinfo_t();
      if ( v67 )
      {
        v68 = 0;
        qfree();
      }
      if ( v65 )
      {
        v66 = 0;
        qfree();
      }
      cleanup_argloc();
      clear_tinfo_t();
LABEL_52:
      v15 = ++v56;
      if ( v56 >= v50 )
        goto LABEL_53;
    }
  }
  if ( *(_DWORD *)(v57 + 72) != 128 )
  {
    *(_DWORD *)(a2 + 4) &= 0xFFFFFFCF;
    goto LABEL_59;
  }
  return 0;
}

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
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r13d
  _DWORD *v18; // rcx
  _DWORD *v19; // rdx
  _DWORD *v20; // rax
  int v21; // r15d
  int v22; // eax
  __int64 v23; // r14
  int v24; // r8d
  int v25; // r9d
  int v26; // ecx
  signed int v27; // eax
  signed int v28; // r15d
  _DWORD *v29; // rdi
  signed int v30; // eax
  __int64 v31; // rsi
  __int64 v32; // rdx
  signed int *v33; // rcx
  signed int *v34; // rax
  unsigned __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rdi
  int v38; // eax
  _DWORD *v39; // rcx
  _DWORD *v40; // rdx
  _DWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  int v44; // edx
  int v45; // [rsp-10h] [rbp-140h]
  int *v46; // [rsp+0h] [rbp-130h]
  int v47; // [rsp+8h] [rbp-128h]
  unsigned int v48; // [rsp+Ch] [rbp-124h]
  int *v49; // [rsp+10h] [rbp-120h]
  __m128i *v50; // [rsp+18h] [rbp-118h]
  __int64 v51; // [rsp+20h] [rbp-110h]
  unsigned __int64 v52; // [rsp+28h] [rbp-108h]
  __int64 v53; // [rsp+30h] [rbp-100h]
  __int64 v54; // [rsp+40h] [rbp-F0h]
  _BYTE *v55; // [rsp+48h] [rbp-E8h]
  int v56; // [rsp+50h] [rbp-E0h]
  int v57; // [rsp+50h] [rbp-E0h]
  int v58; // [rsp+54h] [rbp-DCh]
  __int64 v59; // [rsp+58h] [rbp-D8h]
  int v60; // [rsp+60h] [rbp-D0h] BYREF
  int v61; // [rsp+64h] [rbp-CCh] BYREF
  int v62; // [rsp+68h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+70h] [rbp-C0h] BYREF
  unsigned __int64 v64; // [rsp+78h] [rbp-B8h]
  __int64 v65; // [rsp+80h] [rbp-B0h]
  _BYTE v66[32]; // [rsp+90h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+B0h] [rbp-80h]
  __int64 v68; // [rsp+B8h] [rbp-78h]
  __int64 v69; // [rsp+C8h] [rbp-68h]
  __int64 v70; // [rsp+D0h] [rbp-60h]
  unsigned __int64 v71; // [rsp+F8h] [rbp-38h]

  v59 = a1;
  v4 = *(char **)(a2 + 456);
  v71 = __readfsqword(0x28u);
  if ( *(_DWORD *)v4 != a3 )
    goto LABEL_2;
  if ( !(unsigned __int8)sub_36E1B0(a2) )
  {
LABEL_59:
    v4 = *(char **)(a2 + 456);
LABEL_2:
    v51 = 104LL * a3;
    v6 = v51 + *(_QWORD *)(a2 + 432);
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
    v54 = *(_QWORD *)(a2 + 1504);
    if ( (unsigned __int8)sub_36F620(v54, *(unsigned int *)(v59 + 72)) )
      return 1;
    v65 = 0;
    tinfo_size = get_tinfo_size();
    v63 = 0;
    v64 = 0;
    v14 = sub_D2BA0(v59, (__int64)&v63, (_DWORD *)v6, tinfo_size, 0);
    v53 = v63;
    if ( !v14 || (v52 = v64, v64 <= 1) )
    {
LABEL_53:
      if ( v53 )
        qfree(v53);
      return 1;
    }
    v50 = sub_D21A0(a2, (__int64)&v63, v15, v63);
    v16 = 0;
    v58 = 0;
    v49 = &v60;
    while ( 1 )
    {
      v17 = *(_DWORD *)(v53 + 4 * v16);
      v18 = *(_DWORD **)(v59 + 88);
      v19 = &v18[*(_QWORD *)(v59 + 96)];
      if ( v18 == v19 )
        goto LABEL_60;
      v20 = *(_DWORD **)(v59 + 88);
      while ( v17 != *v20 )
      {
        if ( v19 == ++v20 )
          goto LABEL_60;
      }
      if ( v20 == v19 || (v21 = v20 - v18, v21 == -1) )
      {
LABEL_60:
        v39 = *(_DWORD **)(v59 + 112);
        v40 = &v39[*(_QWORD *)(v59 + 120)];
        if ( v39 == v40 )
          goto LABEL_52;
        v41 = *(_DWORD **)(v59 + 112);
        while ( v17 != *v41 )
        {
          if ( v40 == ++v41 )
            goto LABEL_52;
        }
        if ( v40 == v41 )
          goto LABEL_52;
        v21 = v41 - v39;
        if ( v21 == -1 )
          goto LABEL_52;
        if ( *(_DWORD *)v59 != 3 )
          v21 = -1;
      }
      v46 = &v61;
      v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v54 + 32LL))(v54, v17);
      v56 = sub_1C55C0(v6, *(_QWORD *)(a2 + 1496), v17, v48, *(unsigned int *)(v6 + 88), v49, &v61);
      if ( !v56 || v60 < 0 || (v22 = v61, v61 > 0) )
      {
        if ( !under_debugger )
          sub_383060(52377);
LABEL_89:
        BUG();
      }
      v61 = -v61;
      if ( v21 == -1 )
      {
        if ( *(_QWORD *)(v59 + 120) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v59 + 80) + 112LL) + 200LL))(
                 *(_QWORD *)(*(_QWORD *)(v59 + 80) + 112LL),
                 **(unsigned int **)(v59 + 112)) )
          {
            LODWORD(v23) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v59 + 80) + 112LL)
                                                                     + 32LL))(
                             *(_QWORD *)(*(_QWORD *)(v59 + 80) + 112LL),
                             **(unsigned int **)(v59 + 112));
          }
          else
          {
            LODWORD(v23) = 8;
          }
          if ( *(_QWORD *)(v59 + 120) > 1u
            && *(_DWORD *)(*(_QWORD *)(v59 + 112) + 4LL) - **(_DWORD **)(v59 + 112) < (unsigned int)v23 )
          {
            LODWORD(v23) = round_down_power2();
          }
        }
        else
        {
          LODWORD(v23) = 8;
        }
        sub_32C150(&v62, v54, (unsigned int)v23);
      }
      else
      {
        v23 = (unsigned int)sub_11CA90((unsigned int)(v56 - v22));
        sub_32C270(&v62, v54, v23);
      }
      v55 = v66;
      sub_1EF690((unsigned int)v66, v54, v17, v23, (unsigned int)&v62, 0, -2);
      v26 = v45;
      if ( !v61 )
        goto LABEL_33;
      v27 = sub_1F06C0(a2 + 432, v66, 1, 0);
      v28 = v27;
      if ( v27 == -1 )
        goto LABEL_33;
      v29 = (_DWORD *)(*(_QWORD *)(a2 + 432) + 104LL * v27);
      if ( (unsigned int)(*v29 - 3) > 1 )
        goto LABEL_33;
      v44 = v29[2];
      v26 = (unsigned __int16)v44;
      if ( *v29 == 4 )
        v44 = (unsigned __int16)v44;
      if ( v17 == v44 )
      {
        if ( v29[22] > v61 )
        {
          if ( !under_debugger )
            sub_383060(52529);
          goto LABEL_89;
        }
        sub_1EF530(v29, &v62);
      }
      else
      {
LABEL_33:
        v30 = sub_1F6560(
                a2,
                (unsigned int)v66,
                0,
                v26,
                v24,
                v25,
                (unsigned int)&v61,
                v47,
                (_DWORD)v49,
                (_DWORD)v50,
                v51,
                v52,
                v53,
                (unsigned int)&v62,
                v54,
                (unsigned int)v66,
                v56,
                v59,
                v60,
                v62,
                v63);
        v31 = *(_QWORD *)(a2 + 456);
        v32 = *(_QWORD *)(a2 + 464);
        v28 = v30;
        v33 = (signed int *)(v31 + 4 * v32);
        if ( (signed int *)v31 != v33 )
        {
          v34 = *(signed int **)(a2 + 456);
          while ( v28 != *v34 )
          {
            if ( v33 == ++v34 )
              goto LABEL_40;
          }
          if ( v34 != v33 )
          {
            if ( !under_debugger )
              sub_383060(51603);
            goto LABEL_89;
          }
        }
LABEL_40:
        v35 = v32 + 1;
        if ( *(_QWORD *)(a2 + 472) < v35 )
        {
          v42 = qvector_reserve(a2 + 456, v31, v35, 4);
          v43 = *(_QWORD *)(a2 + 464);
          *(_QWORD *)(a2 + 456) = v42;
          v33 = (signed int *)(v42 + 4 * v43);
        }
        *v33 = v28;
        ++*(_QWORD *)(a2 + 464);
        *(_DWORD *)(*(_QWORD *)(a2 + 432) + 104LL * v28 + 24) |= 0x100u;
      }
      v6 = *(_QWORD *)(a2 + 432) + v51;
      sub_D20B0((__int64)v50, a3, v60, v28, v61, v56);
      if ( v61 )
      {
        v36 = sub_1F06C0(a2 + 432, v55, (unsigned int)v61, 0);
        if ( v36 != -1 && v28 != v36 )
        {
          v57 = v36;
          v37 = *(_QWORD *)(a2 + 432) + 104LL * v36;
          v38 = sub_1C55C0(v37, *(_QWORD *)(a2 + 1496), v17, v48, *(unsigned int *)(v37 + 88), v49, v46);
          sub_D20B0((__int64)v50, v57, v60, v28, v61, v38);
        }
      }
      clear_tinfo_t();
      if ( v69 )
      {
        v70 = 0;
        qfree(v69);
      }
      if ( v67 )
      {
        v68 = 0;
        qfree(v67);
      }
      cleanup_argloc();
      clear_tinfo_t();
LABEL_52:
      v16 = ++v58;
      if ( v58 >= v52 )
        goto LABEL_53;
    }
  }
  if ( *(_DWORD *)(v59 + 72) != 128 )
  {
    *(_DWORD *)(a2 + 4) &= 0xFFFFFFCF;
    goto LABEL_59;
  }
  return 0;
}

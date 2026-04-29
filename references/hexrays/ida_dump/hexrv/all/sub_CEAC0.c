__int64 __fastcall sub_CEAC0(__int64 a1, __int64 a2, int a3)
{
  char *v4; // rdi
  __int64 v6; // r14
  char *v7; // rdx
  int v8; // eax
  __int64 v10; // rdx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned int tinfo_size; // eax
  char v15; // al
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
  int v27; // eax
  int v28; // r15d
  _DWORD *v29; // rdi
  int v30; // eax
  int *v31; // rsi
  __int64 v32; // rdx
  int *v33; // rcx
  int *v34; // rax
  unsigned __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rdi
  int v38; // eax
  _DWORD *v39; // rcx
  _DWORD *v40; // rdx
  _DWORD *v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // edx
  int v46; // [rsp-10h] [rbp-140h]
  int *v47; // [rsp+0h] [rbp-130h]
  int v48; // [rsp+8h] [rbp-128h]
  unsigned int v49; // [rsp+Ch] [rbp-124h]
  int *v50; // [rsp+10h] [rbp-120h]
  __m128i *v51; // [rsp+18h] [rbp-118h]
  __int64 v52; // [rsp+20h] [rbp-110h]
  unsigned __int64 v53; // [rsp+28h] [rbp-108h]
  __int64 v54; // [rsp+30h] [rbp-100h]
  int *v55; // [rsp+38h] [rbp-F8h]
  __int64 v56; // [rsp+40h] [rbp-F0h]
  _BYTE *v57; // [rsp+48h] [rbp-E8h]
  int v58; // [rsp+50h] [rbp-E0h]
  int v59; // [rsp+50h] [rbp-E0h]
  int v60; // [rsp+54h] [rbp-DCh]
  __int64 v61; // [rsp+58h] [rbp-D8h]
  int v62; // [rsp+60h] [rbp-D0h] BYREF
  int v63; // [rsp+64h] [rbp-CCh] BYREF
  int v64; // [rsp+68h] [rbp-C8h] BYREF
  __int64 v65; // [rsp+70h] [rbp-C0h] BYREF
  unsigned __int64 v66; // [rsp+78h] [rbp-B8h]
  __int64 v67; // [rsp+80h] [rbp-B0h]
  _BYTE v68[32]; // [rsp+90h] [rbp-A0h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-80h]
  __int64 v70; // [rsp+B8h] [rbp-78h]
  __int64 v71; // [rsp+C8h] [rbp-68h]
  __int64 v72; // [rsp+D0h] [rbp-60h]
  char v73[24]; // [rsp+E0h] [rbp-50h] BYREF
  unsigned __int64 v74; // [rsp+F8h] [rbp-38h]

  v61 = a1;
  v4 = *(char **)(a2 + 456);
  v74 = __readfsqword(0x28u);
  if ( *(_DWORD *)v4 != a3 )
    goto LABEL_2;
  if ( !(unsigned __int8)sub_368F30(a2) )
  {
LABEL_59:
    v4 = *(char **)(a2 + 456);
LABEL_2:
    v52 = 104LL * a3;
    v6 = v52 + *(_QWORD *)(a2 + 432);
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
    v56 = *(_QWORD *)(a2 + 1504);
    if ( (unsigned __int8)sub_36A3A0(v56, *(unsigned int *)(v61 + 72)) )
      return 1;
    v13 = *(_QWORD *)(v6 + 80);
    v67 = 0;
    tinfo_size = get_tinfo_size(0, v13, 0);
    v65 = 0;
    v66 = 0;
    v15 = sub_CE6E0(v61, &v65, (__int64 *)v6, tinfo_size, 0);
    v54 = v65;
    if ( !v15 || (v53 = v66, v66 <= 1) )
    {
LABEL_53:
      if ( v54 )
        qfree(v54);
      return 1;
    }
    v51 = sub_CDCE0(a2);
    v16 = 0;
    v60 = 0;
    v50 = &v62;
    while ( 1 )
    {
      v17 = *(_DWORD *)(v54 + 4 * v16);
      v18 = *(_DWORD **)(v61 + 88);
      v19 = &v18[*(_QWORD *)(v61 + 96)];
      if ( v18 == v19 )
        goto LABEL_60;
      v20 = *(_DWORD **)(v61 + 88);
      while ( v17 != *v20 )
      {
        if ( v19 == ++v20 )
          goto LABEL_60;
      }
      if ( v20 == v19 || (v21 = v20 - v18, v21 == -1) )
      {
LABEL_60:
        v39 = *(_DWORD **)(v61 + 112);
        v40 = &v39[*(_QWORD *)(v61 + 120)];
        if ( v39 == v40 )
          goto LABEL_52;
        v41 = *(_DWORD **)(v61 + 112);
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
        if ( *(_DWORD *)v61 != 3 )
          v21 = -1;
      }
      v47 = &v63;
      v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v56 + 32LL))(v56, v17);
      v58 = sub_1C0F40(v6, *(_QWORD *)(a2 + 1496), v17, v49, *(unsigned int *)(v6 + 88), v50, &v63);
      if ( !v58 || v62 < 0 || (v22 = v63, v63 > 0) )
      {
        if ( !under_debugger )
          sub_37DDE0(52377);
LABEL_89:
        BUG();
      }
      v63 = -v63;
      if ( v21 == -1 )
      {
        if ( *(_QWORD *)(v61 + 120) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v61 + 80) + 112LL) + 200LL))(
                 *(_QWORD *)(*(_QWORD *)(v61 + 80) + 112LL),
                 **(unsigned int **)(v61 + 112)) )
          {
            LODWORD(v23) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v61 + 80) + 112LL)
                                                                     + 32LL))(
                             *(_QWORD *)(*(_QWORD *)(v61 + 80) + 112LL),
                             **(unsigned int **)(v61 + 112));
          }
          else
          {
            LODWORD(v23) = 8;
          }
          if ( *(_QWORD *)(v61 + 120) > 1u )
          {
            v42 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v61 + 112) + 4LL) - **(_DWORD **)(v61 + 112));
            if ( (unsigned int)v42 < (unsigned int)v23 )
              LODWORD(v23) = round_down_power2(v42);
          }
        }
        else
        {
          LODWORD(v23) = 8;
        }
        v55 = &v64;
        sub_326EA0(&v64, v56, (unsigned int)v23);
      }
      else
      {
        v23 = (unsigned int)sub_1185D0((unsigned int)(v58 - v22));
        v55 = &v64;
        sub_326FC0(&v64, v56, v23);
      }
      v57 = v68;
      sub_1EAA90((unsigned int)v68, v56, v17, v23, (unsigned int)&v64, 0, -2);
      v26 = v46;
      if ( !v63 )
        goto LABEL_33;
      v27 = sub_1EBAC0(a2 + 432, v68, 1, 0);
      v28 = v27;
      if ( v27 == -1 )
        goto LABEL_33;
      v29 = (_DWORD *)(*(_QWORD *)(a2 + 432) + 104LL * v27);
      if ( (unsigned int)(*v29 - 3) > 1 )
        goto LABEL_33;
      v45 = v29[2];
      v26 = (unsigned __int16)v45;
      if ( *v29 == 4 )
        v45 = (unsigned __int16)v45;
      if ( v17 == v45 )
      {
        if ( v29[22] > v63 )
        {
          if ( !under_debugger )
            sub_37DDE0(52529);
          goto LABEL_89;
        }
        sub_1EA930(v29, &v64);
      }
      else
      {
LABEL_33:
        v30 = sub_1F1960(
                a2,
                (unsigned int)v68,
                0,
                v26,
                v24,
                v25,
                (unsigned int)&v63,
                v48,
                (_DWORD)v50,
                (_DWORD)v51,
                v52,
                v53,
                v54,
                (unsigned int)&v64,
                v56,
                (unsigned int)v68,
                v58,
                v61,
                v62,
                v64,
                v65);
        v31 = *(int **)(a2 + 456);
        v32 = *(_QWORD *)(a2 + 464);
        v28 = v30;
        v33 = &v31[v32];
        if ( v31 != v33 )
        {
          v34 = *(int **)(a2 + 456);
          while ( v28 != *v34 )
          {
            if ( v33 == ++v34 )
              goto LABEL_40;
          }
          if ( v34 != v33 )
          {
            if ( !under_debugger )
              sub_37DDE0(51603);
            goto LABEL_89;
          }
        }
LABEL_40:
        v35 = v32 + 1;
        if ( *(_QWORD *)(a2 + 472) < v35 )
        {
          v43 = qvector_reserve(a2 + 456, v31, v35, 4);
          v44 = *(_QWORD *)(a2 + 464);
          *(_QWORD *)(a2 + 456) = v43;
          v33 = (int *)(v43 + 4 * v44);
        }
        *v33 = v28;
        ++*(_QWORD *)(a2 + 464);
        *(_DWORD *)(*(_QWORD *)(a2 + 432) + 104LL * v28 + 24) |= 0x100u;
      }
      v6 = *(_QWORD *)(a2 + 432) + v52;
      sub_CDBF0((__int64)v51, a3, v62, v28, v63, v58);
      if ( v63 )
      {
        v36 = sub_1EBAC0(a2 + 432, v57, (unsigned int)v63, 0);
        if ( v36 != -1 && v28 != v36 )
        {
          v59 = v36;
          v37 = *(_QWORD *)(a2 + 432) + 104LL * v36;
          v38 = sub_1C0F40(v37, *(_QWORD *)(a2 + 1496), v17, v49, *(unsigned int *)(v37 + 88), v50, v47);
          sub_CDBF0((__int64)v51, v59, v62, v28, v63, v38);
        }
      }
      clear_tinfo_t(v73);
      if ( v71 )
      {
        v72 = 0;
        qfree(v71);
      }
      if ( v69 )
      {
        v70 = 0;
        qfree(v69);
      }
      cleanup_argloc(v57);
      clear_tinfo_t(v55);
LABEL_52:
      v16 = ++v60;
      if ( v60 >= v53 )
        goto LABEL_53;
    }
  }
  if ( *(_DWORD *)(v61 + 72) != 128 )
  {
    *(_DWORD *)(a2 + 4) &= 0xFFFFFFCF;
    goto LABEL_59;
  }
  return 0;
}

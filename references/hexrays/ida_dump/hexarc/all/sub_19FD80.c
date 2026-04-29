__int64 __fastcall sub_19FD80(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v5)(void); // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // ebp
  int v23; // edx
  __int64 v24; // rsi
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  _DWORD *v28; // rcx
  _DWORD *v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // ebp
  _DWORD *v33; // rdx
  _DWORD *v34; // rax
  __int64 v35; // rdi
  int v36; // eax
  char v37; // al
  __int64 v38; // rdi
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  int v46; // [rsp+0h] [rbp-E8h]
  int v47; // [rsp+8h] [rbp-E0h]
  int v48; // [rsp+Ch] [rbp-DCh]
  __int64 *v49; // [rsp+10h] [rbp-D8h]
  __int64 *v50; // [rsp+18h] [rbp-D0h]
  _DWORD v51[4]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+30h] [rbp-B8h]
  int v53; // [rsp+38h] [rbp-B0h]
  __int64 v54; // [rsp+40h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-A0h]
  __int64 v56; // [rsp+58h] [rbp-90h]
  __int64 v57; // [rsp+60h] [rbp-88h]
  __int128 v58; // [rsp+68h] [rbp-80h]
  __int64 v59; // [rsp+78h] [rbp-70h]
  __int128 v60; // [rsp+80h] [rbp-68h]
  __int64 v61; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v62; // [rsp+98h] [rbp-50h]
  __int64 v63; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v64; // [rsp+A8h] [rbp-40h]

  v3 = *(_QWORD *)a1;
  v64 = __readfsqword(0x28u);
  v5 = *(unsigned __int8 (**)(void))(v3 + 56);
  if ( (char *)v5 != (char *)sub_18E4E0 )
  {
    if ( v5() )
      goto LABEL_3;
LABEL_48:
    if ( !under_debugger )
      sub_37B760(52057);
    goto LABEL_68;
  }
  if ( !*(_QWORD *)(a1 + 72) )
    goto LABEL_48;
LABEL_3:
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  if ( *(_BYTE *)(a1 + 116) )
  {
    if ( *(_QWORD *)(a1 + 72) != 1 )
    {
      v48 = 0;
      v7 = 0;
      v50 = &v61;
      v49 = &v54;
      do
      {
        v8 = 5 * v7;
        v9 = *(_QWORD *)(a1 + 64);
        v58 = 0;
        v10 = 8 * v8;
        v62 = 0xFFFFFFFF00000000LL;
        si128 = _mm_load_si128((const __m128i *)&xmmword_3FA120);
        v56 = 1;
        v57 = 0;
        v59 = 0;
        v61 = 0;
        v63 = 0;
        v60 = 0;
        v11 = *(_QWORD *)(v9 + 8 * v8 + 16);
        v54 = 0;
        si128.m128i_i64[1] = v11;
        v12 = *(_QWORD *)(a1 + 8);
        HIDWORD(v62) = 1;
        copy_tinfo_t(v50, v12 + 248);
        LODWORD(v62) = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL), 0);
        v13 = *(_QWORD *)(a1 + 64);
        LODWORD(v54) = 1;
        v14 = *(_QWORD *)(v13 + v10 + 24);
        v51[0] = 0;
        if ( v14 < 0 )
          v14 = 0;
        si128.m128i_i64[0] = v14;
        copy_argloc(v51, v49);
        v52 = si128.m128i_i64[1];
        v15 = sub_1E91C0(v6 + 432, v51);
        cleanup_argloc(v51);
        if ( v15 == -1 )
          v15 = (int)sub_1EF1E0(
                       v6,
                       (_DWORD)v49,
                       0,
                       v16,
                       v17,
                       v18,
                       v46,
                       v47,
                       (_DWORD)v49,
                       (_DWORD)v50,
                       v51[0],
                       v51[2],
                       v52,
                       v53,
                       v54,
                       si128.m128i_i32[0],
                       si128.m128i_i32[2],
                       v56,
                       v57,
                       v58,
                       *((__int64 *)&v58 + 1));
        v19 = *(_QWORD *)(v6 + 432);
        v20 = v19 + 104 * v15;
        if ( *(_DWORD *)(v20 + 92) == 1 )
        {
          v22 = v15;
        }
        else
        {
          v21 = *(int *)(v6 + 792);
          if ( v21 <= v15 )
          {
            if ( !under_debugger )
              sub_37B760(51466);
            goto LABEL_68;
          }
          v22 = v15;
          if ( (int)v21 > (int)v15 )
          {
            v23 = v15;
            v24 = 104LL * (int)v15;
            while ( 1 )
            {
              v25 = v24 + v19;
              if ( *(_DWORD *)v25 != 1 || *(_QWORD *)(*(_QWORD *)(a1 + 64) + v10 + 24) > *(_QWORD *)(v25 + 8) )
                break;
              *(_DWORD *)(v25 + 92) = 1;
              ++v23;
              v24 += 104;
              if ( *(_DWORD *)(v6 + 792) <= v23 )
                goto LABEL_18;
              v19 = *(_QWORD *)(v6 + 432);
            }
            if ( !under_debugger )
              sub_37B760(52544);
LABEL_68:
            BUG();
          }
        }
LABEL_18:
        v26 = *(_DWORD *)(v20 + 24);
        BYTE1(v26) &= 0x7Eu;
        *(_DWORD *)(v20 + 24) = v26 | 0x100000;
        v27 = a2[1];
        v28 = (_DWORD *)(*a2 + 4 * v27);
        if ( (_DWORD *)*a2 == v28 )
          goto LABEL_43;
        v29 = (_DWORD *)*a2;
        while ( v22 != *v29 )
        {
          if ( v28 == ++v29 )
            goto LABEL_43;
        }
        if ( v28 == v29 )
        {
LABEL_43:
          v41 = v27 + 1;
          if ( a2[2] < v41 )
          {
            v42 = qvector_reserve(a2, *a2, v41, 4);
            v43 = a2[1];
            *a2 = v42;
            v28 = (_DWORD *)(v42 + 4 * v43);
          }
          *v28 = v22;
          ++a2[1];
        }
        clear_tinfo_t(v50);
        if ( v59 )
        {
          *(_QWORD *)&v60 = 0;
          qfree(v59);
        }
        if ( v57 )
        {
          *(_QWORD *)&v58 = 0;
          qfree(v57);
        }
        cleanup_argloc(v49);
        v7 = ++v48;
      }
      while ( v48 < (unsigned __int64)(*(_QWORD *)(a1 + 72) - 1LL) );
    }
    v30 = sub_198800(a1);
    v31 = a2[1];
    v32 = v30;
    v33 = (_DWORD *)(*a2 + 4 * v31);
    v34 = (_DWORD *)*a2;
    if ( (_DWORD *)*a2 == v33 )
      goto LABEL_52;
    while ( v32 != *v34 )
    {
      if ( v33 == ++v34 )
        goto LABEL_52;
    }
    if ( v34 == v33 )
    {
LABEL_52:
      if ( a2[2] < (unsigned __int64)(v31 + 1) )
      {
        v44 = qvector_reserve(a2, *a2, v31 + 1, 4);
        v45 = a2[1];
        *a2 = v44;
        v33 = (_DWORD *)(v44 + 4 * v45);
      }
      *v33 = v32;
      ++a2[1];
      if ( !*(_BYTE *)(v6 + 320) )
        goto LABEL_34;
LABEL_41:
      v40 = *(_QWORD *)(v6 + 464);
      if ( !v40 )
      {
        if ( !under_debugger )
          sub_37B760(51516);
        goto LABEL_68;
      }
      return *(unsigned int *)(*(_QWORD *)(v6 + 456) + 4 * v40 - 4);
    }
  }
  if ( *(_BYTE *)(v6 + 320) )
    goto LABEL_41;
LABEL_34:
  v35 = *(_QWORD *)(a1 + 16);
  v36 = *(_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(v35 + 8) != 3 )
    v36 += *(_DWORD *)(v35 + 48);
  if ( v36 <= 0 && (unsigned int)(*(_DWORD *)(v6 + 72) - 208) > 0x2F )
  {
    if ( !under_debugger )
      sub_37B760(51468);
    goto LABEL_68;
  }
  v37 = sub_19EEC0(v35, 1, 0);
  v38 = *(_QWORD *)(a1 + 16);
  if ( v37 )
  {
    sub_1930B0((_QWORD *)v38, (_QWORD *)(a1 + 88));
    return 0xFFFFFFFFLL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 112) < *(_DWORD *)(v38 + 24)
      && ((getinf(57) & 0xF) != 6 || !(unsigned __int8)getinf_flag(3, 4) || !(unsigned __int8)getinf_flag(67, 16)) )
    {
      sub_19ED90(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 112), *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL));
    }
    return 0xFFFFFFFFLL;
  }
}

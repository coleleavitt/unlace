__int64 __fastcall sub_1A6580(__int64 a1, __int64 *a2)
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
  __int64 v14; // r15
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // ebp
  int v22; // edx
  __int64 v23; // rsi
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  _DWORD *v27; // rcx
  _DWORD *v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  int v31; // ebp
  _DWORD *v32; // rdx
  _DWORD *v33; // rax
  __int64 v34; // rdi
  int v35; // eax
  char v36; // al
  __int64 v37; // rdi
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // [rsp+0h] [rbp-E8h]
  int v46; // [rsp+8h] [rbp-E0h]
  int v47; // [rsp+Ch] [rbp-DCh]
  __int64 *v48; // [rsp+10h] [rbp-D8h]
  __int64 *v49; // [rsp+18h] [rbp-D0h]
  _DWORD v50[4]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+30h] [rbp-B8h]
  int v52; // [rsp+38h] [rbp-B0h]
  __int64 v53; // [rsp+40h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-A0h]
  __int64 v55; // [rsp+58h] [rbp-90h]
  __int64 v56; // [rsp+60h] [rbp-88h]
  __int128 v57; // [rsp+68h] [rbp-80h]
  __int64 v58; // [rsp+78h] [rbp-70h]
  __int128 v59; // [rsp+80h] [rbp-68h]
  __int64 v60; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v61; // [rsp+98h] [rbp-50h]
  __int64 v62; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v63; // [rsp+A8h] [rbp-40h]

  v3 = *(_QWORD *)a1;
  v63 = __readfsqword(0x28u);
  v5 = *(unsigned __int8 (**)(void))(v3 + 56);
  if ( (char *)v5 != (char *)sub_194BA0 )
  {
    if ( v5() )
      goto LABEL_3;
LABEL_48:
    if ( !under_debugger )
      sub_383060(52057);
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
      v47 = 0;
      v7 = 0;
      v49 = &v60;
      v48 = &v53;
      do
      {
        v8 = 5 * v7;
        v9 = *(_QWORD *)(a1 + 64);
        v57 = 0;
        v10 = 8 * v8;
        v61 = 0xFFFFFFFF00000000LL;
        si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
        v55 = 1;
        v56 = 0;
        v58 = 0;
        v60 = 0;
        v62 = 0;
        v59 = 0;
        v11 = *(_QWORD *)(v9 + 8 * v8 + 16);
        v53 = 0;
        si128.m128i_i64[1] = v11;
        HIDWORD(v61) = 1;
        copy_tinfo_t();
        LODWORD(v61) = get_tinfo_size();
        v12 = *(_QWORD *)(a1 + 64);
        LODWORD(v53) = 1;
        v13 = *(_QWORD *)(v12 + v10 + 24);
        v50[0] = 0;
        if ( v13 < 0 )
          v13 = 0;
        si128.m128i_i64[0] = v13;
        copy_argloc();
        v51 = si128.m128i_i64[1];
        v14 = sub_1F0540(v6 + 432, v50);
        cleanup_argloc();
        if ( v14 == -1 )
          v14 = (int)sub_1F6560(
                       v6,
                       (_DWORD)v48,
                       0,
                       v15,
                       v16,
                       v17,
                       v45,
                       v46,
                       (_DWORD)v48,
                       (_DWORD)v49,
                       v50[0],
                       v50[2],
                       v51,
                       v52,
                       v53,
                       si128.m128i_i32[0],
                       si128.m128i_i32[2],
                       v55,
                       v56,
                       v57,
                       *((__int64 *)&v57 + 1));
        v18 = *(_QWORD *)(v6 + 432);
        v19 = v18 + 104 * v14;
        if ( *(_DWORD *)(v19 + 92) == 1 )
        {
          v21 = v14;
        }
        else
        {
          v20 = *(int *)(v6 + 792);
          if ( v20 <= v14 )
          {
            if ( !under_debugger )
              sub_383060(51466);
            goto LABEL_68;
          }
          v21 = v14;
          if ( (int)v20 > (int)v14 )
          {
            v22 = v14;
            v23 = 104LL * (int)v14;
            while ( 1 )
            {
              v24 = v23 + v18;
              if ( *(_DWORD *)v24 != 1 || *(_QWORD *)(*(_QWORD *)(a1 + 64) + v10 + 24) > *(_QWORD *)(v24 + 8) )
                break;
              *(_DWORD *)(v24 + 92) = 1;
              ++v22;
              v23 += 104;
              if ( *(_DWORD *)(v6 + 792) <= v22 )
                goto LABEL_18;
              v18 = *(_QWORD *)(v6 + 432);
            }
            if ( !under_debugger )
              sub_383060(52544);
LABEL_68:
            BUG();
          }
        }
LABEL_18:
        v25 = *(_DWORD *)(v19 + 24);
        BYTE1(v25) &= 0x7Eu;
        *(_DWORD *)(v19 + 24) = v25 | 0x100000;
        v26 = a2[1];
        v27 = (_DWORD *)(*a2 + 4 * v26);
        if ( (_DWORD *)*a2 == v27 )
          goto LABEL_43;
        v28 = (_DWORD *)*a2;
        while ( v21 != *v28 )
        {
          if ( v27 == ++v28 )
            goto LABEL_43;
        }
        if ( v27 == v28 )
        {
LABEL_43:
          v40 = v26 + 1;
          if ( a2[2] < v40 )
          {
            v41 = qvector_reserve((__int64)a2, *a2, v40, 4);
            v42 = a2[1];
            *a2 = v41;
            v27 = (_DWORD *)(v41 + 4 * v42);
          }
          *v27 = v21;
          ++a2[1];
        }
        clear_tinfo_t();
        if ( v58 )
        {
          *(_QWORD *)&v59 = 0;
          qfree(v58);
        }
        if ( v56 )
        {
          *(_QWORD *)&v57 = 0;
          qfree(v56);
        }
        cleanup_argloc();
        v7 = ++v47;
      }
      while ( v47 < (unsigned __int64)(*(_QWORD *)(a1 + 72) - 1LL) );
    }
    v29 = sub_19F000(a1);
    v30 = a2[1];
    v31 = v29;
    v32 = (_DWORD *)(*a2 + 4 * v30);
    v33 = (_DWORD *)*a2;
    if ( (_DWORD *)*a2 == v32 )
      goto LABEL_52;
    while ( v31 != *v33 )
    {
      if ( v32 == ++v33 )
        goto LABEL_52;
    }
    if ( v33 == v32 )
    {
LABEL_52:
      if ( a2[2] < (unsigned __int64)(v30 + 1) )
      {
        v43 = qvector_reserve((__int64)a2, *a2, v30 + 1, 4);
        v44 = a2[1];
        *a2 = v43;
        v32 = (_DWORD *)(v43 + 4 * v44);
      }
      *v32 = v31;
      ++a2[1];
      if ( !*(_BYTE *)(v6 + 320) )
        goto LABEL_34;
LABEL_41:
      v39 = *(_QWORD *)(v6 + 464);
      if ( !v39 )
      {
        if ( !under_debugger )
          sub_383060(51516);
        goto LABEL_68;
      }
      return *(unsigned int *)(*(_QWORD *)(v6 + 456) + 4 * v39 - 4);
    }
  }
  if ( *(_BYTE *)(v6 + 320) )
    goto LABEL_41;
LABEL_34:
  v34 = *(_QWORD *)(a1 + 16);
  v35 = *(_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(v34 + 8) != 3 )
    v35 += *(_DWORD *)(v34 + 48);
  if ( v35 <= 0 && (unsigned int)(*(_DWORD *)(v6 + 72) - 208) > 0x2F )
  {
    if ( !under_debugger )
      sub_383060(51468);
    goto LABEL_68;
  }
  v36 = sub_1A56C0(v34, 1, 0);
  v37 = *(_QWORD *)(a1 + 16);
  if ( v36 )
  {
    sub_1998E0((_QWORD *)v37, (_QWORD *)(a1 + 88));
    return 0xFFFFFFFFLL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 112) < *(_DWORD *)(v37 + 24)
      && ((getinf() & 0xF) != 6 || !(unsigned __int8)getinf_flag() || !(unsigned __int8)getinf_flag()) )
    {
      sub_1A5590(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 112), *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL));
    }
    return 0xFFFFFFFFLL;
  }
}

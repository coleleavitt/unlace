void __fastcall sub_14AA640(__int64 a1, __int64 a2, __int64 a3, __int32 *a4, __m128i a5, __m128 a6)
{
  unsigned __int64 v8; // rdi
  unsigned int v9; // r14d
  unsigned __int16 v10; // bx
  __int64 *v11; // r15
  _BYTE *v12; // rdx
  char v13; // al
  __int64 v14; // rcx
  unsigned __int16 v15; // cx
  __int64 *v16; // rdi
  unsigned __int16 v17; // cx
  __int64 *v18; // rdi
  __int64 v19; // r15
  unsigned __int64 v20; // rax
  __int64 *v21; // r14
  __int16 v22; // dx
  __int64 v23; // r11
  unsigned int v24; // r10d
  __int64 v25; // rcx
  char v26; // al
  __int16 v27; // ax
  __int64 v28; // rax
  char v29; // dl
  unsigned __int64 v30; // rsi
  size_t v31; // rax
  __int64 v32; // rbp
  int *v33; // rsi
  char v34; // bl
  unsigned __int64 v35; // rdx
  unsigned int v36; // r13d
  size_t v37; // rax
  size_t v38; // rax
  __int64 v39; // rax
  __int64 *v40; // rdi
  __int64 *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned int v44; // eax
  unsigned __int16 v45; // si
  __int64 v46; // rdx
  unsigned int v47; // eax
  unsigned __int16 v48; // si
  __int64 v49; // rdx
  char v50; // al
  __int64 *v51; // rdi
  __int64 v52; // rax
  __int64 *v53; // rdi
  unsigned __int64 v54; // rsi
  int v57; // [rsp+24h] [rbp-C4h]
  __int64 v58; // [rsp+30h] [rbp-B8h]
  unsigned int v59; // [rsp+30h] [rbp-B8h]
  unsigned int v60; // [rsp+38h] [rbp-B0h]
  __int64 *v61; // [rsp+38h] [rbp-B0h]
  unsigned int v62; // [rsp+4Ch] [rbp-9Ch] BYREF
  unsigned int v63; // [rsp+50h] [rbp-98h] BYREF
  __int64 v64; // [rsp+54h] [rbp-94h] BYREF
  char v65; // [rsp+5Ch] [rbp-8Ch]
  unsigned __int8 *v66[17]; // [rsp+60h] [rbp-88h] BYREF

  v8 = *(unsigned __int16 *)(a1 + 32);
  v9 = *(_DWORD *)(a1 + 16);
  if ( (_WORD)v8 == 158 )
  {
    sub_1564820(v66, a1, v9, 2110);
    sub_AEA040((__int64)v66);
    sub_148EB60((const __m128i *)a1, a2, a4, *(double *)a5.m128i_i64, a6);
    return;
  }
  v10 = v8 - 406;
  v11 = *(__int64 **)(a1 + 8);
  if ( (unsigned __int16)(v8 - 406) <= 8u )
  {
    if ( sub_141A630(v8) )
      v32 = 0;
    else
      v32 = *(_QWORD *)(a1 + 24);
    v33 = (int *)(a1 + 16);
    if ( v10 > 6u )
    {
      *(_DWORD *)(a1 + 40) = v9;
      sub_14634E0(v11, v33);
    }
    else
    {
      *(_DWORD *)(a1 + 40) = v9;
      v34 = byte_26171C0[v10];
      sub_14634E0(v11, v33);
      if ( v34 )
      {
        if ( *(_WORD *)(a1 + 32) == 22 )
        {
          sub_148B990(a1, v32, v9, a2, a4, 0, a5, a6, v9, 0x2F6u);
        }
        else
        {
          sub_1564820(v66, a1, *(unsigned int *)(a1 + 16), 1625);
          sub_AE9DF0(v66, v32, 5u);
          sub_AEA040((__int64)v66);
        }
        return;
      }
    }
    v39 = sub_149EEA0(a2 + 40, v32, ((unsigned __int64)v9 << 32) | v9, 0, 0, 758, 0);
    sub_147F4B0(a2 + 8, v39);
    return;
  }
  v12 = (_BYTE *)v11[7];
  v13 = v12[1];
  if ( (v13 & 8) != 0 )
    v14 = (v13 & 0x10) == 0 ? 2142 : 2112;
  else
    v14 = (*v12 & 8) == 0 ? 2141 : 2221;
  sub_1564820(v66, a1, v9, v14);
  sub_AEA040((__int64)v66);
  v15 = *(_WORD *)(a1 + 90);
  if ( *(_WORD *)(a1 + 32) == 20 )
  {
    *(_WORD *)(a1 + 90) = v15 + 1;
  }
  else
  {
    if ( !v15 )
      goto LABEL_7;
    v44 = *(_DWORD *)(a1 + 2792);
    if ( v44 )
    {
      v45 = *(_WORD *)(a1 + 88);
      v46 = *(_QWORD *)(a1 + 2784) + 24LL * v44 - 24;
      do
      {
        if ( v45 == *(_WORD *)(v46 + 14) )
        {
          if ( *(_DWORD *)(v46 + 16) == *(_DWORD *)(a1 + 90) )
            goto LABEL_59;
        }
        else if ( v45 > *(_WORD *)(v46 + 14) )
        {
          goto LABEL_59;
        }
        if ( *(_WORD *)(v46 + 16) >= v15 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v46 + 18) )
          break;
LABEL_59:
        --v44;
        v46 -= 24;
        *(_DWORD *)(a1 + 2792) = v44;
      }
      while ( v44 );
    }
    *(_WORD *)(a1 + 90) = v15 - 1;
  }
LABEL_7:
  v16 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v16, (int *)(a1 + 16));
  sub_1564BC0(a1, v9, 20, 2);
  if ( *(_WORD *)(a1 + 32) == 20 )
  {
    ++*(_WORD *)(a1 + 90);
  }
  else
  {
    v17 = *(_WORD *)(a1 + 90);
    if ( !v17 )
      goto LABEL_9;
    v47 = *(_DWORD *)(a1 + 2792);
    if ( v47 )
    {
      v48 = *(_WORD *)(a1 + 88);
      v49 = *(_QWORD *)(a1 + 2784) + 24LL * v47 - 24;
      do
      {
        if ( v48 == *(_WORD *)(v49 + 14) )
        {
          if ( *(_DWORD *)(v49 + 16) == *(_DWORD *)(a1 + 90) )
            goto LABEL_68;
        }
        else if ( v48 > *(_WORD *)(v49 + 14) )
        {
          goto LABEL_68;
        }
        if ( v17 <= *(_WORD *)(v49 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v49 + 18) )
          break;
LABEL_68:
        --v47;
        v49 -= 24;
        *(_DWORD *)(a1 + 2792) = v47;
      }
      while ( v47 );
    }
    *(_WORD *)(a1 + 90) = v17 - 1;
  }
LABEL_9:
  v18 = *(__int64 **)(a1 + 8);
  v19 = 0;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v18, (int *)(a1 + 16));
  v20 = *(unsigned __int16 *)(a1 + 32);
  v62 = 0;
  if ( (_WORD)v20 == 153 )
  {
    sub_1564820(
      v66,
      a1,
      *(unsigned int *)(a1 + 16),
      (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x40) == 0 ? 2022 : 2089);
    sub_AEA040((__int64)v66);
    v41 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v41, (int *)(a1 + 16));
    v42 = sub_14A90A0(a1, &v62, 1, 0, *(double *)a5.m128i_i64, *(double *)a6.m128_u64);
    v43 = *(unsigned int *)(a1 + 16);
    v19 = v42;
    if ( v42 )
    {
      if ( *(_WORD *)(a1 + 32) != 62 )
      {
        sub_1564820(v66, a1, v43, 14);
        sub_AE9DF0(v66, 62, 4u);
        sub_AEA040((__int64)v66);
        v20 = *(unsigned __int16 *)(a1 + 32);
        goto LABEL_10;
      }
    }
    else
    {
      sub_1564820(v66, a1, v43, 14);
      sub_AE9DF0(v66, 5, 4u);
      sub_AEA040((__int64)v66);
      LODWORD(v66[0]) = 4063253;
      sub_15680D0(a1, v66, 2, 2);
      v20 = *(unsigned __int16 *)(a1 + 32);
      if ( (_WORD)v20 != 62 )
        goto LABEL_10;
      LODWORD(v43) = *(_DWORD *)(a1 + 16);
    }
    *(_DWORD *)(a1 + 40) = v43;
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    v20 = *(unsigned __int16 *)(a1 + 32);
  }
LABEL_10:
  if ( (unsigned __int16)v20 > 0x3Fu )
  {
LABEL_11:
    if ( (_WORD)v20 == 66 )
    {
      do
      {
        v40 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v40, (int *)(a1 + 16));
      }
      while ( *(_WORD *)(a1 + 32) == 66 );
    }
    while ( 1 )
    {
LABEL_12:
      v63 = 0;
      v21 = (__int64 *)sub_14A90A0(a1, &v63, 0, v19, *(double *)a5.m128i_i64, *(double *)a6.m128_u64);
      if ( !v21 )
      {
        LOWORD(v20) = *(_WORD *)(a1 + 32);
        goto LABEL_37;
      }
      v22 = *(_WORD *)(a1 + 32);
      if ( v22 == 72 )
      {
        v51 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v51, (int *)(a1 + 16));
        v59 = v63;
        v52 = sub_14A90A0(a1, &v63, 0, (__int64)v21, *(double *)a5.m128i_i64, *(double *)a6.m128_u64);
        v24 = v59;
        if ( !v52 )
        {
          sub_1564820(v66, a1, *(unsigned int *)(a1 + 16), 14);
          sub_AE9DF0(v66, 5, 4u);
          sub_AEA040((__int64)v66);
          LODWORD(v66[0]) = (_DWORD)byte_420015;
          sub_15680D0(a1, v66, 2, 3);
          v20 = *(unsigned __int16 *)(a1 + 32);
          if ( (unsigned __int16)v20 > 0x3Fu )
            goto LABEL_11;
          v29 = 0;
          goto LABEL_25;
        }
        if ( v19 )
        {
          v61 = (__int64 *)v52;
          sub_1564820(v66, a1, v59, 1930);
          v65 = 1;
          LODWORD(v64) = v62;
          HIDWORD(v64) = v62;
          sub_AEC610((__int64 *)v66, &v64);
          sub_AEA040((__int64)v66);
          v23 = (__int64)v21;
          v22 = *(_WORD *)(a1 + 32);
          v24 = v59;
          v21 = v61;
        }
        else
        {
          v23 = (__int64)v21;
          v22 = *(_WORD *)(a1 + 32);
          v21 = (__int64 *)v52;
        }
      }
      else
      {
        v23 = 0;
        v24 = 0;
        if ( v19 )
        {
          v24 = v62;
          v23 = v19;
        }
      }
      if ( v22 != 22
        || (v60 = v24,
            v58 = v23,
            v50 = sub_14A98F0((const __m128i *)a1, v21, v63, a2, a4, v23, a5, a6, v24, a3),
            v23 = v58,
            v24 = v60,
            !v50) )
      {
        v25 = v63;
        v26 = ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) == 0) + 2;
        if ( v24 )
        {
          v25 = v24;
          if ( v62 )
            v25 = v63;
        }
        HIWORD(v57) = (v26 & 7 | v57 & 0xFFFFFFF0) >> 16;
        v27 = v26 & 7 | v57 & 0xFC00;
        LOBYTE(v27) = v27 | 0xF0;
        LOWORD(v57) = v27;
        v28 = sub_149EEA0(
                a2 + 40,
                (__int64)v21,
                v25 | ((unsigned __int64)v63 << 32),
                v23,
                ((unsigned __int64)v62 << 32) | v24,
                v27,
                0);
        sub_147F4B0(a2 + 8, v28);
      }
      v20 = *(unsigned __int16 *)(a1 + 32);
      if ( (_WORD)v20 == 27 )
      {
        v53 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v53, (int *)(a1 + 16));
        sub_1564840(v66, a1, a1 + 16, 1581);
        sub_AE9DF0(v66, (__int64)v21, 5u);
        sub_AEA040((__int64)v66);
        v20 = *(unsigned __int16 *)(a1 + 32);
      }
      if ( (unsigned __int16)v20 > 0x3Fu )
      {
LABEL_27:
        while ( 1 )
        {
          v31 = j__strlen(&byte_22F0C30);
          if ( !(unsigned __int8)sub_1569A00(a1, 66, 14, &byte_22F0C30, v31) )
            break;
          LOWORD(v66[0]) = 21;
          sub_15680D0(a1, v66, 1, 3);
          v20 = *(unsigned __int16 *)(a1 + 32);
          if ( (unsigned __int16)v20 <= 0x3Fu )
          {
            v54 = 0x8000000000200002LL;
            if ( _bittest64((const __int64 *)&v54, v20) )
              goto LABEL_37;
          }
        }
        LOWORD(v20) = *(_WORD *)(a1 + 32);
        goto LABEL_11;
      }
      v29 = 1;
LABEL_25:
      v30 = 0x8000000000200002LL;
      if ( _bittest64((const __int64 *)&v30, v20) )
        goto LABEL_37;
      if ( v29 )
        goto LABEL_27;
    }
  }
  v35 = 0x8000000000200002LL;
  if ( !_bittest64((const __int64 *)&v35, v20) )
    goto LABEL_12;
LABEL_37:
  v36 = *(_DWORD *)(a1 + 16);
  if ( (_WORD)v20 == 63 )
  {
    *(_DWORD *)(a1 + 40) = v36;
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  }
  else
  {
    v37 = j__strlen(&byte_22F0C30);
    if ( (unsigned __int8)sub_1569A00(a1, 21, 14, &byte_22F0C30, v37) )
    {
      LOWORD(v66[0]) = 21;
      sub_15680D0(a1, v66, 1, 0);
    }
    else if ( *(_WORD *)(a1 + 32) == 21 )
    {
      sub_1564BC0(a1, v36, 21, 3);
    }
    if ( a4 )
      *a4 = *(_DWORD *)(a1 + 16);
    v38 = j__strlen(&byte_22F0C30);
    if ( (unsigned __int8)sub_1569A00(a1, 21, 14, &byte_22F0C30, v38) )
    {
      LOWORD(v66[0]) = 21;
      sub_15680D0(a1, v66, 1, 0);
    }
  }
}

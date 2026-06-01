__int64 __fastcall sub_DC7D0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rax
  int v7; // esi
  int v8; // r14d
  __int64 v9; // r12
  int v10; // eax
  __int64 v11; // rsi
  __int64 (*v12)(); // rax
  int v13; // eax
  unsigned int v14; // r14d
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rax
  _DWORD *v18; // rdx
  _DWORD *v19; // rcx
  __int64 v21; // rdi
  unsigned __int64 v22; // r14
  unsigned int v23; // r11d
  __int64 v24; // rax
  __int64 v25; // r10
  char v26; // al
  char v27; // dl
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  bool v31; // r14
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __m128i v34; // xmm1
  __int64 v35; // r15
  __int64 v36; // rsi
  _QWORD *v37; // rdi
  __int64 v38; // r8
  _DWORD *v39; // rax
  __int64 v40; // rcx
  __int64 i; // r14
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // r14
  __int64 v45; // rdi
  __int64 v46; // rsi
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // r14
  int v52; // r8d
  int v53; // edx
  __int64 v54; // r14
  int v55; // eax
  __int64 v56; // rsi
  unsigned __int64 v57; // r12
  unsigned __int64 v58; // r15
  __int64 v59; // rax
  __int64 v60; // [rsp+0h] [rbp-D0h]
  unsigned int v61; // [rsp+0h] [rbp-D0h]
  __int64 v62; // [rsp+8h] [rbp-C8h]
  unsigned int v64; // [rsp+18h] [rbp-B8h]
  __int64 v65; // [rsp+18h] [rbp-B8h]
  int v66; // [rsp+18h] [rbp-B8h]
  __m128i v67; // [rsp+20h] [rbp-B0h] BYREF
  char v68; // [rsp+3Eh] [rbp-92h]
  char v69; // [rsp+3Fh] [rbp-91h]
  unsigned __int64 v70; // [rsp+40h] [rbp-90h] BYREF
  int v71; // [rsp+48h] [rbp-88h]
  __int64 v72; // [rsp+50h] [rbp-80h]
  __m128i v73; // [rsp+58h] [rbp-78h]
  __int64 v74; // [rsp+70h] [rbp-60h] BYREF
  __int64 v75; // [rsp+78h] [rbp-58h]
  __int64 v76; // [rsp+80h] [rbp-50h]
  __m128i v77; // [rsp+88h] [rbp-48h] BYREF
  unsigned __int64 v78; // [rsp+98h] [rbp-38h]

  v67.m128i_i64[0] = a2;
  v78 = __readfsqword(0x28u);
  v62 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL) + 112LL);
  v6 = *(_QWORD *)(a2 + 480);
  v7 = *(_DWORD *)(a1 + 132);
  v8 = *(_DWORD *)(*(_QWORD *)(v6 + 112) + 80LL);
  v74 = 0;
  v75 = 0;
  sub_63E80(&v74, v7, v8);
  v76 = 0;
  v77 = 0;
  v9 = sub_129150(v67.m128i_i32[0], (unsigned int)&v74, a3, 0, 0, 0, 257);
  if ( v76 )
  {
    v77.m128i_i64[0] = 0;
    qfree(v76);
  }
  qfree(v74);
  if ( !v9 )
  {
    if ( *(_QWORD *)(a1 + 32) == v67.m128i_i64[0] )
    {
      if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
      {
        v21 = *(_QWORD *)(v67.m128i_i64[0] + 56);
        if ( v21 )
        {
          if ( sub_120380(v21, 0) )
            return 5;
        }
      }
      v22 = *(_QWORD *)(v67.m128i_i64[0] + 32);
      if ( a4 < v22 || *(_QWORD *)(v67.m128i_i64[0] + 40) < a4 )
        return v9 != 0;
      goto LABEL_45;
    }
    if ( !under_debugger )
      sub_383060(50078);
    goto LABEL_151;
  }
  if ( *(_DWORD *)v9 == 61 )
    return 2;
  sub_127A20(&v70, v67.m128i_i64[0], v9, 256);
  if ( !(unsigned __int8)sub_64A60(&v70, *(_DWORD *)(a1 + 132), v8) )
  {
    sub_127A20(&v74, v67.m128i_i64[0], v9, 257);
    sub_648D0((__int64 *)&v70, &v74);
    v33 = v76;
    v76 = 0;
    v34 = _mm_loadu_si128(&v77);
    v77 = 0;
    v35 = v33;
    if ( v72 )
    {
      v67 = v34;
      v73.m128i_i64[0] = 0;
      qfree(v72);
      v72 = v35;
      v73 = _mm_load_si128(&v67);
      if ( v76 )
      {
        v77.m128i_i64[0] = 0;
        qfree(v76);
      }
    }
    else
    {
      v72 = v33;
      v73 = v34;
    }
    qfree(v74);
    if ( (unsigned __int8)sub_64A60(&v70, *(_DWORD *)(a1 + 132), v8) )
      goto LABEL_73;
    if ( !under_debugger )
      sub_383060(50079);
LABEL_151:
    BUG();
  }
  v10 = *(_DWORD *)(v9 + 4);
  if ( (v10 & 0x80u) != 0 )
  {
LABEL_86:
    v14 = 3;
    goto LABEL_18;
  }
  if ( (v10 & 8) != 0 )
    goto LABEL_73;
  v11 = *(_QWORD *)(v9 + 24);
  v12 = *(__int64 (**)())(*(_QWORD *)v62 + 280LL);
  if ( v12 == sub_DAAF0 )
    goto LABEL_9;
  if ( ((unsigned int (__fastcall *)(__int64, __int64))v12)(v62, v11) == 1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * *(int *)(a1 + 124)) = *(_DWORD *)(a1 + 124) + 1;
LABEL_73:
    v14 = 2;
    goto LABEL_18;
  }
  v11 = *(_QWORD *)(v9 + 24);
LABEL_9:
  v74 = v11;
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v67.m128i_i64[0] + 480) + 8LL) + 10LL) < 0 )
  {
    v68 = 1;
    v69 = 1;
    if ( sub_CFF70() == 1 && *(_QWORD *)(v9 + 24) == v74 )
    {
      v36 = *(unsigned int *)(a1 + 132);
      v37 = (_QWORD *)(v67.m128i_i64[0] + 280);
      if ( sub_64930((_QWORD *)(v67.m128i_i64[0] + 280), v36) )
      {
        v39 = *(_DWORD **)(v9 + 8);
        if ( v39 )
        {
          if ( (unsigned int)(*v39 - 42) <= 0xB )
          {
            v40 = *(_QWORD *)(v67.m128i_i64[0] + 376);
            for ( i = 0; (int)i < (int)v40; ++i )
            {
              v42 = *(unsigned int *)(*(_QWORD *)(v67.m128i_i64[0] + 368) + 4 * i);
              if ( (_DWORD)v42 != *(_DWORD *)(*(_QWORD *)(a1 + 32) + 72LL) )
              {
                v43 = *(_QWORD *)(v67.m128i_i64[0] + 64);
                if ( (unsigned int)v42 >= *(_DWORD *)(v43 + 64) )
                  sub_DAC10(v37, v36, v43, v67.m128i_i64[0], v38);
                v36 = *(unsigned int *)(a1 + 132);
                v37 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 528) + 8 * v42) + 120LL);
                if ( sub_64930(v37, v36) )
                  goto LABEL_86;
                v40 = *(_QWORD *)(v67.m128i_i64[0] + 376);
              }
            }
          }
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 120) & 4) == 0 )
  {
LABEL_62:
    if ( v72 )
    {
      v73.m128i_i64[0] = 0;
      qfree(v72);
    }
    qfree(v70);
    if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
    {
      v45 = *(_QWORD *)(v67.m128i_i64[0] + 56);
      if ( v45 != v9 )
      {
        if ( sub_120380(v45, 0) )
          return 5;
      }
    }
    if ( !*(_QWORD *)(v9 + 8) )
      return v9 != 0;
    v32 = *(_QWORD *)(v67.m128i_i64[0] + 32);
    if ( a4 < v32 || *(_QWORD *)(v67.m128i_i64[0] + 40) < a4 )
      return v9 != 0;
    v44 = *(_QWORD *)(v9 + 24);
    if ( v44 >= v32 )
    {
      if ( !sub_120380(v9, 1) )
      {
        v22 = *(_QWORD *)(v67.m128i_i64[0] + 32);
        goto LABEL_45;
      }
      v44 = *(_QWORD *)(v9 + 24);
    }
    v22 = v44 - 1;
LABEL_45:
    v23 = *(_DWORD *)(a1 + 128);
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL);
    v25 = *(_QWORD *)(v24 + 112);
    v70 = a4;
    if ( *(char *)(*(_QWORD *)(v24 + 8) + 10LL) < 0
      && (LOBYTE(v74) = 1, v60 = v25, v64 = v23, v69 = 1, v48 = sub_CFF70(), v23 = v64, v25 = v60, v48 == 1) )
    {
      if ( v70 != -1 )
      {
        v49 = v64;
        v50 = v60;
        v61 = v64;
        v65 = v25;
        v26 = sub_32E840(&v74, v50, v49, v70, v70 + 1, 1);
        v25 = v65;
        v23 = v61;
        if ( v26 )
          goto LABEL_48;
      }
    }
    else
    {
      v70 = -1;
    }
    v26 = sub_32E840(&v74, v25, v23, v22, a4, 1);
LABEL_48:
    v27 = v26 & 1;
    if ( (v26 & 2) == 0 )
    {
      *(_QWORD *)(a1 + 112) = -1;
      if ( !v27 )
        return v9 != 0;
      goto LABEL_50;
    }
    v46 = v74;
    *(_QWORD *)(a1 + 112) = v74;
    if ( v27 )
    {
LABEL_50:
      if ( a3 )
      {
        v28 = *(_DWORD *)(a1 + 128);
        *(_QWORD *)(a1 + 104) = 0;
        v70 = (unsigned __int64)&off_4DCD60;
        v71 = v28;
        if ( a3 != v9 )
        {
          while ( 1 )
          {
            if ( !v9 )
            {
              sub_127A20(&v74, v67.m128i_i64[0], a3, 1);
              v31 = sub_64930(&v74, *(_DWORD *)(a1 + 132));
              if ( v76 )
              {
                v77.m128i_i64[0] = 0;
                qfree(v76);
              }
              qfree(v74);
              if ( v31 )
                break;
            }
            v29 = sub_120380(a3, 1);
            v30 = *(_QWORD *)(a1 + 104);
            if ( v29 )
            {
              if ( *(_BYTE *)(v29 + 64) == 8 )
              {
                v51 = *(_QWORD *)(v29 + 72);
                v52 = 0;
                if ( *(_QWORD *)(v51 + 32) )
                {
                  do
                  {
                    v66 = v52;
                    if ( v30 )
                      break;
                    if ( (unsigned int)for_all_arglocs() )
                    {
                      *(_QWORD *)(a1 + 104) = a3;
                      v30 = a3;
                    }
                    else
                    {
                      v30 = *(_QWORD *)(a1 + 104);
                    }
                    v52 = v66 + 1;
                  }
                  while ( (unsigned __int64)(v66 + 1) < *(_QWORD *)(v51 + 32) );
                }
              }
            }
            a3 = *(_QWORD *)(a3 + 16);
            if ( v9 == a3 )
            {
              if ( !v30 )
                return 1;
              return 5;
            }
            if ( v30 )
              return 5;
          }
        }
      }
      return 1;
    }
    if ( v26 != 2 )
      return v9 != 0;
    if ( *(_BYTE *)(a1 + 141) )
      return 5;
    v47 = *(_DWORD *)(a1 + 120);
    if ( (v47 & 4) != 0 )
      return 5;
    if ( v9 )
    {
      if ( *(_DWORD *)(v67.m128i_i64[0] + 72) != *(_DWORD *)(*(_QWORD *)(a1 + 32) + 72LL)
        || *(_DWORD *)v9 != 4 && (*(_DWORD *)v9 != 67 || *(_DWORD *)(v9 + 36) != *(_DWORD *)(v9 + 68)) )
      {
        goto LABEL_99;
      }
      if ( *(_BYTE *)(v9 + 64) != 1 )
        goto LABEL_99;
      if ( *(_DWORD *)(a1 + 132) != *(_DWORD *)(v9 + 72) )
        goto LABEL_99;
      if ( *(_BYTE *)(v9 + 32) != 10 )
        goto LABEL_99;
      if ( **(_BYTE **)(v9 + 40) != 5 )
        goto LABEL_99;
      v53 = *(_DWORD *)(a1 + 124);
      if ( v53 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * (v53 - 1)) != -1 )
          goto LABEL_99;
      }
      if ( (v47 & 2) != 0 )
        goto LABEL_99;
      v74 = 0;
      v75 = 0;
      v76 = 0;
      v77 = 0;
      sub_123A40(&v70);
      HIDWORD(v70) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v67.m128i_i64[0] + 64) + 1504LL) + 84LL);
      sub_123EA0(v67.m128i_i64[0], &v74, &v70, 0, 4294901760LL);
      v54 = sub_129150(v67.m128i_i32[0], (unsigned int)&v74, a3, v9, 0, 0, 257);
      if ( v54 )
      {
        v55 = *(_DWORD *)v54;
        if ( *(_DWORD *)v54 == 4 )
        {
LABEL_135:
          if ( (unsigned __int8)sub_11FD80(v54 + 32, 0, 1) )
          {
            v56 = *(unsigned int *)(a1 + 128);
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v62 + 240LL))(
                   v62,
                   v56,
                   *(_QWORD *)(v54 + 24)) == 2 )
            {
              sub_1B5B40(v54, v56);
              sub_1B5B40(v9, v56);
              sub_11CDA0(&v70);
              sub_93B40(&v74);
              return 1;
            }
          }
          goto LABEL_137;
        }
        if ( v55 == 67 )
        {
          if ( *(_DWORD *)(v54 + 36) == *(_DWORD *)(v54 + 68) )
            goto LABEL_135;
        }
        else if ( (unsigned int)(v55 - 8) <= 1 )
        {
          goto LABEL_135;
        }
      }
LABEL_137:
      sub_11CDA0(&v70);
      sub_93B40(&v74);
      v46 = *(_QWORD *)(a1 + 112);
LABEL_99:
      sub_DB6C0(a1, v67.m128i_i64[0], v46, a4);
      return 5;
    }
    v15 = sub_DB6C0(a1, v67.m128i_i64[0], v46, a4);
    if ( !a3 )
      return 5;
    if ( v15 == 1 )
      return 5;
    if ( !(unsigned __int8)sub_DC3A0(a1, v67.m128i_i64[0], a3, 0, 0) )
      return 5;
    v16 = *(_QWORD *)(a1 + 104);
    if ( !v16 )
      return 5;
    if ( sub_124B60(v67.m128i_i64[0], *(unsigned int *)(a1 + 132), v16, 0, 0, 1) )
      return 5;
    if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
      return 5;
    v17 = *(_QWORD *)(a1 + 104);
    if ( *(_DWORD *)v17 != 4 || *(_BYTE *)(v17 + 32) != 1 || *(_DWORD *)(a1 + 132) != *(_DWORD *)(v17 + 40) )
      return 5;
    if ( *(_BYTE *)(v17 + 64) == 1 )
    {
      v18 = *(_DWORD **)(a1 + 56);
      v19 = &v18[*(_QWORD *)(a1 + 64)];
      while ( v19 != v18 )
      {
        if ( *(_DWORD *)(v17 + 72) == *v18 )
          goto LABEL_146;
        ++v18;
      }
    }
    else
    {
LABEL_146:
      if ( !(unsigned __int8)sub_32F330(v17 + 64, &v74) )
        return 5;
      v57 = v74;
      v58 = sub_D7360(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
      v59 = sub_D7430(*(_QWORD *)(a1 + 32));
      if ( v59 > 0 && v57 >= v58 && v58 + v59 - 1 >= v57 )
        return 5;
    }
    *(_BYTE *)(a1 + 141) = 1;
    return 2;
  }
  v13 = *(_DWORD *)v9;
  if ( *(_DWORD *)v9 == 4 )
  {
LABEL_14:
    v14 = 5;
    if ( *(_BYTE *)(v9 + 64) != 1
      || *(_DWORD *)(a1 + 132) != *(_DWORD *)(v9 + 72)
      || *(_DWORD *)(v9 + 68) != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL) + 112LL) + 84LL)
      || *(_BYTE *)(v9 + 32) != 10 )
    {
      goto LABEL_18;
    }
    goto LABEL_62;
  }
  if ( v13 == 67 )
  {
    if ( *(_DWORD *)(v9 + 36) == *(_DWORD *)(v9 + 68) )
      goto LABEL_14;
  }
  else if ( (unsigned int)(v13 - 12) <= 1 )
  {
    goto LABEL_14;
  }
  v14 = 5;
LABEL_18:
  if ( v72 )
  {
    v73.m128i_i64[0] = 0;
    qfree(v72);
  }
  qfree(v70);
  return v14;
}

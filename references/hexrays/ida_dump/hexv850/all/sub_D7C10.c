__int64 __fastcall sub_D7C10(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
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
  unsigned __int64 j; // rax
  _BYTE *v54; // rcx
  int v55; // edx
  __int64 v56; // r14
  int v57; // eax
  __int64 v58; // rsi
  unsigned __int64 v59; // r12
  unsigned __int64 v60; // r15
  __int64 v61; // rax
  __int64 v62; // [rsp+0h] [rbp-D0h]
  unsigned int v63; // [rsp+0h] [rbp-D0h]
  __int64 v64; // [rsp+8h] [rbp-C8h]
  unsigned int v66; // [rsp+18h] [rbp-B8h]
  __int64 v67; // [rsp+18h] [rbp-B8h]
  int v68; // [rsp+18h] [rbp-B8h]
  __m128i v69; // [rsp+20h] [rbp-B0h] BYREF
  char v70; // [rsp+3Eh] [rbp-92h] BYREF
  char v71; // [rsp+3Fh] [rbp-91h] BYREF
  unsigned __int64 v72; // [rsp+40h] [rbp-90h] BYREF
  int v73; // [rsp+48h] [rbp-88h]
  __int64 v74; // [rsp+50h] [rbp-80h]
  __m128i v75; // [rsp+58h] [rbp-78h]
  __int64 v76; // [rsp+70h] [rbp-60h] BYREF
  __int64 v77; // [rsp+78h] [rbp-58h]
  __int64 v78; // [rsp+80h] [rbp-50h]
  __m128i v79; // [rsp+88h] [rbp-48h] BYREF
  unsigned __int64 v80; // [rsp+98h] [rbp-38h]

  v69.m128i_i64[0] = a2;
  v80 = __readfsqword(0x28u);
  v64 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL) + 112LL);
  v6 = *(_QWORD *)(a2 + 480);
  v7 = *(_DWORD *)(a1 + 132);
  v8 = *(_DWORD *)(*(_QWORD *)(v6 + 112) + 80LL);
  v76 = 0;
  v77 = 0;
  sub_5F400(&v76, v7, v8);
  v78 = 0;
  v79 = 0;
  v9 = sub_124590(v69.m128i_i32[0], (unsigned int)&v76, a3, 0, 0, 0, 257);
  if ( v78 )
  {
    v79.m128i_i64[0] = 0;
    qfree(v78);
  }
  qfree(v76);
  if ( !v9 )
  {
    if ( *(_QWORD *)(a1 + 32) == v69.m128i_i64[0] )
    {
      if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
      {
        v21 = *(_QWORD *)(v69.m128i_i64[0] + 56);
        if ( v21 )
        {
          if ( sub_11B7C0(v21, 0) )
            return 5;
        }
      }
      v22 = *(_QWORD *)(v69.m128i_i64[0] + 32);
      if ( a4 < v22 || *(_QWORD *)(v69.m128i_i64[0] + 40) < a4 )
        return v9 != 0;
      goto LABEL_45;
    }
    if ( !under_debugger )
      sub_37CFE0(50078);
    goto LABEL_151;
  }
  if ( *(_DWORD *)v9 == 61 )
    return 2;
  sub_122E60(&v72, v69.m128i_i64[0], v9, 256);
  if ( !(unsigned __int8)sub_5FFE0(&v72, *(_DWORD *)(a1 + 132), v8) )
  {
    sub_122E60(&v76, v69.m128i_i64[0], v9, 257);
    sub_5FE50((__int64 *)&v72, &v76);
    v33 = v78;
    v78 = 0;
    v34 = _mm_loadu_si128(&v79);
    v79 = 0;
    v35 = v33;
    if ( v74 )
    {
      v69 = v34;
      v75.m128i_i64[0] = 0;
      qfree(v74);
      v74 = v35;
      v75 = _mm_load_si128(&v69);
      if ( v78 )
      {
        v79.m128i_i64[0] = 0;
        qfree(v78);
      }
    }
    else
    {
      v74 = v33;
      v75 = v34;
    }
    qfree(v76);
    if ( (unsigned __int8)sub_5FFE0(&v72, *(_DWORD *)(a1 + 132), v8) )
      goto LABEL_73;
    if ( !under_debugger )
      sub_37CFE0(50079);
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
  v12 = *(__int64 (**)())(*(_QWORD *)v64 + 280LL);
  if ( v12 == sub_D5F30 )
    goto LABEL_9;
  if ( ((unsigned int (__fastcall *)(__int64, __int64))v12)(v64, v11) == 1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * *(int *)(a1 + 124)) = *(_DWORD *)(a1 + 124) + 1;
LABEL_73:
    v14 = 2;
    goto LABEL_18;
  }
  v11 = *(_QWORD *)(v9 + 24);
LABEL_9:
  v76 = v11;
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v69.m128i_i64[0] + 480) + 8LL) + 10LL) < 0 )
  {
    v70 = 1;
    v71 = 1;
    if ( sub_CB3B0(0x2Du, &v76, &v70, &v71) == 1 && *(_QWORD *)(v9 + 24) == v76 )
    {
      v36 = *(unsigned int *)(a1 + 132);
      v37 = (_QWORD *)(v69.m128i_i64[0] + 280);
      if ( sub_5FEB0((_QWORD *)(v69.m128i_i64[0] + 280), v36) )
      {
        v39 = *(_DWORD **)(v9 + 8);
        if ( v39 )
        {
          if ( (unsigned int)(*v39 - 42) <= 0xB )
          {
            v40 = *(_QWORD *)(v69.m128i_i64[0] + 376);
            for ( i = 0; (int)i < (int)v40; ++i )
            {
              v42 = *(unsigned int *)(*(_QWORD *)(v69.m128i_i64[0] + 368) + 4 * i);
              if ( (_DWORD)v42 != *(_DWORD *)(*(_QWORD *)(a1 + 32) + 72LL) )
              {
                v43 = *(_QWORD *)(v69.m128i_i64[0] + 64);
                if ( (unsigned int)v42 >= *(_DWORD *)(v43 + 64) )
                  sub_D6050(v37, v36, v43, v69.m128i_i64[0], v38);
                v36 = *(unsigned int *)(a1 + 132);
                v37 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 528) + 8 * v42) + 120LL);
                if ( sub_5FEB0(v37, v36) )
                  goto LABEL_86;
                v40 = *(_QWORD *)(v69.m128i_i64[0] + 376);
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
    if ( v74 )
    {
      v75.m128i_i64[0] = 0;
      qfree(v74);
    }
    qfree(v72);
    if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
    {
      v45 = *(_QWORD *)(v69.m128i_i64[0] + 56);
      if ( v45 != v9 )
      {
        if ( sub_11B7C0(v45, 0) )
          return 5;
      }
    }
    if ( !*(_QWORD *)(v9 + 8) )
      return v9 != 0;
    v32 = *(_QWORD *)(v69.m128i_i64[0] + 32);
    if ( a4 < v32 || *(_QWORD *)(v69.m128i_i64[0] + 40) < a4 )
      return v9 != 0;
    v44 = *(_QWORD *)(v9 + 24);
    if ( v44 >= v32 )
    {
      if ( !sub_11B7C0(v9, 1) )
      {
        v22 = *(_QWORD *)(v69.m128i_i64[0] + 32);
        goto LABEL_45;
      }
      v44 = *(_QWORD *)(v9 + 24);
    }
    v22 = v44 - 1;
LABEL_45:
    v23 = *(_DWORD *)(a1 + 128);
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL);
    v25 = *(_QWORD *)(v24 + 112);
    v72 = a4;
    if ( *(char *)(*(_QWORD *)(v24 + 8) + 10LL) < 0
      && (LOBYTE(v76) = 1,
          v62 = v25,
          v66 = v23,
          v71 = 1,
          v48 = sub_CB3B0(0x2Du, &v72, &v71, &v76),
          v23 = v66,
          v25 = v62,
          v48 == 1) )
    {
      if ( v72 != -1 )
      {
        v49 = v66;
        v50 = v62;
        v63 = v66;
        v67 = v25;
        v26 = sub_328DC0(&v76, v50, v49, v72, v72 + 1, 1);
        v25 = v67;
        v23 = v63;
        if ( v26 )
          goto LABEL_48;
      }
    }
    else
    {
      v72 = -1;
    }
    v26 = sub_328DC0(&v76, v25, v23, v22, a4, 1);
LABEL_48:
    v27 = v26 & 1;
    if ( (v26 & 2) == 0 )
    {
      *(_QWORD *)(a1 + 112) = -1;
      if ( !v27 )
        return v9 != 0;
      goto LABEL_50;
    }
    v46 = v76;
    *(_QWORD *)(a1 + 112) = v76;
    if ( v27 )
    {
LABEL_50:
      if ( a3 )
      {
        v28 = *(_DWORD *)(a1 + 128);
        *(_QWORD *)(a1 + 104) = 0;
        v72 = (unsigned __int64)&off_4B0740;
        v73 = v28;
        if ( a3 != v9 )
        {
          while ( 1 )
          {
            if ( !v9 )
            {
              sub_122E60(&v76, v69.m128i_i64[0], a3, 1);
              v31 = sub_5FEB0(&v76, *(_DWORD *)(a1 + 132));
              if ( v78 )
              {
                v79.m128i_i64[0] = 0;
                qfree(v78);
              }
              qfree(v76);
              if ( v31 )
                break;
            }
            v29 = sub_11B7C0(a3, 1);
            v30 = *(_QWORD *)(a1 + 104);
            if ( v29 )
            {
              if ( *(_BYTE *)(v29 + 64) == 8 )
              {
                v51 = *(_QWORD *)(v29 + 72);
                v52 = 0;
                for ( j = 0; j < *(_QWORD *)(v51 + 32); j = v68 + 1 )
                {
                  v68 = v52;
                  if ( v30 )
                    break;
                  if ( (unsigned int)for_all_arglocs(
                                       &v72,
                                       *(_QWORD *)(v51 + 24) + 80 * j + 56,
                                       *(unsigned int *)(*(_QWORD *)(v51 + 24) + 80 * j + 4),
                                       0) )
                  {
                    *(_QWORD *)(a1 + 104) = a3;
                    v30 = a3;
                  }
                  else
                  {
                    v30 = *(_QWORD *)(a1 + 104);
                  }
                  v52 = v68 + 1;
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
      if ( *(_DWORD *)(v69.m128i_i64[0] + 72) != *(_DWORD *)(*(_QWORD *)(a1 + 32) + 72LL)
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
      v54 = *(_BYTE **)(v9 + 40);
      if ( *v54 != 5 )
        goto LABEL_99;
      v55 = *(_DWORD *)(a1 + 124);
      if ( v55 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * (v55 - 1)) != -1 )
          goto LABEL_99;
      }
      if ( (v47 & 2) != 0 )
        goto LABEL_99;
      v76 = 0;
      v77 = 0;
      v78 = 0;
      v79 = 0;
      sub_11EE80(&v72, v54);
      HIDWORD(v72) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v69.m128i_i64[0] + 64) + 1504LL) + 84LL);
      sub_11F2E0(v69.m128i_i64[0], &v76, &v72, 0, 4294901760LL);
      v56 = sub_124590(v69.m128i_i32[0], (unsigned int)&v76, a3, v9, 0, 0, 257);
      if ( v56 )
      {
        v57 = *(_DWORD *)v56;
        if ( *(_DWORD *)v56 == 4 )
        {
LABEL_135:
          if ( (unsigned __int8)sub_11B1C0(v56 + 32, 0, 1) )
          {
            v58 = *(unsigned int *)(a1 + 128);
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v64 + 240LL))(
                   v64,
                   v58,
                   *(_QWORD *)(v56 + 24)) == 2 )
            {
              sub_1B0E40(v56, v58);
              sub_1B0E40(v9, v58);
              sub_1181E0(&v72);
              sub_8EF80(&v76);
              return 1;
            }
          }
          goto LABEL_137;
        }
        if ( v57 == 67 )
        {
          if ( *(_DWORD *)(v56 + 36) == *(_DWORD *)(v56 + 68) )
            goto LABEL_135;
        }
        else if ( (unsigned int)(v57 - 8) <= 1 )
        {
          goto LABEL_135;
        }
      }
LABEL_137:
      sub_1181E0(&v72);
      sub_8EF80(&v76);
      v46 = *(_QWORD *)(a1 + 112);
LABEL_99:
      sub_D6B00(a1, v69.m128i_i64[0], v46, a4);
      return 5;
    }
    v15 = sub_D6B00(a1, v69.m128i_i64[0], v46, a4);
    if ( !a3 )
      return 5;
    if ( v15 == 1 )
      return 5;
    if ( !(unsigned __int8)sub_D77E0(a1, v69.m128i_i64[0], a3, 0, 0) )
      return 5;
    v16 = *(_QWORD *)(a1 + 104);
    if ( !v16 )
      return 5;
    if ( sub_11FFA0(v69.m128i_i64[0], *(unsigned int *)(a1 + 132), v16, 0, 0, 1) )
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
      if ( !(unsigned __int8)sub_3297A0(v17 + 64, &v76) )
        return 5;
      v59 = v76;
      v60 = sub_D27A0(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
      v61 = sub_D2870(*(_QWORD *)(a1 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL));
      if ( v61 > 0 && v59 >= v60 && v60 + v61 - 1 >= v59 )
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
  if ( v74 )
  {
    v75.m128i_i64[0] = 0;
    qfree(v74);
  }
  qfree(v72);
  return v14;
}

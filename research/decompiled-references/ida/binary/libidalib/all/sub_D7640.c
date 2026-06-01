__int64 __fastcall sub_D7640(
        int *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // edx
  __m128i v18; // xmm0
  void *v19; // rdi
  signed int v20; // ebx
  int v21; // ebp
  unsigned __int64 v22; // rbx
  __int64 v23; // r13
  unsigned __int64 *v24; // rax
  const char *v25; // r15
  int v26; // eax
  unsigned __int64 *v27; // rax
  unsigned __int64 v28; // r9
  int v29; // eax
  int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  unsigned __int64 *v33; // [rsp+0h] [rbp-88h]
  __m128i **v34; // [rsp+8h] [rbp-80h]
  unsigned __int64 v35; // [rsp+10h] [rbp-78h]
  unsigned __int64 *v36; // [rsp+18h] [rbp-70h]
  const char *v37; // [rsp+28h] [rbp-60h] BYREF
  __m128i *v38; // [rsp+30h] [rbp-58h] BYREF
  __int128 v39; // [rsp+38h] [rbp-50h]
  unsigned __int64 v40; // [rsp+48h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  ((void (__fastcall *)(__int64, __int64 *, __int64, __int64, __int64, __int64))callui)(45, a2, a3, a4, a5, a6);
  if ( (dword_25274C > 0 || byte_252749) && (*(_BYTE *)(dbg + 32LL) & 0x40) != 0 )
    goto LABEL_4;
  v19 = qword_252758;
  if ( !qword_252758 )
  {
    if ( !*(_BYTE *)(sub_B8210(0, a2) + 200) )
      goto LABEL_4;
    v20 = -5;
    goto LABEL_51;
  }
  if ( dbg && (*(_BYTE *)(dbg + 34LL) & 0x20) != 0 )
  {
    if ( !*(_BYTE *)(sub_B8210(qword_252758, a2) + 200) )
    {
LABEL_54:
      sub_C5FC0(&qword_2525D0);
      goto LABEL_4;
    }
    v20 = -4;
LABEL_51:
    v32 = sub_B8210(v19, a2);
    a2 = &qword_2525D0;
    if ( (int)sub_D7040(v32, &qword_2525D0, v20) < -1 )
      goto LABEL_4;
    goto LABEL_20;
  }
  a2 = (_QWORD *)&word_12;
  *(_QWORD *)qword_252758 = &qword_2525D0;
  v20 = sub_CDCF0((__int64)v19, 18);
  if ( *(_BYTE *)(sub_B8210(v19, 18) + 200) )
    goto LABEL_51;
  if ( v20 == -6 )
    goto LABEL_4;
  if ( v20 == -4 )
    goto LABEL_54;
  if ( v20 < -1 )
    goto LABEL_4;
  if ( v20 == -1 && (HIDWORD(qword_2524B0) & 0xFFFFFFF) != 2 )
    goto LABEL_49;
LABEL_20:
  v38 = nullptr;
  v34 = &v38;
  v39 = 0;
  sub_B9340((const __m128i **)&v38);
  a2 = (__int64 *)xmmword_2525D8;
  v21 = 0;
  if ( (_QWORD)xmmword_2525D8 )
  {
    v35 = 0;
    v22 = 0;
    v36 = (unsigned __int64 *)&v37;
    while ( 1 )
    {
      a2 = (__int64 *)v22;
      v23 = 80 * v35;
      v24 = (unsigned __int64 *)(80 * v35 + qword_2525D0);
      v25 = (const char *)*v24;
      v22 = v24[1];
      v26 = sub_C0120((__int64)&v38, (unsigned __int64)a2, *v24, 0.0, a8);
      if ( v26 < 0 )
        break;
      v37 = v25;
      v21 += v26;
      while ( (unsigned __int64)v25 < v22 )
      {
        while ( 1 )
        {
          v27 = sub_B8CF0((unsigned __int64 *)v38, v39, (unsigned __int64)v25, v22);
          if ( !v27 )
          {
            a2 = (__int64 *)(v23 + qword_2525D0);
            if ( !(unsigned __int8)sub_BFA40((__int64)&v38, v23 + qword_2525D0, v25, v22, 0.0, a8) )
              goto LABEL_47;
            ++v21;
            goto LABEL_29;
          }
          if ( *((_BYTE *)v27 + 16) )
            break;
          v28 = v27[1];
          if ( (unsigned __int64)v25 < *v27 )
          {
            v33 = (unsigned __int64 *)v27[1];
            a2 = (__int64 *)(v23 + qword_2525D0);
            if ( !(unsigned __int8)sub_BFA40((__int64)&v38, v23 + qword_2525D0, v25, *v27, 0.0, a8) )
              goto LABEL_47;
            v28 = (unsigned __int64)v33;
            ++v21;
          }
          v25 = (const char *)v28;
          v37 = (const char *)v28;
          if ( v28 >= v22 )
            goto LABEL_29;
        }
        v33 = v27;
        a2 = (__int64 *)(v23 + qword_2525D0);
        v31 = sub_B9940((__int64)v27, v23 + qword_2525D0);
        if ( v31 == -1 )
          goto LABEL_47;
        v21 += v31;
        if ( (const char *)*v33 == v25 && v22 == v33[1] )
          break;
        a2 = (__int64 *)(v23 + qword_2525D0);
        if ( !(unsigned __int8)sub_BFD90(
                                 (__int64)&v38,
                                 v23 + qword_2525D0,
                                 (unsigned __int64 *)&v37,
                                 v22,
                                 (_QWORD)xmmword_2525D8 - 1LL == v35,
                                 0.0,
                                 a8) )
          goto LABEL_47;
        v25 = v37;
        ++v21;
      }
LABEL_29:
      ++v35;
      a2 = (__int64 *)xmmword_2525D8;
      if ( v35 >= (unsigned __int64)xmmword_2525D8 )
      {
        if ( (_QWORD)xmmword_2525D8 )
          a2 = *(__int64 **)(qword_2525D0 + 80 * xmmword_2525D8 - 72);
        goto LABEL_32;
      }
    }
    LODWORD(v33) = v26;
    if ( !v38 )
      goto LABEL_49;
    *(_QWORD *)&v39 = 0;
    qfree();
    v30 = (int)v33;
  }
  else
  {
LABEL_32:
    v29 = sub_C0120((__int64)&v38, (unsigned __int64)a2, 0xFFFFFFFFFFFFFFFFLL, 0.0, a8);
    if ( v29 < 0 )
    {
LABEL_47:
      if ( v38 )
      {
        *(_QWORD *)&v39 = 0;
        qfree();
      }
      goto LABEL_49;
    }
    v30 = v21 + v29;
    if ( v38 )
    {
      a2 = nullptr;
      LODWORD(v33) = v30;
      *(_QWORD *)&v39 = 0;
      qfree();
      v30 = (int)v33;
    }
    if ( v30 > 0 )
    {
      sub_C14A0();
      a2 = nullptr;
      mark_builtin_widgets();
      goto LABEL_4;
    }
  }
  if ( v30 )
LABEL_49:
    sub_92200((__int64)"interr: failed to sync segment information");
LABEL_4:
  callui(46, a2, v9, v10, v11, v12, v33, v34, v35, v36);
  v13 = xmmword_2525D8;
  *a1 = xmmword_2525D8;
  if ( !v13 )
    return 0;
  result = qcalloc();
  if ( !result )
    sub_98FF0((__int64)"get_memory_config", 16);
  if ( *a1 > 0 )
  {
    v15 = result;
    v16 = 0;
    v17 = 0;
    do
    {
      ++v17;
      v15 += 16;
      v18 = _mm_loadu_si128((const __m128i *)(qword_2525D0 + v16));
      v16 += 80;
      *(__m128i *)(v15 - 16) = v18;
    }
    while ( *a1 > v17 );
  }
  return result;
}


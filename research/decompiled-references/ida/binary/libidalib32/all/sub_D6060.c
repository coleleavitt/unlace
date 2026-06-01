__int64 __fastcall sub_D6060(
        _DWORD *a1,
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
  __int64 i; // rdx
  void *v16; // rdi
  signed int v17; // ebx
  int v18; // ebp
  unsigned int v19; // ebx
  __int64 v20; // r13
  unsigned int *v21; // rax
  unsigned int v22; // r15d
  int v23; // eax
  unsigned int *v24; // rax
  unsigned int v25; // r9d
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rax
  unsigned int *v30; // [rsp+0h] [rbp-88h]
  unsigned int **v31; // [rsp+8h] [rbp-80h]
  __int64 v32; // [rsp+10h] [rbp-78h]
  unsigned int *v33; // [rsp+18h] [rbp-70h]
  unsigned int v34; // [rsp+2Ch] [rbp-5Ch] BYREF
  unsigned int *v35; // [rsp+30h] [rbp-58h] BYREF
  __int128 v36; // [rsp+38h] [rbp-50h]
  unsigned __int64 v37; // [rsp+48h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  ((void (__fastcall *)(__int64, __int64 *, __int64, __int64, __int64, __int64))callui)(45, a2, a3, a4, a5, a6);
  v12 = (unsigned int)dword_2515A4;
  if ( (dword_2515A4 > 0 || byte_2515A1) && (*(_BYTE *)(dbg + 32LL) & 0x40) != 0 )
    goto LABEL_4;
  v16 = qword_2515B0;
  if ( !qword_2515B0 )
  {
    if ( !*(_BYTE *)(sub_B7CA0(0, a2) + 200) )
      goto LABEL_4;
    v17 = -5;
    goto LABEL_50;
  }
  if ( dbg && (*(_BYTE *)(dbg + 34LL) & 0x20) != 0 )
  {
    if ( !*(_BYTE *)(sub_B7CA0(qword_2515B0, a2) + 200) )
    {
LABEL_53:
      sub_C4B80(&qword_251450);
      goto LABEL_4;
    }
    v17 = -4;
LABEL_50:
    v29 = sub_B7CA0(v16, a2);
    a2 = &qword_251450;
    if ( (int)sub_D5A80(v29, &qword_251450, v17) < -1 )
      goto LABEL_4;
    goto LABEL_19;
  }
  a2 = (_QWORD *)&word_12;
  *(_QWORD *)qword_2515B0 = &qword_251450;
  v17 = sub_CC780((__int64)v16, 18);
  if ( *(_BYTE *)(sub_B7CA0(v16, 18) + 200) )
    goto LABEL_50;
  if ( v17 == -6 )
    goto LABEL_4;
  if ( v17 == -4 )
    goto LABEL_53;
  if ( v17 < -1 )
    goto LABEL_4;
  if ( v17 == -1 && (qword_251330 & 0xFFFFFFF) != 2 )
    goto LABEL_48;
LABEL_19:
  v35 = nullptr;
  v31 = &v35;
  v36 = 0;
  sub_B8DE0(&v35);
  v18 = 0;
  if ( (_QWORD)xmmword_251458 )
  {
    v32 = 0;
    v19 = 0;
    v33 = &v34;
    while ( 1 )
    {
      a2 = (__int64 *)v19;
      v20 = v32 << 6;
      v21 = (unsigned int *)((v32 << 6) + qword_251450);
      v22 = *v21;
      v19 = v21[1];
      v23 = sub_BF9F0((__int64)&v35, (unsigned int)a2, *v21, 0.0, a8);
      if ( v23 < 0 )
        break;
      v34 = v22;
      v18 += v23;
      while ( v22 < v19 )
      {
        while ( 1 )
        {
          v24 = sub_B87B0(v35, v36, v22, v19);
          if ( !v24 )
          {
            a2 = (__int64 *)(v20 + qword_251450);
            if ( !(unsigned __int8)sub_BF360((__int64)&v35, v20 + qword_251450, v22, v19, 0.0, a8) )
              goto LABEL_46;
            ++v18;
            goto LABEL_28;
          }
          if ( *((_BYTE *)v24 + 8) )
            break;
          v25 = v24[1];
          if ( v22 < *v24 )
          {
            LODWORD(v30) = v24[1];
            a2 = (__int64 *)(v20 + qword_251450);
            if ( !(unsigned __int8)sub_BF360((__int64)&v35, v20 + qword_251450, v22, *v24, 0.0, a8) )
              goto LABEL_46;
            v25 = (unsigned int)v30;
            ++v18;
          }
          v22 = v25;
          v34 = v25;
          if ( v25 >= v19 )
            goto LABEL_28;
        }
        v30 = v24;
        a2 = (__int64 *)(v20 + qword_251450);
        v28 = sub_B9320((__int64)v24, v20 + qword_251450);
        if ( v28 == -1 )
          goto LABEL_46;
        v18 += v28;
        if ( *v30 == v22 && v19 == v30[1] )
          break;
        a2 = (__int64 *)(v20 + qword_251450);
        if ( !(unsigned __int8)sub_BF680(
                                 &v35,
                                 v20 + qword_251450,
                                 &v34,
                                 v19,
                                 (_QWORD)xmmword_251458 - 1LL == v32,
                                 0.0,
                                 a8) )
          goto LABEL_46;
        v22 = v34;
        ++v18;
      }
LABEL_28:
      if ( ++v32 >= (unsigned __int64)xmmword_251458 )
      {
        a2 = nullptr;
        if ( (_QWORD)xmmword_251458 )
          a2 = (__int64 *)*(unsigned int *)(qword_251450 + ((_QWORD)xmmword_251458 << 6) - 60);
        goto LABEL_31;
      }
    }
    LODWORD(v30) = v23;
    if ( !v35 )
      goto LABEL_48;
    *(_QWORD *)&v36 = 0;
    qfree();
    v27 = (int)v30;
  }
  else
  {
    a2 = nullptr;
LABEL_31:
    v26 = sub_BF9F0((__int64)&v35, (unsigned int)a2, 0xFFFFFFFF, 0.0, a8);
    if ( v26 < 0 )
    {
LABEL_46:
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree();
      }
      goto LABEL_48;
    }
    v27 = v18 + v26;
    if ( v35 )
    {
      LODWORD(v30) = v27;
      *(_QWORD *)&v36 = 0;
      qfree();
      v27 = (int)v30;
    }
    if ( v27 > 0 )
    {
      sub_C0300();
      a2 = nullptr;
      mark_builtin_widgets();
      goto LABEL_4;
    }
  }
  if ( v27 )
LABEL_48:
    sub_92120((__int64)"interr: failed to sync segment information");
LABEL_4:
  callui(46, a2, v9, v10, v11, v12, v30, v31, v32, v33);
  v13 = xmmword_251458;
  *a1 = xmmword_251458;
  if ( !v13 )
    return 0;
  result = qcalloc();
  if ( !result )
    sub_98F10((__int64)"get_memory_config", 8);
  for ( i = 0; *a1 > (int)i; ++i )
    *(_QWORD *)(result + 8 * i) = *(_QWORD *)(qword_251450 + (i << 6));
  return result;
}


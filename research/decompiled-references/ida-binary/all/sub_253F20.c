__int64 __fastcall sub_253F20(
        int a1,
        unsigned int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        char *a12)
{
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v16; // rax
  const char *v17; // rsi
  unsigned int v18; // r12d
  double v19; // xmm4_8
  double v20; // xmm5_8
  int v21; // eax
  size_t v23; // rdx
  void *p_s; // rdi
  int v25; // edx
  _BYTE v26[16]; // [rsp+10h] [rbp-78h] BYREF
  int v27; // [rsp+20h] [rbp-68h] BYREF
  void *s; // [rsp+28h] [rbp-60h] BYREF
  size_t n[3]; // [rsp+30h] [rbp-58h]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( a1 < 0 )
    return 0;
  if ( a1 >= (unsigned __int64)xmmword_8CC398 )
    return 0;
  v13 = qword_8CC390 + 56LL * a1;
  if ( !v13 )
    return 0;
  if ( !(_DWORD)dword_8CC428 )
    return 0;
  v14 = qword_8CC430;
  v16 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
  if ( qword_8CC430 == v16 )
    return 0;
  while ( (_DWORD)dword_8CC428 != *(_DWORD *)v14 )
  {
    v14 += 256;
    if ( v16 == v14 )
      return 0;
  }
  if ( !v14 || !sub_23F1C0(v14, a1, a3, (unsigned int)dword_8CC428, a12) )
    return 0;
  v17 = (const char *)(unsigned int)a1;
  v27 = -2;
  s = (void *)-1LL;
  *(_OWORD *)n = 0;
  v18 = sub_23F680(dword_8CC428, a1, (const char *)&v27, 0.0);
  if ( !(_BYTE)v18 )
    goto LABEL_25;
  if ( a2 == 3 )
  {
    s = (void *)~(unsigned __int64)s;
LABEL_24:
    v17 = (const char *)(unsigned int)a1;
    sub_2532C0(dword_8CC428, (unsigned int)a1, (__int64)&v27, 0.0, a4, a5, a6, v19, v20, a9, a10);
LABEL_25:
    v21 = v27;
    goto LABEL_26;
  }
  if ( a2 > 3 )
  {
    if ( a2 == 4 )
    {
      if ( v27 < -1 )
      {
        p_s = &s;
        v23 = 8LL * (v27 == -2);
      }
      else
      {
        v23 = n[0];
        p_s = s;
      }
      memset(p_s, 0, v23);
      goto LABEL_24;
    }
    goto LABEL_29;
  }
  if ( a2 - 1 > 1 )
    goto LABEL_29;
  v21 = v27;
  if ( v27 == -1 )
  {
    v17 = (const char *)s;
    if ( (unsigned int)cpu2ieee(v26, s, LODWORD(n[0])) == 1
      && (v17 = (const char *)&unk_5E20A0, (unsigned int)eadd(v26, &unk_5E20A0, v26, a2 == 2) == 1) )
    {
      v17 = v26;
      v25 = ieee2cpu(s, v26, LODWORD(n[0]));
      v21 = v27;
      if ( v25 != 1 )
        goto LABEL_16;
      if ( v27 != -2 )
        goto LABEL_24;
    }
    else
    {
      v21 = v27;
      if ( v27 != -2 )
        goto LABEL_17;
    }
LABEL_34:
    v17 = (const char *)&v27;
    if ( (unsigned __int8)sub_236190(v13, (const char *)&v27, (_QWORD *)(v14 + 40)) )
    {
      s = (char *)s + 2 * (a2 != 2) - 1;
      goto LABEL_24;
    }
LABEL_29:
    v21 = v27;
    v18 = 0;
    goto LABEL_26;
  }
LABEL_16:
  if ( v21 == -2 )
    goto LABEL_34;
LABEL_17:
  v18 = 0;
LABEL_26:
  if ( v21 >= -1 && s )
  {
    n[0] = 0;
    qfree(s, v17);
  }
  return v18;
}

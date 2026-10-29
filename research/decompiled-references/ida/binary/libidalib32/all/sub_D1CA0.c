__int64 __fastcall sub_D1CA0(int a1, unsigned int a2)
{
  __int64 v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // r12d
  int v7; // eax
  size_t v9; // rdx
  void *p_s; // rdi
  int v11; // edx
  int v12; // [rsp+20h] [rbp-68h] BYREF
  void *s; // [rsp+28h] [rbp-60h] BYREF
  size_t n[3]; // [rsp+30h] [rbp-58h]
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( a1 < 0 )
    return 0;
  if ( a1 >= (unsigned __int64)xmmword_251378 )
    return 0;
  v3 = qword_251370 + 56LL * a1;
  if ( !v3 )
    return 0;
  if ( !dword_251408 )
    return 0;
  v4 = qword_251410;
  v5 = qword_251410 + 232 * xmmword_251418;
  if ( qword_251410 == v5 )
    return 0;
  while ( dword_251408 != *(_DWORD *)v4 )
  {
    v4 += 232;
    if ( v5 == v4 )
      return 0;
  }
  if ( !v4 || !sub_CE480(v4, a1) )
    return 0;
  v12 = -2;
  s = (void *)-1LL;
  *(_OWORD *)n = 0;
  v6 = sub_CE8E0(dword_251408, a1, (__int64)&v12);
  if ( !(_BYTE)v6 )
    goto LABEL_25;
  if ( a2 == 3 )
  {
    s = (void *)~(unsigned __int64)s;
LABEL_24:
    sub_D1320(dword_251408, (unsigned int)a1, (__int64)&v12);
LABEL_25:
    v7 = v12;
    goto LABEL_26;
  }
  if ( a2 > 3 )
  {
    if ( a2 == 4 )
    {
      if ( v12 < -1 )
      {
        p_s = &s;
        v9 = 8LL * (v12 == -2);
      }
      else
      {
        v9 = n[0];
        p_s = s;
      }
      memset(p_s, 0, v9);
      goto LABEL_24;
    }
    goto LABEL_29;
  }
  if ( a2 - 1 > 1 )
    goto LABEL_29;
  v7 = v12;
  if ( v12 == -1 )
  {
    if ( (unsigned int)cpu2ieee() == 1 && (unsigned int)eadd() == 1 )
    {
      v11 = ieee2cpu();
      v7 = v12;
      if ( v11 != 1 )
        goto LABEL_16;
      if ( v12 != -2 )
        goto LABEL_24;
    }
    else
    {
      v7 = v12;
      if ( v12 != -2 )
        goto LABEL_17;
    }
LABEL_34:
    if ( (unsigned __int8)sub_C6270(v3, (__int64)&v12, (_QWORD *)(v4 + 40)) )
    {
      s = (char *)s + 2 * (a2 != 2) - 1;
      goto LABEL_24;
    }
LABEL_29:
    v7 = v12;
    v6 = 0;
    goto LABEL_26;
  }
LABEL_16:
  if ( v7 == -2 )
    goto LABEL_34;
LABEL_17:
  v6 = 0;
LABEL_26:
  if ( v7 >= -1 && s )
  {
    n[0] = 0;
    qfree();
  }
  return v6;
}


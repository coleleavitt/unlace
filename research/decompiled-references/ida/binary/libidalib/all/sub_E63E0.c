__int64 __fastcall sub_E63E0(__int64 a1)
{
  __int16 v1; // bp
  int v2; // eax
  size_t v3; // r15
  _BYTE *v4; // r14
  unsigned __int64 v5; // xmm0_8
  const char *v6; // rax
  const char *v7; // rdx
  __m128i v8; // xmm1
  _BOOL8 v9; // rsi
  __int64 result; // rax
  __int64 v11; // rax
  int v12; // eax
  _DWORD *v13; // rdi
  void *src; // [rsp+0h] [rbp-B8h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-B0h]
  __int64 v16; // [rsp+20h] [rbp-98h] BYREF
  __int128 v17; // [rsp+28h] [rbp-90h]
  const char *v18; // [rsp+40h] [rbp-78h] BYREF
  __m128i v19; // [rsp+48h] [rbp-70h] BYREF
  char *v20; // [rsp+60h] [rbp-58h] BYREF
  __int128 v21; // [rsp+68h] [rbp-50h]
  unsigned __int64 v22; // [rsp+78h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  set_debug_event_code();
  if ( byte_2526BA )
  {
    if ( !byte_252752 )
      goto LABEL_3;
    sub_C4290(&qword_2524A0, 0);
  }
  result = (unsigned __int8)byte_252752;
  if ( byte_252752 )
    return result;
LABEL_3:
  src = nullptr;
  v16 = 0;
  byte_2526BA = 0;
  *(_OWORD *)n = 0;
  v17 = 0;
  if ( (*(_BYTE *)(dbg + 32LL) & 1) != 0 )
  {
    if ( !(unsigned __int8)sub_E5800((__int64 *)&src, "Host") )
      reg_str_get();
    if ( !(unsigned __int8)sub_E5800(&v16, "Password") )
      reg_str_get();
    v1 = qword_2521F0;
    if ( !qword_2521F0 )
    {
      netnode_check();
      v11 = netnode_altval();
      v1 = v11;
      if ( v11 )
        qword_2521F0 = v11;
      else
        v1 = reg_int_op();
    }
    v18 = nullptr;
    v19 = 0;
  }
  else
  {
    v19 = 0;
    v1 = 0;
    v18 = nullptr;
  }
  v2 = sub_9E1E0();
  byte_252752 = v2 == 1;
  if ( v2 == 1 )
  {
    sub_DFFA0();
    v12 = xmmword_252458;
    v13 = qword_252758;
    if ( qword_252758 )
    {
      *(_QWORD *)qword_252758 = qword_252450;
      v13[2] = v12;
      sub_CDCF0((__int64)v13, 24);
    }
    else
    {
      sub_9E1E0();
    }
    goto LABEL_18;
  }
  v3 = n[0];
  if ( n[0] > 1 )
  {
    if ( (*(_BYTE *)(dbg + 33LL) & 0x20) != 0 )
    {
      sub_96630((__int64 *)&v18);
      v5 = v19.m128i_i64[0];
      if ( a1 )
        goto LABEL_17;
LABEL_38:
      if ( v5 > 1 )
        sub_92200((__int64)"ICON ERROR\nAUTOHIDE NONE\n%s", v18);
      goto LABEL_18;
    }
    v4 = (_BYTE *)qalloc_or_throw();
    memcpy(v4, src, v3);
    v20 = nullptr;
    v21 = 0;
    if ( v1 )
    {
      if ( *v4 != 91 )
        strchr(v4, 58);
      sub_94440((__int64 *)&v20);
    }
    else
    {
      v20 = (char *)qvector_reserve();
      *(_QWORD *)&v21 = v3;
      memmove(v20, v4, v3 - 1);
      v20[v3 - 1] = 0;
    }
    sub_96630((__int64 *)&v18);
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree();
    }
    if ( v4 )
      qfree();
  }
  v5 = v19.m128i_i64[0];
  if ( !a1 )
    goto LABEL_38;
LABEL_17:
  v6 = *(const char **)a1;
  v7 = v18;
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v19.m128i_i64[1]);
  *(_QWORD *)a1 = v7;
  v18 = v6;
  v19 = v8;
LABEL_18:
  v9 = dbg != 0;
  sub_10AF30(1, v9);
  TView::disableCommand((TView *)unk_24EFE6, v9);
  if ( v18 )
  {
    v19.m128i_i64[0] = 0;
    qfree();
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  return (unsigned __int8)byte_252752;
}


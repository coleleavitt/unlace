__int64 (__fastcall ***__fastcall sub_15D7D80(__int64 a1))()
{
  __int64 v1; // rax
  __int64 (__fastcall ***v2)(); // r13
  int v4; // r12d
  std::__detail::_List_node_base *v5; // rax
  std::__detail::_List_node_base *v6; // rsi
  const void *v7; // rbp
  void *v8; // rbx
  __m128i si128; // xmm0
  __int64 (__fastcall **v10)(); // r14
  __int64 v11; // rax
  __int64 (__fastcall **v12)(); // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 (__fastcall **v16)(); // r15
  __int64 (__fastcall *v17)(); // r15
  __int64 (__fastcall *v18)(); // r15
  std::__detail::_List_node_base *v19; // [rsp+0h] [rbp-E8h]
  void *s1; // [rsp+8h] [rbp-E0h] BYREF
  __int64 (__fastcall **v21)(); // [rsp+10h] [rbp-D8h]
  __int64 (__fastcall **v22)(); // [rsp+18h] [rbp-D0h]
  __m128 v23; // [rsp+20h] [rbp-C8h] BYREF
  std::__detail::_List_node_base *v24; // [rsp+30h] [rbp-B8h]
  int *v25; // [rsp+38h] [rbp-B0h]
  __int64 *v26; // [rsp+40h] [rbp-A8h]
  void *v27; // [rsp+48h] [rbp-A0h]
  void **v28; // [rsp+50h] [rbp-98h]
  __int64 *v29; // [rsp+58h] [rbp-90h]
  int v30; // [rsp+6Ch] [rbp-7Ch] BYREF
  _QWORD v31[2]; // [rsp+70h] [rbp-78h] BYREF
  __m128i v32; // [rsp+80h] [rbp-68h] BYREF
  void *s2[11]; // [rsp+90h] [rbp-58h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 32);
  if ( (unsigned __int16)v1 <= 0x1A1u )
    return off_2C86E20[v1];
  if ( !(_BYTE)byte_2CD8B30 && __cxa_guard_acquire(&byte_2CD8B30) )
  {
    __cxa_atexit(nullsub_564, &off_2C86DE0, &off_2B25620);
    __cxa_guard_release(&byte_2CD8B30);
  }
  v2 = &off_2C86DE0;
  if ( *(_WORD *)(a1 + 32) != 419 )
  {
    v28 = s2;
    sub_FA73F0(s2, a1);
    v4 = *(_BYTE *)(a1 + 34) & 0xF;
    if ( v4 == 8 )
      v4 = 6;
    v5 = sub_FFF9B0();
    v6 = *(std::__detail::_List_node_base **)v5;
    v24 = v5;
    v19 = v6;
    if ( v6 == v5 )
      goto LABEL_23;
    v7 = s2[0];
    v8 = s2[1];
    v25 = &v30;
    s1 = v31;
    v26 = (__int64 *)&v32;
    v27 = s2[0];
    v29 = &v32.m128i_i64[1];
    v23 = _mm_loadh_ps((const double *)&s1);
LABEL_10:
    si128 = _mm_load_si128((const __m128i *)&v23);
    v30 = v4;
    v31[0] = v7;
    v2 = *((__int64 (__fastcall ****)())v19 + 2);
    v31[1] = v8;
    v32 = si128;
    v10 = v2[2];
    v11 = 16LL * (_QWORD)v2[3];
    v12 = &v10[(unsigned __int64)v11 / 8];
    v13 = v11;
    v14 = v11 >> 6;
    v21 = v12;
    v15 = v13 >> 4;
    if ( v14 <= 0 )
      goto LABEL_51;
    v22 = &v10[8 * v14];
    while ( 1 )
    {
      if ( v4 == *(_DWORD *)v10 )
      {
        v17 = v10[1];
        if ( !v17 )
        {
          if ( !v8 )
            goto LABEL_21;
          v16 = v10 + 2;
          if ( v4 != *((_DWORD *)v10 + 4) )
            goto LABEL_13;
          goto LABEL_29;
        }
        if ( v8 == (void *)strlen((const char *)v10[1]) && (!v8 || !memcmp(v17, v7, (size_t)v8)) )
          goto LABEL_21;
      }
      v16 = v10 + 2;
      if ( v4 != *((_DWORD *)v10 + 4) )
        goto LABEL_13;
LABEL_29:
      if ( v10[3] )
      {
        s1 = v10[3];
        if ( v8 == (void *)strlen((const char *)s1) )
        {
          if ( !v8 || !memcmp(s1, v7, (size_t)v8) )
          {
LABEL_38:
            v10 = v16;
            goto LABEL_21;
          }
          v16 = v10 + 4;
          if ( v4 != *((_DWORD *)v10 + 8) )
            goto LABEL_14;
LABEL_34:
          if ( v10[5] )
          {
            s1 = v10[5];
            if ( v8 == (void *)strlen((const char *)s1) && (!v8 || !memcmp(s1, v7, (size_t)v8)) )
              goto LABEL_38;
          }
          else if ( !v8 )
          {
            goto LABEL_38;
          }
          goto LABEL_14;
        }
      }
      else if ( !v8 )
      {
        goto LABEL_38;
      }
LABEL_13:
      v16 = v10 + 4;
      if ( v4 == *((_DWORD *)v10 + 8) )
        goto LABEL_34;
LABEL_14:
      s1 = v10 + 6;
      if ( v4 == *((_DWORD *)v10 + 12) )
      {
        v18 = v10[7];
        if ( v18 )
        {
          if ( v8 == (void *)strlen((const char *)v10[7]) && (!v8 || !memcmp(v18, v7, (size_t)v8)) )
          {
            v10 = (__int64 (__fastcall **)())s1;
            goto LABEL_21;
          }
        }
        else if ( !v8 )
        {
          v10 += 6;
          goto LABEL_21;
        }
      }
      v10 += 8;
      if ( v22 == v10 )
      {
        v15 = ((char *)v21 - (char *)v10) >> 4;
LABEL_51:
        if ( v15 == 2 )
          goto LABEL_58;
        if ( v15 != 3 )
        {
          if ( v15 == 1 )
            goto LABEL_54;
          goto LABEL_22;
        }
        if ( (unsigned __int8)sub_15D62E0(v25, v29, *(_DWORD *)v10, (const char **)v10 + 1) )
          goto LABEL_21;
        v10 += 2;
LABEL_58:
        if ( (unsigned __int8)sub_15D62E0(v25, v26 + 1, *(_DWORD *)v10, (const char **)v10 + 1) )
          goto LABEL_21;
        v10 += 2;
LABEL_54:
        if ( (unsigned __int8)sub_15D62E0(v25, v26 + 1, *(_DWORD *)v10, (const char **)v10 + 1) )
        {
LABEL_21:
          if ( v21 == v10 )
            goto LABEL_22;
LABEL_25:
          if ( v27 != v28 + 2 )
            operator delete(v27);
          return v2;
        }
LABEL_22:
        v19 = *(std::__detail::_List_node_base **)v19;
        if ( v24 == v19 )
        {
LABEL_23:
          if ( !(_BYTE)byte_2CD8B28 && __cxa_guard_acquire(&byte_2CD8B28) )
          {
            __cxa_atexit(nullsub_564, &off_2C86DA0, &off_2B25620);
            __cxa_guard_release(&byte_2CD8B28);
          }
          v2 = &off_2C86DA0;
          v27 = s2[0];
          goto LABEL_25;
        }
        goto LABEL_10;
      }
    }
  }
  return v2;
}

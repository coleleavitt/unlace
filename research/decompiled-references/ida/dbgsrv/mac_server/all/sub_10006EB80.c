/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006EB80
// Address: 0x000000010006EB80

//----- (000000010006EB80) ----------------------------------------------------
__int64 __fastcall sub_10006EB80(__int64 a1, unsigned int a2, unsigned int a3)
{
  _QWORD *v4; // rax
  const char *v5; // rdx
  const char *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r13
  _BYTE *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r13
  _BYTE *v12; // rax
  __int64 v13; // rax
  __int64 v14; // r13
  _BYTE *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  _BYTE *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r13
  _BYTE *v21; // rax
  __int64 v22; // rax
  __int64 v23; // r13
  _BYTE *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r13
  _BYTE *v27; // rax
  __int64 v28; // rax
  const char *v29; // r8
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rax
  __int128 v34; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+10h] [rbp-40h]

  v34 = 0;
  v35 = 0;
  v4 = qvector_reserve((__int64)&v34, nullptr, 0xEu, 1u);
  v5 = "SSL_accept : ";
  if ( (a2 & 0x2000) == 0 )
    v5 = "SSL_???    : ";
  v6 = "SSL_connect: ";
  if ( (a2 & 0x1000) == 0 )
    v6 = v5;
  *(_QWORD *)&v34 = v4;
  *((_QWORD *)&v34 + 1) = 14;
  v7 = *(_QWORD *)v6;
  *(_QWORD *)((char *)v4 + 5) = *(_QWORD *)(v6 + 5);
  *v4 = v7;
  *(_BYTE *)(v34 + 13) = 0;
  if ( (a2 & 1) != 0 )
  {
    v8 = 0;
    if ( *((_QWORD *)&v34 + 1) )
      v8 = *((_QWORD *)&v34 + 1) - 1LL;
    v9 = (_BYTE *)v34;
    if ( v35 < v8 + 13 )
    {
      v9 = qvector_reserve((__int64)&v34, (void *)v34, v8 + 13, 1u);
      *(_QWORD *)&v34 = v9;
    }
    *((_QWORD *)&v34 + 1) = v8 + 13;
    v9[v8 + 12] = 0;
    v10 = v34;
    *(_QWORD *)(v34 + v8) = 0x5F42435F4C535320LL;
    *(_DWORD *)(v10 + v8 + 8) = 1347374924;
  }
  if ( (a2 & 2) != 0 )
  {
    v11 = 0;
    if ( *((_QWORD *)&v34 + 1) )
      v11 = *((_QWORD *)&v34 + 1) - 1LL;
    v12 = (_BYTE *)v34;
    if ( v35 < v11 + 13 )
    {
      v12 = qvector_reserve((__int64)&v34, (void *)v34, v11 + 13, 1u);
      *(_QWORD *)&v34 = v12;
    }
    *((_QWORD *)&v34 + 1) = v11 + 13;
    v12[v11 + 12] = 0;
    v13 = v34;
    *(_QWORD *)(v34 + v11) = 0x5F42435F4C535320LL;
    *(_DWORD *)(v13 + v11 + 8) = 1414092869;
  }
  if ( (a2 & 4) != 0 )
  {
    v14 = 0;
    if ( *((_QWORD *)&v34 + 1) )
      v14 = *((_QWORD *)&v34 + 1) - 1LL;
    v15 = (_BYTE *)v34;
    if ( v35 < v14 + 13 )
    {
      v15 = qvector_reserve((__int64)&v34, (void *)v34, v14 + 13, 1u);
      *(_QWORD *)&v34 = v15;
    }
    *((_QWORD *)&v34 + 1) = v14 + 13;
    v15[v14 + 12] = 0;
    v16 = v34;
    *(_QWORD *)(v34 + v14) = 0x5F42435F4C535320LL;
    *(_DWORD *)(v16 + v14 + 8) = 1145128274;
  }
  if ( (a2 & 8) != 0 )
  {
    v17 = 0;
    if ( *((_QWORD *)&v34 + 1) )
      v17 = *((_QWORD *)&v34 + 1) - 1LL;
    v18 = (_BYTE *)v34;
    if ( v35 < v17 + 14 )
    {
      v18 = qvector_reserve((__int64)&v34, (void *)v34, v17 + 14, 1u);
      *(_QWORD *)&v34 = v18;
    }
    *((_QWORD *)&v34 + 1) = v17 + 14;
    v18[v17 + 13] = 0;
    v19 = v34;
    *(_QWORD *)(v34 + v17 + 5) = 0x45544952575F4243LL;
    *(_QWORD *)(v19 + v17) = 0x5F42435F4C535320LL;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    v20 = 0;
    if ( *((_QWORD *)&v34 + 1) )
      v20 = *((_QWORD *)&v34 + 1) - 1LL;
    v21 = (_BYTE *)v34;
    if ( v35 < v20 + 14 )
    {
      v21 = qvector_reserve((__int64)&v34, (void *)v34, v20 + 14, 1u);
      *(_QWORD *)&v34 = v21;
    }
    *((_QWORD *)&v34 + 1) = v20 + 14;
    v21[v20 + 13] = 0;
    v22 = v34;
    *(_QWORD *)(v34 + v20 + 5) = 0x5452454C415F4243LL;
    *(_QWORD *)(v22 + v20) = 0x5F42435F4C535320LL;
  }
  if ( (a2 & 0x10) != 0 )
  {
    v23 = 0;
    if ( *((_QWORD *)&v34 + 1) )
      v23 = *((_QWORD *)&v34 + 1) - 1LL;
    v24 = (_BYTE *)v34;
    if ( v35 < v23 + 24 )
    {
      v24 = qvector_reserve((__int64)&v34, (void *)v34, v23 + 24, 1u);
      *(_QWORD *)&v34 = v24;
    }
    *((_QWORD *)&v34 + 1) = v23 + 24;
    v24[v23 + 23] = 0;
    v25 = v34;
    *(_OWORD *)(v34 + v23) = *(_OWORD *)" SSL_CB_HANDSHAKE_START";
    *(_QWORD *)(v25 + v23 + 15) = 0x54524154535F454BLL;
  }
  if ( (a2 & 0x20) != 0 )
  {
    v26 = 0;
    if ( *((_QWORD *)&v34 + 1) )
      v26 = *((_QWORD *)&v34 + 1) - 1LL;
    v27 = (_BYTE *)v34;
    if ( v35 < v26 + 23 )
    {
      v27 = qvector_reserve((__int64)&v34, (void *)v34, v26 + 23, 1u);
      *(_QWORD *)&v34 = v27;
    }
    *((_QWORD *)&v34 + 1) = v26 + 23;
    v27[v26 + 22] = 0;
    v28 = v34;
    *(_OWORD *)(v34 + v26) = *(_OWORD *)" SSL_CB_HANDSHAKE_DONE";
    *(_QWORD *)(v28 + v26 + 14) = 0x454E4F445F454B41LL;
  }
  if ( *((_QWORD *)&v34 + 1) )
    v29 = (const char *)v34;
  else
    v29 = _s1;
  sub_100000AE0((int)"TLS: info_callback(%p, %08X, %08X): %s\n", a1, a2, a3, v29);
  v30 = (*(__int64 (__fastcall **)(__int64))(xmmword_1000AE410 + 304))(a1);
  sub_100000AE0((int)"TLS:  [state] %s\n", v30);
  if ( (a2 & 0x4000) != 0 )
  {
    v31 = (*(__int64 (__fastcall **)(_QWORD))(xmmword_1000AE410 + 200))(a3);
    v32 = (*(__int64 (__fastcall **)(_QWORD))(xmmword_1000AE410 + 192))(a3);
    sub_100000AE0((int)"TLS:  %s: %s\n", v31, v32);
  }
  if ( (_QWORD)v34 )
  {
    *((_QWORD *)&v34 + 1) = 0;
    qfree((void *)v34);
  }
  return __stack_chk_guard;
}
// 1000AE410: using guessed type __int128 xmmword_1000AE410;

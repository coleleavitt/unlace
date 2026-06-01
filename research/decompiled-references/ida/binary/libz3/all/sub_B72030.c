__int64 __fastcall sub_B72030(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 *v12; // rbx
  unsigned int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // rdx
  __int64 i; // rdx
  __int64 *v23; // [rsp+0h] [rbp-D8h]
  int v24; // [rsp+8h] [rbp-D0h]
  bool v25; // [rsp+Fh] [rbp-C9h]
  __int64 *v26; // [rsp+10h] [rbp-C8h]
  __int64 *v27; // [rsp+10h] [rbp-C8h]
  __int64 v28; // [rsp+18h] [rbp-C0h]
  __int64 v29[23]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 _28[23]; // [rsp+28h] [rbp-B0h] BYREF

  v7 = a2[1];
  v23 = v29;
  v26 = v29;
  v28 = 0x1000000000LL;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + 8);
  if ( v8 == v9 )
  {
    v25 = 1;
  }
  else
  {
    v10 = sub_983520((__int64)a2, v8, *(_QWORD *)(v8 + 8));
    if ( v10 && *(_DWORD *)(v7 + 712) )
      v10 = sub_15E2180(v7);
    v9 = *(_QWORD *)(a1 + 16);
    v29[0] = v10;
    LODWORD(v28) = 1;
    v25 = v10 != 0;
  }
  v11 = sub_986FD0(a2, v9, *(const __m128i ***)(a1 + 24), *(_QWORD *)(a1 + 32), a5, a6);
  v12 = v29;
  v13 = v28 + 1;
  v14 = *(_QWORD *)(a1 + 24);
  v29[(unsigned int)v28] = v11;
  LODWORD(v28) = v28 + 1;
  v15 = *(_QWORD *)(v14 + 8);
  if ( v11 )
  {
    if ( v14 == v15 )
    {
LABEL_11:
      if ( v25 )
      {
        v17 = sub_15DE3E0(v7, (int)v29, v24, (int)v26, (void *)v28);
        sub_15E1B70(v7);
        v18 = sub_15DE370(v7);
        v19 = sub_15DE0E0(v7, v17, v18);
        v12 = v27;
        v11 = v19;
      }
      else
      {
        v11 = 0;
      }
      goto LABEL_13;
    }
  }
  else
  {
    v25 = 0;
    if ( v14 == v15 )
      goto LABEL_13;
  }
  v11 = sub_983520((__int64)a2, v14, v15);
  v16 = v13;
  if ( v13 >= 0x10 )
  {
    v12 = (__int64 *)sub_186B270(0x100u);
    v16 = v13;
    if ( v12 == _28 )
    {
      for ( i = 0; i != v13; ++i )
        v12[i] = v29[i];
    }
    else
    {
      v21 = 0;
      do
      {
        *(__m128i *)&v12[v21] = _mm_loadu_si128((const __m128i *)&v29[v21]);
        v21 += 2;
      }
      while ( 2LL * (v13 >> 1) != v21 );
      if ( (v13 & 1) != 0 )
        v12[v13 & 0xFFFFFFFE] = v29[v13 & 0xFFFFFFFE];
    }
    LODWORD(v26) = (_DWORD)v12;
    HIDWORD(v28) = 32;
  }
  else
  {
    v12 = v29;
  }
  v12[v16] = v11;
  LODWORD(v28) = v16 + 1;
  if ( v11 )
    goto LABEL_11;
LABEL_13:
  if ( v12 != v23 && v12 )
    sub_186B220(v12);
  return v11;
}


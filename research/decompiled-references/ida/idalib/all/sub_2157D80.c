__int64 __fastcall sub_2157D80(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r15
  __int64 v11; // r12
  void *v12; // rsi
  _BYTE *v13; // rdi
  size_t v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  double v18[2]; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v19; // [rsp+18h] [rbp-E0h] BYREF
  __int64 *v20; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v22[2]; // [rsp+30h] [rbp-C8h] BYREF
  char v23; // [rsp+40h] [rbp-B8h]
  __int64 v24[2]; // [rsp+50h] [rbp-A8h] BYREF
  char v25; // [rsp+60h] [rbp-98h]
  void *src; // [rsp+70h] [rbp-88h] BYREF
  size_t n; // [rsp+78h] [rbp-80h]
  _QWORD v28[2]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v29[4]; // [rsp+90h] [rbp-68h] BYREF
  __int16 v30; // [rsp+B0h] [rbp-48h]

  sub_2157700((__int64)v22, a2);
  if ( (v23 & 1) == 0 )
  {
    v5 = v22[0];
    v6 = v22[1];
    sub_2157B60((__int64)v24, a2);
    if ( (v25 & 1) == 0 )
    {
      v7 = v24[0];
      *(_BYTE *)(a1 + 32) &= ~1u;
      *(_QWORD *)(a1 + 16) = v5;
      *(_QWORD *)a1 = v7;
      v8 = v24[1];
      *(_QWORD *)(a1 + 24) = v6;
      *(_QWORD *)(a1 + 8) = v8;
LABEL_6:
      sub_111DFC0(v24);
      goto LABEL_3;
    }
    v9 = (_QWORD *)v24[0];
    v29[1] = v6;
    v30 = 261;
    v20 = &v19;
    v24[0] = 0;
    v29[0] = v5;
    v19 = 0;
    v21 = v9;
    sub_111E1E0((__int64 *)&src, &v21, &v20);
    if ( v21 )
      (*(void (__fastcall **)(_QWORD *))(*v21 + 8LL))(v21);
    v10 = v19;
    v19 = 0;
    v11 = operator new(0x40u);
    *(_QWORD *)(v11 + 16) = 0;
    *(_BYTE *)(v11 + 24) = 0;
    *(_QWORD *)v11 = &off_2BEAE08;
    *(_QWORD *)(v11 + 8) = v11 + 24;
    *(_BYTE *)(v11 + 48) = 0;
    *(_QWORD *)(v11 + 56) = 0;
    *(_QWORD *)&v18[0] = v11 + 24;
    sub_2253560(&src, v29);
    v12 = src;
    v13 = *(_BYTE **)(v11 + 8);
    if ( src == v28 )
    {
      v14 = n;
      if ( n )
      {
        if ( n == 1 )
          *v13 = v28[0];
        else
          memcpy(v13, src, n);
        v14 = n;
        v13 = *(_BYTE **)(v11 + 8);
      }
      *(_QWORD *)(v11 + 16) = v14;
      v13[v14] = 0;
      v13 = src;
      goto LABEL_13;
    }
    v14 = v28[0];
    if ( *(_BYTE **)&v18[0] == v13 )
    {
      v18[0] = *(double *)v28;
      *(_QWORD *)(v11 + 8) = src;
      *(__m128 *)(v11 + 16) = _mm_loadh_ps(v18);
    }
    else
    {
      v18[0] = *(double *)v28;
      v15 = *(_QWORD *)(v11 + 24);
      *(_QWORD *)(v11 + 8) = src;
      *(__m128 *)(v11 + 16) = _mm_loadh_ps(v18);
      if ( v13 )
      {
        src = v13;
        v28[0] = v15;
LABEL_13:
        n = 0;
        *v13 = 0;
        if ( src != v28 )
          operator delete(src);
        v16 = *(_QWORD *)(v11 + 56);
        *(_QWORD *)(v11 + 56) = v10;
        if ( v16 )
          (*(void (__fastcall **)(__int64, void *, size_t))(*(_QWORD *)v16 + 8LL))(v16, v12, v14);
        *(_QWORD *)(v11 + 40) = 0;
        v17 = v19;
        *(_QWORD *)(v11 + 48) = 0;
        if ( v17 )
          (*(void (__fastcall **)(__int64, void *, size_t))(*(_QWORD *)v17 + 8LL))(v17, v12, v14);
        *(_BYTE *)(a1 + 32) |= 1u;
        *(_QWORD *)a1 = v11;
        goto LABEL_6;
      }
    }
    v13 = v28;
    src = v28;
    goto LABEL_13;
  }
  v3 = v22[0];
  *(_BYTE *)(a1 + 32) |= 1u;
  v22[0] = 0;
  *(_QWORD *)a1 = v3;
LABEL_3:
  sub_111DFC0(v22);
  return a1;
}

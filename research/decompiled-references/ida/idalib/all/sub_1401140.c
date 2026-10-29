unsigned __int64 __fastcall sub_1401140(__int64 a1, int a2, _BYTE *a3, size_t a4, __int64 a5, __int64 a6)
{
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned int v12; // eax
  __int64 v13; // r9
  __int64 *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r9d
  __int64 *v18; // r8
  _QWORD *v19; // rcx
  unsigned int v20; // eax
  _BYTE *v21; // rsi
  __int64 v22; // rdx
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  __int64 v26; // rax
  __int64 v27; // [rsp-10h] [rbp-B8h]
  __int64 v28; // [rsp-8h] [rbp-B0h]
  unsigned int v29; // [rsp+Ch] [rbp-9Ch]
  int v30; // [rsp+Ch] [rbp-9Ch]
  __int64 *v31; // [rsp+10h] [rbp-98h]
  _QWORD *v32; // [rsp+18h] [rbp-90h]
  __m128i v33; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v34[16]; // [rsp+30h] [rbp-78h] BYREF
  void *v35; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v36[11]; // [rsp+50h] [rbp-58h] BYREF

  v9 = *(unsigned int *)(a1 + 336);
  *(_QWORD *)(a1 + 160) += 1776LL;
  *(_DWORD *)(a1 + 336) = v9 + 1;
  v10 = *(_QWORD *)(a1 + 80);
  v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(a1 + 88) >= v11 + 1776 && v10 )
  {
    *(_QWORD *)(a1 + 80) = v11 + 1776;
  }
  else
  {
    v30 = v9;
    v26 = sub_986170(a1 + 80, 1776, 1776, 3, v9, a6);
    LODWORD(v9) = v30;
    v11 = v26;
  }
  sub_FF1F40(v11, a3, a4, a2, 0, 0, 0, v9);
  *(_DWORD *)(v11 + 36) = 1;
  *(_QWORD *)(a1 + 72) = v11;
  v12 = sub_2244B30(a3, a4);
  v13 = (unsigned int)sub_2244CB0(a1 + 256, a3, a4, v12);
  v14 = (__int64 *)(*(_QWORD *)(a1 + 256) + 8 * v13);
  if ( *v14 )
  {
    if ( *v14 != -8 )
    {
      sub_13FA370((__int64 **)&v33, v14, 0);
      v15 = v33.m128i_i64[0];
      goto LABEL_11;
    }
    --*(_DWORD *)(a1 + 272);
  }
  v31 = v14;
  v29 = v13;
  v16 = sub_22300B0(a4 + 17, 8, v27, v28, v14, v13);
  v17 = v29;
  v18 = v31;
  v19 = (_QWORD *)v16;
  if ( a4 )
  {
    v32 = (_QWORD *)v16;
    memcpy((void *)(v16 + 16), a3, a4);
    v19 = v32;
    v18 = v31;
    v17 = v29;
  }
  *((_BYTE *)v19 + a4 + 16) = 0;
  *v19 = a4;
  v19[1] = 0;
  *v18 = (__int64)v19;
  ++*(_DWORD *)(a1 + 268);
  v20 = sub_22450D0(a1 + 256, v17);
  sub_13FA370((__int64 **)&v33, (__int64 *)(*(_QWORD *)(a1 + 256) + 8LL * v20), 0);
  v15 = v33.m128i_i64[0];
LABEL_11:
  v21 = *(_BYTE **)a5;
  v22 = *(_QWORD *)(a5 + 8);
  *(_QWORD *)(*(_QWORD *)v15 + 8LL) = v11;
  v33.m128i_i64[0] = (__int64)v34;
  sub_13F27F0(&v33, v21, (__int64)&v21[v22]);
  v23 = *(_BYTE **)(a5 + 32);
  v24 = *(_QWORD *)(a5 + 40);
  v35 = v36;
  sub_13F27F0(&v35, v23, (__int64)&v23[v24]);
  v36[2] = *(_QWORD *)(a5 + 64);
  sub_1400A10(a1, v11, &v33, 0, 0);
  if ( v35 != v36 )
    operator delete(v35);
  if ( (_BYTE *)v33.m128i_i64[0] != v34 )
    operator delete((void *)v33.m128i_i64[0]);
  return v11;
}

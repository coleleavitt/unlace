unsigned __int64 __fastcall sub_F45F00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __m128i v38; // [rsp+0h] [rbp-48h] BYREF
  __int64 v39; // [rsp+10h] [rbp-38h]
  int v40; // [rsp+18h] [rbp-30h]

  result = sub_9A4000(a1, a2, a3, a4, a5);
  if ( !result )
    goto LABEL_14;
  v10 = (__int64 *)result;
  v11 = *(_QWORD *)(result + 120);
  if ( !v11 )
  {
    a2 = v10[12];
    sub_A557A0((__int64 *)(a2 + 88), a2, v6, v7, v8, v9);
    v11 = v10[15];
  }
  result = v11 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !result )
    goto LABEL_14;
  if ( (*(_BYTE *)(result + 72) & 1) != 0 )
  {
    sub_B84BC0((__int64)v10);
    result = v10[15] & 0xFFFFFFFFFFFFFFF8LL;
  }
  if ( (result = *(_QWORD *)(result + 8)) == 0
    || (v12 = *(_QWORD *)(*(_QWORD *)result & 0xFFFFFFFFFFFFFFF0LL),
        (unsigned int)*(unsigned __int8 *)(v12 + 16) - 35 > 1)
    && (result = sub_F3F130(v12), (v12 = result) == 0)
    || (result = sub_9A4000(v12, a2, v6, v7, v8)) == 0 )
  {
LABEL_14:
    *(_QWORD *)(a1 + 32) |= 8uLL;
    return result;
  }
  v17 = v12 & 0xFFFFFFFFFFFFFFF0LL;
  if ( sub_B8A810((__int64 *)result, a2, v13, v14, v15, v16) )
  {
    result = sub_F42260(v12);
    if ( !(_BYTE)result )
    {
      *(_QWORD *)(a1 + 32) = v12 | 8;
      return result;
    }
    if ( sub_B8A810(v10, a2, v18, v19, v20, v21) )
    {
      if ( (unsigned __int8)sub_F42260(a1) )
      {
        v22 = sub_F43570(a1);
        v24 = v23;
        v38.m128i_i64[1] = v22;
        v38.m128i_i64[0] = sub_B685F0((__int64)v10);
        v39 = v24;
        v40 = 4;
        v28 = sub_F44AC0(&v38, v17, v25, v26, v27);
      }
      else
      {
        v30 = sub_B685F0((__int64)v10);
        v34 = sub_9A4000(v12, a2, v31, v32, v33);
        v28 = sub_A5E330(v30, v34, 0, v35, v36, v37);
      }
      v29 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v29 + 16) - 35 <= 1 )
        goto LABEL_19;
      goto LABEL_21;
    }
  }
  v29 = *(_QWORD *)v17;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v17 + 16LL) - 35 > 1 )
LABEL_21:
    v29 = sub_F3F130(v29);
LABEL_19:
  result = v29 | 8;
  *(_QWORD *)(a1 + 32) = result;
  return result;
}


void __fastcall sub_1A8DDA0(__int64 *a1, __int64 a2, const __m128i *a3, double a4, double a5)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r12
  __int8 v11; // al
  __int64 v12; // r14
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rsi
  __int64 *v20; // rax
  __int64 v21; // r15
  size_t v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  _QWORD **v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  __m128i *v35; // rbp
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // [rsp+4h] [rbp-E4h]
  __int64 v43; // [rsp+8h] [rbp-E0h]
  _QWORD *v44; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v46[32]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int8 *v47; // [rsp+40h] [rbp-A8h] BYREF
  char v48; // [rsp+98h] [rbp-50h]
  char v49; // [rsp+A4h] [rbp-44h]

  v8 = sub_168B6C0((__int64)a1);
  if ( a3[3].m128i_i16[4] > 1u )
  {
    sub_168B9F0((__int64)v46, a1, a3[1].m128i_u32[2], 0xCAAu, 0);
    v40 = sub_15DD120((__int64)v46, (__int64)a3);
    LODWORD(v45) = 1;
    sub_1587D10(v40, (int *)&v45);
    sub_15F7200(v46);
    return;
  }
  v10 = (_QWORD *)v8;
  if ( (unsigned __int8)sub_1A8D5F0(*a1, a2, (__int64)a3, v9) )
  {
    v11 = a3[3].m128i_i8[10];
    if ( (v11 & 0x20) != 0 )
    {
      v24 = a3[5].m128i_i64[13 * ((v11 & 4) != 0) + 2 * ((v11 & 8) != 0) + a3[3].m128i_u16[4]];
    }
    else
    {
      v12 = *a1;
      v13 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v13 = (_QWORD *)*v13;
      v16 = *(_QWORD *)(sub_B8C1B0((__int64)v13) + 16);
      if ( (v16 & 4) != 0 )
        v19 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v19 = v16 & 0xFFFFFFFFFFFFFFF8LL;
      v20 = sub_15F18E0(v12, v19, v14, v15, v17, v18);
      v21 = v10[2188];
      v43 = (__int64)v20;
      v42 = a3[1].m128i_i32[2];
      v22 = j__strlen("NSObject");
      v23 = sub_6F3470(v21, "NSObject", v22);
      v24 = sub_18013B0(v12, v23, v42, v43, 0, 0, a4, a5, 0, 0, 0, 0, 1u, 0, nullptr);
      if ( !v24 )
      {
        sub_168B9F0((__int64)v46, a1, a3[1].m128i_u32[2], 0xF50u, 0);
        if ( v48 )
        {
          sub_AE9DF0(&v47, (__int64)"NSObject", 1u);
        }
        else if ( v49 )
        {
          sub_1A8A4A0((__int64)v46, (__int64)"NSObject");
        }
        goto LABEL_29;
      }
    }
    v44 = nullptr;
    v25 = &v44;
    v26 = sub_1E5F010(v24, &v44);
    v45 = v26;
    if ( !v44 )
    {
      v25 = (_QWORD **)v26;
      v44 = sub_A81910(v10, v26, a3[1].m128i_u32[2]);
    }
    v30 = *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v30 + 16) == 34 )
      goto LABEL_12;
    v41 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (_BYTE)v41 != 34 )
    {
LABEL_27:
      if ( (unsigned int)(unsigned __int8)v41 - 35 <= 1 )
      {
LABEL_17:
        v34 = v10[294];
        v10[304] += 48LL;
        v35 = (__m128i *)((v34 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v10[295] >= (unsigned __int64)&v35[3] && v34 )
          v10[294] = v35 + 3;
        else
          v35 = (__m128i *)sub_986170((__int64)(v10 + 294), 48, 48, 3, v28, v29);
        sub_B13CB0(v35, (__int64)v10, a3, (__int64)v44);
        sub_B8CC60(a2, (__int64)v35, v36, v37, v38, v39);
        return;
      }
      sub_168B9F0((__int64)v46, a1, a3[1].m128i_u32[2], ((_BYTE)v41 != 13) + 3919, 0);
      sub_1605D30((__int64)v46, &v45);
LABEL_29:
      sub_15F7200(v46);
      return;
    }
    v30 = sub_F63050(*(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL), v25, v41, v27);
    if ( v30 )
    {
LABEL_12:
      v31 = *(_QWORD *)(*(_QWORD *)(v30 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v32 = (unsigned int)*(unsigned __int8 *)(v31 + 16) - 35;
      if ( (unsigned int)v32 > 1 )
        v31 = sub_F63050(v31, v25, v32, v27);
      if ( !(*(_BYTE *)(v31 + 19) >> 2) )
      {
        v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v33 + 16) == 13 && ((*(_WORD *)(v33 + 18) >> 3) & 0x1FF) == 0x1E9 )
          goto LABEL_17;
      }
    }
    LOBYTE(v41) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
    goto LABEL_27;
  }
}

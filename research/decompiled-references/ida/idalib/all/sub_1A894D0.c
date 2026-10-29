__int64 __fastcall sub_1A894D0(__int64 *a1, unsigned int a2, _QWORD *a3, __m128 a4, __m128 a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // r13
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int16 v28; // ax
  __int64 v29; // rbx
  __int64 v30; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+18h] [rbp-C0h] BYREF
  _BYTE v32[184]; // [rsp+20h] [rbp-B8h] BYREF

  v11 = (_QWORD *)sub_168B6C0((__int64)a1);
  if ( !a3 )
    goto LABEL_12;
  v12 = (__int64)a3;
  v13 = sub_19146F0(*a1, a3, v7, v8, v9, v10, a4, a5);
  if ( v13 == 1 )
    return 1;
  v17 = 0;
  v18 = v13 & 0xFFFFFFFFFFFFFFFELL;
  v19 = *a1;
  v20 = v18;
  if ( v18 )
    v17 = (unsigned int)sub_C00A40(v18, v12, 0, v14, v15);
  v21 = v20;
  v22 = sub_19B4A30(v19, v20, v17, 0, 0, 0, a4, a5);
  if ( v22 == 1 )
    return 1;
  if ( (a3 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFELL),
        v24 = *(_QWORD *)(*(_QWORD *)((v22 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
        (*(_BYTE *)(v24 + 17) & 4) != 0)
    || (v25 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL), (_BYTE)v25 == 34)
    || (*(_BYTE *)(v24 + 16) == 42 || (_BYTE)v25 == 42 && (v24 = sub_F63050(v24, v21, v25, v23)) != 0)
    && (v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v26 + 16) == 13)
    && ((*(_WORD *)(v26 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
LABEL_12:
    v27 = sub_EEE9A0(24, v11, 8u);
    v28 = *(_WORD *)v27 & 0xFE00;
    LOBYTE(v28) = -99;
    *(_WORD *)v27 = v28;
    if ( unk_2CD7484 )
      sub_EE9B50(157);
    *(_QWORD *)(v27 + 16) = a3;
    *(_DWORD *)(v27 + 8) = a2;
    return v27;
  }
  else
  {
    sub_168B9F0((__int64)v32, a1, a2, 0x1128u, 0);
    v30 = a3[1];
    v29 = sub_162B6D0((__int64)v32, &v30);
    v31 = sub_EEC8C0((unsigned __int64)a3, (__int64)&v30, *(double *)a4.m128_u64);
    sub_1587DB0(v29, &v31);
    sub_15F7200(v32);
    return 1;
  }
}

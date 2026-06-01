void __fastcall sub_1A8E170(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5)
{
  __int32 v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r12
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __m128i *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rbx
  char v24; // al
  __int64 v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r13
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+18h] [rbp-C0h] BYREF
  _BYTE v35[184]; // [rsp+20h] [rbp-B8h] BYREF

  v7 = a3[1].m128i_i32[2];
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x12 )
    v8 = *(_QWORD *)(a2 + 80);
  else
    v8 = *(_QWORD *)(a2 + 56);
  v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned int)(v10 - 43) <= 1 || (_BYTE)v10 == 42 && !(unsigned __int8)sub_F6AE00(v9, a2, v10, a4, a5) )
  {
    v11 = sub_168B6C0((__int64)a1);
    v12 = (_QWORD *)sub_168B6C0((__int64)a1);
    v15 = v12[294];
    v12[304] += 40LL;
    v16 = (__m128i *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v12[295] >= (unsigned __int64)&v16[2].m128i_u64[1] && v15 )
      v12[294] = (char *)v16 + 40;
    else
      v16 = (__m128i *)sub_986170((__int64)(v12 + 294), 40, 40, 3, v13, v14);
    sub_B163B0(v16, v11, a3);
    sub_B8CC60(a2, (__int64)v16, v17, v18, v19, v20);
  }
  else
  {
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    sub_168B9F0((__int64)v35, a1, v21, 0x1BF6u, 0);
    LODWORD(v34) = v7;
    HIDWORD(v34) = v7;
    v22 = sub_1587DB0((__int64)v35, &v34);
    v23 = sub_15DD120(v22, (__int64)a3);
    v24 = *(_BYTE *)(a2 + 28) & 0x7F;
    v25 = (v24 != 18) + 1LL;
    if ( *(_BYTE *)(v23 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v23 + 32), (v24 != 18) + 1LL, 2u);
    }
    else if ( *(_BYTE *)(v23 + 132) )
    {
      v30 = sub_168B9E0((_QWORD *)v23);
      v31 = *(_QWORD *)(v23 + 16);
      if ( v31 )
        v31 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v31 + 32LL))(*(_QWORD *)(v23 + 16));
      v33 = v31;
      v32 = sub_1587BC0(v30, &v33, v26, v27, v28, v29);
      sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * *(unsigned int *)(v23 + 128) + 8), v25, 2u);
    }
    LODWORD(v33) = 2;
    sub_1587D10(v23, (int *)&v33);
    sub_15F7200(v35);
  }
}

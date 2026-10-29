void __fastcall sub_1A8D860(__int64 *a1, _QWORD *a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r13
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __m128i *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // eax
  __int64 v21; // rax
  int v22; // [rsp+Ch] [rbp-BCh] BYREF
  _BYTE v23[184]; // [rsp+10h] [rbp-B8h] BYREF

  v7 = a2[2] & 0xFFFFFFFFFFFFFFF8LL;
  if ( (a2[2] & 4) != 0 )
    v7 = *(_QWORD *)v7;
  if ( v7 && (*(_BYTE *)(v7 + 8) & 0x7F) == 0x13 && v7 != 48 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 16LL))(a2);
    sub_168B9F0((__int64)v23, a1, v8, 0x1C22u, 0);
    v9 = sub_15DD120((__int64)v23, (__int64)a3);
    v22 = 0;
    sub_1587D10(v9, &v22);
    sub_15F7200(v23);
    sub_168B9F0((__int64)v23, a1, *(_DWORD *)(v7 - 24), 0x18B5u, 0);
    sub_15F7200(v23);
  }
  else if ( (unsigned int)sub_BA8080((__int64)a2, (__int64)a2, (__int64)a3, a4, a5, a6) == 7 )
  {
    v20 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 16LL))(a2);
    sub_168B9F0((__int64)v23, a1, v20, 0x1C22u, 0);
    v21 = sub_15DD120((__int64)v23, (__int64)a3);
    v22 = 1;
    sub_1587D10(v21, &v22);
    sub_15F7200(v23);
  }
  else
  {
    v10 = sub_168B6C0((__int64)a1);
    v11 = (_QWORD *)sub_168B6C0((__int64)a1);
    v14 = v11[294];
    v11[304] += 40LL;
    v15 = (__m128i *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v11[295] >= (unsigned __int64)&v15[2].m128i_u64[1] && v14 )
      v11[294] = (char *)v15 + 40;
    else
      v15 = (__m128i *)sub_986170((__int64)(v11 + 294), 40, 40, 3, v12, v13);
    sub_B16380(v15, v10, a3);
    sub_B8CC60((__int64)a2, (__int64)v15, v16, v17, v18, v19);
  }
}

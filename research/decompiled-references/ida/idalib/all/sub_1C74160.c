void __fastcall sub_1C74160(__int64 *a1, __int64 a2, const __m128i *a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  _QWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __m128i *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _BYTE v24[184]; // [rsp+0h] [rbp-B8h] BYREF

  v4 = sub_B77A30(a2);
  v5 = *(_QWORD *)(v4 + 56);
  v6 = v4;
  if ( (*(_DWORD *)(v5 + 20) & 0x1FFFFFFFu) <= 1 )
  {
    v7 = *(_DWORD *)(v4 + 24);
    v8 = 7411;
LABEL_3:
    sub_168B9F0((__int64)v24, a1, v7, v8, 0);
    sub_15F7200(v24);
    return;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v5 + 24) + 28LL) & 0x7F) == 0x2F
    || (*(_BYTE *)(*(_QWORD *)(v5 + 32) + 28LL) & 0x7F) == 0x2F )
  {
    v7 = *(_DWORD *)(v4 + 24);
    v8 = 7408;
    goto LABEL_3;
  }
  v9 = sub_B8DC30(a2, 1);
  if ( v9 )
  {
    v10 = *(unsigned __int16 *)(v9 + 22);
  }
  else if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
  {
    v10 = *(_DWORD *)(a2 + 80);
  }
  else
  {
    v10 = *(_DWORD *)(a2 + 104);
  }
  if ( v10 != 1 )
  {
    v7 = *(_DWORD *)(v6 + 24);
    v8 = 7410;
    goto LABEL_3;
  }
  v11 = sub_B8DC30(a2, 1);
  if ( v11 )
    v12 = *(_QWORD *)(v11 + 24);
  else
    v12 = *(_QWORD *)(a2 + 80);
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v13 + 16) != 13 || ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) != 0x1B3 )
  {
    v7 = *(_DWORD *)(v6 + 24);
    v8 = 7412;
    goto LABEL_3;
  }
  v14 = sub_168B6C0((__int64)a1);
  v15 = (_QWORD *)sub_168B6C0((__int64)a1);
  v18 = v15[294];
  v15[304] += 40LL;
  v19 = (__m128i *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v15[295] >= (unsigned __int64)&v19[2].m128i_u64[1] && v18 )
    v15[294] = (char *)v19 + 40;
  else
    v19 = (__m128i *)sub_986170((__int64)(v15 + 294), 40, 40, 3, v16, v17);
  sub_B11850(v19, v14, a3);
  sub_B8CC60(a2, (__int64)v19, v20, v21, v22, v23);
}

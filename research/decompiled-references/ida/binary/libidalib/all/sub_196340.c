__m128i *__fastcall sub_196340(__int64 a1)
{
  TMenuItem *v1; // r14
  TMenuItem *v2; // rbx
  int v3; // eax
  const char *v4; // rsi
  TMenuItem *v5; // r14
  __int64 v6; // rax
  __m128i *result; // rax
  const char *v8; // rsi
  TMenuItem *v9; // r14
  __int64 v10; // rax
  const char *v11; // rsi
  TMenuItem *v12; // r14
  __int64 v13; // rax
  const char *v14; // rsi
  TMenuItem *v15; // r14
  __int64 v16; // rax
  TMenuItem *v17; // [rsp-10h] [rbp-40h]
  TMenuItem *v18; // [rsp-10h] [rbp-40h]
  TMenuItem *v19; // [rsp-10h] [rbp-40h]
  TMenuItem *v20; // [rsp-10h] [rbp-40h]
  __m128i v21[3]; // [rsp+0h] [rbp-30h] BYREF

  v1 = (TMenuItem *)operator new(0x28u);
  TMenuItem::TMenuItem(v1, "Find ~n~ext", 0x138Du, 0x14u, 0, "Ctrl-T", nullptr);
  v2 = (TMenuItem *)operator new(0x28u);
  TMenuItem::TMenuItem(v2, "~F~ind", 0x138Cu, 0x1400u, 0, "Alt-T", v1);
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 2520) + 12LL);
  if ( (v3 & 0x800) != 0 )
  {
    v14 = s1;
    v15 = (TMenuItem *)operator new(0x28u);
    v16 = *(_QWORD *)(a1 + 2520);
    if ( *(_QWORD *)(v16 + 160) )
      v14 = *(const char **)(v16 + 152);
    v20 = v2;
    v2 = v15;
    TMenuItem::TMenuItem(v15, v14, 0x138Eu, 0x15u, 0, "Ctrl-U", v20);
    v3 = *(_DWORD *)(*(_QWORD *)(a1 + 2520) + 12LL);
  }
  if ( (v3 & 0x400) != 0 )
  {
    v11 = s1;
    v12 = (TMenuItem *)operator new(0x28u);
    v13 = *(_QWORD *)(a1 + 2520);
    if ( *(_QWORD *)(v13 + 136) )
      v11 = *(const char **)(v13 + 128);
    v19 = v2;
    v2 = v12;
    TMenuItem::TMenuItem(v12, v11, 0x1389u, 5u, 0, "Ctrl-E", v19);
    v3 = *(_DWORD *)(*(_QWORD *)(a1 + 2520) + 12LL);
  }
  if ( (v3 & 0x200) != 0 )
  {
    v8 = s1;
    v9 = (TMenuItem *)operator new(0x28u);
    v10 = *(_QWORD *)(a1 + 2520);
    if ( *(_QWORD *)(v10 + 112) )
      v8 = *(const char **)(v10 + 104);
    v18 = v2;
    v2 = v9;
    TMenuItem::TMenuItem(v9, v8, 0x138Bu, 0x5300u, 0, "Del", v18);
    v3 = *(_DWORD *)(*(_QWORD *)(a1 + 2520) + 12LL);
  }
  if ( (v3 & 0x100) != 0 )
  {
    v4 = s1;
    v5 = (TMenuItem *)operator new(0x28u);
    v6 = *(_QWORD *)(a1 + 2520);
    if ( *(_QWORD *)(v6 + 88) )
      v4 = *(const char **)(v6 + 80);
    v17 = v2;
    v2 = v5;
    TMenuItem::TMenuItem(v5, v4, 0x138Au, 0x5200u, 0, "Ins", v17);
  }
  v21[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v2, (__m128i)(unsigned __int64)v2);
  result = (__m128i *)operator new(0x10u);
  *result = _mm_load_si128(v21);
  return result;
}


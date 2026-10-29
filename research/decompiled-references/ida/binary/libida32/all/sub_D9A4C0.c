__int64 __fastcall sub_D9A4C0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  void *v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // rbp
  unsigned int v6; // eax
  bool v7; // cc
  __m128i v9; // [rsp+0h] [rbp-48h] BYREF
  void *v10; // [rsp+10h] [rbp-38h]
  unsigned int v11; // [rsp+18h] [rbp-30h]
  char v12; // [rsp+1Ch] [rbp-2Ch]
  int v13; // [rsp+20h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 176);
  v2 = sub_DFDA20(v1, 24);
  v11 = *(_DWORD *)(v2 + 8);
  v3 = *(void **)v2;
  *(_DWORD *)(v2 + 8) = 0;
  v10 = v3;
  LOBYTE(v3) = *(_BYTE *)(v2 + 12);
  LODWORD(v2) = *(_DWORD *)(v2 + 16);
  v12 = (char)v3;
  v13 = v2;
  sub_DFDA50(v1, 24);
  v4 = *(_QWORD *)(a1 + 176);
  v9 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v4, 16));
  sub_DFDA50(v4, 16);
  v5 = sub_DFD980(*(_QWORD *)(a1 + 176), 24);
  v6 = v11;
  *(_DWORD *)(v5 + 8) = v11;
  if ( v6 > 0x40 )
    sub_21E17D0(v5);
  else
    *(_QWORD *)v5 = v10;
  *(_BYTE *)(v5 + 12) = v12;
  *(_DWORD *)(v5 + 16) = v13;
  v7 = v11 <= 0x40;
  *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 176), 16) = _mm_load_si128(&v9);
  if ( !v7 && v10 )
    operator delete[](v10);
  return 1;
}


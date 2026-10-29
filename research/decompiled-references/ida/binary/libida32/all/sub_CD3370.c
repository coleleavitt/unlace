__int64 __fastcall sub_CD3370(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbp
  __int64 v4; // rax
  void *v5; // rdx
  __int64 v6; // rbx
  unsigned int v7; // eax
  bool v8; // cc
  __m128i v10; // [rsp+0h] [rbp-48h] BYREF
  void *v11; // [rsp+10h] [rbp-38h]
  unsigned int v12; // [rsp+18h] [rbp-30h]
  char v13; // [rsp+1Ch] [rbp-2Ch]
  int v14; // [rsp+20h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  v10 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v2, 16));
  sub_DFDA50(v2, 16);
  v3 = *(_QWORD *)(a1 + 560);
  v4 = sub_DFDA20(v3, 24);
  v12 = *(_DWORD *)(v4 + 8);
  v5 = *(void **)v4;
  *(_DWORD *)(v4 + 8) = 0;
  v11 = v5;
  LOBYTE(v5) = *(_BYTE *)(v4 + 12);
  LODWORD(v4) = *(_DWORD *)(v4 + 16);
  v13 = (char)v5;
  v14 = v4;
  sub_DFDA50(v3, 24);
  *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16) = _mm_load_si128(&v10);
  v6 = sub_DFD980(*(_QWORD *)(a1 + 560), 24);
  v7 = v12;
  *(_DWORD *)(v6 + 8) = v12;
  if ( v7 > 0x40 )
    sub_21E17D0(v6);
  else
    *(_QWORD *)v6 = v11;
  v8 = v12 <= 0x40;
  *(_BYTE *)(v6 + 12) = v13;
  *(_DWORD *)(v6 + 16) = v14;
  if ( !v8 && v11 )
    operator delete[](v11);
  return 1;
}


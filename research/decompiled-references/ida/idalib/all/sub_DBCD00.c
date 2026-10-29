__int64 __fastcall sub_DBCD00(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbp
  __int64 v3; // rax
  void *v4; // rdx
  __int64 v5; // rbx
  unsigned int v6; // eax
  bool v7; // cc
  __m128i v9; // [rsp+0h] [rbp-48h] BYREF
  void *v10; // [rsp+10h] [rbp-38h]
  unsigned int v11; // [rsp+18h] [rbp-30h]
  char v12; // [rsp+1Ch] [rbp-2Ch]
  int v13; // [rsp+20h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 176);
  v9 = _mm_loadu_si128((const __m128i *)sub_E21760(v1, 16));
  sub_E21790(v1, 16);
  v2 = *(_QWORD *)(a1 + 176);
  v3 = sub_E21760(v2, 24);
  v11 = *(_DWORD *)(v3 + 8);
  v4 = *(void **)v3;
  *(_DWORD *)(v3 + 8) = 0;
  v10 = v4;
  LOBYTE(v4) = *(_BYTE *)(v3 + 12);
  LODWORD(v3) = *(_DWORD *)(v3 + 16);
  v12 = (char)v4;
  v13 = v3;
  sub_E21790(v2, 24);
  *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 176), 16) = _mm_load_si128(&v9);
  v5 = sub_E216C0(*(_QWORD *)(a1 + 176), 24);
  v6 = v11;
  *(_DWORD *)(v5 + 8) = v11;
  if ( v6 > 0x40 )
    sub_2205510(v5);
  else
    *(_QWORD *)v5 = v10;
  v7 = v11 <= 0x40;
  *(_BYTE *)(v5 + 12) = v12;
  *(_DWORD *)(v5 + 16) = v13;
  if ( !v7 && v10 )
    operator delete[](v10);
  return 1;
}

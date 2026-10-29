__int64 __fastcall sub_DBD200(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  void *v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // rbp
  unsigned int v6; // eax
  __m128i v8; // [rsp+0h] [rbp-48h] BYREF
  void *v9; // [rsp+10h] [rbp-38h]
  unsigned int v10; // [rsp+18h] [rbp-30h]
  char v11; // [rsp+1Ch] [rbp-2Ch]
  int v12; // [rsp+20h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 176);
  v2 = sub_E21760(v1, 24);
  v10 = *(_DWORD *)(v2 + 8);
  v3 = *(void **)v2;
  *(_DWORD *)(v2 + 8) = 0;
  v9 = v3;
  LOBYTE(v3) = *(_BYTE *)(v2 + 12);
  LODWORD(v2) = *(_DWORD *)(v2 + 16);
  v11 = (char)v3;
  v12 = v2;
  sub_E21790(v1, 24);
  v4 = *(_QWORD *)(a1 + 176);
  v8 = _mm_loadu_si128((const __m128i *)sub_E21760(v4, 16));
  sub_E21790(v4, 16);
  v5 = sub_E216C0(*(_QWORD *)(a1 + 176), 24);
  v6 = v10;
  *(_DWORD *)(v5 + 8) = v10;
  if ( v6 > 0x40 )
    sub_2205510(v5);
  else
    *(_QWORD *)v5 = v9;
  *(_BYTE *)(v5 + 12) = v11;
  *(_DWORD *)(v5 + 16) = v12;
  *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 176), 16) = _mm_load_si128(&v8);
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  return 1;
}

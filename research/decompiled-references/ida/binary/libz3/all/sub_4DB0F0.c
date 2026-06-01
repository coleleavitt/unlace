__int64 __fastcall sub_4DB0F0(unsigned __int64 a1, int a2, unsigned __int64 *a3, int a4, int a5)
{
  __int64 v8; // rbx
  _QWORD *v9; // rax
  unsigned __int64 v10; // rax

  v8 = sub_186B270(0x68u);
  *(_OWORD *)(v8 + 8) = 0;
  sub_6299B0(v8 + 24);
  sub_6299B0(v8 + 32);
  *(_BYTE *)(v8 + 40) = 0;
  *(_QWORD *)v8 = off_1C66400;
  v9 = (_QWORD *)sub_186B270(0xC0u);
  *v9 = 0;
  v9[3] = 0;
  v9[6] = 0;
  v9[9] = 0;
  v9[12] = 0;
  v9[15] = 0;
  v9[18] = 0;
  v9[21] = 0;
  *(_QWORD *)(v8 + 48) = v9;
  *(_QWORD *)v8 = &off_1C4F890;
  v10 = *a3;
  *(_QWORD *)(v8 + 56) = 8;
  *(_DWORD *)(v8 + 64) = 0;
  *(_DWORD *)(v8 + 72) = a2;
  *(_DWORD *)(v8 + 76) = a5;
  *(__m128i *)(v8 + 80) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)a1);
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  *(_DWORD *)(v8 + 96) = a4;
  return v8;
}


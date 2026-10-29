__int64 __fastcall sub_4DAD60(unsigned __int64 a1, int a2, unsigned __int64 *a3, int a4)
{
  __int64 v6; // rbx
  _QWORD *v7; // rax
  unsigned __int64 v8; // rax

  v6 = sub_186B270(0x68u);
  *(_OWORD *)(v6 + 8) = 0;
  sub_6299B0(v6 + 24);
  sub_6299B0(v6 + 32);
  *(_BYTE *)(v6 + 40) = 0;
  *(_QWORD *)v6 = off_1C66400;
  v7 = (_QWORD *)sub_186B270(0xC0u);
  *v7 = 0;
  v7[3] = 0;
  v7[6] = 0;
  v7[9] = 0;
  v7[12] = 0;
  v7[15] = 0;
  v7[18] = 0;
  v7[21] = 0;
  *(_QWORD *)(v6 + 48) = v7;
  *(_QWORD *)v6 = &off_1C4F698;
  v8 = *a3;
  *(_QWORD *)(v6 + 56) = 8;
  *(_DWORD *)(v6 + 64) = 0;
  *(_DWORD *)(v6 + 72) = a2;
  *(__m128i *)(v6 + 80) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)a1);
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  *(_DWORD *)(v6 + 96) = a4;
  return v6;
}


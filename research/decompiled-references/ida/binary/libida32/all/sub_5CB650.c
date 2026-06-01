__int64 __fastcall sub_5CB650(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v4; // rax
  __m128i si128; // xmm2
  __int64 v6; // rdx
  __int64 v7; // rdx

  v1 = *(_QWORD *)(a1 + 488);
  if ( !v1 || (v2 = *(int *)(v1 + 12296), (_DWORD)v2 == 64) )
  {
    v4 = operator new(0x3010u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
    v6 = v4 + 8;
    do
    {
      *(_QWORD *)(v6 + 32) = 0;
      v6 += 192;
      *(_OWORD *)(v6 - 192) = 0;
      *(_OWORD *)(v6 - 176) = 0;
      *(_QWORD *)(v6 - 152) = 0;
      *(__m128i *)(v6 - 104) = si128;
      *(_QWORD *)(v6 - 88) = -1;
      *(_DWORD *)(v6 - 80) = 0;
      *(_QWORD *)(v6 - 72) = 0;
      *(_QWORD *)(v6 - 64) = 0;
      *(_OWORD *)(v6 - 56) = 0;
      *(_QWORD *)(v6 - 40) = 0;
      *(_OWORD *)(v6 - 32) = 0;
      *(_DWORD *)(v6 - 16) = 0;
      *(_DWORD *)(v6 - 12) = 0;
      *(_DWORD *)(v6 - 8) = 0;
      *(_DWORD *)(v6 - 4) = -1;
      *(_OWORD *)(v6 - 144) = 0;
      *(_OWORD *)(v6 - 128) = 0;
      *(_QWORD *)(v6 - 112) = 0;
    }
    while ( v6 != v4 + 12296 );
    v7 = *(_QWORD *)(a1 + 488);
    *(_DWORD *)(v4 + 12296) = 0;
    *(_QWORD *)(a1 + 488) = v4;
    *(_QWORD *)v4 = v7;
    *(_DWORD *)(v4 + 12296) = 1;
    return v4 + 8;
  }
  else
  {
    *(_DWORD *)(v1 + 12296) = v2 + 1;
    return v1 + 8 + 192 * v2;
  }
}


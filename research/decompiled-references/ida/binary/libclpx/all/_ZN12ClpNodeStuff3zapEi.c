void __fastcall ClpNodeStuff::zap(ClpNodeStuff *this, char a2)
{
  if ( (a2 & 1) != 0 )
  {
    *((_QWORD *)this + 4) = 0;
    *((_QWORD *)this + 5) = 0;
    *((_QWORD *)this + 6) = 0;
    *((_QWORD *)this + 7) = 0;
    *((_QWORD *)this + 8) = 0;
    *((_QWORD *)this + 9) = 0;
    *((_QWORD *)this + 10) = 0;
    *((_QWORD *)this + 11) = 0;
    *((_QWORD *)this + 12) = 0;
    *((_QWORD *)this + 13) = 0;
    *((_QWORD *)this + 14) = 0;
    *((_QWORD *)this + 15) = 0;
  }
  if ( (a2 & 2) != 0 )
  {
    *((_DWORD *)this + 44) = 0;
    *((_DWORD *)this + 42) = 0;
    *((_DWORD *)this + 43) = 0;
    *(_OWORD *)((char *)this + 136) = 0;
    *(__m128i *)((char *)this + 152) = _mm_load_si128((const __m128i *)&xmmword_28C7C0);
  }
}


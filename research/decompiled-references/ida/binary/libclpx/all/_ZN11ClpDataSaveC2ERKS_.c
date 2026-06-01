// Alternative name is '_ZN11ClpDataSaveC1ERKS_'
void __fastcall ClpDataSave::ClpDataSave(ClpDataSave *this, const ClpDataSave *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1

  v2 = *((_OWORD *)a2 + 2);
  v3 = *((_OWORD *)a2 + 1);
  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = v3;
  *((_OWORD *)this + 2) = v2;
  *((_QWORD *)this + 6) = *((_QWORD *)a2 + 6);
  *(__m128i *)((char *)this + 56) = _mm_loadu_si128((const __m128i *)((char *)a2 + 56));
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
}


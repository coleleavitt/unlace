// Alternative name is '_ZN10ClpSimplexC1ERKS_i'
void __fastcall ClpSimplex::ClpSimplex(ClpSimplex *this, const ClpSimplex *a2, int a3)
{
  __int64 v3; // xmm0_8
  void *v4; // r12

  ClpModel::ClpModel(this, a2, a3);
  *((_QWORD *)this + 87) = 0;
  *((_QWORD *)this + 88) = 0x3D3C25C268497682LL;
  *((_QWORD *)this + 89) = 0xFFFFFFFEFFFFFFFELL;
  v3 = *((_QWORD *)a2 + 90);
  *((_QWORD *)this + 91) = 2;
  *((_DWORD *)this + 184) = 0;
  *((_QWORD *)this + 90) = v3;
  *((_QWORD *)this + 94) = 0x430C6BF526340000LL;
  *((_QWORD *)this + 95) = 0;
  *((_QWORD *)this + 96) = 0;
  *((_QWORD *)this + 98) = 0x4202A05F20000000LL;
  *((_QWORD *)this + 93) = 0xBFF0000000000000LL;
  *((_QWORD *)this + 103) = 0xFFEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 99) = 0;
  *((_QWORD *)this + 97) = 0xBFF0000000000000LL;
  *((_QWORD *)this + 100) = 0;
  *((_QWORD *)this + 105) = 0xBFF0000000000000LL;
  *((_QWORD *)this + 101) = 0;
  *((_QWORD *)this + 106) = 0xBFF0000000000000LL;
  *((_QWORD *)this + 102) = 0;
  *((_QWORD *)this + 107) = 0xBFF0000000000000LL;
  *((_QWORD *)this + 104) = 0;
  *((_QWORD *)this + 108) = 0xBFF0000000000000LL;
  *((_QWORD *)this + 111) = 0;
  *((_QWORD *)this + 112) = 0;
  *((_QWORD *)this + 109) = 0x3E7AD7F29ABCAF48LL;
  *((_QWORD *)this + 110) = 0x3E7AD7F29ABCAF48LL;
  *((_QWORD *)this + 113) = 0x4202A05F20000000LL;
  *((_QWORD *)this + 114) = 0;
  *((_QWORD *)this + 115) = 0;
  *((_QWORD *)this + 116) = 0x3E45798EE2308C3ALL;
  *((_QWORD *)this + 123) = 0;
  *((_QWORD *)this + 144) = -1;
  *((_QWORD *)this + 145) = -1;
  *((_QWORD *)this + 146) = 0xFFFFFF9CFFFFFFFFLL;
  *((_QWORD *)this + 124) = 0;
  *((_QWORD *)this + 163) = 0x64FFFFFFFFLL;
  *((_QWORD *)this + 125) = 0;
  *((_QWORD *)this + 126) = 0;
  *((_QWORD *)this + 127) = 0;
  *((_QWORD *)this + 128) = 0;
  *((_QWORD *)this + 129) = 0;
  *((_QWORD *)this + 130) = 0;
  *((_QWORD *)this + 131) = 0;
  *((_QWORD *)this + 147) = 0;
  *((_QWORD *)this + 148) = 0;
  *((_QWORD *)this + 149) = 0;
  *((_QWORD *)this + 150) = 0;
  *((_QWORD *)this + 151) = 0;
  *((_QWORD *)this + 152) = 0;
  *((_QWORD *)this + 153) = 0;
  *((_QWORD *)this + 154) = 100;
  *((_QWORD *)this + 157) = 0;
  *((_QWORD *)this + 158) = 0;
  *((_QWORD *)this + 159) = 0;
  *((_DWORD *)this + 320) = 0;
  *((_QWORD *)this + 161) = 0;
  *((_QWORD *)this + 162) = 1;
  *((_QWORD *)this + 165) = 0;
  *((_QWORD *)this + 166) = 0xFFF0BDC1FFF0BDC1LL;
  *((_QWORD *)this + 168) = 0xFFFFFFFF00000000LL;
  *((_QWORD *)this + 167) = 0;
  *((_QWORD *)this + 171) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 169) = 0;
  *((_DWORD *)this + 340) = 0;
  *((_QWORD *)this + 172) = 0x4024000000000000LL;
  *((_QWORD *)this + 173) = 0;
  *((_QWORD *)this + 174) = 0;
  *((_QWORD *)this + 175) = 0;
  ClpSimplexProgress::ClpSimplexProgress((ClpSimplex *)((char *)this + 1408));
  *((_QWORD *)this + 218) = 0;
  *((_QWORD *)this + 219) = 0;
  *((_QWORD *)this + 220) = 0;
  *(_QWORD *)((char *)this + 1724) = 0;
  *(_QWORD *)((char *)this + 1732) = 0;
  *((_OWORD *)this + 66) = 0;
  *((_QWORD *)this + 221) = 0;
  *((_QWORD *)this + 164) = 0;
  *((_OWORD *)this + 67) = 0;
  *((_OWORD *)this + 68) = 0;
  *((_OWORD *)this + 69) = 0;
  *((_OWORD *)this + 70) = 0;
  *((_OWORD *)this + 71) = 0;
  *((_QWORD *)this + 158) = 0;
  *((_QWORD *)this + 155) = 0;
  *((_QWORD *)this + 156) = 0;
  ClpSimplex::gutsOfDelete(this, 0);
  v4 = *((void **)this + 165);
  if ( v4 )
  {
    ClpNonLinearCost::~ClpNonLinearCost(*((ClpNonLinearCost **)this + 165));
    operator delete(v4);
  }
  *((_QWORD *)this + 165) = 0;
  ClpSimplex::gutsOfCopy(this, a2);
  *((_DWORD *)this + 78) = 1;
}


void __fastcall ClpSimplex::returnModel(ClpSimplex *this, ClpSimplex *a2)
{
  int v3; // eax
  void *v4; // rdi

  ClpModel::returnModel(this, a2);
  *((_QWORD *)a2 + 87) = *((_QWORD *)this + 87);
  *((_DWORD *)a2 + 178) = *((_DWORD *)this + 178);
  *((_QWORD *)a2 + 88) = *((_QWORD *)this + 88);
  *((_DWORD *)a2 + 179) = *((_DWORD *)this + 179);
  *((_QWORD *)a2 + 90) = *((_QWORD *)this + 90);
  *((_DWORD *)a2 + 182) = *((_DWORD *)this + 182);
  *((_DWORD *)a2 + 183) = *((_DWORD *)this + 183);
  *((_DWORD *)a2 + 184) = *((_DWORD *)this + 184);
  *((_QWORD *)a2 + 93) = *((_QWORD *)this + 93);
  *((_QWORD *)a2 + 95) = *((_QWORD *)this + 95);
  *((_QWORD *)a2 + 96) = *((_QWORD *)this + 96);
  *((_QWORD *)a2 + 97) = *((_QWORD *)this + 97);
  *((_QWORD *)a2 + 99) = *((_QWORD *)this + 99);
  *((_QWORD *)a2 + 100) = *((_QWORD *)this + 100);
  *((_QWORD *)a2 + 101) = *((_QWORD *)this + 101);
  *((_QWORD *)a2 + 102) = *((_QWORD *)this + 102);
  *((_QWORD *)a2 + 103) = *((_QWORD *)this + 103);
  *((_QWORD *)a2 + 104) = *((_QWORD *)this + 104);
  *((_DWORD *)a2 + 288) = *((_DWORD *)this + 288);
  *((_DWORD *)a2 + 289) = *((_DWORD *)this + 289);
  *((_QWORD *)a2 + 105) = *((_QWORD *)this + 105);
  *((_QWORD *)a2 + 106) = *((_QWORD *)this + 106);
  *((_QWORD *)a2 + 107) = *((_QWORD *)this + 107);
  *((_QWORD *)a2 + 108) = *((_QWORD *)this + 108);
  *((_DWORD *)a2 + 290) = *((_DWORD *)this + 290);
  *((_DWORD *)a2 + 291) = *((_DWORD *)this + 291);
  *((_DWORD *)a2 + 292) = *((_DWORD *)this + 292);
  *((_DWORD *)a2 + 325) = *((_DWORD *)this + 325);
  *((_QWORD *)a2 + 111) = *((_QWORD *)this + 111);
  *((_DWORD *)a2 + 306) = *((_DWORD *)this + 306);
  *((_DWORD *)a2 + 307) = *((_DWORD *)this + 307);
  *((_QWORD *)a2 + 112) = *((_QWORD *)this + 112);
  *((_DWORD *)a2 + 308) = *((_DWORD *)this + 308);
  v3 = *((_DWORD *)this + 320);
  *((_QWORD *)a2 + 161) = 0;
  *((_DWORD *)a2 + 320) = v3;
  *((_QWORD *)a2 + 114) = *((_QWORD *)this + 114);
  *((_QWORD *)a2 + 115) = *((_QWORD *)this + 115);
  v4 = *((void **)this + 174);
  if ( *((void **)a2 + 174) != v4 && v4 )
    operator delete[](v4);
  *((_QWORD *)this + 174) = 0;
}


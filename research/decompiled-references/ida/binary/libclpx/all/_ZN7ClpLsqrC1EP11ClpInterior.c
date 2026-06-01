// Alternative name is '_ZN7ClpLsqrC2EP11ClpInterior'
void __fastcall ClpLsqr::ClpLsqr(ClpLsqr *this, ClpInterior *a2)
{
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 1) = a2;
  *(_DWORD *)this = *((_DWORD *)a2 + 26) + *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 26);
}


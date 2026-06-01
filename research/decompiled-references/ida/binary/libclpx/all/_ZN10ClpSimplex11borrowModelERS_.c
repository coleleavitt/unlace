__int64 __fastcall ClpSimplex::borrowModel(ClpSimplex *this, ClpSimplex *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 result; // rax

  ClpModel::borrowModel(this, a2);
  ClpSimplex::createStatus(this);
  v3 = *((_QWORD *)this + 155);
  *((_QWORD *)this + 98) = *((_QWORD *)a2 + 98);
  *((_QWORD *)this + 109) = *((_QWORD *)a2 + 109);
  *((_QWORD *)this + 110) = *((_QWORD *)a2 + 110);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a2 + 155) + 88LL))(*((_QWORD *)a2 + 155), 1);
  *((_QWORD *)this + 155) = v4;
  *(_QWORD *)(v4 + 8) = this;
  v5 = *((_QWORD *)this + 156);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a2 + 156) + 72LL))(*((_QWORD *)a2 + 156), 1);
  *((_QWORD *)this + 156) = v6;
  *(_QWORD *)(v6 + 8) = this;
  *((_DWORD *)this + 327) = *((_DWORD *)a2 + 327);
  *((_DWORD *)this + 182) = *((_DWORD *)a2 + 182);
  *((_DWORD *)this + 346) = *((_DWORD *)a2 + 346);
  *((_DWORD *)this + 347) = *((_DWORD *)a2 + 347);
  result = *((_QWORD *)a2 + 174);
  *((_QWORD *)this + 174) = result;
  return result;
}


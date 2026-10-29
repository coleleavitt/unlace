__int64 __fastcall ClpInterior::setCholesky(ClpInterior *this, ClpCholeskyBase *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *((_QWORD *)this + 161);
  if ( v3 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
  *((_QWORD *)this + 161) = a2;
  return result;
}


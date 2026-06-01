__int64 __fastcall ClpQuadraticObjective::deleteQuadraticObjective(ClpQuadraticObjective *this)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  *((_QWORD *)this + 3) = 0;
  return result;
}


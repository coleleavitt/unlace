__int64 __fastcall ClpModel::setObjective(ClpModel *this, ClpObjective *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  *((_DWORD *)this + 79) = 0;
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  result = (*(__int64 (__fastcall **)(ClpObjective *))(*(_QWORD *)a2 + 88LL))(a2);
  *((_QWORD *)this + 20) = result;
  return result;
}


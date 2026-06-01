__int64 __fastcall ClpModel::setNewRowCopy(ClpModel *this, ClpMatrixBase *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *((_QWORD *)this + 25);
  if ( v3 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 480LL))(v3);
  *((_QWORD *)this + 25) = a2;
  return result;
}


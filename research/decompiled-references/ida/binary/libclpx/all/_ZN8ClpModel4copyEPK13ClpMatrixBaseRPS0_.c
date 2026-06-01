ClpMatrixBase *__fastcall ClpModel::copy(ClpModel *this, const ClpMatrixBase *a2, ClpMatrixBase **a3)
{
  const void *v4; // rbp
  void *v5; // r15
  void *v6; // rax
  ClpMatrixBase *result; // rax

  v4 = *a3;
  if ( a2 )
  {
    v5 = __dynamic_cast(
           a2,
           (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
           (const struct __class_type_info *)&`typeinfo for'ClpPackedMatrix,
           0);
    if ( v4 )
    {
      v6 = __dynamic_cast(
             v4,
             (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
             (const struct __class_type_info *)&`typeinfo for'ClpPackedMatrix,
             0);
      if ( v5 && v6 )
        return (ClpMatrixBase *)(*(__int64 (__fastcall **)(void *, void *))(*(_QWORD *)v6 + 504LL))(v6, v5);
      goto LABEL_7;
    }
  }
  else if ( v4 )
  {
LABEL_7:
    (*(void (__fastcall **)(const void *))(*(_QWORD *)v4 + 480LL))(v4);
  }
  result = (ClpMatrixBase *)(*(__int64 (__fastcall **)(const ClpMatrixBase *))(*(_QWORD *)a2 + 440LL))(a2);
  *a3 = result;
  return result;
}


void __fastcall ClpModel::deleteQuadraticObjective(ClpModel *this)
{
  const void *v1; // rdi
  ClpQuadraticObjective *v2; // rax

  *((_DWORD *)this + 79) = 0;
  v1 = *((const void **)this + 20);
  if ( v1 )
  {
    v2 = (ClpQuadraticObjective *)__dynamic_cast(
                                    v1,
                                    (const struct __class_type_info *)&`typeinfo for'ClpObjective,
                                    (const struct __class_type_info *)&`typeinfo for'ClpQuadraticObjective,
                                    0);
    if ( v2 )
      ClpQuadraticObjective::deleteQuadraticObjective(v2);
  }
}


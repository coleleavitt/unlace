void *__fastcall Diagnostics::errorMessage(Diagnostics *this)
{
  __int64 v1; // x0

  v1 = *(_QWORD *)this;
  if ( v1 )
    return (void *)_simple_string(v1);
  else
    return &unk_7E832;
}

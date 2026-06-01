__int64 __fastcall ClpModel::setContinuous(ClpModel *this, int a2)
{
  __int64 result; // rax

  result = *((_QWORD *)this + 34);
  if ( result )
    *(_BYTE *)(result + a2) = 0;
  return result;
}


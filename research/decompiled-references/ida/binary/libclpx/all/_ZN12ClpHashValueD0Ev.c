void __fastcall ClpHashValue::~ClpHashValue(ClpHashValue *this)
{
  ClpHashValue::~ClpHashValue(this);
  operator delete(this);
}


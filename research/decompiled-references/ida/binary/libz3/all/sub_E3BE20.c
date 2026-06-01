void __fastcall sub_E3BE20(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  sub_E3B820((__int64)a1);
  v2 = a1[12];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[11];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  std::condition_variable::~condition_variable((std::condition_variable *)(a1 + 5));
}


// Alternative name is '_ZNSsC1EPKcRKSaIcE'
_QWORD *__fastcall std::string::string(_QWORD *a1, const char *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( a2 )
    v3 = (__int64)&a2[sub_590335(a2)];
  else
    v3 = -1;
  v4 = sub_5A945E(a2, v3, a3);
  return std::string::_Alloc_hider::_Alloc_hider(a1, v4, a3);
}

__int64 __fastcall sub_EF890(_QWORD *a1)
{
  _BYTE *v1; // rcx
  _BYTE *v2; // rsi
  __int64 *v3; // rdx
  _BYTE *v4; // rdi

  v1 = (_BYTE *)a1[6];
  if ( v1 && !*v1 )
    v1 = nullptr;
  v2 = (_BYTE *)a1[4];
  v3 = (__int64 *)a1[5];
  if ( v2 && !*v2 )
    v2 = nullptr;
  v4 = (_BYTE *)a1[3];
  if ( v4 && !*v4 )
    v4 = nullptr;
  sub_E7C40(v4, v2, v3, v1, nullptr, nullptr, 0xFFFFFFFF);
  return sub_EDA00(-1);
}


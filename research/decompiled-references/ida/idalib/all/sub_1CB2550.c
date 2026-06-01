__int64 __fastcall sub_1CB2550(__int64 *a1)
{
  _BYTE *v1; // rax
  __int64 v3; // [rsp+8h] [rbp-10h] BYREF

  v1 = sub_F22ED0(a1);
  if ( !v1 )
    return *a1;
  v3 = *((_QWORD *)v1 + 2);
  return sub_1CB2550(&v3);
}

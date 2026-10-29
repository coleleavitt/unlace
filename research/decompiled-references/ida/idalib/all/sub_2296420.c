__int64 __fastcall sub_2296420(std::_V2 *a1, __int64 a2, void *a3, size_t a4)
{
  unsigned int v6; // r12d
  std::_V2 *v8; // rdi
  _QWORD v9[2]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v10[4]; // [rsp+10h] [rbp-88h] BYREF
  void *dest; // [rsp+30h] [rbp-68h]
  int v12; // [rsp+58h] [rbp-40h]

  LODWORD(v9[0]) = 0;
  v9[1] = std::_V2::system_category(a1);
  sub_227D450((std::_V2 *)v10, a1, a2, (__int64)v9, 3);
  if ( LODWORD(v9[0]) )
    goto LABEL_2;
  v8 = (std::_V2 *)dest;
  if ( v10[3] - (__int64)dest >= a4 )
  {
    if ( a4 )
    {
      memcpy(dest, a3, a4);
      dest = (char *)dest + a4;
    }
    if ( !v12 )
      goto LABEL_2;
LABEL_8:
    v6 = 5;
    std::_V2::generic_category(v8);
    goto LABEL_3;
  }
  v8 = (std::_V2 *)v10;
  sub_227BF10(v10, (unsigned __int8 *)a3, a4);
  if ( v12 )
    goto LABEL_8;
LABEL_2:
  v6 = v9[0];
LABEL_3:
  sub_227B600((int *)v10);
  return v6;
}

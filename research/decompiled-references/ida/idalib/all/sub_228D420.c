__int64 __fastcall sub_228D420(__int64 a1, unsigned int a2, void *a3, size_t a4, __off_t a5)
{
  int *v8; // rbp
  ssize_t v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // [rsp+Ch] [rbp-4Ch]
  _QWORD v14[8]; // [rsp+18h] [rbp-40h] BYREF

  v8 = __errno_location();
  do
  {
    *v8 = 0;
    v9 = pread(a2, a3, a4, a5);
    if ( v9 != -1 )
    {
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_QWORD *)a1 = v9;
      return a1;
    }
  }
  while ( *v8 == 4 );
  v13 = *v8;
  v11 = std::_V2::generic_category((std::_V2 *)a2);
  sub_2220500(v14, v13, v11);
  v12 = v14[0];
  *(_BYTE *)(a1 + 8) |= 1u;
  *(_QWORD *)a1 = v12;
  return a1;
}

__int64 __fastcall create_zip_linput(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx

  v4 = operator new(0x80A8u);
  sub_8361E0(v4, a1, a2, a3);
  return create_generic_linput(v4);
}

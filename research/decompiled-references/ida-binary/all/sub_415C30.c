__int64 __fastcall sub_415C30(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  __int64 (*v4)(); // r8

  v2 = *(__int64 **)(a1 + 8);
  if ( v2 )
  {
    v3 = *v2;
    v4 = *(__int64 (**)())(*v2 + 480);
    if ( v4 == sub_178B60 )
      return (*(__int64 (**)(void))(v3 + 160))();
    if ( !(unsigned __int8)v4() )
    {
      v3 = **(_QWORD **)(a1 + 8);
      return (*(__int64 (**)(void))(v3 + 160))();
    }
  }
  return 52;
}

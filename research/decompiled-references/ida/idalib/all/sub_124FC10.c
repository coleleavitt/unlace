void __fastcall sub_124FC10(_QWORD *a1)
{
  char *v2; // r12
  char *v3; // rbx
  __int64 v4; // rdi
  void *v5; // rdi

  std::locale::~locale((std::locale *)(a1 + 12));
  v2 = (char *)a1[10];
  v3 = (char *)a1[9];
  if ( v2 != v3 )
  {
    do
    {
      v4 = (__int64)v3;
      v3 += 48;
      sub_124FBE0(v4);
    }
    while ( v2 != v3 );
    v3 = (char *)a1[9];
  }
  if ( v3 )
    operator delete(v3);
  v5 = (void *)a1[2];
  if ( v5 )
    operator delete(v5);
}

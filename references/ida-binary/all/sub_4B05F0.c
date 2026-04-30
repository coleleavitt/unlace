void __fastcall sub_4B05F0(char *a1)
{
  char *v1; // rbx
  _QWORD *v2; // rbp
  __int64 **v3; // r12
  __int64 **v4; // rdi
  __int64 v5; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      v3 = (__int64 **)(v1 + 56);
      sub_4B05F0(*((void **)v1 + 3));
      v4 = (__int64 **)(v1 + 56);
      v1 = *((char **)v1 + 2);
      sub_4B03E0(v4, (_BYTE *)&dword_0 + 1);
      sub_4B03E0(v3, nullptr);
      v5 = v2[4];
      if ( v5 )
      {
        v2[5] = 0;
        qfree(v5, nullptr);
      }
      operator delete(v2, 0x50u);
    }
    while ( v1 );
  }
}

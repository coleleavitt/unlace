void __fastcall sub_32480(char *a1, __int64 a2)
{
  char *v2; // rbx
  void *v3; // rdi
  char *v4; // rbp
  __int64 v5; // rdx
  void (__fastcall *hexdsp)(__int64, char *); // rax

  if ( a1 )
  {
    v2 = a1;
    do
    {
      v3 = *((void **)v2 + 3);
      v4 = v2;
      sub_32480(v3);
      v2 = *((char **)v2 + 2);
      hexdsp = (void (__fastcall *)(__int64, char *))get_hexdsp(v3, a2, v5);
      hexdsp(276, v4 + 32);
      a2 = 48;
      operator delete(v4, 0x30u);
    }
    while ( v2 );
  }
}

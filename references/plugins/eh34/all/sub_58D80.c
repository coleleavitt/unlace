void __fastcall sub_58D80(void **a1)
{
  char *v1; // rbx
  char *v2; // rdi

  v1 = (char *)(a1 + 6);
  sub_58D10((__int64)a1);
  v2 = (char *)*a1;
  if ( v2 != v1 )
    operator delete(v2, 8LL * *((_QWORD *)v1 - 5));
}

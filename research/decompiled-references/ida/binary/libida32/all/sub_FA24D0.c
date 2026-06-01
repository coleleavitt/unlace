void __fastcall sub_FA24D0(unsigned int **a1)
{
  unsigned int *v1; // rbx
  __int64 v2; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = 16LL * v1[10];
    operator delete();
    sub_2218440(v1, v2);
    operator delete(v1, 0x30u);
  }
}


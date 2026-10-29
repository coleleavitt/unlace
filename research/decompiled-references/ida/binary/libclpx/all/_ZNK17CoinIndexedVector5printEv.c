int __fastcall CoinIndexedVector::print(CoinIndexedVector *this)
{
  char *v1; // rdx
  __int64 v2; // r12
  int v3; // ebp
  int v4; // esi
  __int64 v5; // rax
  double v6; // xmm0_8

  v1 = "un";
  if ( *((_BYTE *)this + 28) )
    v1 = "";
  v2 = 0;
  printf("Vector has %d elements (%spacked mode)\n", *((unsigned int *)this + 4), v1);
  v3 = 0;
  if ( *((int *)this + 4) > 0 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(*(_QWORD *)this + v2);
      v5 = *((_QWORD *)this + 1);
      v6 = *((_BYTE *)this + 28) ? *(double *)(v5 + 2 * v2) : *(double *)(v5 + 8LL * v4);
      ++v3;
      printf(" (%d,%g)", v4, v6);
      if ( *((_DWORD *)this + 4) <= v3 )
        break;
      if ( v3 == 5 * (v3 / 5u) )
        putchar(10);
      v2 += 4;
    }
  }
  return putchar(10);
}


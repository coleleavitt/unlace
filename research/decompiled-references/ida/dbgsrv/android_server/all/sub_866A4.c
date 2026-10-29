/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_866A4
// Address: 0x00000000000866A4

//----- (00000000000866A4) ----------------------------------------------------
void __fastcall sub_866A4(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 prime; // x20
  unsigned __int64 v4; // x21
  void **v5; // x0
  unsigned __int64 v6; // x1
  _BOOL4 v7; // w8
  unsigned __int64 v8; // x0

  if ( a2 == 1 )
  {
    prime = 2;
  }
  else
  {
    prime = a2;
    if ( ((a2 - 1) & a2) != 0 )
      prime = std::__next_prime(a2);
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( prime > v4 )
  {
    v5 = (void **)a1;
    v6 = prime;
LABEL_7:
    sub_86C08(v5, v6);
    return;
  }
  if ( prime < v4 )
  {
    v7 = v4 >= 3 && ((v4 - 1) & v4) == 0;
    v8 = vcvtps_u32_f32((float)*(unsigned __int64 *)(a1 + 24) / *(float *)(a1 + 32));
    if ( v7 )
    {
      if ( v8 >= 2 )
        v8 = 1LL << -(char)__clz(v8 - 1);
    }
    else
    {
      v8 = std::__next_prime(v8);
    }
    v6 = prime >= v8 ? prime : v8;
    if ( v6 < v4 )
    {
      v5 = (void **)a1;
      goto LABEL_7;
    }
  }
}

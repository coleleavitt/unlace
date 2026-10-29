/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001AF40
// Address: 0x000000014001AF40

//----- (000000014001AF40) ----------------------------------------------------
void __fastcall sub_14001AF40(int *a1, const void *a2, size_t a3, int a4)
{
  void **v8; // rbx
  void *v9; // rcx

  v8 = (void **)(a1 + 2);
  if ( *a1 >= -1 )
  {
    v9 = *v8;
    if ( *v8 )
    {
      v8[1] = nullptr;
      j_free(v9);
      *v8 = nullptr;
      v8[2] = nullptr;
    }
    *a1 = -2;
  }
  if ( v8 )
  {
    *v8 = nullptr;
    v8[1] = nullptr;
    v8[2] = nullptr;
    sub_1400017A0(v8, a2, a3);
  }
  *a1 = a4;
  if ( a4 < -1 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(3214);
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;

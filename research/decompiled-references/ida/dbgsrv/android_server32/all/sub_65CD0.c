/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65CD0
// Address: 0x00065CD0

//----- (00065CD0) --------------------------------------------------------
void **__fastcall sub_65CD0(void ***a1)
{
  void **v2; // r0
  unsigned int v3; // r5
  void **v4; // r6
  void **v5; // r0
  int v6; // r7
  void **v7; // r5
  void **result; // r0
  void **v9; // [sp+0h] [bp-4h]

  v2 = a1[1];
  v3 = (unsigned int)a1[2];
  if ( v3 >= (unsigned int)v2 + 1 )
  {
    v4 = *a1;
  }
  else
  {
    v4 = (void **)qvector_reserve((int)a1, nullptr, (unsigned int)v2 + 1, 0x18u);
    v9 = a1[2];
    a1[2] = (void **)v3;
    v5 = *a1;
    v6 = (int)a1[1] - 1;
    if ( v6 >= 0 )
    {
      v7 = v4;
      do
      {
        *v7 = *v5;
        *v5 = nullptr;
        v7[1] = v5[1];
        v5[1] = nullptr;
        v7[2] = v5[2];
        v5[2] = nullptr;
        *((_BYTE *)v7 + 20) = *((_BYTE *)v5 + 20);
        v7[4] = v5[4];
        v7[3] = v5[3];
        v7 += 6;
        v5 = sub_5F79C(v5) + 6;
        --v6;
      }
      while ( v6 >= 0 );
      v5 = *a1;
    }
    qfree(v5);
    a1[2] = v9;
    *a1 = v4;
    v2 = a1[1];
  }
  v4[6 * (_DWORD)v2] = nullptr;
  result = &v4[6 * (_DWORD)v2];
  result[1] = nullptr;
  result[2] = nullptr;
  result[3] = (void *)-1;
  result[4] = (void *)-1;
  *((_BYTE *)result + 20) = 0;
  a1[1] = (void **)((char *)a1[1] + 1);
  return result;
}

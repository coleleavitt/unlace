/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66764
// Address: 0x00066764

//----- (00066764) --------------------------------------------------------
int __fastcall sub_66764(_BYTE *a1, void **a2, int a3, unsigned int a4)
{
  int v7; // r3
  char *v9; // r0
  char *v10; // r1
  int v11; // r1
  int result; // r0
  char v13[4]; // [sp+Ch] [bp-8h] BYREF

  a2[1] = nullptr;
  if ( (a1[352] & 0x10) != 0 )
  {
    v13[0] = 0;
    sub_370F6(a2, a4, v13);
    return a4;
  }
  v7 = a3;
  if ( a4 )
  {
    if ( (unsigned int)a2[2] >= a4 )
    {
      v9 = (char *)*a2;
      v10 = nullptr;
    }
    else
    {
      v9 = (char *)qvector_reserve((int)a2, *a2, a4, 1u);
      *a2 = v9;
      v10 = (char *)a2[1];
    }
    memset(&v10[(_DWORD)v9], 0, a4 - (_DWORD)v10);
    a2[1] = (void *)a4;
    v7 = a3;
  }
  v11 = (*(int (__fastcall **)(_BYTE *, int, void *, unsigned int, _DWORD))(*(_DWORD *)a1 + 144))(a1, v7, *a2, a4, 0);
  result = -1;
  if ( v11 >= 1 )
    return a4;
  return result;
}

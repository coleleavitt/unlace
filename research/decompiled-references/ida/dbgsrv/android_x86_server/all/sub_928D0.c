/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_928D0
// Address: 0x000928D0

//----- (000928D0) --------------------------------------------------------
int __cdecl sub_928D0(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // ecx
  char v4; // dl

  if ( a1[98] == a2 && a1[102] == a3 )
  {
    v3 = a1 + 98;
    v4 = 0;
LABEL_13:
    *v3 = -1;
    a1[107] &= ~((3 << (2 * v4)) | (15 << (4 * v4 + 16)));
    return (*(int (__cdecl **)(_DWORD *))(*a1 + 308))(a1);
  }
  if ( a1[99] == a2 && a1[103] == a3 )
  {
    v3 = a1 + 99;
    v4 = 1;
    goto LABEL_13;
  }
  if ( a1[100] == a2 && a1[104] == a3 )
  {
    v3 = a1 + 100;
    v4 = 2;
    goto LABEL_13;
  }
  if ( a1[101] == a2 && a1[105] == a3 )
  {
    v3 = a1 + 101;
    v4 = 3;
    goto LABEL_13;
  }
  return 0;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89120
// Address: 0x00089120

//----- (00089120) --------------------------------------------------------
void __cdecl sub_89120(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ecx
  void *v4; // eax
  unsigned int j; // ecx
  _DWORD *v6; // eax
  unsigned int i; // ecx
  unsigned int v8; // [esp+0h] [ebp-1Ch]
  int v9; // [esp+4h] [ebp-18h]
  int v10; // [esp+8h] [ebp-14h]

  v3 = a1[1];
  if ( v3 > a2 )
  {
LABEL_2:
    a1[1] = a2;
    return;
  }
  if ( v3 < a2 )
  {
    v4 = (void *)*a1;
    v8 = a1[2];
    if ( *a1 > a3 || (unsigned int)v4 + 8 * v8 <= a3 )
    {
      if ( v8 < a2 )
      {
        v4 = qvector_reserve((int)a1, v4, a2, 8u);
        *a1 = (unsigned int)v4;
        v3 = a1[1];
      }
      if ( v3 < a2 )
      {
        *((_QWORD *)v4 + v3) = *(_QWORD *)a3;
        for ( i = v3 + 1; a2 != i; ++i )
          *(_QWORD *)(*a1 + 8 * i) = *(_QWORD *)a3;
      }
    }
    else
    {
      v10 = *(_DWORD *)a3;
      v9 = *(_DWORD *)(a3 + 4);
      if ( v8 < a2 )
      {
        v4 = qvector_reserve((int)a1, v4, a2, 8u);
        *a1 = (unsigned int)v4;
        v3 = a1[1];
      }
      if ( v3 < a2 )
      {
        *((_DWORD *)v4 + 2 * v3) = v10;
        *((_DWORD *)v4 + 2 * v3 + 1) = v9;
        for ( j = v3 + 1; a2 != j; ++j )
        {
          v6 = (_DWORD *)*a1;
          v6[2 * j + 1] = v9;
          v6[2 * j] = v10;
        }
      }
    }
    goto LABEL_2;
  }
}

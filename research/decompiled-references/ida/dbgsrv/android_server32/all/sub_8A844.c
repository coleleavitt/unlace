/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A844
// Address: 0x0008A844

//----- (0008A844) --------------------------------------------------------
int __fastcall sub_8A844(_DWORD *a1, _DWORD *a2)
{
  int (__fastcall *v4)(_DWORD); // r3
  _DWORD *v5; // r5
  int result; // r0
  int v7; // r1
  int v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r1
  unsigned int v11; // r2
  void *v12; // [sp+0h] [bp-Ch]
  _DWORD *v13; // [sp+4h] [bp-8h]

  if ( !a2 )
    return -2;
  v4 = (int (__fastcall *)(_DWORD))a2[8];
  if ( !v4 )
    return -2;
  if ( !a2[9] )
    return -2;
  v5 = (_DWORD *)a2[7];
  if ( !v5 || (_DWORD *)*v5 != a2 || !a1 || (unsigned int)(v5[1] - 16180) > 0x1F )
    return -2;
  v7 = v4(a2[10]);
  result = -4;
  v13 = (_DWORD *)v7;
  if ( v7 )
  {
    v8 = 0;
    if ( v5[14] && (v8 = ((int (__fastcall *)(_DWORD, int))a2[8])(a2[10], 1 << v5[10])) == 0 )
    {
      ((void (__fastcall *)(_DWORD, _DWORD *))a2[9])(a2[10], v13);
      return -4;
    }
    else
    {
      v12 = (void *)v8;
      qmemcpy(a1, a2, 0x38u);
      qmemcpy(v13, v5, 0x1BD0u);
      *v13 = a1;
      v9 = v13 + 333;
      v10 = v5 + 333;
      v11 = v5[20];
      if ( v11 >= (unsigned int)(v5 + 333) && v11 <= (unsigned int)(v5 + 1776) )
      {
        v13[20] = (char *)v9 + v11 - (_DWORD)v10;
        v13[21] = (char *)v9 + v5[21] - (_DWORD)v10;
      }
      v13[28] = (char *)v9 + v5[28] - (_DWORD)v10;
      if ( v12 )
        qmemcpy(v12, (const void *)v5[14], 1 << v5[10]);
      v13[14] = v12;
      a1[7] = v13;
      return 0;
    }
  }
  return result;
}

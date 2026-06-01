/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CCD10
// Address: 0x080CCD10

//----- (080CCD10) --------------------------------------------------------
int __cdecl sub_80CCD10(int a1, __int64 a2, int a3, int a4)
{
  int result; // eax
  int v5; // ecx
  int v6; // eax
  signed int v7; // eax
  _DWORD *v8; // edi
  unsigned int v9; // eax
  int v10; // ecx
  bool v11; // zf
  void *v12; // [esp+0h] [ebp-20h]

  if ( a2 != *(_QWORD *)(a1 + 24) )
    return -1;
  result = 0;
  if ( !*(_BYTE *)(a1 + 32861) )
  {
    v12 = (void *)(a1 + 92);
    *(_DWORD *)(a1 + 48) = a3;
    *(_DWORD *)(a1 + 52) = a4;
    v5 = a4;
    v6 = 0;
    while ( v5 )
    {
      v7 = *(_DWORD *)(a1 + 40);
      v8 = (_DWORD *)(a1 + 36);
      if ( !v7 )
      {
        v9 = *(_DWORD *)(a1 + 32);
        if ( v9 > 0x8000 )
          v9 = 0x8000;
        v7 = sub_80CD690(*(_DWORD *)(a1 + 20), v12, v9);
        if ( v7 < 0 )
          return -1;
        v10 = *(_DWORD *)(a1 + 32);
        if ( v10 != -1 )
          *(_DWORD *)(a1 + 32) = v10 - v7;
        v11 = *(_BYTE *)(a1 + 32860) == 0;
        *(_DWORD *)(a1 + 40) = v7;
        v8 = (_DWORD *)(a1 + 36);
        *(_DWORD *)(a1 + 36) = v12;
        if ( !v11 )
        {
          v11 = byte_811F8A0 == 0;
          *(_BYTE *)(a1 + 32860) = 0;
          if ( !v11 )
          {
            v8 = (_DWORD *)(a1 + 36);
            sub_80D46D0(a1 + 36);
            v7 = *(_DWORD *)(a1 + 40);
          }
        }
      }
      v6 = sub_80D46E0((int)v8, 4 * (v7 == 0));
      if ( v6 < 0 || v6 == 1 )
      {
        if ( v6 == -5 && byte_811F8A0 )
        {
          if ( *(_DWORD *)(a1 + 40) )
            return -1;
        }
        else if ( v6 != 1 )
        {
          return -1;
        }
        *(_BYTE *)(a1 + 32861) = 1;
        v6 = sub_80D69C0(v8);
        break;
      }
      v5 = *(_DWORD *)(a1 + 52);
    }
    if ( v6 )
      return -1;
    result = a4 - *(_DWORD *)(a1 + 52);
    *(_QWORD *)(a1 + 24) += (unsigned int)result;
  }
  return result;
}
// 811F8A0: using guessed type char byte_811F8A0;

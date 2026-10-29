/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A4E0
// Address: 0x0008A4E0

//----- (0008A4E0) --------------------------------------------------------
int __fastcall sub_8A4E0(_DWORD *a1, char *a2, _DWORD *a3)
{
  int result; // r0
  int v7; // r6
  int v8; // r0

  result = -2;
  if ( a1 )
  {
    if ( a1[8] )
    {
      if ( a1[9] )
      {
        v7 = a1[7];
        if ( v7 )
        {
          if ( *(_DWORD **)v7 == a1 && (unsigned int)(*(_DWORD *)(v7 + 4) - 16180) <= 0x1F )
          {
            if ( a2 )
            {
              v8 = *(_DWORD *)(v7 + 48);
              if ( v8 )
              {
                qmemcpy(a2, (const void *)(*(_DWORD *)(v7 + 56) + *(_DWORD *)(v7 + 52)), v8 - *(_DWORD *)(v7 + 52));
                qmemcpy(
                  &a2[*(_DWORD *)(v7 + 48) - *(_DWORD *)(v7 + 52)],
                  *(const void **)(v7 + 56),
                  *(_DWORD *)(v7 + 52));
              }
            }
            result = 0;
            if ( a3 )
            {
              *a3 = *(_DWORD *)(v7 + 48);
              return 0;
            }
          }
        }
      }
    }
  }
  return result;
}

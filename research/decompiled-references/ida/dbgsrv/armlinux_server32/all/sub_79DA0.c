/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79DA0
// Address: 0x00079DA0

//----- (00079DA0) --------------------------------------------------------
int __fastcall sub_79DA0(int result)
{
  int *v1; // r4
  int v2; // r5
  int v3; // [sp+0h] [bp-8h] BYREF

  v2 = result + 12;
  v1 = *(int **)(result + 12);
  if ( v1 != (int *)(result + 12) )
  {
    do
    {
      if ( !*((_BYTE *)v1 + 28) )
      {
        result = v1[2];
        if ( result != -1 )
        {
          result = waitpid(result, &v3, v1[5] | 1);
          if ( result )
          {
            if ( result <= 0 )
            {
              if ( result == -1 && *_errno_location() == 10 )
                *((_BYTE *)v1 + 16) = 1;
            }
            else
            {
              v1[3] = v3;
            }
            *((_BYTE *)v1 + 28) = 1;
            result = sub_79D84(v1[6]);
          }
          else if ( *((_BYTE *)v1 + 29) )
          {
            *((_BYTE *)v1 + 29) = 0;
            result = sub_79D84(v1[6]);
          }
        }
      }
      v1 = (int *)*v1;
    }
    while ( v1 != (int *)v2 );
  }
  return result;
}

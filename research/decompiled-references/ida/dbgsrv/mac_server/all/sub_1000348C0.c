/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000348C0
// Address: 0x00000001000348C0

//----- (00000001000348C0) ----------------------------------------------------
size_t __fastcall sub_1000348C0(const char *a1, char *a2)
{
  size_t result; // rax
  char v3; // cl
  int v4; // edx

  result = strlen(a1);
  if ( (int)result <= 0 )
  {
    v3 = 0;
  }
  else
  {
    v3 = 0;
    if ( a1[(result & 0x7FFFFFFF) - 1] == 4 )
    {
      v3 = 1;
      if ( (_DWORD)result == 1 )
      {
LABEL_7:
        result = 0;
      }
      else
      {
        v4 = result + 1;
        while ( 1 )
        {
          result = (unsigned int)(v4 - 2);
          if ( a1[result - 1] != 4 )
            break;
          if ( (unsigned int)--v4 <= 2 )
            goto LABEL_7;
        }
      }
    }
  }
  if ( a2 )
    *a2 = v3;
  return result;
}

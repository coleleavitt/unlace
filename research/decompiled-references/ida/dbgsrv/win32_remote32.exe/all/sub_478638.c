/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478638
// Address: 0x00478638

//----- (00478638) --------------------------------------------------------
int *__cdecl sub_478638(double *a1, double *a2, double *a3, int a4)
{
  int (__cdecl *v4)(int); // edi
  int *result; // eax
  double *v6; // esi
  double v7; // st7
  int v8; // [esp+8h] [ebp-20h] BYREF
  const char *v9; // [esp+Ch] [ebp-1Ch]
  double v10; // [esp+10h] [ebp-18h]
  double v11; // [esp+18h] [ebp-10h]
  double v12; // [esp+20h] [ebp-8h]

  if ( dword_4B7A58 )
    v4 = (int (__cdecl *)(int))off_4B4044(dword_4B7FB8);
  else
    v4 = sub_477B99;
  if ( a4 <= 26 )
  {
    if ( a4 != 26 )
    {
      if ( a4 <= 14 )
      {
        if ( a4 == 14 )
        {
          v8 = 3;
          v9 = (const char *)&dword_4A6730;
          goto LABEL_42;
        }
        if ( a4 == 2 )
        {
          v8 = 2;
          v9 = (const char *)&dword_4A6738;
          goto LABEL_42;
        }
        if ( a4 != 3 )
        {
          if ( a4 != 8 )
          {
            result = (int *)(a4 - 9);
            if ( a4 != 9 )
              return result;
            v9 = "log10";
            goto LABEL_38;
          }
          v8 = 2;
          v9 = "log10";
LABEL_42:
          v6 = a3;
          v10 = *a1;
          v11 = *a2;
          v12 = *a3;
          result = (int *)v4((int)&v8);
          if ( !result )
          {
            result = sub_46B984();
            *result = 34;
          }
          goto LABEL_44;
        }
        v9 = (const char *)&dword_4A6738;
LABEL_38:
        v6 = a3;
        v8 = 1;
        v10 = *a1;
        v11 = *a2;
        v12 = *a3;
        result = (int *)v4((int)&v8);
        if ( !result )
        {
          result = sub_46B984();
          *result = 33;
        }
        goto LABEL_44;
      }
      if ( a4 == 15 )
      {
        v9 = (const char *)&dword_4A6730;
LABEL_21:
        v6 = a3;
        v8 = 4;
        v10 = *a1;
        v11 = *a2;
        v12 = *a3;
        result = (int *)v4((int)&v8);
LABEL_44:
        *v6 = v12;
        return result;
      }
      if ( a4 != 24 )
      {
        result = (int *)(a4 - 25);
        if ( a4 != 25 )
          return result;
        v9 = (const char *)&dword_4A6734;
        goto LABEL_21;
      }
      v8 = 3;
LABEL_41:
      v9 = (const char *)&dword_4A6734;
      goto LABEL_42;
    }
    v7 = 1.0;
LABEL_25:
    *a3 = v7;
    return (int *)a3;
  }
  switch ( a4 )
  {
    case 27:
      v8 = 2;
      goto LABEL_41;
    case 28:
      v9 = (const char *)&dword_4A6734;
      goto LABEL_38;
    case 49:
      v9 = "sqrt";
      goto LABEL_38;
    case 58:
      v9 = "acos";
      goto LABEL_38;
    case 61:
      v9 = "asin";
      goto LABEL_38;
  }
  if ( a4 == 1000 || (result = (int *)(a4 - 1001), a4 == 1001) )
  {
    v7 = *a1;
    goto LABEL_25;
  }
  return result;
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4A6730: using guessed type int dword_4A6730;
// 4A6734: using guessed type int dword_4A6734;
// 4A6738: using guessed type int dword_4A6738;
// 4B4044: using guessed type int (__stdcall *off_4B4044)(int a1);
// 4B7A58: using guessed type int dword_4B7A58;
// 4B7FB8: using guessed type int dword_4B7FB8;

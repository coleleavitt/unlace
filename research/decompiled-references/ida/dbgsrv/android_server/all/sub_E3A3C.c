/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E3A3C
// Address: 0x00000000000E3A3C

//----- (00000000000E3A3C) ----------------------------------------------------
char *__fastcall sub_E3A3C(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // x8
  int v3; // w9
  char *result; // x0
  char *v5; // x20
  unsigned __int8 *v6; // x22
  char *v7; // x21
  _QWORD *v8; // x8
  __int64 v9; // x9
  unsigned __int8 **v10; // x0
  char *v11; // x20
  char *v12; // x21
  unsigned __int8 *v13; // x23
  char *v14; // x22
  _QWORD *v15; // x8
  __int64 v16; // x9
  unsigned __int8 **v17; // x0
  char *v18; // x20
  unsigned __int8 *v19; // x22
  char *v20; // x21
  _QWORD *v21; // x8
  __int64 v22; // x9
  unsigned __int8 **v23; // x0

  v1 = *a1;
  if ( (unsigned __int64)(a1[1] - *a1) < 2 || *v1 != 100 )
    return sub_DFE94(a1);
  v3 = v1[1];
  switch ( v3 )
  {
    case 'X':
      *a1 = v1 + 2;
      result = sub_DFE94(a1);
      if ( result )
      {
        v11 = result;
        result = sub_DFE94(a1);
        if ( result )
        {
          v12 = result;
          result = (char *)sub_E3A3C(a1);
          if ( result )
          {
            v13 = a1[604];
            v14 = result;
            v15 = v13 + 8;
            v16 = *((_QWORD *)v13 + 1);
            if ( (unsigned __int64)(v16 + 48) >= 0xFF0 )
            {
              v17 = (unsigned __int8 **)operator new[](0x1000u);
              v16 = 0;
              *v17 = v13;
              v17[1] = nullptr;
              v15 = v17 + 1;
              v13 = (unsigned __int8 *)v17;
              a1[604] = (unsigned __int8 *)v17;
            }
            *v15 = v16 + 48;
            *(_QWORD *)&v13[v16 + 16] = off_1623B8;
            result = (char *)&v13[v16 + 16];
            *((_DWORD *)result + 2) = 16843052;
            *((_QWORD *)result + 2) = v11;
            *((_QWORD *)result + 3) = v12;
            *((_QWORD *)result + 4) = v14;
          }
        }
      }
      break;
    case 'x':
      *a1 = v1 + 2;
      result = sub_DFE94(a1);
      if ( result )
      {
        v18 = result;
        result = (char *)sub_E3A3C(a1);
        if ( result )
        {
          v19 = a1[604];
          v20 = result;
          v21 = v19 + 8;
          v22 = *((_QWORD *)v19 + 1);
          if ( (unsigned __int64)(v22 + 48) >= 0xFF0 )
          {
            v23 = (unsigned __int8 **)operator new[](0x1000u);
            v22 = 0;
            *v23 = v19;
            v23[1] = nullptr;
            v21 = v23 + 1;
            v19 = (unsigned __int8 *)v23;
            a1[604] = (unsigned __int8 *)v23;
          }
          *v21 = v22 + 48;
          *(_QWORD *)&v19[v22 + 16] = off_162348;
          result = (char *)&v19[v22 + 16];
          *((_DWORD *)result + 2) = 16843051;
          *((_QWORD *)result + 2) = v18;
          *((_QWORD *)result + 3) = v20;
          result[32] = 1;
        }
      }
      break;
    case 'i':
      *a1 = v1 + 2;
      result = (char *)sub_E61F4((__int64)a1);
      if ( result )
      {
        v5 = result;
        result = (char *)sub_E3A3C(a1);
        if ( result )
        {
          v6 = a1[604];
          v7 = result;
          v8 = v6 + 8;
          v9 = *((_QWORD *)v6 + 1);
          if ( (unsigned __int64)(v9 + 48) >= 0xFF0 )
          {
            v10 = (unsigned __int8 **)operator new[](0x1000u);
            v9 = 0;
            *v10 = v6;
            v10[1] = nullptr;
            v8 = v10 + 1;
            v6 = (unsigned __int8 *)v10;
            a1[604] = (unsigned __int8 *)v10;
          }
          *v8 = v9 + 48;
          *(_QWORD *)&v6[v9 + 16] = off_162348;
          result = (char *)&v6[v9 + 16];
          *((_DWORD *)result + 2) = 16843051;
          *((_QWORD *)result + 2) = v5;
          *((_QWORD *)result + 3) = v7;
          result[32] = 0;
        }
      }
      return result;
    default:
      return sub_DFE94(a1);
  }
  return result;
}
// 162348: using guessed type __int64 (__fastcall *off_162348[7])();
// 1623B8: using guessed type __int64 (__fastcall *off_1623B8[7])();

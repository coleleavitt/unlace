/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DF074
// Address: 0x00000000000DF074

//----- (00000000000DF074) ----------------------------------------------------
char *__fastcall sub_DF074(unsigned __int8 **a1, __int64 *a2, _BYTE *a3)
{
  int v6; // w22
  unsigned __int8 *v7; // x23
  _QWORD *v8; // x8
  __int64 v9; // x9
  unsigned __int8 **v10; // x0
  __int64 v11; // x10
  __int64 v12; // x9
  unsigned __int8 *v13; // x8
  unsigned __int8 *v14; // x10
  unsigned __int8 *v15; // x9
  int v16; // w8
  char *result; // x0
  unsigned int v18; // w9
  unsigned __int8 *v19; // x21
  _QWORD *v20; // x8
  __int64 v21; // x9
  unsigned __int8 **v22; // x0
  __int64 v23; // x8
  unsigned int v24; // w10
  unsigned __int8 *v25; // x21
  _QWORD *v26; // x8
  __int64 v27; // x9
  unsigned __int8 **v28; // x0
  __int64 v29; // x8

  if ( *(_BYTE *)(*a2 + 8) == 36 )
  {
    v6 = *(_DWORD *)(*a2 + 12);
    if ( (unsigned int)(v6 - 2) <= 3 )
    {
      v7 = a1[604];
      v8 = v7 + 8;
      v9 = *((_QWORD *)v7 + 1);
      if ( (unsigned __int64)(v9 + 16) >= 0xFF0 )
      {
        v10 = (unsigned __int8 **)operator new[](0x1000u);
        v9 = 0;
        *v10 = v7;
        v10[1] = nullptr;
        v8 = v10 + 1;
        v7 = (unsigned __int8 *)v10;
        a1[604] = (unsigned __int8 *)v10;
      }
      v11 = v9 + 16;
      v12 = (__int64)&v7[v9];
      *v8 = v11;
      *(_QWORD *)(v12 + 16) = off_1627A8;
      v12 += 16;
      *(_DWORD *)(v12 + 8) = 16843043;
      *(_DWORD *)(v12 + 12) = v6;
      *a2 = v12;
    }
  }
  v13 = *a1;
  v14 = a1[1];
  if ( *a1 != v14 && *v13 == 67 )
  {
    v15 = v13 + 1;
    *a1 = v13 + 1;
    if ( v13 + 1 != v14 )
    {
      if ( *v15 == 73 )
      {
        v15 = v13 + 2;
        v16 = 1;
        *a1 = v15;
        if ( v14 == v15 )
          return nullptr;
        goto LABEL_23;
      }
      v16 = 0;
      if ( v14 != v15 )
      {
LABEL_23:
        v24 = *v15;
        result = nullptr;
        if ( v24 <= 0x35 && ((1LL << v24) & 0x2E000000000000LL) != 0 )
        {
          *a1 = v15 + 1;
          if ( a3 )
            *a3 = 1;
          if ( !v16 || (result = sub_DCBBC(a1, (__int64)a3)) != nullptr )
          {
            v25 = a1[604];
            v26 = v25 + 8;
            v27 = *((_QWORD *)v25 + 1);
            if ( (unsigned __int64)(v27 + 32) >= 0xFF0 )
            {
              v28 = (unsigned __int8 **)operator new[](0x1000u);
              v27 = 0;
              *v28 = v25;
              v28[1] = nullptr;
              v26 = v28 + 1;
              v25 = (unsigned __int8 *)v28;
              a1[604] = (unsigned __int8 *)v28;
            }
            *v26 = v27 + 32;
            v29 = *a2;
            *(_QWORD *)&v25[v27 + 16] = off_162818;
            result = (char *)&v25[v27 + 16];
            *((_DWORD *)result + 2) = 16843045;
            *((_QWORD *)result + 2) = v29;
            result[24] = 0;
          }
        }
        return result;
      }
    }
    return nullptr;
  }
  if ( v14 == v13 )
    return nullptr;
  result = nullptr;
  if ( v14 - v13 != 1 && *v13 == 68 )
  {
    v18 = v13[1];
    result = nullptr;
    if ( v18 <= 0x35 && ((1LL << v18) & 0x27000000000000LL) != 0 )
    {
      *a1 = v13 + 2;
      if ( a3 )
        *a3 = 1;
      v19 = a1[604];
      v20 = v19 + 8;
      v21 = *((_QWORD *)v19 + 1);
      if ( (unsigned __int64)(v21 + 32) >= 0xFF0 )
      {
        v22 = (unsigned __int8 **)operator new[](0x1000u);
        v21 = 0;
        *v22 = v19;
        v22[1] = nullptr;
        v20 = v22 + 1;
        v19 = (unsigned __int8 *)v22;
        a1[604] = (unsigned __int8 *)v22;
      }
      *v20 = v21 + 32;
      v23 = *a2;
      *(_QWORD *)&v19[v21 + 16] = off_162818;
      result = (char *)&v19[v21 + 16];
      *((_DWORD *)result + 2) = 16843045;
      *((_QWORD *)result + 2) = v23;
      result[24] = 1;
    }
  }
  return result;
}
// 1627A8: using guessed type __int64 (__fastcall *off_1627A8[7])();
// 162818: using guessed type __int64 (__fastcall *off_162818[7])();

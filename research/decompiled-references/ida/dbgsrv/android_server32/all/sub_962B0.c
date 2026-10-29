/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_962B0
// Address: 0x000962B0

//----- (000962B0) --------------------------------------------------------
unsigned __int8 *__fastcall sub_962B0(unsigned __int8 **a1)
{
  bool v2; // zf
  __int64 v3; // r0
  unsigned __int8 *result; // r0
  int v5; // r1
  unsigned __int8 *v6; // r0
  unsigned __int8 *v7; // r5
  unsigned __int8 *v8; // r0
  unsigned __int8 *v9; // r9
  _DWORD *v10; // r0
  _DWORD *v11; // r8
  char v12; // [sp+3h] [bp-25h] BYREF
  _DWORD *v13; // [sp+4h] [bp-24h] BYREF
  void *v14; // [sp+8h] [bp-20h] BYREF

  v3 = *(_QWORD *)a1;
  HIDWORD(v3) -= v3;
  v2 = HIDWORD(v3) == 0;
  if ( HIDWORD(v3) )
    v2 = HIDWORD(v3) == 1;
  if ( v2 || *(_BYTE *)v3 != 100 )
    return sub_948A0((int)a1);
  v5 = *(unsigned __int8 *)(v3 + 1);
  if ( v5 == 88 )
  {
    *a1 = (unsigned __int8 *)(v3 + 2);
    v6 = sub_948A0((int)a1);
    if ( v6 )
    {
      v7 = v6;
      v8 = sub_948A0((int)a1);
      if ( v8 )
      {
        v9 = v8;
        v10 = sub_962B0(a1);
        if ( v10 )
        {
          v11 = v10;
          result = (unsigned __int8 *)sub_93AC6((int)(a1 + 92), 20);
          *(_DWORD *)result = &off_DC1AC;
          *((_DWORD *)result + 1) = 16843052;
          *((_DWORD *)result + 2) = v7;
          *((_DWORD *)result + 3) = v9;
          *((_DWORD *)result + 4) = v11;
          return result;
        }
      }
    }
    return nullptr;
  }
  if ( v5 == 120 )
  {
    *a1 = (unsigned __int8 *)(v3 + 2);
    v14 = sub_948A0((int)a1);
    if ( v14 )
    {
      v13 = sub_962B0(a1);
      if ( v13 )
      {
        LOBYTE(result) = 1;
        goto LABEL_20;
      }
    }
    return nullptr;
  }
  if ( v5 != 105 )
    return sub_948A0((int)a1);
  *a1 = (unsigned __int8 *)(v3 + 2);
  v14 = sub_9708C(a1);
  if ( !v14 )
    return nullptr;
  v13 = sub_962B0(a1);
  result = nullptr;
  if ( v13 )
  {
LABEL_20:
    v12 = (char)result;
    return (unsigned __int8 *)sub_9789C((int)a1, (int *)&v14, (int *)&v13, &v12);
  }
  return result;
}
// DC1AC: using guessed type _UNKNOWN *off_DC1AC;

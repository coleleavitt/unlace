/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005E89C
// Address: 0x000000010005E89C

//----- (000000010005E89C) ----------------------------------------------------
__int64 __fastcall sub_10005E89C(__int64 a1, __int64 *a2)
{
  __int64 v4; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  bool v10; // cc
  __int64 v11; // x19
  const char *v12; // x0
  const char *v13; // x20
  size_t v14; // x0
  size_t v15; // x21
  unsigned __int64 v16; // x22
  _QWORD *v17; // x1
  __int64 v18; // [xsp+0h] [xbp-40h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  if ( !v4 || (*(_BYTE *)(a1 + 8) & 1) != 0 )
    return 0xFFFFFFFFLL;
  v6 = v4;
  sub_10005F080((__int64)a2);
  v7 = *a2;
  v8 = a2[1];
  sub_10005E51C(&v18, v6, 0, v8);
  if ( v8 < 1 )
  {
LABEL_8:
    v11 = 0;
  }
  else
  {
    while ( 1 )
    {
      v9 = sub_10005E2D8(v6);
      if ( v9 < 0 )
        break;
      sub_10005E590(&v18);
      v7 += v9;
      v10 = v8 <= v9;
      v8 -= v9;
      if ( v10 )
        goto LABEL_8;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
    *(_BYTE *)(a1 + 8) = 1;
    if ( (unsigned int)sub_10005E2F0(v6) == -15059582 )
    {
      v11 = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = (const char *)sub_10005E2FC(v6);
      v13 = v12;
      if ( v12 && (v14 = strlen(v12)) != 0 )
      {
        v15 = v14;
        v16 = v14 + 1;
        v17 = *(_QWORD **)(a1 + 16);
        if ( *(_QWORD *)(a1 + 32) < v14 + 1 )
        {
          v17 = qvector_reserve((_QWORD *)(a1 + 16), v17, v16, 1u);
          *(_QWORD *)(a1 + 16) = v17;
        }
        *(_QWORD *)(a1 + 24) = v16;
        memmove(v17, v13, v15);
        *(_BYTE *)(*(_QWORD *)(a1 + 16) + v15) = 0;
        v11 = 0xFFFFFFFFLL;
      }
      else
      {
        *(_QWORD *)(a1 + 24) = 0;
        v11 = 0xFFFFFFFFLL;
      }
    }
  }
  sub_10005E558(&v18);
  return v11;
}

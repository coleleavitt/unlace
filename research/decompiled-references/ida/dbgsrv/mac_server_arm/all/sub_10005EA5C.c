/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005EA5C
// Address: 0x000000010005EA5C

//----- (000000010005EA5C) ----------------------------------------------------
__int64 __fastcall sub_10005EA5C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x20
  __int64 v7; // x24
  int v8; // w0
  int v9; // w21
  const char *v10; // x0
  const char *v11; // x20
  size_t v12; // x0
  size_t v13; // x21
  unsigned __int64 v14; // x22
  _QWORD *v15; // x1
  __int64 v16; // x19
  __int64 v18; // [xsp+0h] [xbp-50h] BYREF

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  sub_10005E51C(&v18, v6, 1, a3);
  if ( !a3 )
  {
LABEL_16:
    v16 = 0;
    goto LABEL_19;
  }
  while ( (int)sub_10005E308(v6) >= 1 )
  {
    v7 = sub_10005E2E4(v6);
    if ( v7 < 1 )
      goto LABEL_8;
    sub_10005E590(&v18);
    a3 -= v7;
    a2 += v7;
LABEL_3:
    if ( !a3 )
      goto LABEL_16;
  }
  v7 = -1;
LABEL_8:
  v8 = sub_10005E2F0(v6);
  if ( v8 == -21015 )
    goto LABEL_3;
  v9 = v8;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  if ( v7 )
  {
    *(_BYTE *)(a1 + 8) = 1;
    if ( v9 != -15059582 )
    {
      v10 = (const char *)sub_10005E2FC(v6);
      v11 = v10;
      if ( v10 && (v12 = strlen(v10)) != 0 )
      {
        v13 = v12;
        v14 = v12 + 1;
        v15 = *(_QWORD **)(a1 + 16);
        if ( *(_QWORD *)(a1 + 32) < v12 + 1 )
        {
          v15 = qvector_reserve((_QWORD *)(a1 + 16), v15, v14, 1u);
          *(_QWORD *)(a1 + 16) = v15;
        }
        *(_QWORD *)(a1 + 24) = v14;
        memmove(v15, v11, v13);
        *(_BYTE *)(*(_QWORD *)(a1 + 16) + v13) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 24) = 0;
      }
    }
  }
  v16 = 0xFFFFFFFFLL;
LABEL_19:
  sub_10005E558(&v18);
  return v16;
}

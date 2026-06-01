/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4383C0
// Address: 0x00000000004383C0

//----- (00000000004383C0) ----------------------------------------------------
__int64 __fastcall sub_4383C0(__int64 a1, __int64 a2)
{
  unsigned int v4; // w0
  _DWORD *v5; // x21
  _QWORD *v6; // x0
  __int64 v7; // x22
  _QWORD *v8; // x21
  size_t v9; // x20
  _DWORD *v11; // x0
  _DWORD *v12; // x21
  _QWORD *v13; // x0
  _QWORD *v14; // x0
  __int64 v15; // x22
  _QWORD *v16; // x21
  size_t v17; // x20
  void *v18; // x0
  void *v19; // x0

  if ( a1 == a2 )
    return a1;
  sub_4382E8(a1);
  v4 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 > 4u )
  {
    if ( v4 != 5 )
      return a1;
    v11 = sub_49E050(0x20u);
    *v11 = 0;
    v12 = v11;
    v11[6] = 0;
    sub_4383C0();
    *(_QWORD *)(a1 + 16) = v12;
    v13 = sub_49E050(0x18u);
    v7 = *(_QWORD *)(a2 + 8);
    *v13 = 0;
    v13[1] = 0;
    v8 = v13;
    v13[2] = 0;
    v9 = *(_QWORD *)(v7 + 8);
    if ( !v9 )
      goto LABEL_8;
    goto LABEL_17;
  }
  if ( v4 >= 3 )
  {
LABEL_7:
    v5 = sub_49E050(0x20u);
    *v5 = 0;
    v5[6] = 0;
    sub_4383C0();
    *(_QWORD *)(a1 + 16) = v5;
    v6 = sub_491248(24);
    v7 = *(_QWORD *)(a2 + 8);
    *v6 = 0;
    v6[1] = 0;
    v8 = v6;
    v6[2] = 0;
    v9 = *(_QWORD *)(v7 + 8);
    if ( !v9 )
    {
LABEL_8:
      *(_QWORD *)(a1 + 8) = v8;
      return a1;
    }
LABEL_17:
    v18 = sub_491248(*(_QWORD *)(v7 + 8));
    *v8 = v18;
    v8[2] = v9;
    memcpy(v18, *(const void **)v7, v9);
    v8[1] = v9;
    goto LABEL_8;
  }
  if ( v4 != 1 )
  {
    if ( v4 != 2 )
      return a1;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
    goto LABEL_7;
  }
  v14 = sub_49E050(0x18u);
  v15 = *(_QWORD *)(a2 + 16);
  *v14 = 0;
  v14[1] = 0;
  v16 = v14;
  v14[2] = 0;
  v17 = *(_QWORD *)(v15 + 8);
  if ( v17 )
  {
    v19 = sub_491248(*(_QWORD *)(v15 + 8));
    *v16 = v19;
    v16[2] = v17;
    memcpy(v19, *(const void **)v15, v17);
    v16[1] = v17;
  }
  *(_QWORD *)(a1 + 16) = v16;
  return a1;
}

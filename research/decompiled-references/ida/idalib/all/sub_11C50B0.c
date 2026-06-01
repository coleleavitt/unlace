__int64 __fastcall sub_11C50B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6, char a7)
{
  char v7; // r15
  unsigned int v11; // ebp
  int v12; // eax
  int v14; // eax
  int v15; // [rsp+Ch] [rbp-3Ch]
  int v16; // [rsp+Ch] [rbp-3Ch]
  int v17; // [rsp+Ch] [rbp-3Ch]
  int v18; // [rsp+Ch] [rbp-3Ch]

  v7 = a6;
  v11 = sub_21B79D0(a4, 1563, 1562, 1265, 0, a6);
  if ( !(_BYTE)v11 )
  {
    if ( (unsigned __int8)sub_21B7850(a4, 1533, 1253, 0) )
    {
      sub_10DC5D0(a2, (__int64)"-lomptarget");
      return v11;
    }
    return 0;
  }
  v12 = sub_10DD170(*(__int64 **)(a3 + 8), a4);
  if ( !v12 )
    return 0;
  if ( !a5 )
  {
    if ( v12 == 2 )
    {
      sub_10DC5D0(a2, (__int64)"-lgomp");
      v14 = 2;
      goto LABEL_22;
    }
    if ( v12 != 3 )
    {
      if ( v12 != 1 )
        goto LABEL_7;
      goto LABEL_19;
    }
LABEL_26:
    v18 = v12;
    sub_10DC5D0(a2, (__int64)"-liomp5");
    v12 = v18;
LABEL_20:
    if ( !a5 )
      goto LABEL_7;
    goto LABEL_21;
  }
  v15 = v12;
  sub_10DC5D0(a2, (__int64)"-Bstatic");
  v12 = v15;
  switch ( v15 )
  {
    case 2:
      sub_10DC5D0(a2, (__int64)"-lgomp");
      v12 = 2;
      break;
    case 3:
      goto LABEL_26;
    case 1:
LABEL_19:
      v16 = v12;
      sub_10DC5D0(a2, (__int64)"-lomp");
      v12 = v16;
      goto LABEL_20;
  }
LABEL_21:
  v17 = v12;
  sub_10DC5D0(a2, (__int64)"-Bdynamic");
  v14 = v17;
LABEL_22:
  if ( v14 == 2 && a7 )
  {
    sub_10DC5D0(a2, (__int64)"-lrt");
    if ( !v7 )
      goto LABEL_8;
    goto LABEL_25;
  }
LABEL_7:
  if ( !v7 )
    goto LABEL_8;
LABEL_25:
  sub_10DC5D0(a2, (__int64)"-lomptarget");
LABEL_8:
  if ( (unsigned __int8)sub_21B7850(a4, 1706, 1345, 0) && *(_DWORD *)(a3 + 60) != 20 )
    sub_11C32C0(a3, a4, a2);
  sub_11BAFD0(a3, a4, a2);
  return v11;
}

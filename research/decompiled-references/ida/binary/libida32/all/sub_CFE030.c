__int64 __fastcall sub_CFE030(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // r13
  unsigned __int8 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int8 v15; // [rsp+Fh] [rbp-D9h] BYREF
  unsigned int v16[6]; // [rsp+10h] [rbp-D8h] BYREF
  int v17; // [rsp+28h] [rbp-C0h]
  __int64 v18; // [rsp+30h] [rbp-B8h]
  __int64 v19; // [rsp+38h] [rbp-B0h]
  _QWORD v20[6]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v21[6]; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int8 v22; // [rsp+A0h] [rbp-48h]

  v2 = 1;
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v4 = *(_QWORD *)(a1 + 560);
    v5 = *(_QWORD *)(a1 + 1232);
    v6 = a1 + 384;
    *(_QWORD *)(a1 + 1240) = *a2;
    v7 = *(_BYTE *)sub_DFDA20(v4, 8);
    sub_DFDA50(v4, 8);
    v8 = *(_QWORD *)(a1 + 560);
    v15 = v7;
    sub_DFDA20(v8, 48);
    sub_DFF520(v16);
    sub_DFDA50(v8, 48);
    if ( !v17 || v17 == 2 )
    {
      if ( !v18 )
        goto LABEL_13;
    }
    else if ( v17 != 3 && !(*(_QWORD *)v16 | v19) )
    {
      goto LABEL_13;
    }
    if ( !v15 )
    {
LABEL_8:
      v9 = sub_CDA220((__int64)v16);
      v10 = *(_QWORD *)(a1 + 560);
      v2 = *(unsigned __int8 *)(v9 + 60);
      if ( (_BYTE)v2 && !sub_CDA8F0(v16) )
      {
        sub_CDA6F0((__int64)v20, (__int64)v16, 0);
        sub_CDAA60((__int64)v21, v20);
        v14 = sub_DFD980(v10, 48);
        sub_DFF520(v14);
        sub_DFF560(v21);
        sub_DFF560(v20);
      }
      else
      {
        v2 = 1;
        v11 = sub_DFD980(v10, 48);
        sub_DFF4A0(v11, v16);
      }
      goto LABEL_11;
    }
    v2 = sub_DA4610(v6, v5, v16);
    if ( !(_BYTE)v2 )
    {
LABEL_11:
      sub_DFF560(v16);
      return v2;
    }
LABEL_13:
    if ( v15 )
    {
      sub_CFDA10((__int64)v21, v6, v5, &v15, (__int64)v16, 0);
      v2 = v22;
      if ( v22 )
      {
        v12 = *(_QWORD *)(a1 + 560);
        sub_CDAA60((__int64)v20, v21);
        v13 = sub_DFD980(v12, 48);
        sub_DFF520(v13);
        sub_DFF560(v20);
        if ( v22 )
          sub_DFF560(v21);
      }
      goto LABEL_11;
    }
    goto LABEL_8;
  }
  return v2;
}


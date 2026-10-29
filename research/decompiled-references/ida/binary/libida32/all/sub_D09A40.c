__int64 __fastcall sub_D09A40(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // r12
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v19[48]; // [rsp+10h] [rbp-A8h] BYREF
  _QWORD v20[6]; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int8 v21; // [rsp+70h] [rbp-48h]

  v2 = 1;
  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return v2;
  v5 = *(_QWORD *)(a1 + 560);
  v6 = *(_QWORD *)(a1 + 1232);
  v7 = a1 + 384;
  *(_QWORD *)(a1 + 1240) = *a2;
  v8 = *(_QWORD *)sub_DFDA20(v5, 8);
  sub_DFDA50(v5, 8);
  v9 = *(_QWORD *)(a1 + 560);
  v18 = v8;
  v10 = sub_DFDA20(v9, 48);
  v11 = *(_DWORD *)(v10 + 24);
  if ( !v11 || v11 == 2 )
  {
    if ( !*(_QWORD *)(v10 + 32) )
      goto LABEL_12;
  }
  else if ( v11 != 3 && !*(_QWORD *)(v10 + 40) && !*(_QWORD *)v10 )
  {
    goto LABEL_12;
  }
  if ( !v18 )
    goto LABEL_8;
  v2 = sub_DA4610(v7, v6, v10);
  if ( !(_BYTE)v2 )
    return v2;
LABEL_12:
  if ( v18 )
  {
    sub_D091F0((__int64)v20, v7, v6, &v18, v10, 0);
    v2 = v21;
    if ( v21 )
    {
      v15 = *(_QWORD *)(a1 + 560);
      sub_CDAA60((__int64)v19, v20);
      v16 = sub_DFD980(v15, 48);
      sub_DFF520(v16);
      sub_DFF560(v19);
      if ( v21 )
        sub_DFF560(v20);
    }
    return v2;
  }
LABEL_8:
  v12 = sub_CDA220(v10);
  v13 = *(_QWORD *)(a1 + 560);
  v2 = *(unsigned __int8 *)(v12 + 60);
  if ( (_BYTE)v2 && !sub_CDA8F0((unsigned int *)v10) )
  {
    sub_CDA6F0((__int64)v20, v10, 0);
    sub_CDAA60((__int64)v19, v20);
    v17 = sub_DFD980(v13, 48);
    sub_DFF520(v17);
    sub_DFF560(v19);
    sub_DFF560(v20);
  }
  else
  {
    v2 = 1;
    v14 = sub_DFD980(v13, 48);
    sub_DFF4A0(v14, v10);
  }
  return v2;
}


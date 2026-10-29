void __fastcall sub_144F4B0(__int64 a1, __int64 a2)
{
  char v2; // bp
  bool v3; // zf
  __int64 v4; // rax
  __int64 v5; // rsi
  int v6; // ecx
  int v7; // [rsp+Ch] [rbp-8Ch] BYREF
  int v8; // [rsp+10h] [rbp-88h] BYREF
  __int64 v9; // [rsp+18h] [rbp-80h]
  __int16 v10; // [rsp+20h] [rbp-78h]
  _BYTE v11[104]; // [rsp+30h] [rbp-68h] BYREF

  v2 = *(_BYTE *)(a2 + 544);
  *(_BYTE *)(a2 + 544) = v2 | 0x20;
  sub_14634E0(a2, &v8);
  v3 = v10 == 5;
  *(_BYTE *)(a2 + 544) = (32 * ((v2 & 0x20) != 0)) | *(_BYTE *)(a2 + 544) & 0xDF;
  if ( !v3 )
  {
    sub_FC70B0((__int64)v11, *(_QWORD *)(a2 + 48), v8, 1167);
    sub_AEA040((__int64)v11);
    return;
  }
  v4 = *(_QWORD *)(v9 + 16);
  v7 = v8;
  if ( (unsigned int)*(_QWORD *)v4 != 5 )
  {
    if ( (unsigned int)*(_QWORD *)v4 == 3 && *(_WORD *)(v4 + 16) == 28261 && *(_BYTE *)(v4 + 18) == 100 )
    {
      if ( (unsigned __int8)sub_145D390(a2, 0, &v7) )
      {
        v5 = *(_QWORD *)(a2 + 48);
        v6 = 1174;
        goto LABEL_10;
      }
      return;
    }
LABEL_4:
    sub_FC70B0((__int64)v11, *(_QWORD *)(a2 + 48), v8, 1167);
    sub_AEA040((__int64)v11);
    return;
  }
  if ( *(_DWORD *)(v4 + 16) != 1768383842 || *(_BYTE *)(v4 + 20) != 110 )
    goto LABEL_4;
  if ( (unsigned __int8)sub_145D390(a2, 1, &v7) )
  {
    v5 = *(_QWORD *)(a2 + 48);
    v6 = 1111;
LABEL_10:
    sub_FC70B0((__int64)v11, v5, v7, v6);
    sub_AEA040((__int64)v11);
  }
}

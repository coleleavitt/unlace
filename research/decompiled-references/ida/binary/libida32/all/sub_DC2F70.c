__int64 __fastcall sub_DC2F70(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebx
  _BYTE *v5; // rbx
  _DWORD v6[22]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v6);
  sub_DFDA50(v2, 48);
  v3 = sub_DA8420(a1, a2, (__int64)v6, 4);
  if ( !(_BYTE)v3 )
    goto LABEL_2;
  v3 = sub_DFDF30(a1);
  if ( !(_BYTE)v3 && !v6[6] && sub_D8CD70((__int64)v6) )
    goto LABEL_2;
  if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x20) == 0 )
  {
    v3 = sub_CDB0E0(a1, (__int64)a2);
LABEL_2:
    sub_DFF560(v6);
    return v3;
  }
  v5 = (_BYTE *)sub_CEAA70((__int64)v6);
  *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = *v5;
  return sub_DC3040();
}


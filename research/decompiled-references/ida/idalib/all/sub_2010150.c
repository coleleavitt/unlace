char __fastcall sub_2010150(__int64 a1, __int64 a2, char a3)
{
  double v3; // xmm0_8
  char v4; // r8
  char result; // al
  _QWORD v6[2]; // [rsp+0h] [rbp-28h] BYREF
  char v7; // [rsp+10h] [rbp-18h]

  v3 = *(double *)(a1 + 120);
  v4 = *(_BYTE *)(a1 + 144);
  if ( a3 )
    goto LABEL_6;
  result = 1;
  if ( v3 != *(double *)(a1 + 136) )
    result = a3;
  if ( !result || !v4 )
  {
LABEL_6:
    v6[1] = *(_QWORD *)(a1 + 136);
    v7 = v4;
    v6[0] = off_2C716B8;
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64, double))sub_22128E0)(a1 + 152, a1, v6, a2, v3);
  }
  return result;
}

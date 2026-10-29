__int64 __fastcall sub_9FCB50(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // cl
  char v5; // [rsp+Fh] [rbp-29h] BYREF
  __int64 v6; // [rsp+10h] [rbp-28h] BYREF
  int v7; // [rsp+18h] [rbp-20h]

  v2 = *(_BYTE *)(a2 + 32);
  v6 = a1;
  v7 = 1;
  v3 = v2 & 4;
  if ( (v2 & 4) != 0 )
    v3 = (v2 & 8) == 0 ? 2 : 6;
  v5 = (2 * (v3 | v2 & 1)) | ((v2 & 2) != 0);
  sub_22581D0(a1, &v5, 1);
  sub_9FCB20(&v6, *(_WORD *)(a2 + 8));
  sub_22581D0(a1, *(_QWORD *)a2, *(_QWORD *)(a2 + 8));
  sub_9FCB20(&v6, *(_WORD *)(a2 + 48));
  return sub_22581D0(a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48));
}


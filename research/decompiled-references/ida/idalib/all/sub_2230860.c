__int64 __fastcall sub_2230860(__int64 a1)
{
  unsigned int v1; // eax
  char v2; // dl
  __int64 v3; // rax
  __int64 v5[2]; // [rsp+0h] [rbp-68h] BYREF
  char v6; // [rsp+10h] [rbp-58h]
  const void **v7; // [rsp+20h] [rbp-48h] BYREF
  __int16 v8; // [rsp+40h] [rbp-28h]

  sub_22914F0(1);
  v7 = (const void **)"<stdin>";
  v8 = 259;
  v1 = sub_228D410();
  sub_22305D0((__int64)v5, v1, &v7);
  v2 = v6 & 1;
  if ( (v6 & 1) != 0 )
  {
    *(_DWORD *)a1 = v5[0];
    *(_QWORD *)(a1 + 8) = v5[1];
  }
  else
  {
    v3 = v5[0];
    v5[0] = 0;
    *(_QWORD *)a1 = v3;
  }
  *(_BYTE *)(a1 + 16) = v2 | *(_BYTE *)(a1 + 16) & 0xFE;
  sub_22307A0(v5);
  return a1;
}

void __fastcall sub_A20A50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  bool v3; // zf
  __int16 v4; // [rsp+Eh] [rbp-5Ah] BYREF
  __int64 v5; // [rsp+10h] [rbp-58h] BYREF
  int v6; // [rsp+18h] [rbp-50h]
  void *v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+28h] [rbp-40h]
  _BYTE v9[16]; // [rsp+30h] [rbp-38h] BYREF
  char v10; // [rsp+40h] [rbp-28h]

  v2 = a1;
  sub_A20890(a1, a2);
  v3 = *(_BYTE *)(a2 + 104) == 0;
  v5 = a1;
  v6 = 1;
  v10 = 0;
  if ( !v3 )
  {
    sub_A1ED90((__int64)&v7, a2 + 72);
    if ( v10 )
    {
      sub_A20860(&v5, v8 + 1);
      sub_227BF10(a1, v7, v8);
      goto LABEL_3;
    }
    a1 = v5;
  }
  v4 = 0;
  sub_227BF10(a1, &v4, 2);
LABEL_3:
  if ( v10 && v7 != v9 )
    operator delete(v7);
  v3 = *(_BYTE *)(a2 + 144) == 0;
  v10 = 0;
  if ( v3 || (sub_A1ED90((__int64)&v7, a2 + 112), !v10) )
  {
    v4 = 0;
    sub_227BF10(v5, &v4, 2);
  }
  else
  {
    sub_A20860(&v5, v8 + 1);
    sub_227BF10(v2, v7, *(_QWORD *)(a2 + 120));
  }
  if ( v10 )
  {
    if ( v7 != v9 )
      operator delete(v7);
  }
}

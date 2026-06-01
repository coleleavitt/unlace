unsigned __int64 __fastcall set_custom_data_type_ids(int a1, unsigned __int16 *a2)
{
  __int64 *v2; // r13
  _BYTE *v3; // rbp
  int v4; // eax
  __int64 v5; // rsi
  int v7; // [rsp+Ch] [rbp-5Ch] BYREF
  _BYTE v8[40]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( a2 )
  {
    v2 = *(__int64 **)(qword_2CA1698 + 1480);
    v3 = sub_3E3600((__int64)v8, 26, a2);
    v4 = sub_3B90A0(v2, a1);
    v5 = *v2;
    v7 = v4;
    sub_79B440(&v7, v5, 28, v8, v3, 83);
  }
  return v9 - __readfsqword(0x28u);
}


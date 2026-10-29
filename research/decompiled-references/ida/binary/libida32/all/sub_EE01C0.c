__int64 __fastcall sub_EE01C0(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v8[32]; // [rsp+10h] [rbp-38h] BYREF
  __int16 v9; // [rsp+30h] [rbp-18h]

  v3 = *(__int64 **)(a2 + 16);
  v4 = *a1;
  if ( v3 )
    v5 = *v3;
  else
    v5 = *(_QWORD *)(a2 + 8);
  v7 = v5;
  v9 = 257;
  sub_F50AF0(&v7, v4, a1 + 3, v8, 0);
  return sub_971800(*a1, "()");
}


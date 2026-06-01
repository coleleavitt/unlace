unsigned __int64 __fastcall sub_7A6360(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // dl
  __int64 v7; // rax
  _QWORD *v9; // r12
  __int64 v10; // [rsp+0h] [rbp-68h] BYREF
  __int64 v11; // [rsp+8h] [rbp-60h]
  _QWORD v12[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v13[3]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v10 = 1;
  v11 = 0;
  sub_7A62B0(a1, (__int64)&v10, a3, a4, a5, a6);
  if ( *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) == 63 )
  {
    v12[0] = 1;
    v12[1] = 0;
    sub_7A6360(a1, v12, 1);
    if ( *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) != 58 )
      sub_7A00E0(a1);
    v9 = v13;
    v13[0] = 1;
    v13[1] = 0;
    sub_7A6360(a1, v13, 1);
    if ( v11 )
      v9 = v12;
    v6 = *(_BYTE *)v9;
    v7 = v9[1];
  }
  else
  {
    v6 = v10;
    v7 = v11;
  }
  *(_BYTE *)a2 = v6;
  *(_QWORD *)(a2 + 8) = v7;
  return v14 - __readfsqword(0x28u);
}

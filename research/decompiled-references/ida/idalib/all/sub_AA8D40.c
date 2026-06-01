__int64 __fastcall sub_AA8D40(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 (*v3)(); // rax
  __int64 v5; // rbx
  char v6; // dl
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // [rsp+Ch] [rbp-38h] BYREF
  unsigned int v10; // [rsp+14h] [rbp-30h]

  v2 = a1[2181];
  v3 = *(__int64 (**)())(*(_QWORD *)v2 + 280LL);
  if ( v3 == sub_A55EB0 )
    return 0;
  v5 = ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v3)(v2, a1[290], 0, 0);
  if ( !v6 )
    return 0;
  sub_A649E0((__int64)&v9, a1, a2);
  v7 = v9;
  v8 = sub_A97D20((__int64)a1, *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v7 == a1[2330] )
    v8 = 1;
  return v5 * v10 * v8;
}

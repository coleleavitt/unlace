__int64 __fastcall sub_203E7C0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  __int64 v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = a1[4];
  v4 = a1[1];
  v11[0] = (__int64)off_2BE5D20;
  v5 = (__int64)(a1 + 5);
  v6 = *a1;
  v11[1] = v5;
  v11[2] = v3;
  v11[3] = v4;
  sub_995540(v6, "#dbg_label(");
  sub_20399E0(*a1, *(_QWORD *)(a2 + 40), v11);
  sub_995540(*a1, ", ");
  v7 = *(_QWORD *)(a2 + 24);
  v10 = v7;
  if ( v7 )
    sub_20B2EE0(&v10, v7, 1);
  v8 = sub_208B330(&v10);
  sub_20399E0(*a1, v8, v11);
  if ( v10 )
    sub_20A0850(&v10);
  return sub_995540(*a1, ")");
}

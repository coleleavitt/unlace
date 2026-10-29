__int64 __fastcall sub_203EA70(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // [rsp+8h] [rbp-40h] BYREF
  __int64 v20[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = a1[1];
  v5 = a1[4];
  v20[0] = (__int64)off_2BE5D20;
  v6 = (__int64)(a1 + 5);
  v7 = *a1;
  v20[1] = v6;
  v20[2] = v5;
  v20[3] = v4;
  sub_995540(v7, "#dbg_");
  v8 = *(_BYTE *)(a2 + 64);
  if ( v8 == 1 )
  {
    sub_995540(*a1, "value");
  }
  else if ( v8 )
  {
    sub_995540(*a1, "assign");
  }
  else
  {
    sub_995540(*a1, "declare");
  }
  sub_995540(*a1, "(");
  v9 = *(_QWORD *)(a2 + 40);
  if ( v9 )
    sub_20399E0(*a1, v9, v20);
  else
    sub_995540(*a1, "(null)");
  sub_995540(*a1, ", ");
  v10 = *(_QWORD *)(a2 + 72);
  if ( v10 )
    sub_20399E0(*a1, v10, v20);
  else
    sub_995540(*a1, "(null)");
  sub_995540(*a1, ", ");
  v11 = *(_QWORD *)(a2 + 80);
  if ( v11 )
    sub_20399E0(*a1, v11, v20);
  else
    sub_995540(*a1, "(null)");
  sub_995540(*a1, ", ");
  if ( *(_BYTE *)(a2 + 64) == 2 )
  {
    v14 = *(_QWORD *)(a2 + 56);
    v15 = *a1;
    if ( v14 )
      sub_20399E0(v15, v14, v20);
    else
      sub_995540(v15, "(null)");
    sub_995540(*a1, ", ");
    if ( *(_BYTE *)(a2 + 64) == 2 )
      v16 = *(_QWORD *)(a2 + 48);
    else
      v16 = *(_QWORD *)(a2 + 40);
    v17 = *a1;
    if ( v16 )
      sub_20399E0(v17, v16, v20);
    else
      sub_995540(v17, "(null)");
    sub_995540(*a1, ", ");
    v18 = *(_QWORD *)(a2 + 88);
    if ( v18 )
      sub_20399E0(*a1, v18, v20);
    else
      sub_995540(*a1, "(null)");
    sub_995540(*a1, ", ");
  }
  v12 = *(_QWORD *)(a2 + 24);
  v19 = v12;
  if ( v12 && (sub_20B2EE0(&v19, v12, 1), v19) )
    sub_20399E0(*a1, v19, v20);
  else
    sub_995540(*a1, "(null)");
  if ( v19 )
    sub_20A0850(&v19);
  return sub_995540(*a1, ")");
}

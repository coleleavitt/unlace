__int64 __fastcall sub_203A460(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // al
  __int64 *v5; // rax
  __int64 v6; // r13
  size_t v7; // rax
  unsigned __int8 v8; // al
  __int64 v9; // rax
  __int64 v10; // r13
  size_t v11; // rax
  unsigned __int8 v12; // al
  __int64 v13; // rax
  __int64 v14; // r13
  size_t v15; // rax
  unsigned __int8 v16; // al
  __int64 v17; // rax
  __int64 v18; // rbx
  size_t v19; // rax
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  char v22; // [rsp+8h] [rbp-40h]
  char *v23; // [rsp+10h] [rbp-38h]
  __int64 v24; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DISubrange(");
  v21 = a1;
  v23 = ", ";
  v4 = *(_BYTE *)(a2 - 16);
  v22 = 1;
  v24 = a3;
  if ( (v4 & 2) != 0 )
    v5 = *(__int64 **)(a2 - 32);
  else
    v5 = (__int64 *)(a2 - 8LL * ((v4 >> 2) & 0xF) - 16);
  v6 = *v5;
  v7 = j__strlen("count");
  sub_203A3D0((__int64)&v21, "count", v7, v6, 0, 0);
  v8 = *(_BYTE *)(a2 - 16);
  if ( (v8 & 2) != 0 )
    v9 = *(_QWORD *)(a2 - 32);
  else
    v9 = a2 - 8LL * ((v8 >> 2) & 0xF) - 16;
  v10 = *(_QWORD *)(v9 + 8);
  v11 = j__strlen("lowerBound");
  sub_203A3D0((__int64)&v21, "lowerBound", v11, v10, 0, 0);
  v12 = *(_BYTE *)(a2 - 16);
  if ( (v12 & 2) != 0 )
    v13 = *(_QWORD *)(a2 - 32);
  else
    v13 = a2 - 8LL * ((v12 >> 2) & 0xF) - 16;
  v14 = *(_QWORD *)(v13 + 16);
  v15 = j__strlen("upperBound");
  sub_203A3D0((__int64)&v21, "upperBound", v15, v14, 0, 0);
  v16 = *(_BYTE *)(a2 - 16);
  if ( (v16 & 2) != 0 )
    v17 = *(_QWORD *)(a2 - 32);
  else
    v17 = a2 - 8LL * ((v16 >> 2) & 0xF) - 16;
  v18 = *(_QWORD *)(v17 + 24);
  v19 = j__strlen("stride");
  sub_203A3D0((__int64)&v21, "stride", v19, v18, 0, 0);
  return sub_995540(a1, ")");
}

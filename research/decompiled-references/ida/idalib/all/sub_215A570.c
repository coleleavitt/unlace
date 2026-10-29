__int64 __fastcall sub_215A570(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  _WORD *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  char *v22; // [rsp+0h] [rbp-78h] BYREF
  __int64 v23; // [rsp+8h] [rbp-70h] BYREF
  __int64 v24; // [rsp+10h] [rbp-68h] BYREF
  char v25; // [rsp+18h] [rbp-60h]
  const char *v26; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-50h]
  char **v28; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+38h] [rbp-40h]
  __int64 v30; // [rsp+40h] [rbp-38h]

  v3 = *(_QWORD *)(a2 + 16);
  v27 = 4;
  v26 = (const char *)(v3 + 108);
  v4 = sub_2247130(&v26, " ", 1, -1);
  v7 = v27;
  v8 = v4 + 1;
  v9 = (__int64)v26;
  LOWORD(v30) = 259;
  if ( v8 > v27 )
    v8 = v27;
  v10 = v27 + v8 - 4;
  if ( v10 <= v27 )
    v7 = v10;
  v26 = "NameLen";
  sub_215A300((__int64)&v24, v9, v7, a2, v5, v6, (__int64 *)"NameLen", v27, (int)v28, v29, v30);
  if ( (v25 & 1) != 0 )
  {
    v11 = v24;
    *(_BYTE *)(a1 + 16) |= 1u;
    v24 = 0;
    *(_QWORD *)a1 = v11;
  }
  else
  {
    v13 = v24;
    v14 = *(_QWORD *)(a2 + 16);
    v15 = 2 * ((v24 != 0) + ((v24 - (unsigned __int64)(v24 != 0)) >> 1));
    v16 = (_WORD *)(v14 + 112 + v15);
    if ( v15 < 0xFFFFFFFFFFFFFFFELL && *v16 == 2656 )
    {
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)a1 = v14 + 112;
      *(_QWORD *)(a1 + 8) = v13;
    }
    else
    {
      v17 = sub_215DEC0(*(_QWORD *)(a2 + 8));
      v28 = &v22;
      v22 = (char *)v16 - v17;
      v26 = "name does not have name terminator \"`\\n\" for archive memberheader at offset ";
      LOWORD(v30) = 2819;
      sub_2158040(
        &v23,
        v14,
        2819,
        v18,
        v19,
        v20,
        (char)"name does not have name terminator \"`\\n\" for archive memberheader at offset ");
      v21 = v23;
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v21;
    }
  }
  sub_A0AE70(&v24);
  return a1;
}

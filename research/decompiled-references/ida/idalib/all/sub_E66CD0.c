__int64 __fastcall sub_E66CD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  size_t v4; // rax
  char v5; // r12
  size_t v6; // rax
  char v7; // r12
  size_t v8; // rax
  char v9; // r12
  size_t v10; // rax
  char v11; // al
  char v12; // bp
  size_t v13; // rax
  __int64 v15; // [rsp+0h] [rbp-78h] BYREF
  __int64 v16; // [rsp+8h] [rbp-70h]
  int v17; // [rsp+10h] [rbp-68h]
  __int16 v18; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+28h] [rbp-50h]
  __int64 v20; // [rsp+30h] [rbp-48h]
  int v21; // [rsp+38h] [rbp-40h]

  sub_E5B230(a1, a2);
  sub_E63A60((__int64)&v15, a1, *(_QWORD *)(a2 + 48), 1);
  v18 = 7;
  v2 = v15;
  v15 = 0;
  v19 = v2;
  v3 = v16;
  v16 = 0;
  v20 = v3;
  LODWORD(v3) = v17;
  v17 = 0;
  v21 = v3;
  v4 = j__strlen("type");
  sub_222AB70(a1 + 1048, "type", v4);
  sub_222CAC0(a1 + 1048, &v18);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v18);
  sub_E5D2E0(&v15);
  v5 = *(_BYTE *)(a2 + 68);
  v6 = j__strlen("mutable");
  sub_E59B90(a1, (__int64)"mutable", v6, (v5 & 2) != 0);
  v7 = (*(_BYTE *)(a2 + 8) & 7) == 4;
  v8 = j__strlen("modulePrivate");
  sub_E59B90(a1, (__int64)"modulePrivate", v8, v7);
  v9 = *(_BYTE *)(a2 + 68);
  v10 = j__strlen("isBitfield");
  sub_E59B90(a1, (__int64)"isBitfield", v10, v9 & 1);
  v11 = *(_BYTE *)(a2 + 68);
  v12 = 0;
  if ( (v11 & 0xC) != 0xC )
    v12 = (v11 & 0xC) != 0;
  v13 = j__strlen("hasInClassInitializer");
  return sub_E59B90(a1, (__int64)"hasInClassInitializer", v13, v12);
}

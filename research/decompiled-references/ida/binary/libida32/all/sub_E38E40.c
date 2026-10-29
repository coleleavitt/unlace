__int64 __fastcall sub_E38E40(__int64 a1, __int16 *a2)
{
  __int16 v2; // bx
  size_t v3; // rax
  __int16 v4; // bx
  size_t v5; // rax
  __int16 v6; // bx
  size_t v7; // rax
  char v8; // r13
  size_t v9; // rax
  char v10; // r13
  size_t v11; // rax
  char v12; // r12
  size_t v13; // rax

  v2 = *a2;
  v3 = j__strlen("hasInit");
  sub_E35E50(a1, (__int64)"hasInit", v3, (v2 & 0x4000) != 0);
  v4 = *a2;
  v5 = j__strlen("hasVar");
  sub_E35E50(a1, (__int64)"hasVar", v5, (v4 & 0x2000) != 0);
  v6 = *a2;
  v7 = j__strlen("hasElse");
  sub_E35E50(a1, (__int64)"hasElse", v7, (v6 & 0x1000) != 0);
  v8 = ((*((_BYTE *)a2 + 1) >> 1) & 7) == 1;
  v9 = j__strlen("isConstexpr");
  sub_E35E50(a1, (__int64)"isConstexpr", v9, v8);
  v10 = ((*((_BYTE *)a2 + 1) >> 1) & 7u) - 2 <= 1;
  v11 = j__strlen("isConsteval");
  sub_E35E50(a1, (__int64)"isConsteval", v11, v10);
  v12 = ((*((_BYTE *)a2 + 1) >> 1) & 7) == 3;
  v13 = j__strlen("constevalIsNegated");
  return sub_E35E50(a1, (__int64)"constevalIsNegated", v13, v12);
}


__int64 __fastcall sub_52AA00(__int64 a1, const char *a2, const __m128i *a3)
{
  const char *v3; // r15
  size_t v5; // rbp
  __int64 v6; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE *v11; // rax
  char v13; // [rsp+Fh] [rbp-69h] BYREF
  char *s; // [rsp+10h] [rbp-68h]
  _QWORD v15[12]; // [rsp+18h] [rbp-60h]

  v3 = "ACCEPT TABS\n";
  v5 = 12;
  v6 = 0;
  v15[4] = __readfsqword(0x28u);
  v15[1] = "NORMAL FONT\n";
  v15[0] = a1 + 108;
  *(_BYTE *)(a1 + 108) = 0;
  v13 = 0;
  s = "ACCEPT TABS\n";
  v15[2] = &v13;
  while ( !strncmp(a2, v3, v5) )
  {
    a2 += v5;
    v11 = (_BYTE *)v15[2 * v6];
    v6 = 0;
    *v11 = 1;
LABEL_4:
    v3 = (const char *)v15[2 * (int)v6 - 1];
    v5 = strlen(v3);
  }
  if ( (_DWORD)v6 != 1 )
  {
    v6 = 1;
    goto LABEL_4;
  }
  *(_BYTE *)(a1 + 109) = v13 ^ 1;
  sub_169980((__int64 *)(a1 + 24), (__int64)a2, a3, v8, v9, v10);
  return sub_4BEE60((__int64 *)(a1 + 80), nullptr, a1 + 24);
}

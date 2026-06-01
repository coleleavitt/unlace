__int64 __fastcall sub_1A2950(__int64 a1, const char *a2)
{
  const char *v2; // r15
  size_t v4; // rbp
  __int64 v5; // rbx
  _BYTE *v6; // rax
  char v8; // [rsp+Fh] [rbp-69h] BYREF
  char *s; // [rsp+10h] [rbp-68h]
  _QWORD v10[12]; // [rsp+18h] [rbp-60h]

  v2 = "ACCEPT TABS\n";
  v4 = 12;
  v5 = 0;
  v10[4] = __readfsqword(0x28u);
  v10[1] = "NORMAL FONT\n";
  v10[0] = a1 + 108;
  *(_BYTE *)(a1 + 108) = 0;
  v8 = 0;
  s = "ACCEPT TABS\n";
  v10[2] = &v8;
  while ( !strncmp(a2, v2, v4) )
  {
    a2 += v4;
    v6 = (_BYTE *)v10[2 * v5];
    v5 = 0;
    *v6 = 1;
LABEL_4:
    v2 = (const char *)v10[2 * (int)v5 - 1];
    v4 = strlen(v2);
  }
  if ( (_DWORD)v5 != 1 )
  {
    v5 = 1;
    goto LABEL_4;
  }
  *(_BYTE *)(a1 + 109) = v8 ^ 1;
  sub_94290((__int64 *)(a1 + 24));
  return sub_17C2C0((__int64 *)(a1 + 80), nullptr, a1 + 24);
}


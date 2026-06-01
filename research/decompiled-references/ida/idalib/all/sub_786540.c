__int64 __fastcall sub_786540(_QWORD *a1, int a2)
{
  bool v2; // zf
  const char *v4; // rsi
  unsigned __int16 v5; // ax
  char v6; // si
  int v8; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v2 = a1[6] == 0;
  v9 = __readfsqword(0x28u);
  v4 = haystack;
  if ( !v2 )
    v4 = (const char *)a1[5];
  v5 = sub_7862B0(a1, v4, &v8);
  switch ( v8 )
  {
    case 2:
      v6 = 4 * (a2 <= 0) - 62;
      goto LABEL_7;
    case 3:
      v6 = 2 * (a2 <= 0) - 37;
      goto LABEL_7;
    case 1:
      v6 = 4 * (a2 <= 0) - 64;
LABEL_7:
      sub_785870((__int64)a1, v6, v5);
      return 0;
  }
  return set_qerrno(58);
}

__int64 __fastcall sub_5291B0(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  char *v5; // r13
  __int16 v6; // ax
  const char *v7; // rdx
  char *v8; // rdi
  char *s1; // [rsp+10h] [rbp-60h] BYREF
  __int128 v11; // [rsp+18h] [rbp-58h]
  char *v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h] BYREF
  __int16 v14; // [rsp+40h] [rbp-30h]
  char v15; // [rsp+42h] [rbp-2Eh]
  unsigned __int64 v16; // [rsp+48h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 32) )
    return 0;
  v2 = (unsigned int)(a2 - 8);
  if ( (unsigned int)v2 > 0x38 )
    return 0;
  v3 = 0x100000001000101LL;
  if ( !_bittest64(&v3, v2) )
    return 0;
  v4 = a1;
  s1 = nullptr;
  v11 = 0;
  if ( !(unsigned __int8)sub_51C8D0(a1, (__int64)&s1, 2) )
  {
    if ( s1 )
    {
      *(_QWORD *)&v11 = 0;
      qfree(s1);
    }
    return 0;
  }
  if ( ((a2 - 32) & 0xFFFFFFDF) != 0 )
    goto LABEL_22;
  if ( (_QWORD)v11 )
  {
    v5 = s1;
    v6 = a2;
    if ( *s1 != 36 )
    {
LABEL_15:
      v14 = v6;
      v12 = v5;
      v13 = 0;
      v15 = 48;
      LOBYTE(v4) = sub_375980(0x7D5u, 0, &v12, 0, 0, 0, 0) > 0;
      clear_tinfo_t(&v13);
      v8 = s1;
      goto LABEL_16;
    }
  }
  else if ( byte_2CA12E1 != 36 )
  {
LABEL_25:
    v6 = a2;
    v5 = (char *)haystack;
    goto LABEL_15;
  }
  v4 = sub_51C8D0(a1, (__int64)&s1, 0);
  if ( !(_BYTE)v4 )
  {
LABEL_22:
    v6 = a2;
    v5 = (char *)haystack;
    if ( (_QWORD)v11 )
      v5 = s1;
    goto LABEL_15;
  }
  v7 = "__m256d";
  if ( a2 != 32 )
    v7 = "__m512d";
  if ( !(_QWORD)v11 )
    goto LABEL_25;
  v5 = s1;
  if ( (unsigned __int64)(v11 - 1) <= 6 || (v8 = s1, strncmp(s1, v7, 7u)) )
  {
    v6 = a2;
    goto LABEL_15;
  }
LABEL_16:
  if ( v8 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v8);
  }
  return v4;
}


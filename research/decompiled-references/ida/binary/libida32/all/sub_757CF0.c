unsigned __int64 __fastcall sub_757CF0(__int64 a1, const char *a2)
{
  const char *v2; // rbx
  char v3; // r13
  __int64 v4; // rbp
  size_t v5; // rax
  size_t v6; // r15
  size_t v7; // r14
  char *v8; // rbx
  char *v9; // rax
  char *v10; // r14
  unsigned __int64 v11; // rax
  char v12; // edx^3
  unsigned __int64 v13; // rax
  char v15; // al
  unsigned int v16; // [rsp+6h] [rbp-62h]
  unsigned int v17; // [rsp+Bh] [rbp-5Dh]
  unsigned __int8 v18; // [rsp+Fh] [rbp-59h]
  char *s; // [rsp+10h] [rbp-58h] BYREF
  __int128 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( !a2 || (v2 = a2, !*a2) )
  {
    v17 = dword_2CAA5DD;
    v18 = byte_2CAA5E1;
    return ((unsigned __int64)v18 << 32) | v17;
  }
  v3 = byte_2CAA5E6;
  if ( *a2 == 47 )
  {
    v4 = (unsigned int)dword_2CAA5E2;
    if ( !a2[1] )
    {
      v17 = dword_2CAA5E2;
      v18 = byte_2CAA5E6;
      return ((unsigned __int64)v18 << 32) | v17;
    }
    v2 = a2 + 1;
  }
  else
  {
    v4 = *(unsigned int *)(a1 + 96);
  }
  s = nullptr;
  v20 = 0;
  v5 = strlen(v2);
  v6 = v5 + 1;
  v7 = v5;
  s = (char *)qvector_reserve(&s, 0, v5 + 1, 1);
  *(_QWORD *)&v20 = v6;
  memmove(s, v2, v7);
  s[v7] = 0;
  v8 = s;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = strchr(v8, 47);
        if ( v8 != v9 )
          break;
        ++v8;
      }
      if ( !v9 )
        break;
      *v9 = 0;
      v10 = v9 + 1;
      if ( *v8 )
      {
        if ( *v8 != 46 )
          goto LABEL_10;
        v15 = v8[1];
        if ( v15 )
          goto LABEL_23;
      }
      v8 = v10;
    }
    if ( !*v8 )
      break;
    v10 = nullptr;
    if ( *v8 != 46 )
      goto LABEL_10;
    v15 = v8[1];
    if ( !v15 )
      break;
LABEL_23:
    if ( v15 == 46 && !v8[2] )
    {
      v8 = v10;
      LODWORD(v4) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 176 * v4 + 160);
      continue;
    }
LABEL_10:
    v11 = sub_756AE0(a1, v4, v8);
    LOWORD(v16) = v11;
    BYTE2(v16) = BYTE2(v11);
    v12 = BYTE3(v11);
    v13 = HIDWORD(v11);
    v3 = v13;
    HIBYTE(v16) = v12;
    v4 = v16;
    if ( v16 == -1 || !(_BYTE)v13 )
      break;
    v8 = v10;
  }
  while ( v10 );
  v17 = v4;
  v18 = v3;
  if ( s )
  {
    *(_QWORD *)&v20 = 0;
    qfree(s);
  }
  return ((unsigned __int64)v18 << 32) | v17;
}


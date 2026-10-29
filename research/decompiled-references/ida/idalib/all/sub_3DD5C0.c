__int64 __fastcall sub_3DD5C0(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  char v5; // dl
  unsigned int v6; // r9d
  int v7; // esi
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  char v12; // dl
  bool v13; // cl
  const char *v15; // rsi
  unsigned int v16; // [rsp+Ch] [rbp-2Ch] BYREF
  _QWORD v17[5]; // [rsp+10h] [rbp-28h] BYREF

  v3 = a2[2];
  v17[1] = __readfsqword(0x28u);
  v5 = v3 & 1;
  if ( (v3 & 4) != 0 )
  {
    if ( v5 )
    {
      v6 = 224;
      v7 = 209;
    }
    else if ( (v3 & 2) != 0 )
    {
      v6 = 240;
      v7 = 225;
    }
    else
    {
      v6 = 256;
      v7 = 241;
    }
  }
  else if ( v5 )
  {
    v6 = 80;
    v7 = 65;
  }
  else if ( (v3 & 2) != 0 )
  {
    v6 = 96;
    v7 = 81;
  }
  else
  {
    v6 = 0x7FFFFFFF;
    v7 = 512;
  }
  v8 = a1[7];
  v9 = a1[6];
  v16 = 0;
  v10 = v9 + 32 * v8;
  while ( v10 != v9 )
  {
    v11 = v9;
    v12 = 0;
    do
    {
      v13 = *(_DWORD *)(v11 + 24) == v7;
      v11 += 32;
      v12 |= v13;
    }
    while ( v11 != v10 );
    if ( !v12 )
      break;
    if ( v6 < ++v7 )
      return 0;
  }
  v16 = v7;
  v17[0] = -1;
  netnode_check(v17, "$ seen calling conventions", 0, 1);
  v15 = haystack;
  if ( a2[4] )
    v15 = (const char *)a2[3];
  netnode_hashset(v17[0], v15, &v16, 4, 72);
  sub_3DD150(a1, v16, (__int64)(a2 + 3));
  return v16;
}

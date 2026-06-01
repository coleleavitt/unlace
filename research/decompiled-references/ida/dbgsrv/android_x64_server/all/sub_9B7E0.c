/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B7E0
// Address: 0x000000000009B7E0

//----- (000000000009B7E0) ----------------------------------------------------
__int64 __fastcall sub_9B7E0(__int64 a1, int a2)
{
  unsigned int v2; // r14d
  const char *v3; // r13
  __int64 v4; // r15
  int v5; // ebx
  const char *v6; // r12
  size_t v7; // rdx
  _WORD v9[2]; // [rsp+0h] [rbp-1448h] BYREF
  _BYTE s[4]; // [rsp+4h] [rbp-1444h] BYREF
  __int16 v11; // [rsp+8h] [rbp-1440h]
  _BYTE s1[5126]; // [rsp+Ah] [rbp-143Eh] BYREF
  unsigned __int64 v13; // [rsp+1410h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  v9[0] = 0;
  v2 = 0;
  memset(s, 0, 0x1408u);
  v3 = (const char *)(a1 + 8);
  if ( a2 )
    v4 = 0;
  else
    v4 = *(_QWORD *)(a1 + 1136);
  v5 = *(_DWORD *)(a1 + 1144);
  sub_390A0((int)"Looking for GNU DWARF file at \"%s\"... ", v3);
  v6 = "no.\n";
  if ( qfileexist(v3) )
  {
    if ( (unsigned __int8)sub_92120((__int64)v9, v3, v5) )
    {
      if ( !v4 || (v7 = *(unsigned __int16 *)(v4 + 8), (_WORD)v7 == v11) && !memcmp(s1, (const void *)(v4 + 10), v7) )
      {
        v6 = "found!\n";
        v2 = 1;
      }
    }
  }
  sub_390A0((int)v6);
  return v2;
}

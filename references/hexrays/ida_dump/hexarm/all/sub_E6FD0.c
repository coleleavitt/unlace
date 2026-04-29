__int64 __fastcall sub_E6FD0(unsigned int *a1, _DWORD *a2, const char *a3, __int64 *a4, int a5)
{
  __int64 v6; // rbx
  __int64 v7; // r13
  unsigned int v8; // eax
  unsigned int v9; // ebx
  const char *v10; // rbx
  __int64 result; // rax
  __int64 v12; // rax
  unsigned int v13; // r15d
  int v14; // edx
  __m128i v16; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( a4 )
  {
    v6 = *a4 + 48 * a4[1];
    if ( *a4 != v6 )
    {
      v7 = *a4;
      while ( !*(_QWORD *)(v7 + 8) || strcmp(*(const char **)v7, "format") )
      {
        v7 += 48;
        if ( v6 == v7 )
          goto LABEL_10;
      }
      v16 = _mm_unpacklo_epi64(
              (__m128i)*(unsigned __int64 *)(v7 + 24),
              (__m128i)(unsigned __int64)(*(_QWORD *)(v7 + 24) + *(_QWORD *)(v7 + 32)));
      v8 = unpack_dd(&v16);
      v9 = v8;
      if ( v8 != 2 )
      {
        if ( v8 > 3 )
        {
          if ( !under_debugger )
            sub_3835A0(52201);
          BUG();
        }
        *a2 = unpack_dd(&v16) - 1;
        if ( (unsigned int)unpack_dd(&v16) )
        {
          *a1 = v9;
          return 768;
        }
      }
    }
  }
LABEL_10:
  if ( !a3 || !*a3 )
    return 0;
  v10 = "printf";
  if ( stristr(a3, "printf") )
  {
    v12 = 0;
  }
  else
  {
    v10 = "scanf";
    if ( stristr(a3, "scanf") )
    {
      v12 = 1;
    }
    else
    {
      v10 = "strfmon";
      if ( !stristr(a3, "strfmon") )
        return 0;
      v12 = 2;
    }
  }
  v13 = *((_DWORD *)&off_4D74C0 + 4 * v12 + 2);
  *a1 = v13;
  *a2 = a5 - 1;
  if ( !strcmp(a3, v10) && a5 == 1 )
    return 512;
  if ( v13 != 3 && (*a3 == 102 || *a3 == 115) && a5 == 2 )
    return strcmp(a3 + 1, v10) == 0 ? 512 : 256;
  v14 = strcmp(a3, "snprintf");
  if ( a5 != 3 )
    return 256;
  result = 512;
  if ( v14 )
    return 256;
  return result;
}

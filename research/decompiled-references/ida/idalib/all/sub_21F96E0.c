bool __fastcall sub_21F96E0(char *a1, char *a2)
{
  bool result; // al
  unsigned __int8 v3; // dl
  char v4; // dl
  const void *v5; // r8
  char *v6; // rdx
  char *v7; // rcx
  unsigned int v8; // eax
  size_t v9; // rdx

  if ( a1 == a2 )
    return 1;
  result = 0;
  if ( *(_QWORD *)a1 == *(_QWORD *)a2 )
  {
    v3 = a1[20];
    if ( ((v3 ^ (unsigned __int8)a2[20]) & 0xF) == 0 )
    {
      v4 = v3 & 7;
      result = v4 == 0 || v4 == 3;
      if ( !result && (v4 == 1 || *((_DWORD *)a1 + 4) == *((_DWORD *)a2 + 4)) )
      {
        v5 = a2 + 8;
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a2 + 8LL) + 64) > 0x7F )
          v5 = *((const void **)a2 + 1);
        v6 = a1 + 16;
        v7 = a1 + 8;
        v8 = *(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64;
        if ( v8 > 0x7F )
        {
          v7 = *((char **)a1 + 1);
          v6 = &v7[8 * (v8 >> 6)];
        }
        result = 1;
        v9 = v6 - v7;
        if ( v9 )
          return memcmp(v7, v5, v9) == 0;
      }
    }
  }
  return result;
}

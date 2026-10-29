__int64 __fastcall sub_2257680(__int64 *a1, int *a2)
{
  char *v2; // r9
  __int64 v3; // r8
  int v4; // ecx
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // edx
  char *v8; // rax
  char *v9; // r8

  v2 = (char *)a1[1];
  if ( !v2 )
    return 1;
  v3 = *a1;
  v4 = *(char *)*a1;
  v5 = *a1 + 1;
  a1[1] = (__int64)(v2 - 1);
  *a1 = v5;
  if ( (unsigned __int8)(v4 - 48) > 9u )
    return 1;
  v6 = v4 - 48;
  *a2 = v6;
  if ( v2 != (_BYTE *)&dword_0 + 1 )
  {
    v7 = *(char *)(v3 + 1);
    if ( (unsigned __int8)(*(_BYTE *)(v3 + 1) - 48) <= 9u )
    {
      v8 = (char *)(v3 + 2);
      v9 = &v2[v3];
      do
      {
        *a1 = (__int64)v8;
        v6 = v7 + 10 * v6 - 48;
        a1[1] = v9 - v8;
        *a2 = v6;
        if ( v9 == v8 )
          break;
        v7 = *v8++;
      }
      while ( (unsigned __int8)(v7 - 48) <= 9u );
    }
  }
  return 0;
}

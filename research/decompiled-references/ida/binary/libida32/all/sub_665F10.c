__int64 __fastcall sub_665F10(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  char *v4; // r12
  char *v5; // r15
  int v6; // ebp
  const char **v7; // r14
  char *s1; // [rsp+0h] [rbp-58h] BYREF
  __int128 v9; // [rsp+8h] [rbp-50h]
  unsigned __int64 v10; // [rsp+18h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  if ( *(_BYTE *)(a2 + 96) == 7 && (unsigned int)(*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) > 1 )
  {
    *(_BYTE *)(a2 + 96) = 0;
    s1 = nullptr;
    v9 = 0;
    v3 = sub_4F8CF0(a1, (__int64 *)&s1, a2);
    v4 = s1;
    if ( v3 > 0 )
    {
      v5 = s1;
      if ( !(_QWORD)v9 )
        v5 = (char *)haystack;
      if ( *(_BYTE *)(a2 + 96) != 7 )
      {
        v6 = 0;
        v7 = (const char **)&off_2B0D4A0;
        while ( strcasecmp(v5, *v7) )
        {
          ++v6;
          v7 += 2;
          if ( v6 == 10 )
            goto LABEL_13;
        }
        *(_BYTE *)(a2 + 96) = *((_DWORD *)&off_2B0D4A0 + 4 * v6 + 2);
      }
    }
LABEL_13:
    if ( v4 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v4);
    }
  }
  return update_segm(a2);
}


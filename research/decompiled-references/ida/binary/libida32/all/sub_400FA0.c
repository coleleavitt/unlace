unsigned __int64 __fastcall sub_400FA0(_QWORD *a1, __int64 a2)
{
  __int64 *tinfo_property; // rax
  __int64 v4; // r12
  __int64 v5; // r13
  const char *v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v8 = 0;
  if ( (_DWORD)a2 != -1 )
  {
    if ( (unsigned __int8)get_type_by_tid(&v8, a2) )
    {
      if ( (get_tinfo_property(v8, 2) & 0x3F) == 0x2D )
      {
        tinfo_property = (__int64 *)get_tinfo_property(v8, 310);
        if ( tinfo_property )
        {
          v4 = *tinfo_property;
          v5 = *tinfo_property + 56 * tinfo_property[1];
          if ( v5 != *tinfo_property )
          {
            do
            {
              v6 = haystack;
              if ( *(_QWORD *)(v4 + 8) )
                v6 = *(const char **)v4;
              v7 = sub_698F20(a1, v6, 0, 0);
              sub_3DDE70(a1, v7);
              v4 += 56;
            }
            while ( v5 != v4 );
          }
        }
      }
    }
  }
  clear_tinfo_t(&v8);
  return v9 - __readfsqword(0x28u);
}


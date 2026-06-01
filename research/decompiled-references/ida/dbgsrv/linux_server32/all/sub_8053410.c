/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8053410
// Address: 0x08053410

//----- (08053410) --------------------------------------------------------
int __cdecl sub_8053410(int a1, int a2)
{
  FILE *v2; // eax
  FILE *v3; // edi
  char *v4; // eax
  char *v6; // [esp+4454h] [ebp-104Ch]
  int v7; // [esp+4460h] [ebp-1040h]
  int v8; // [esp+4470h] [ebp-1030h] BYREF
  char *s; // [esp+4478h] [ebp-1028h] BYREF
  unsigned int v10; // [esp+447Ch] [ebp-1024h]
  int v11; // [esp+4480h] [ebp-1020h]
  _BYTE v12[4096]; // [esp+4484h] [ebp-101Ch] BYREF
  unsigned int v13; // [esp+5484h] [ebp-1Ch]

  v13 = __readgsdword(0x14u);
  sub_80D3B60(v12, 4096, "/proc/%u/maps", a2);
  v2 = sub_80CDB00((int)v12);
  if ( v2 )
  {
    s = nullptr;
    v3 = v2;
    v10 = 0;
    v11 = 0;
    v7 = 0;
    while ( (int)sub_80CF4E0(&s, v3) >= 0 )
    {
      if ( v10 > 1 )
      {
        v7 = 4;
        if ( sub_80D3B90((int)s, "%a-%a ", (int)&v8) == 2 )
        {
          if ( v10 )
          {
            v6 = s;
            v4 = strchr(s, 45);
            if ( v4 )
            {
              if ( (unsigned int)(v4 - v6 - 9) <= 0xFFFFFFF5 )
              {
                v7 = 8;
                break;
              }
            }
          }
        }
      }
    }
    sub_80CF060(v3);
    if ( s )
    {
      v10 = 0;
      sub_80CF780(s);
    }
  }
  else
  {
    v7 = 0;
  }
  if ( v13 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v7;
}

char __fastcall sub_60E0D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r13
  int v4; // ebp
  char result; // al
  const char *v6; // rsi
  char *v7; // r12
  __int64 v8; // rdx
  int v9; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v2 = 0xFFFFFFFFLL;
  v10 = __readfsqword(0x28u);
  if ( a1 )
    v2 = *(unsigned int *)(a1 + 1332);
  if ( (unsigned int)a2 > 0x63 )
    sub_60D510(a1, a2, v2);
  v3 = (int)a2;
  v4 = *((_DWORD *)&unk_2B0AD60 + 16 * (__int64)(int)a2 + 14);
  if ( (v4 & 8) != 0 )
  {
    if ( (v4 & 0x800) != 0 )
    {
      if ( !under_debugger )
        interr(2041);
      BUG();
    }
  }
  else if ( (v4 & 0xF) == 0 )
  {
    return 0;
  }
  result = 0;
  if ( (v4 & 0x2000) == 0 )
  {
    v6 = *((const char **)&unk_2B0AD60 + 8 * (unsigned __int64)(unsigned int)a2 + 6);
    if ( v6 )
      LODWORD(v2) = sub_60DEE0(a1, v6, 1u);
    v9 = v2;
    if ( (v4 & 4) != 0 )
    {
      return sub_79BED0(&v9, a1);
    }
    else
    {
      v7 = (char *)&unk_2B0AD60 + 64 * v3;
      v8 = *((_QWORD *)v7 + 1);
      if ( (v4 & 8) != 0 )
      {
        return (int)sub_79BB90(&v9, a1, v8, (unsigned __int8)v7[32]) > 0;
      }
      else if ( (v4 & 0x800) != 0 )
      {
        return sub_79C120(&v9, a1, v8, 72);
      }
      else
      {
        return sub_79B4D0(&v9, a1, v8, (unsigned __int8)v7[32]);
      }
    }
  }
  return result;
}


__int64 __fastcall sub_2183230(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v3; // eax
  size_t v4; // rax
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  size_t v15; // rax
  size_t v16; // rax

  sub_22B0340(a1, &byte_22F0C30, 0);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 536LL))(a2);
  v3 = v2 & 0xF0000000;
  if ( (v2 & 0xF0000000) == 0x50000000 )
  {
    v15 = j__strlen("mips32");
    sub_22B0360(a1, "mips32", v15, 1);
  }
  else if ( v3 > 0x50000000 )
  {
    if ( v3 == 0x80000000 )
    {
      v14 = j__strlen("mips64r2");
      sub_22B0360(a1, "mips64r2", v14, 1);
    }
    else if ( v3 > 0x80000000 )
    {
      if ( v3 == -1879048192 )
      {
        v10 = j__strlen("mips32r6");
        sub_22B0360(a1, "mips32r6", v10, 1);
      }
      else
      {
        if ( v3 != -1610612736 )
          return sub_2183540();
        v11 = j__strlen("mips64r6");
        sub_22B0360(a1, "mips64r6", v11, 1);
      }
    }
    else if ( v3 == 1610612736 )
    {
      v7 = j__strlen("mips64");
      sub_22B0360(a1, "mips64", v7, 1);
    }
    else
    {
      if ( v3 != 1879048192 )
        return sub_2183540();
      v9 = j__strlen("mips32r2");
      sub_22B0360(a1, "mips32r2", v9, 1);
    }
  }
  else if ( v3 == 0x20000000 )
  {
    v16 = j__strlen("mips3");
    sub_22B0360(a1, "mips3", v16, 1);
  }
  else if ( v3 > 0x20000000 )
  {
    if ( v3 == 805306368 )
    {
      v6 = j__strlen("mips4");
      sub_22B0360(a1, "mips4", v6, 1);
    }
    else
    {
      if ( v3 != 0x40000000 )
        return sub_2183540();
      v8 = j__strlen("mips5");
      sub_22B0360(a1, "mips5", v8, 1);
    }
  }
  else if ( v3 )
  {
    if ( v3 != 0x10000000 )
      return sub_2183540();
    v4 = j__strlen("mips2");
    sub_22B0360(a1, "mips2", v4, 1);
  }
  if ( (v2 & 0xFF0000) != 0 )
  {
    if ( (v2 & 0xFF0000) == 0x8B0000 )
    {
      sub_22B0360(a1, "cnmips", 6, 1);
      goto LABEL_11;
    }
    return sub_2183540();
  }
LABEL_11:
  if ( (v2 & 0x4000000) != 0 )
  {
    v12 = j__strlen("mips16");
    sub_22B0360(a1, "mips16", v12, 1);
    if ( (v2 & 0x2000000) == 0 )
      return a1;
  }
  else if ( (v2 & 0x2000000) == 0 )
  {
    return a1;
  }
  v13 = j__strlen("micromips");
  sub_22B0360(a1, "micromips", v13, 1);
  return a1;
}

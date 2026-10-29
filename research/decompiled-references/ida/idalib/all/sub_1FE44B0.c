unsigned __int64 __fastcall sub_1FE44B0(int *a1, unsigned int a2)
{
  __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // rdx

  if ( a2 == 16 )
  {
    v4 = 0;
    v3 = *a1 + 2;
    if ( v3 < 0 )
      return (v4 << 32) | v2 & 0xFFFFFF00FFFFFFFFLL;
    goto LABEL_6;
  }
  if ( a2 <= 0x10 )
  {
    if ( a2 == 8 )
    {
      v4 = 0;
      v3 = *a1 + 3;
      if ( v3 < 0 )
        return (v4 << 32) | v2 & 0xFFFFFF00FFFFFFFFLL;
      goto LABEL_6;
    }
    goto LABEL_11;
  }
  if ( a2 == 32 )
  {
    v4 = 0;
    v3 = *a1 + 1;
    if ( v3 < 0 )
      return (v4 << 32) | v2 & 0xFFFFFF00FFFFFFFFLL;
    goto LABEL_6;
  }
  if ( a2 != 64 )
  {
LABEL_11:
    v2 = 1;
    v4 = 1;
    return (v4 << 32) | v2 & 0xFFFFFF00FFFFFFFFLL;
  }
  v3 = *a1;
  v4 = 0;
  if ( *a1 >= 0 )
  {
LABEL_6:
    v4 = 1;
    v2 = (unsigned int)(1 << v3);
  }
  return (v4 << 32) | v2 & 0xFFFFFF00FFFFFFFFLL;
}

void __fastcall sub_22A9910(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  const char *p_s1; // rsi
  int v4; // eax
  int v5; // edx
  __int64 v6; // rbx
  _BYTE *v7; // rdx
  unsigned __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // r15d
  size_t v12; // rax
  __int64 v13; // [rsp+8h] [rbp-60h] BYREF
  void *s1; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-50h]
  _BYTE v16[72]; // [rsp+20h] [rbp-48h] BYREF

  v1 = a1 + 24;
  v2 = a1 + 32;
  s1 = v16;
  sub_22A8AD0(&s1, "q", (__int64)"");
  if ( a1 + 32 == sub_22A98A0(a1 + 24, (__int64)&s1) )
  {
    if ( s1 != v16 )
      operator delete(s1);
    sub_22A8B90(&s1, (char *)"d");
    if ( v2 == sub_22A98A0(v1, (__int64)&s1) )
    {
      if ( s1 != v16 )
        operator delete(s1);
      sub_22A8B90(&s1, "f");
      if ( v2 == sub_22A98A0(v1, (__int64)&s1) )
      {
        if ( s1 != v16 )
          operator delete(s1);
      }
      else
      {
        if ( s1 != v16 )
          operator delete(s1);
        *(_DWORD *)(a1 + 4) = 32;
      }
    }
    else
    {
      if ( s1 != v16 )
        operator delete(s1);
      *(_DWORD *)(a1 + 4) = 64;
    }
  }
  else
  {
    if ( s1 != v16 )
      operator delete(s1);
    *(_DWORD *)(a1 + 4) = 128;
  }
  s1 = v16;
  sub_22A8AD0(&s1, "v", (__int64)"");
  p_s1 = (const char *)&s1;
  if ( v2 == sub_22A98A0(v1, (__int64)&s1) )
  {
    if ( s1 != v16 )
      operator delete(s1);
  }
  else
  {
    if ( s1 != v16 )
      operator delete(s1);
    v4 = 64;
    v5 = 64;
    if ( *(_DWORD *)(a1 + 16) >= 0x40u )
      v5 = *(_DWORD *)(a1 + 16);
    if ( *(_DWORD *)(a1 + 12) >= 0x40u )
      v4 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 16) = v5;
    *(_DWORD *)(a1 + 12) = v4;
  }
  v6 = *(_QWORD *)(a1 + 48);
  if ( v2 != v6 )
  {
    while ( 1 )
    {
      v7 = *(_BYTE **)(v6 + 32);
      s1 = v7;
      v8 = *(_QWORD *)(v6 + 40);
      v15 = v8;
      if ( v8 <= 2 )
        goto LABEL_16;
      if ( *(_WORD *)v7 != 30330 || v7[2] != 101 )
      {
        if ( *(_WORD *)v7 == 30330 && v7[2] == 108 )
        {
          p_s1 = byte_9 + 1;
          s1 = v7 + 3;
          v15 = v8 - 3;
          if ( !(unsigned __int8)sub_2247880((__int64)&s1, 0xAu, &v13) )
          {
            v11 = v13;
            if ( v13 == (unsigned int)v13 )
            {
              v12 = j__strlen("b");
              if ( v12 == v15 )
              {
                if ( !v12 || (p_s1 = "b", !memcmp(s1, "b", v12)) )
                {
                  if ( *(_DWORD *)(a1 + 8) >= v11 )
                    v11 = *(_DWORD *)(a1 + 8);
                  *(_DWORD *)(a1 + 8) = v11;
                }
              }
            }
          }
        }
        goto LABEL_16;
      }
      p_s1 = byte_9 + 1;
      s1 = v7 + 3;
      v15 = v8 - 3;
      if ( (unsigned __int8)sub_2247880((__int64)&s1, 0xAu, &v13) )
        goto LABEL_16;
      v9 = v13;
      if ( v13 != (unsigned int)v13 )
        goto LABEL_16;
      v10 = (__int64)s1;
      if ( v15 != 1 )
        goto LABEL_16;
      switch ( *(_BYTE *)s1 )
      {
        case 'f':
          v10 = 32;
          if ( *(_DWORD *)(a1 + 16) >= 0x20u )
            v10 = *(unsigned int *)(a1 + 16);
          if ( *(_DWORD *)(a1 + 12) >= (unsigned int)v13 )
            v9 = *(_DWORD *)(a1 + 12);
          *(_DWORD *)(a1 + 16) = v10;
          *(_DWORD *)(a1 + 12) = v9;
          goto LABEL_29;
        case 'd':
          v10 = 64;
          if ( *(_DWORD *)(a1 + 16) >= 0x40u )
            v10 = *(unsigned int *)(a1 + 16);
          if ( *(_DWORD *)(a1 + 12) >= (unsigned int)v13 )
            v9 = *(_DWORD *)(a1 + 12);
          *(_DWORD *)(a1 + 16) = v10;
          *(_DWORD *)(a1 + 12) = v9;
          goto LABEL_29;
        case 'x':
          if ( *(_DWORD *)(a1 + 12) >= (unsigned int)v13 )
            v9 = *(_DWORD *)(a1 + 12);
          *(_DWORD *)(a1 + 12) = v9;
LABEL_29:
          v6 = std::_Rb_tree_increment(v6, &byte_9[1], v10);
          if ( v2 == v6 )
            return;
          break;
        default:
LABEL_16:
          v6 = std::_Rb_tree_increment(v6, p_s1);
          if ( v2 == v6 )
            return;
          break;
      }
    }
  }
}

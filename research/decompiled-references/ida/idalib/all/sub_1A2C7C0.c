_QWORD *__fastcall sub_1A2C7C0(_WORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int16 *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  __int64 v7; // rdx
  _QWORD *v8; // rbp
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rbp
  __int64 *v14; // rax

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v3 = (unsigned __int16 *)sub_BFB9F0((__int64)a1);
        v6 = *v3;
        LOWORD(v6) = v6 & 0x1FF;
        if ( (_WORD)v6 == 71 )
        {
          v7 = *((_QWORD *)v3 + 2);
          if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0x21 )
          {
            v8 = (_QWORD *)(*(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
              v8 = (_QWORD *)*v8;
            if ( v8 )
              return v8 - 8;
          }
          return nullptr;
        }
        v10 = (unsigned int)(v6 + 394);
        LOWORD(v10) = (v6 + 394) & 0x1FF;
        if ( (unsigned __int16)v10 > 1u )
          break;
        if ( ((v3[1] >> 3) & 0x3F) != 0x20 )
          return nullptr;
        a1 = *((_WORD **)v3 + 3);
      }
      if ( (_WORD)v6 != 10 )
        break;
      v11 = *((_QWORD *)v3 + 2);
      v12 = *(_DWORD *)(v11 + 4);
      if ( v12 )
      {
        a1 = *(_WORD **)(v11 + 8LL * (unsigned int)(v12 - 1) + 16);
        if ( a1 )
        {
          if ( ((*a1 + 509) & 0x1FFu) <= 0x7E )
            continue;
        }
      }
      return nullptr;
    }
    if ( (_WORD)v6 == 128 )
    {
      v13 = sub_1A2C7C0(*((_QWORD *)v3 + 4));
      if ( v13 && sub_1A2C7C0(*((_QWORD *)v3 + 5)) == v13 )
        return (_QWORD *)v13;
      return nullptr;
    }
    if ( (_WORD)v6 != 79 || ((v3[1] >> 3) & 0x7F) != 0x1B )
      break;
    a1 = *((_WORD **)v3 + 2);
  }
  v14 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 1) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v14 + 16) != 47 )
    return nullptr;
  return sub_F60F10(*v14, a2, v10, v2, v4, v5);
}

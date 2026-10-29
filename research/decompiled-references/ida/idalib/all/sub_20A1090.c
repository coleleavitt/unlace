_QWORD *__fastcall sub_20A1090(_QWORD *a1)
{
  int v1; // eax
  unsigned __int64 v2; // rbp
  unsigned __int64 *v4; // rax
  unsigned __int64 *v5; // rdx
  unsigned __int64 *v6; // r12
  __int64 v7; // rdi
  void *v8; // rdi

  v1 = *(unsigned __int8 *)a1;
  if ( (unsigned int)(v1 - 5) <= 0x20 )
  {
    if ( (BYTE1(*a1) & 0x7F) == 2 || *((_DWORD *)a1 - 2) || *(_BYTE *)a1 == 30 )
    {
      v2 = a1[1] & 0xFFFFFFFFFFFFFFF8LL;
      if ( (a1[1] & 4) == 0 )
      {
        v4 = (unsigned __int64 *)operator new(0x78u);
        v5 = v4 + 3;
        v6 = v4;
        *v4 = v2;
        v4[1] = 0;
        for ( v4[2] = 1; v4 + 15 != v5; v5 += 3 )
          *v5 = -4096;
        v7 = a1[1];
        if ( (v7 & 4) != 0 )
        {
          v8 = (void *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v8 )
          {
            sub_20A0EC0((__int64)v8 + 16);
            operator delete(v8, 0x78u);
          }
        }
        v2 = (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFF8LL;
        a1[1] = (unsigned __int64)v6 | 4;
      }
      return (_QWORD *)v2;
    }
    return nullptr;
  }
  if ( (_BYTE)v1 != 4 && (unsigned int)(v1 - 1) > 1 )
    return nullptr;
  return a1 + 1;
}

__int64 __fastcall sub_184590(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // eax
  int v7; // r14d
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  _QWORD v14[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *(_DWORD *)a4;
  v14[3] = __readfsqword(0x28u);
  if ( v5 > 9 )
  {
    if ( v5 == 56 )
    {
      v7 = sub_183E40(*(_QWORD *)(a3 + 480), a4, 1);
      if ( v7 > 0 && *(_BYTE *)(a4 + 64) == 8 )
      {
        v11 = *(_QWORD *)(a4 + 72);
        v12 = *(_DWORD *)(v11 + 284);
        if ( v12 == 2 )
        {
          if ( (unsigned __int8)sub_11FD80((char *)(*(_QWORD *)(v11 + 24) + 80LL), v14, 0) )
          {
            if ( a2 )
              *a2 = v14[0];
            return (unsigned int)v7;
          }
          return 0;
        }
        if ( v12 == 5 )
        {
          v13 = *(_QWORD *)(v11 + 24);
          if ( *(_BYTE *)(v13 + 80) == 10 )
          {
            sub_123A40((__int64)v14, *(unsigned __int8 **)(v13 + 88), v11, v10);
            HIDWORD(v14[0]) = v7;
            v7 = sub_1847D0(a1, a2, a3, v14);
            sub_11CDA0((__int64)v14);
            return (unsigned int)v7;
          }
          v9 = v13 + 80;
          return sub_1847D0(a1, a2, a3, v9);
        }
      }
    }
    return 0;
  }
  if ( v5 > 7 )
  {
    if ( (int)sub_1847D0(a1, v14, a3, a4 + 32) > 0 && (!LOBYTE(v14[0]) || LOBYTE(v14[0]) == 0xFF && *(_DWORD *)a4 == 8) )
    {
      *a2 = v14[0];
      return *(unsigned int *)(a4 + 68);
    }
    return 0;
  }
  if ( v5 != 2 )
  {
    if ( v5 != 4 && v5 != 1 )
      return 0;
    if ( *(_BYTE *)(a4 + 32) != 4 || **(_DWORD **)(a4 + 40) != 2 )
    {
      v9 = a4 + 32;
      return sub_1847D0(a1, a2, a3, v9);
    }
  }
  return sub_184AC0(a1, a2, a3);
}

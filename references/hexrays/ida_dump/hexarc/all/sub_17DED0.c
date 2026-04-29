__int64 __fastcall sub_17DED0(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // eax
  int v7; // r14d
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  _QWORD v13[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *(_DWORD *)a4;
  v13[3] = __readfsqword(0x28u);
  if ( v5 > 9 )
  {
    if ( v5 == 56 )
    {
      v7 = sub_17D780(*(_QWORD *)(a3 + 480), a4, 1);
      if ( v7 > 0 && *(_BYTE *)(a4 + 64) == 8 )
      {
        v10 = *(_QWORD *)(a4 + 72);
        v11 = *(_DWORD *)(v10 + 284);
        if ( v11 == 2 )
        {
          if ( (unsigned __int8)sub_1196C0((char *)(*(_QWORD *)(v10 + 24) + 80LL), v13, 0) )
          {
            if ( a2 )
              *a2 = v13[0];
            return (unsigned int)v7;
          }
          return 0;
        }
        if ( v11 == 5 )
        {
          v12 = *(_QWORD *)(v10 + 24);
          if ( *(_BYTE *)(v12 + 80) == 10 )
          {
            sub_11D380((__int64)v13, *(unsigned __int8 **)(v12 + 88));
            HIDWORD(v13[0]) = v7;
            v7 = sub_17E110(a1, a2, a3, v13);
            sub_1166E0((__int64)v13);
            return (unsigned int)v7;
          }
          v9 = v12 + 80;
          return sub_17E110(a1, a2, a3, v9);
        }
      }
    }
    return 0;
  }
  if ( v5 > 7 )
  {
    if ( (int)sub_17E110(a1, v13, a3, a4 + 32) > 0 && (!LOBYTE(v13[0]) || LOBYTE(v13[0]) == 0xFF && *(_DWORD *)a4 == 8) )
    {
      *a2 = v13[0];
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
      return sub_17E110(a1, a2, a3, v9);
    }
  }
  return sub_17E400(a1, a2, a3);
}

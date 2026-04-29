__int64 __fastcall sub_387720(__int64 a1, __int64 a2, __int64 a3, int a4, double a5)
{
  unsigned int v6; // r14d
  unsigned __int64 v7; // rax
  const char **v8; // rax
  unsigned int v9; // eax
  int v11; // [rsp+0h] [rbp-78h] BYREF
  _QWORD *v12; // [rsp+8h] [rbp-70h]
  _DWORD v13[4]; // [rsp+20h] [rbp-58h] BYREF
  int v14; // [rsp+30h] [rbp-48h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( !a4 )
    a4 = *(_DWORD *)(a1 + 152);
  v6 = a4 + 2;
  v7 = a4 + 2;
  if ( v7 >= *(_QWORD *)(a1 + 136) )
  {
    return (unsigned int)-1;
  }
  else
  {
    while ( 1 )
    {
      v13[0] = 0;
      v8 = (const char **)(*(_QWORD *)(a1 + 128) + 32 * v7);
      v11 = 0;
      if ( sub_386610(a1, *v8, 0, 1, nullptr, (__int64)&v11, a5, (__int64)v13) )
      {
        if ( v11 == 1 && *v12 == a2 && (v14 & 0x40000000) != 0 )
        {
          v9 = (2 * v14) >> 1;
          if ( (v14 & 0x20000000) == 0 )
            v9 = v14 & 0xBFFFFFFF;
          if ( v9 == a3 )
            break;
        }
      }
      v7 = (int)++v6;
      if ( (unsigned __int64)(int)v6 >= *(_QWORD *)(a1 + 136) )
        return (unsigned int)-1;
    }
  }
  return v6;
}

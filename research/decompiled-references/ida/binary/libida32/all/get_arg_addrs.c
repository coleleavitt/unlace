__int64 __fastcall get_arg_addrs(__int64 *a1, unsigned int a2)
{
  unsigned int v3; // eax
  __int64 v4; // rax
  unsigned int v5; // edx
  _BYTE *v6; // rsi
  int v7; // eax
  __int64 v8; // rsi
  int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE *v13; // [rsp+0h] [rbp-448h] BYREF
  _BYTE *v14; // [rsp+8h] [rbp-440h]
  _BYTE v15[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v16; // [rsp+418h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v3 = ea2node(a2);
  v4 = netnode_supval(v3, 30, v15, 1024, 83);
  v5 = 0;
  if ( v4 > 0 )
  {
    v13 = v15;
    a1[1] = 0;
    v14 = &v15[v4];
    if ( v15 < &v15[v4] )
    {
      do
      {
        v7 = unpack_dd(&v13);
        v8 = *a1;
        v9 = a2 - v7;
        v10 = a1[1];
        if ( a2 == v9 )
          v9 = -1;
        if ( a1[2] < (unsigned __int64)(v10 + 1) )
        {
          v11 = qvector_reserve(a1, v8, v10 + 1, 4);
          *a1 = v11;
          v8 = v11;
          v10 = a1[1];
        }
        *(_DWORD *)(v8 + 4 * v10) = v9;
        v6 = v14;
        ++a1[1];
      }
      while ( v13 < v6 );
    }
    return 1;
  }
  return v5;
}


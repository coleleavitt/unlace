__int64 __fastcall sub_428140(__int64 a1, unsigned __int8 *a2, __int64 a3, unsigned __int8 *a4)
{
  unsigned __int8 *v4; // r13
  __int64 v5; // r12
  unsigned __int8 *v6; // rax
  unsigned __int8 *v7; // r15
  unsigned __int8 *v8; // rbp
  int v9; // ebx
  unsigned __int8 *v11; // [rsp+0h] [rbp-68h]
  unsigned __int8 *v12; // [rsp+8h] [rbp-60h]
  unsigned __int8 *v14; // [rsp+28h] [rbp-40h]

  v4 = &a4[a3];
  v5 = (__int64)&a2[a1];
  if ( &a2[a1] == a2 || v4 == a4 )
  {
    v11 = a2;
  }
  else
  {
    v12 = a2;
    v14 = a4 + 1;
    if ( a3 != 1 )
    {
      while ( 1 )
      {
        v6 = sub_426CA0(v12, v5, a4);
        v11 = v6;
        if ( (unsigned __int8 *)v5 == v6 )
          break;
        v7 = v6 + 1;
        v12 = v6 + 1;
        if ( (unsigned __int8 *)v5 == v6 + 1 )
          break;
        v8 = v14;
        while ( 1 )
        {
          v9 = tolower(*v7);
          if ( v9 != tolower(*v8) )
            break;
          if ( v4 == ++v8 )
            return v11 - a2;
          if ( (unsigned __int8 *)v5 == ++v7 )
            return -1;
        }
      }
      return -1;
    }
    v11 = sub_426CA0(a2, (__int64)&a2[a1], a4);
  }
  if ( (unsigned __int8 *)v5 != v11 )
    return v11 - a2;
  return -1;
}


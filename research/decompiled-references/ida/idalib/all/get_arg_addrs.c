__int64 __fastcall get_arg_addrs(__int64 *a1, __int64 a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rax
  _BYTE *v10; // rax
  char v11; // al
  __int64 v12; // rax
  _BYTE *v14; // [rsp+0h] [rbp-458h] BYREF
  _BYTE *v15; // [rsp+8h] [rbp-450h]
  _BYTE v16[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v17; // [rsp+418h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v4 = (__int64 *)ea2node(a2);
  v5 = 30;
  v6 = netnode_supval(v4, 30, v16, 1024, 83);
  v7 = 0;
  if ( v6 > 0 )
  {
    v14 = v16;
    a1[1] = 0;
    v15 = &v16[v6];
    if ( v16 < &v16[v6] )
    {
      do
      {
        v11 = is_cvt64(v4, v5, v7);
        v4 = (__int64 *)&v14;
        if ( v11 )
        {
          v8 = (unsigned int)a2 - (unsigned int)unpack_dd(&v14);
          if ( v8 == 0xFFFFFFFFLL )
            v8 = -1;
        }
        else
        {
          v8 = a2 - unpack_dq(&v14);
        }
        v9 = a1[1];
        v5 = *a1;
        if ( a2 == v8 )
          v8 = -1;
        v7 = v9 + 1;
        if ( a1[2] < (unsigned __int64)(v9 + 1) )
        {
          v4 = a1;
          v12 = qvector_reserve(a1, v5, v7, 8);
          *a1 = v12;
          v5 = v12;
          v9 = a1[1];
        }
        *(_QWORD *)(v5 + 8 * v9) = v8;
        v10 = v15;
        ++a1[1];
      }
      while ( v14 < v10 );
    }
    LODWORD(v7) = 1;
  }
  return (unsigned int)v7;
}

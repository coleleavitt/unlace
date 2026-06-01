__int64 __fastcall sub_2246AB0(__int64 *a1, _WORD *a2, size_t a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 result; // rax
  size_t v6; // r8
  __int64 v9; // r14
  _WORD *v10; // rbx
  unsigned __int64 v11; // r13
  size_t v12; // r15
  char v13; // si
  __int64 v14; // rdx
  unsigned int v15; // eax
  char v16; // cl
  __int64 v17; // rbp
  int v18; // eax
  void *v19; // rax
  char v20; // [rsp+1h] [rbp-139h]
  _OWORD v21[19]; // [rsp+2h] [rbp-138h]

  v4 = a1[1];
  if ( a4 > v4 )
    return -1;
  result = a4;
  if ( !a3 )
    return result;
  v6 = v4 - a4;
  if ( v6 < a3 )
    return -1;
  v9 = *a1;
  v10 = (_WORD *)(*a1 + a4);
  if ( a3 != 1 )
  {
    v11 = (unsigned __int64)v10 + v6 - a3 + 1;
    if ( a3 == 2 )
    {
      while ( *a2 != *v10 )
      {
        v10 = (_WORD *)((char *)v10 + 1);
        if ( v11 <= (unsigned __int64)v10 )
          return -1;
      }
    }
    else if ( v6 <= 0xF || a3 > 0xFF )
    {
      while ( memcmp(v10, a2, a3) )
      {
        v10 = (_WORD *)((char *)v10 + 1);
        if ( v11 <= (unsigned __int64)v10 )
          return -1;
      }
    }
    else
    {
      v12 = a3 - 1;
      v21[0] = __PAIR128__(0x101010101010101LL, 0x101010101010101LL) * (unsigned __int8)a3;
      v21[1] = v21[0];
      v21[2] = v21[0];
      v21[3] = v21[0];
      v21[4] = v21[0];
      v21[5] = v21[0];
      v21[6] = v21[0];
      v21[7] = v21[0];
      v21[8] = v21[0];
      v21[9] = v21[0];
      v21[10] = v21[0];
      v21[11] = v21[0];
      v21[12] = v21[0];
      v21[13] = v21[0];
      v21[14] = v21[0];
      v13 = a3 - 1;
      v14 = 0;
      v21[15] = v21[0];
      v15 = 0;
      do
      {
        *((_BYTE *)v21 + *((unsigned __int8 *)a2 + v14)) = v13 - v15++;
        v14 = v15;
      }
      while ( v15 != v12 );
      v16 = *((_BYTE *)a2 + a3 - 1);
      while ( 1 )
      {
        v17 = *((unsigned __int8 *)v10 + v12);
        if ( (_BYTE)v17 == v16 )
        {
          v20 = v16;
          v18 = memcmp(v10, a2, v12);
          v16 = v20;
          if ( !v18 )
            break;
        }
        v10 = (_WORD *)((char *)v10 + *((unsigned __int8 *)v21 + v17));
        if ( v11 <= (unsigned __int64)v10 )
          return -1;
      }
    }
    v19 = v10;
    return (__int64)v19 - v9;
  }
  v19 = memchr((const void *)(*a1 + a4), *(char *)a2, v6);
  if ( v19 )
    return (__int64)v19 - v9;
  return -1;
}

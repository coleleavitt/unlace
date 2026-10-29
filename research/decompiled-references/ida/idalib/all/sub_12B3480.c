__int64 __fastcall sub_12B3480(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rbp
  __int64 v11; // r13
  int v12[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  sub_1134980(a1, a2, a3, a4);
  *(_QWORD *)(a1 + 2384) = 0;
  *(_QWORD *)a1 = off_2C403E8;
  v12[0] = 3312;
  v5 = sub_21B6DA0(a4, v12, 1);
  v6 = *(_QWORD *)(a4 + 8);
  v7 = (unsigned int)v5;
  result = HIDWORD(v5);
  v9 = (__int64 *)(v6 + 8 * v7);
  v10 = (__int64 *)(v6 + 8 * result);
  if ( v9 == v10 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( *v9 )
    {
      result = sub_21B9810(*v9, 3312);
      if ( (_BYTE)result )
        break;
    }
    if ( v10 == ++v9 )
      goto LABEL_5;
  }
  if ( v10 == v9 )
  {
LABEL_5:
    v11 = 0;
  }
  else
  {
    do
    {
      v11 = *v9;
      result = *(_QWORD *)(*v9 + 16);
      if ( !result )
        result = *v9;
      ++v9;
      *(_BYTE *)(result + 44) |= 1u;
      if ( v9 == v10 )
        break;
      while ( 1 )
      {
        if ( *v9 )
        {
          result = sub_21B9810(*v9, 3312);
          if ( (_BYTE)result )
            break;
        }
        if ( v10 == ++v9 )
          goto LABEL_6;
      }
    }
    while ( v10 != v9 );
  }
LABEL_6:
  *(_BYTE *)(a1 + 2392) = v11 != 0;
  return result;
}

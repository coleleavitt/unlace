__int64 __fastcall sub_113F900(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // rbx
  __int64 *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v13[0] = 3236;
  v4 = sub_21B6DA0(a1, v13, 1);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = (__int64 *)(v5 + 8LL * (unsigned int)v4);
  v7 = (__int64 *)(v5 + 8 * HIDWORD(v4));
  if ( v6 == v7 )
    goto LABEL_5;
  while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3236) )
  {
    if ( v7 == ++v6 )
      goto LABEL_5;
  }
  if ( v7 == v6 )
  {
LABEL_5:
    v8 = sub_22B7480(a3);
    if ( (int)sub_229CB60(v8, v9) > 6 || (v11 = sub_22B7480(a3), result = sub_229CC10(v11, v12), (_DWORD)result == 3) )
    {
      result = *(unsigned int *)(a2 + 8);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
      {
        sub_2237220(a2, a2 + 16, result + 1, 8);
        result = *(unsigned int *)(a2 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a2 + 8 * result) = "--be8";
      ++*(_DWORD *)(a2 + 8);
    }
  }
  else
  {
    do
    {
      result = *v6;
      if ( *(_QWORD *)(*v6 + 16) )
        result = *(_QWORD *)(*v6 + 16);
      ++v6;
      *(_BYTE *)(result + 44) |= 1u;
      if ( v6 == v7 )
        break;
      while ( 1 )
      {
        if ( *v6 )
        {
          result = sub_21B9810(*v6, 3236);
          if ( (_BYTE)result )
            break;
        }
        if ( v7 == ++v6 )
          return result;
      }
    }
    while ( v7 != v6 );
  }
  return result;
}

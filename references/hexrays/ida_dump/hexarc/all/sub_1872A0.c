unsigned __int64 __fastcall sub_1872A0(__int64 a1)
{
  __int64 v1; // r13
  char v2; // r12
  unsigned __int64 result; // rax
  unsigned int v4; // ebx
  __int64 v5; // rbp
  char v6; // al
  int v7; // edx
  __int64 v8; // rdx

  v1 = 8;
  v2 = 0;
  result = *(unsigned int *)(a1 + 64);
  v4 = 1;
  if ( (int)result > 1 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + v1);
      v6 = sub_118CB0(v5);
      if ( v6 )
      {
        v7 = *(_DWORD *)(v5 + 24);
        v2 = v6;
        BYTE1(v7) &= ~2u;
        LOBYTE(v7) = v7 | 0x80;
        *(_DWORD *)(v5 + 24) = v7;
      }
      result = *(unsigned int *)(a1 + 64);
      if ( (int)result <= (int)++v4 )
        break;
      v1 += 8;
      if ( v4 >= (unsigned int)result )
      {
        if ( !under_debugger )
          sub_37B760(52719);
        BUG();
      }
    }
    if ( v2 )
    {
      v8 = *(_QWORD *)(a1 + 784);
      if ( v8 )
      {
        *(_DWORD *)(v8 + 48) = 63;
        result = *(unsigned int *)(a1 + 64);
      }
    }
  }
  *(_DWORD *)a1 &= ~0x10000u;
  if ( (int)result > 0 )
    return sub_60A20(a1, 1u, (__int64)"changed aliased memory");
  return result;
}

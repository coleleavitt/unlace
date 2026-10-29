__int64 *__fastcall sub_6D7700(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned __int64 v4; // rsi
  unsigned int v5; // ecx
  __int64 *v6; // rax
  __int64 v7; // rdi
  int v9; // eax
  int v10; // r10d

  v2 = *(unsigned int *)(a1 + 22688);
  v3 = *(_QWORD *)(a1 + 22672);
  v4 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7;
  if ( (_DWORD)v2 )
  {
    v5 = (v2 - 1) & (v4 ^ (v4 >> 9));
    v6 = (__int64 *)(v3 + 24LL * v5);
    v7 = *v6;
    if ( v4 == *v6 )
    {
LABEL_3:
      if ( v6 != (__int64 *)(v3 + 24 * v2) )
        return v6 + 1;
    }
    else
    {
      v9 = 1;
      while ( v7 )
      {
        v10 = v9 + 1;
        v5 = (v2 - 1) & (v9 + v5);
        v6 = (__int64 *)(v3 + 24LL * v5);
        v7 = *v6;
        if ( v4 == *v6 )
          goto LABEL_3;
        v9 = v10;
      }
    }
  }
  return nullptr;
}


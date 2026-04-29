__int64 __fastcall sub_259AA0(_QWORD *a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned int v9; // r15d
  int v10; // ecx

  v6 = a1[55];
  v7 = a1[54];
  if ( 104 * v6 )
  {
    v8 = a1[54];
    v9 = 0;
    do
    {
      if ( a4 )
      {
        while ( 1 )
        {
          v10 = *(_DWORD *)(v8 + 24);
          if ( (v10 & 0x100) == 0 && (v10 & 1) != 0 )
            break;
          v8 += 104;
          if ( v8 == v7 + 104 * v6 )
            return v9;
        }
      }
      sub_259920(a1, v8, a2, a3);
      v6 = a1[55];
      v8 += 104;
      ++v9;
      v7 = a1[54];
    }
    while ( v8 != v7 + 104 * v6 );
  }
  else
  {
    return 0;
  }
  return v9;
}

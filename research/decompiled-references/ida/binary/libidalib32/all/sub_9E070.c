__int64 __fastcall sub_9E070(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d

  v7 = *(_DWORD *)(a1 + 16) & 0xFFFFFFF;
  if ( (unsigned int)v7 <= 0xB )
  {
    v8 = 2306;
    if ( _bittest64(&v8, v7) )
      return a1 + 20;
  }
  sub_9B9B0(a1);
  return sub_9E0A0(a1, a2, v10, v11, v12, v13, a7);
}


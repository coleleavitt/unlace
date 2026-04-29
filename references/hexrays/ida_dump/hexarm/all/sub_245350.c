__int64 __fastcall sub_245350(int a1)
{
  __int64 v1; // rax

  v1 = 0;
  while ( *((_DWORD *)&unk_426980 + v1) != a1 )
  {
    v1 += 2;
    if ( v1 == 26 )
      return 0;
  }
  return *((unsigned int *)&unk_426980 + (int)v1 + 1);
}

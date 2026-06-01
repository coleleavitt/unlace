bool __fastcall sub_18BAE50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool result; // al
  __int64 v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8

  result = 0;
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v6 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v6 + 17) & 4) == 0 )
    {
      LOBYTE(v7) = sub_A62E10(a1, a2, v6, a4, a5);
      v10 = v7;
      result = 1;
      if ( (_BYTE)v10 )
      {
        v11 = sub_AAC1F0(a1, a2, v10, v8, v9);
        return v11 >= (unsigned int)sub_AAC1F0(a1, *(_QWORD *)(a1 + 18720), v12, v13, v14);
      }
    }
  }
  return result;
}

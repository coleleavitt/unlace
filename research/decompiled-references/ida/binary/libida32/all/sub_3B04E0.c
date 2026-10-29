__int64 __fastcall sub_3B04E0(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // eax
  unsigned __int64 v8; // [rsp+88h] [rbp-40h]

  v6 = *(_DWORD *)(a1 + 68);
  v8 = __readfsqword(0x28u);
  if ( (v6 & 0x18) != 0 )
    callui(1087, a2, (int)&callui, a4, a5, a6);
  *(_DWORD *)(a1 + 68) = v6 & 0xFFFFFFFE;
  return 1;
}


void __fastcall sub_774290(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, char a5)
{
  __int64 v5; // rdi
  int v6; // eax
  unsigned __int64 v7[3]; // [rsp+0h] [rbp-18h] BYREF

  v7[1] = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 48) + 176 * a2;
  v6 = *(_DWORD *)(v5 + 168) & 4;
  if ( a5 )
  {
    v7[0] = a4;
    if ( !v6 )
      sub_7740F0((__int64 *)(v5 + 48), v7);
  }
  else if ( !v6 )
  {
    sub_773820((_QWORD *)(v5 + 48), a4);
  }
}

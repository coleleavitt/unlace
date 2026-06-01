void __fastcall sub_753E10(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 48) + 176LL * a2;
  v6 = *(_DWORD *)(v5 + 164) & 4;
  if ( a5 )
  {
    v7 = a4;
    if ( !v6 )
      sub_753C70((__int64 *)(v5 + 48), &v7);
  }
  else if ( !v6 )
  {
    sub_753360((_QWORD *)(v5 + 48), a4);
  }
}


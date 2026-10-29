unsigned __int64 __fastcall sub_54E220(__int64 a1, QT::QWidget *a2)
{
  __int64 *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v7; // [rsp+0h] [rbp-E8h] BYREF
  __int128 v8; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v9; // [rsp+18h] [rbp-D0h]
  _BYTE v10[168]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v11[4]; // [rsp+C8h] [rbp-20h] BYREF

  v11[0] = __readfsqword(0x28u);
  v7 = 0;
  v2 = v11;
  v9 = 0xFFFFFFFF00000000LL;
  v3 = v10;
  v8 = 0;
  do
  {
    *v3 = 0;
    v3 += 7;
    *((_OWORD *)v3 - 3) = 0;
    *(v3 - 4) = 0;
    *(_OWORD *)(v3 - 3) = 0;
    *((_DWORD *)v3 - 2) = -1;
  }
  while ( v11 != v3 );
  sub_520610(a2, nullptr, 0, (__int64)&v7, nullptr);
  do
  {
    v4 = *(v2 - 4);
    v2 -= 7;
    if ( v4 )
    {
      v2[4] = 0;
      qfree(v4, nullptr);
    }
    v5 = *v2;
    if ( *v2 )
    {
      v2[1] = 0;
      qfree(v5, nullptr);
    }
  }
  while ( v2 != (__int64 *)v10 );
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7, nullptr);
  }
  return v11[0] - __readfsqword(0x28u);
}

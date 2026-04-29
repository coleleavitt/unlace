unsigned __int64 __fastcall sub_183D60(__int64 a1, char a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v3 = a3;
  v11 = __readfsqword(0x28u);
  v9 = 0;
  v10 = 0;
  v4 = a3 + 1LL;
  if ( a3 == -1 )
  {
    v5 = 0;
  }
  else
  {
    v5 = qvector_reserve((__int64)&v9, 0, a3 + 1LL, 1);
    v6 = v10;
    v9 = v5;
    if ( (unsigned __int64)v10 < v4 )
    {
      do
      {
        v7 = v6;
        *(_BYTE *)(v5 + v6++) = a2;
        v5 = v9;
      }
      while ( v3 != v7 );
    }
    *(_QWORD *)&v10 = v4;
  }
  *(_BYTE *)(v5 + v3) = 0;
  idb_utf8();
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return v11 - __readfsqword(0x28u);
}

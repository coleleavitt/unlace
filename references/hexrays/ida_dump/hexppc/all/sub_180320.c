unsigned __int64 __fastcall sub_180320(__int64 a1, char a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v3 = (int)a3;
  v12 = __readfsqword(0x28u);
  v10 = 0;
  v11 = 0;
  v5 = (int)a3 + 1LL;
  if ( a3 == -1 )
  {
    v6 = 0;
  }
  else
  {
    v6 = qvector_reserve(&v10, 0, (int)a3 + 1LL, 1);
    v7 = v11;
    v10 = v6;
    if ( (unsigned __int64)v11 < v5 )
    {
      do
      {
        v8 = v7;
        *(_BYTE *)(v6 + v7++) = a2;
        v6 = v10;
      }
      while ( v3 != v8 );
    }
    *(_QWORD *)&v11 = v5;
  }
  *(_BYTE *)(v6 + v3) = 0;
  idb_utf8(a1, v10, a3, 1);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return v12 - __readfsqword(0x28u);
}

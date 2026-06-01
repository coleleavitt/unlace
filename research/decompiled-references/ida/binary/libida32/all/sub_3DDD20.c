unsigned __int64 __fastcall sub_3DDD20(__int64 a1, unsigned int a2, char a3)
{
  __int64 i; // rsi
  unsigned int v7; // [rsp+0h] [rbp-38h] BYREF
  char v8; // [rsp+4h] [rbp-34h]
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v7 = -1;
  v8 = 0;
  sub_3FD660(a1, &v7, a2);
  for ( i = v7; v7 != -1; i = v7 )
  {
    if ( !a3 )
    {
      while ( (v8 & 0x20) != 0 || (unsigned __int8)(v8 - 4) <= 1u )
      {
        sub_3FD7C0(a1, &v7, a2);
        i = v7;
        if ( v7 == -1 )
          return v9 - __readfsqword(0x28u);
      }
    }
    sub_3FEBE0(a1, i, a2);
    sub_3FD7C0(a1, &v7, a2);
  }
  return v9 - __readfsqword(0x28u);
}


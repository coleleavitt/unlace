unsigned __int64 __fastcall sub_9E8D0(_QWORD *a1, _QWORD *a2)
{
  signed int v2; // r15d
  __int64 v3; // r14
  bool v4; // cc
  char v5; // dl
  char v6; // al
  int v8; // [rsp+10h] [rbp-68h] BYREF
  __int64 v9; // [rsp+18h] [rbp-60h]
  __int128 v10; // [rsp+20h] [rbp-58h]
  unsigned __int64 v11; // [rsp+38h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  if ( (_QWORD)xmmword_251378 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v8 = -2;
      v9 = -1;
      v10 = 0;
      v5 = sub_9E590(a1, v2, (__int64)&v8, 0);
      v6 = 2;
      if ( !v5 )
        v6 = sub_9E590(a2, v2, (__int64)&v8, 0);
      v4 = v8 < -1;
      *(_BYTE *)(qword_251370 + 56 * v3 + 35) = v6;
      if ( !v4 && v9 )
      {
        *(_QWORD *)&v10 = 0;
        qfree();
      }
      v3 = ++v2;
    }
    while ( v2 < (unsigned __int64)xmmword_251378 );
  }
  return v11 - __readfsqword(0x28u);
}


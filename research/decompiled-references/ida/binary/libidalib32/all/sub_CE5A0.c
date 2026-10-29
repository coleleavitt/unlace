__int64 __fastcall sub_CE5A0(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  _QWORD *v3; // r14
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  int v6; // r8d
  __int64 v8; // [rsp+8h] [rbp-90h]
  int v9; // [rsp+10h] [rbp-88h] BYREF
  __int64 v10; // [rsp+18h] [rbp-80h]
  __int128 v11; // [rsp+20h] [rbp-78h]
  int v12; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+38h] [rbp-60h]
  __int128 v14; // [rsp+40h] [rbp-58h]
  unsigned __int64 v15; // [rsp+58h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( !dbg || dword_2515A4 >= 0 || !a1 )
  {
    sub_C4DC0();
    return 1;
  }
  v1 = qword_251410;
  v2 = qword_251410 + 232 * xmmword_251418;
  if ( qword_251410 != v2 )
  {
    while ( a1 != *(_DWORD *)v1 )
    {
      v1 += 232;
      if ( v2 == v1 )
        return 0;
    }
    if ( v1 && sub_CE480(v1, -1) )
    {
      v3 = nullptr;
      if ( *(_QWORD *)(v1 + 72) )
        v3 = (_QWORD *)(v1 + 64);
      v4 = qword_251370;
      v5 = (_QWORD *)(v1 + 40);
      v8 = qword_251370 + 56 * xmmword_251378;
      if ( qword_251370 != v8 )
      {
        do
        {
          v9 = -2;
          v10 = -1;
          v11 = 0;
          sub_C6270(v4, (__int64)&v9, v5);
          v12 = -2;
          v13 = -1;
          v14 = 0;
          if ( v3 )
          {
            sub_C6270(v4, (__int64)&v12, v3);
            *(_BYTE *)(v4 + 35) = 2 - sub_C4D40(&v9, (__int64)&v12);
            if ( v6 >= -1 && v13 )
            {
              *(_QWORD *)&v14 = 0;
              qfree();
            }
          }
          else
          {
            *(_BYTE *)(v4 + 35) = 2 - sub_C4D40(&v9, (__int64)&v12);
          }
          if ( v9 >= -1 )
          {
            if ( v10 )
            {
              *(_QWORD *)&v11 = 0;
              qfree();
            }
          }
          v4 += 56;
        }
        while ( v8 != v4 );
      }
      sub_C6450(v5);
      return 1;
    }
  }
  return 0;
}


__int64 __fastcall sub_124EC0(__int128 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rbp
  __int64 v8; // rax
  __int64 v10[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h]
  __int128 v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v4 = *((_QWORD *)&a1 + 1);
  if ( *((_QWORD *)&a1 + 1) == a3 )
  {
    LODWORD(v4) = 1;
  }
  else
  {
    v6 = a3;
    if ( v4 )
    {
      if ( a3 )
      {
        v8 = *(_QWORD *)(a3 + 8);
        if ( v8 )
        {
          while ( v4 != v8 )
          {
            v8 = *(_QWORD *)(v8 + 8);
            if ( !v8 )
              goto LABEL_7;
          }
          v4 = a3;
          a4 = a2;
          v6 = v8;
        }
      }
    }
LABEL_7:
    *((_QWORD *)&a1 + 1) = v10;
    v12 = 0;
    v10[0] = 0;
    v10[1] = 0;
    v11 = 0;
    sub_123EA0(a1, a4, 1, 0xFFFF0000);
    LOBYTE(v4) = sub_A9AA0(a1, v10, v4, v6, 1u) == 0;
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v11);
    }
    qfree(v10[0]);
  }
  return (unsigned int)v4;
}

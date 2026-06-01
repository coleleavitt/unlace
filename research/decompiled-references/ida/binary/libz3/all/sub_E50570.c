__int64 __fastcall sub_E50570(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  _QWORD *v6; // r10
  _QWORD *v7; // r15
  int v8; // ebp
  _QWORD *v10; // [rsp+0h] [rbp-78h]
  int *v11; // [rsp+8h] [rbp-70h]
  int v12[4]; // [rsp+10h] [rbp-68h] BYREF
  int v13[18]; // [rsp+20h] [rbp-58h] BYREF
  char v14; // [rsp+68h] [rbp-10h]

  v6 = *(_QWORD **)(*(_QWORD *)(a1 + 160) + 112LL);
  if ( v6 )
  {
    v10 = &v6[4 * *((unsigned int *)v6 - 1)];
    if ( v10 != v6 )
    {
      v7 = *(_QWORD **)(*(_QWORD *)(a1 + 160) + 112LL);
      v8 = 0;
      v11 = v13;
      while ( 1 )
      {
        sub_1606360(v12, v7[1], *v7, 0, 0, 0);
        sub_160E8B0(a2, v12);
        ++v8;
        v7 += 4;
        sub_18572D0(v13);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v10 == v7 )
          break;
        if ( v8 )
        {
          if ( v8 == *(_DWORD *)(a1 + 8) )
            std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
    }
  }
  sub_F17980(
    a1 + 168,
    a2,
    a3,
    a4,
    a5,
    a6,
    (int)v10,
    v11,
    v12[0],
    v12[2],
    v13[0],
    v13[2],
    v13[4],
    v13[6],
    v13[8],
    v13[10],
    v13[12],
    v13[14],
    v13[16],
    v14);
  return a2;
}


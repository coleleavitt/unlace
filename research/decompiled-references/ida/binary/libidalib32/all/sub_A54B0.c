__int64 __fastcall sub_A54B0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD v5[5]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v6; // [rsp+28h] [rbp-50h] BYREF
  __int128 v7; // [rsp+30h] [rbp-48h]
  __int64 v8; // [rsp+40h] [rbp-38h]
  __int64 v9; // [rsp+48h] [rbp-30h]
  _QWORD *v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+58h] [rbp-20h]
  unsigned __int64 v12; // [rsp+68h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v5[4] = a2;
  v5[0] = 1;
  v5[1] = 0;
  v5[2] = 0;
  v6 = 0;
  v8 = 0;
  v9 = a1;
  v10 = v5;
  v11 = a3;
  v7 = 0;
  sub_A5300(a1, &v6);
  v3 = 1;
  if ( (unsigned int)zip_deflate() )
  {
    sub_92120((__int64)"Error compressing the trace file with zip_deflate!", sub_A7DF0);
    v3 = 0;
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v3;
}


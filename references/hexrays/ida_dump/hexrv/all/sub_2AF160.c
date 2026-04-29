__int64 __fastcall sub_2AF160(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  _QWORD v6[2]; // [rsp+28h] [rbp-80h] BYREF
  int v7; // [rsp+38h] [rbp-70h]
  __int64 (__fastcall **v8)(); // [rsp+40h] [rbp-68h]
  unsigned __int64 v9; // [rsp+48h] [rbp-60h]
  __int64 v10; // [rsp+50h] [rbp-58h]
  __int128 v11; // [rsp+58h] [rbp-50h]
  _QWORD v12[2]; // [rsp+68h] [rbp-40h] BYREF
  int v13; // [rsp+78h] [rbp-30h]
  unsigned __int64 v14; // [rsp+88h] [rbp-20h]

  v2 = -1;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 8);
  v14 = __readfsqword(0x28u);
  v13 = -2;
  v9 = v3;
  v10 = 0;
  v12[0] = 0;
  v12[1] = v3;
  v8 = off_4B3EF0;
  v6[0] = 0;
  v6[1] = v4;
  v7 = -2;
  v11 = 0;
  if ( v4 >= v3 )
    v2 = v3 < v4;
  clear_tinfo_t(v6);
  v8 = off_4B3EF0;
  clear_tinfo_t(v12);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return v2;
}

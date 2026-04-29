__int64 __fastcall sub_EDE00(__int64 a1)
{
  _QWORD v2[5]; // [rsp+0h] [rbp-A8h] BYREF
  __int16 v3; // [rsp+28h] [rbp-80h]
  __int128 v4; // [rsp+30h] [rbp-78h]
  __int64 v5; // [rsp+40h] [rbp-68h]
  __int64 v6; // [rsp+48h] [rbp-60h]
  int v7; // [rsp+50h] [rbp-58h]
  __int64 v8; // [rsp+58h] [rbp-50h]
  int v9; // [rsp+60h] [rbp-48h]
  __int64 v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+70h] [rbp-38h]
  __int64 v12; // [rsp+78h] [rbp-30h]
  int v13; // [rsp+80h] [rbp-28h]
  __int64 v14; // [rsp+88h] [rbp-20h]
  unsigned __int64 v15; // [rsp+98h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  if ( (~((unsigned __int16)get_flags_ex(a1, 4) >> 8) & 6) != 0 || get_func(a1) )
    return 0;
  v2[0] = a1;
  v3 = 0;
  v2[1] = -1;
  v2[2] = 512;
  v2[3] = -1;
  v2[4] = 0;
  v5 = 0xFFFFFFFFLL;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v4 = 0;
  return ((__int64 (__fastcall *)(_QWORD *))add_func_ex)(v2);
}

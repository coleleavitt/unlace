__int64 __fastcall sub_36BA60(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int func_bounds; // edx
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v7; // [rsp+8h] [rbp-A0h]
  __int64 v8; // [rsp+10h] [rbp-98h]
  __int64 v9; // [rsp+18h] [rbp-90h]
  __int64 v10; // [rsp+20h] [rbp-88h]
  __int16 v11; // [rsp+28h] [rbp-80h]
  __int128 v12; // [rsp+30h] [rbp-78h]
  __int64 v13; // [rsp+40h] [rbp-68h]
  __int64 v14; // [rsp+48h] [rbp-60h]
  int v15; // [rsp+50h] [rbp-58h]
  __int64 v16; // [rsp+58h] [rbp-50h]
  int v17; // [rsp+60h] [rbp-48h]
  __int64 v18; // [rsp+68h] [rbp-40h]
  int v19; // [rsp+70h] [rbp-38h]
  __int64 v20; // [rsp+78h] [rbp-30h]
  int v21; // [rsp+80h] [rbp-28h]
  __int64 v22; // [rsp+88h] [rbp-20h]
  unsigned __int64 v23; // [rsp+98h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 8);
  v23 = __readfsqword(0x28u);
  v12 = 0;
  v6 = v2;
  v11 = 0;
  v7 = 0;
  v8 = 512;
  v9 = -1;
  v10 = 0;
  v13 = 0xFFFFFFFFLL;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  func_bounds = find_func_bounds((int)&v6, 1);
  v4 = -1;
  if ( func_bounds )
    v4 = v7;
  *(_QWORD *)(a2 + 8) = v4;
  return 0;
}

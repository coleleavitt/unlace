__int64 __fastcall sub_11A80(__int64 a1, unsigned int a2)
{
  int func_bounds; // edx
  __int64 result; // rax
  __int64 v4; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v5; // [rsp+8h] [rbp-B0h]
  __int64 v6; // [rsp+10h] [rbp-A8h]
  __int64 v7; // [rsp+18h] [rbp-A0h]
  __int64 v8; // [rsp+20h] [rbp-98h]
  __int16 v9; // [rsp+28h] [rbp-90h]
  __int128 v10; // [rsp+30h] [rbp-88h]
  __int64 v11; // [rsp+40h] [rbp-78h]
  __int64 v12; // [rsp+48h] [rbp-70h]
  int v13; // [rsp+50h] [rbp-68h]
  __int64 v14; // [rsp+58h] [rbp-60h]
  int v15; // [rsp+60h] [rbp-58h]
  __int64 v16; // [rsp+68h] [rbp-50h]
  int v17; // [rsp+70h] [rbp-48h]
  __int64 v18; // [rsp+78h] [rbp-40h]
  int v19; // [rsp+80h] [rbp-38h]
  __int64 v20; // [rsp+88h] [rbp-30h]
  unsigned __int64 v21; // [rsp+98h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  create_insn(a1, 0);
  v9 = 0;
  v4 = a1;
  v5 = 0;
  v6 = 512;
  v7 = -1;
  v8 = 0;
  v11 = 0xFFFFFFFFLL;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v10 = 0;
  func_bounds = find_func_bounds(&v4, 1);
  result = 0;
  if ( func_bounds == 1 )
  {
    v5 = v4 + a2;
    add_func_ex(&v4);
    return 1;
  }
  return result;
}

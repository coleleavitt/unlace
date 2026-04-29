unsigned __int64 __fastcall sub_445D0(__int64 a1, char a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // [rsp+0h] [rbp-98h]
  __int64 v16; // [rsp+0h] [rbp-98h]
  __int64 v17; // [rsp+0h] [rbp-98h]
  __int64 v18; // [rsp+8h] [rbp-90h]
  __int64 v19; // [rsp+8h] [rbp-90h]
  __int64 v20; // [rsp+8h] [rbp-90h]
  __int64 v21; // [rsp+10h] [rbp-88h]
  __int64 v22; // [rsp+10h] [rbp-88h]
  __int64 v23; // [rsp+10h] [rbp-88h]
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  get_abi_name();
  invalidate_regfinder_cache();
  LOBYTE(v15) = 0;
  unk_A7C48 &= ~1u;
  if ( a2 )
  {
    if ( strcmp(&s1, "win8") )
      strcmp(&s1, "eabi");
    setinf_flag();
    if ( !(unsigned __int8)getinf_flag(3, 4, v2, v3, v4, v5, v15, v18, v21) )
      getinf(3);
    setinf_flag();
    if ( !(unsigned __int8)getinf_flag(3, 4, v6, v7, v8, v9, v16, v19, v22) )
      getinf(3);
    if ( !(unsigned __int8)getinf_flag(3, 4, v10, v11, v12, v13, v17, v20, v23) )
      getinf(3);
    setinf_flag();
    setinf_flag();
    setinf_flag();
  }
  return v24 - __readfsqword(0x28u);
}

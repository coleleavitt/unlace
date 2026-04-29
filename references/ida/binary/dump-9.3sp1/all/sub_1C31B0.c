unsigned __int64 __fastcall sub_1C31B0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  _QWORD v12[2]; // [rsp+0h] [rbp-A8h] BYREF
  int v13; // [rsp+10h] [rbp-98h]
  __int64 v14; // [rsp+18h] [rbp-90h]
  int v15; // [rsp+20h] [rbp-88h]
  __int64 (__fastcall **v16)(); // [rsp+30h] [rbp-78h]
  __int64 v17; // [rsp+38h] [rbp-70h]
  __int64 v18; // [rsp+40h] [rbp-68h]
  __int128 v19; // [rsp+48h] [rbp-60h]
  __int64 v20; // [rsp+58h] [rbp-50h]
  int v21; // [rsp+60h] [rbp-48h]
  __int64 v22; // [rsp+68h] [rbp-40h]
  unsigned __int64 v23; // [rsp+78h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v16 = off_4DE840;
  v17 = a2;
  v18 = 0;
  v20 = 0;
  v21 = -1;
  v22 = a4;
  v19 = 0;
  if ( a5 )
  {
    calc_tinfo_gaps();
    for_all_arglocs();
    if ( *(_DWORD *)a1 == 2 )
    {
      v7 = *(__int64 **)(a1 + 8);
      v8 = v7[1];
      if ( !v8 )
      {
        if ( !under_debugger )
          sub_383060(51721);
        BUG();
      }
      v9 = 3 * v8;
      v10 = *v7;
      v13 = 0;
      v11 = v10 + 8 * v9 - 24;
      copy_argloc();
      v15 = *(_DWORD *)(v11 + 16);
      if ( (unsigned __int16)v15 + *(unsigned __int16 *)(v11 + 18) < a3 )
      {
        v12[0] = v22 + v14;
        v12[1] = a3 - (unsigned __int16)v15;
        sub_316BB0(v17 + 16, v12);
      }
      cleanup_argloc();
    }
  }
  else
  {
    for_all_arglocs();
  }
  v16 = off_4DE840;
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  return v23 - __readfsqword(0x28u);
}

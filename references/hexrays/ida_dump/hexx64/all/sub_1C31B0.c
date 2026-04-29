unsigned __int64 __fastcall sub_1C31B0(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // ebp
  _QWORD v13[2]; // [rsp+0h] [rbp-A8h] BYREF
  int v14; // [rsp+10h] [rbp-98h] BYREF
  __int64 v15; // [rsp+18h] [rbp-90h]
  int v16; // [rsp+20h] [rbp-88h]
  __int64 (__fastcall **v17)(); // [rsp+30h] [rbp-78h] BYREF
  __int64 *v18; // [rsp+38h] [rbp-70h]
  __int64 v19; // [rsp+40h] [rbp-68h] BYREF
  __int128 v20; // [rsp+48h] [rbp-60h]
  __int64 v21; // [rsp+58h] [rbp-50h]
  int v22; // [rsp+60h] [rbp-48h]
  __int64 v23; // [rsp+68h] [rbp-40h]
  unsigned __int64 v24; // [rsp+78h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v17 = off_4DE840;
  v18 = a2;
  v19 = 0;
  v21 = 0;
  v22 = -1;
  v23 = a4;
  v20 = 0;
  if ( a5 )
  {
    calc_tinfo_gaps(&v19, *a5);
    for_all_arglocs(&v17, a1, a3, 0);
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
      v14 = 0;
      v11 = v10 + 8 * v9 - 24;
      copy_argloc(&v14, v11);
      v16 = *(_DWORD *)(v11 + 16);
      if ( (unsigned __int16)v16 + *(unsigned __int16 *)(v11 + 18) < (int)a3 )
      {
        v12 = a3 - (unsigned __int16)v16;
        if ( v14 == 3 )
        {
          sub_63E80(v18, v15, v12);
        }
        else
        {
          v13[0] = v23 + v15;
          v13[1] = v12;
          sub_316BB0(v18 + 2, v13);
        }
      }
      cleanup_argloc(&v14);
    }
  }
  else
  {
    for_all_arglocs(&v17, a1, a3, 0);
  }
  v17 = off_4DE840;
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  return v24 - __readfsqword(0x28u);
}

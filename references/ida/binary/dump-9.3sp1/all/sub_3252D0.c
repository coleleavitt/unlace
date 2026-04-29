unsigned __int64 __fastcall sub_3252D0(__int64 a1, int a2, char a3)
{
  __int64 v4; // rdi
  int flags; // eax
  __int64 v6; // rax
  int i; // r15d
  __int64 v8; // rax
  __int64 v9; // rdi
  int j; // eax
  int v12; // r13d
  __int64 (__fastcall **v13)(); // [rsp+10h] [rbp-F8h] BYREF
  int v14; // [rsp+18h] [rbp-F0h]
  __int64 v15; // [rsp+20h] [rbp-E8h]
  __int128 v16; // [rsp+28h] [rbp-E0h]
  __int64 v17; // [rsp+38h] [rbp-D0h]
  __int128 v18; // [rsp+40h] [rbp-C8h]
  __int64 v19; // [rsp+50h] [rbp-B8h]
  __int64 (__fastcall **v20)(); // [rsp+60h] [rbp-A8h] BYREF
  int v21; // [rsp+68h] [rbp-A0h]
  __int64 v22; // [rsp+70h] [rbp-98h]
  __int128 v23; // [rsp+78h] [rbp-90h]
  __int64 v24; // [rsp+88h] [rbp-80h]
  __int128 v25; // [rsp+90h] [rbp-78h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  __int64 v27; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-58h]
  __int64 v29; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v31; // [rsp+C8h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( a3 || (unsigned __int8)sub_31B570(*(_QWORD *)(a1 + 216)) )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( *(int *)(v4 + 4) >= 0 )
    {
      if ( sub_1CE9E0(v4) )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL) != -1 )
        {
          flags = get_flags_ex();
          if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
          {
            if ( !under_debugger )
              sub_383060(50726);
            goto LABEL_33;
          }
        }
      }
      v14 = 2;
      v15 = 0;
      v17 = 0;
      v13 = (__int64 (__fastcall **)())&off_4E3348;
      v19 = a1;
      v16 = 0;
      v18 = 0;
      sub_255A80((__int64 *)&v13, a1 + 16, 0);
      v6 = *(_QWORD *)(a1 + 216);
      v21 = 0;
      v22 = 0;
      v26 = v6;
      v24 = 0;
      v20 = off_4E3388;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v23 = 0;
      v25 = 0;
      sub_255A80((__int64 *)&v20, a1 + 16, 0);
      for ( i = sub_64960(&v29, 0); i != (_DWORD)v30; i = sub_64960(&v29, i + 1) )
      {
        if ( !sub_64930(&v27, i) )
        {
          if ( !under_debugger )
            sub_383060(50728);
          goto LABEL_33;
        }
      }
      if ( !a2 )
      {
        for ( j = sub_64960(&v27, 0); ; j = sub_64960(&v27, v12 + 1) )
        {
          v12 = j;
          if ( j == (_DWORD)v28 )
            goto LABEL_14;
          if ( !sub_64930(&v29, j) )
            break;
        }
        sub_254BC0(v26, *(_QWORD *)(v26 + 1352) + 16LL, (__int64)"UNUSED LABEL %d", v12);
        if ( !under_debugger )
          sub_383060(50729);
LABEL_33:
        BUG();
      }
LABEL_14:
      v8 = *(_QWORD *)(a1 + 216);
      v9 = v29;
      v20 = off_4E3388;
      *(_DWORD *)(v8 + 448) = 0;
      qfree(v9);
      qfree(v27);
      v20 = off_4DBCF8;
      if ( v24 )
      {
        *(_QWORD *)&v25 = 0;
        qfree(v24);
      }
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        qfree(v22);
      }
      v13 = off_4DBCF8;
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree(v17);
      }
      if ( v15 )
      {
        *(_QWORD *)&v16 = 0;
        qfree(v15);
      }
    }
  }
  return v31 - __readfsqword(0x28u);
}

unsigned __int64 __fastcall sub_321150(__int64 a1, int a2, char a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdi
  int flags; // eax
  __int64 v7; // rax
  int i; // r15d
  __int64 v9; // rax
  __int64 v10; // rdi
  int j; // eax
  int v13; // r13d
  __int64 (__fastcall **v14)(); // [rsp+10h] [rbp-F8h] BYREF
  int v15; // [rsp+18h] [rbp-F0h]
  __int64 v16; // [rsp+20h] [rbp-E8h]
  __int128 v17; // [rsp+28h] [rbp-E0h]
  __int64 v18; // [rsp+38h] [rbp-D0h]
  __int128 v19; // [rsp+40h] [rbp-C8h]
  __int64 v20; // [rsp+50h] [rbp-B8h]
  __int64 (__fastcall **v21)(); // [rsp+60h] [rbp-A8h] BYREF
  int v22; // [rsp+68h] [rbp-A0h]
  __int64 v23; // [rsp+70h] [rbp-98h]
  __int128 v24; // [rsp+78h] [rbp-90h]
  __int64 v25; // [rsp+88h] [rbp-80h]
  __int128 v26; // [rsp+90h] [rbp-78h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  __int64 v28; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-58h]
  __int64 v30; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v32; // [rsp+C8h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( a3 || (unsigned __int8)sub_3173F0(*(_QWORD *)(a1 + 216)) )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( *(int *)(v4 + 4) >= 0 )
    {
      if ( sub_1CAFA0(v4) )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
        if ( v5 != -1 )
        {
          flags = get_flags_ex(v5, 4);
          if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
          {
            if ( !under_debugger )
              sub_37EEE0(50726);
            goto LABEL_33;
          }
        }
      }
      v15 = 2;
      v16 = 0;
      v18 = 0;
      v14 = (__int64 (__fastcall **)())&off_4D0440;
      v20 = a1;
      v17 = 0;
      v19 = 0;
      sub_251E00((__int64 *)&v14, a1 + 16, 0);
      v7 = *(_QWORD *)(a1 + 216);
      v22 = 0;
      v23 = 0;
      v27 = v7;
      v25 = 0;
      v21 = off_4D0480;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v24 = 0;
      v26 = 0;
      sub_251E00((__int64 *)&v21, a1 + 16, 0);
      for ( i = sub_60F20(&v30, 0); i != (_DWORD)v31; i = sub_60F20(&v30, i + 1) )
      {
        if ( !sub_60EF0(&v28, i) )
        {
          if ( !under_debugger )
            sub_37EEE0(50728);
          goto LABEL_33;
        }
      }
      if ( !a2 )
      {
        for ( j = sub_60F20(&v28, 0); ; j = sub_60F20(&v28, v13 + 1) )
        {
          v13 = j;
          if ( j == (_DWORD)v29 )
            goto LABEL_14;
          if ( !sub_60EF0(&v30, j) )
            break;
        }
        sub_250F40(v27, *(_QWORD *)(v27 + 1352) + 16LL, (__int64)"UNUSED LABEL %d", v13);
        if ( !under_debugger )
          sub_37EEE0(50729);
LABEL_33:
        BUG();
      }
LABEL_14:
      v9 = *(_QWORD *)(a1 + 216);
      v10 = v30;
      v21 = off_4D0480;
      *(_DWORD *)(v9 + 448) = 0;
      qfree(v10);
      qfree(v28);
      v21 = off_4C8E58;
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v25);
      }
      if ( v23 )
      {
        *(_QWORD *)&v24 = 0;
        qfree(v23);
      }
      v14 = off_4C8E58;
      if ( v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(v18);
      }
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree(v16);
      }
    }
  }
  return v32 - __readfsqword(0x28u);
}

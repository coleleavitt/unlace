__int64 __fastcall sub_29A520(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // r13
  int v8; // eax
  __int64 (__fastcall **v9)(); // [rsp+10h] [rbp-98h] BYREF
  int v10; // [rsp+18h] [rbp-90h]
  __int64 v11; // [rsp+20h] [rbp-88h]
  __int128 v12; // [rsp+28h] [rbp-80h]
  __int64 v13; // [rsp+38h] [rbp-70h]
  __int128 v14; // [rsp+40h] [rbp-68h]
  __int64 v15; // [rsp+50h] [rbp-58h]
  unsigned int v16; // [rsp+58h] [rbp-50h]
  unsigned __int64 v17; // [rsp+68h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v2 = 0;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v15 = a2;
    v10 = 0;
    v9 = (__int64 (__fastcall **)())&off_4CDFF0;
    v11 = 0;
    v13 = 0;
    v16 = 0;
    v12 = 0;
    v14 = 0;
    sub_251E00((__int64 *)&v9, a1 + 16, 0);
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(_QWORD *)(v4 + 440);
    if ( (int)v5 <= 0 )
    {
      v2 = v16;
    }
    else
    {
      v6 = 0;
      v7 = 104LL * (unsigned int)(v5 - 1);
      while ( 1 )
      {
        v8 = sub_329EE0(v6 + *(_QWORD *)(v4 + 432) + 80, a2);
        v16 += v8;
        v2 = v16;
        if ( v6 == v7 )
          break;
        v4 = *(_QWORD *)(a1 + 8);
        v6 += 104;
      }
    }
    v9 = off_4C8E58;
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v13);
    }
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v11);
    }
  }
  return v2;
}

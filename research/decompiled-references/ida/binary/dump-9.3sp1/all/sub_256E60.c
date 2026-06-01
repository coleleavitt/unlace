__int64 __fastcall sub_256E60(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rbx
  __int64 (__fastcall **v5)(); // [rsp+0h] [rbp-78h] BYREF
  int v6; // [rsp+8h] [rbp-70h]
  __int64 v7; // [rsp+10h] [rbp-68h]
  __int128 v8; // [rsp+18h] [rbp-60h]
  __int64 v9; // [rsp+28h] [rbp-50h]
  __int128 v10; // [rsp+30h] [rbp-48h]
  __int64 v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  __int64 v13; // [rsp+50h] [rbp-28h]
  unsigned __int64 v14; // [rsp+58h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 8);
  v14 = __readfsqword(0x28u);
  v6 = 4;
  v7 = 0;
  v9 = 0;
  v5 = (__int64 (__fastcall **)())&off_4DFD18;
  v11 = a2;
  v12 = -1;
  v13 = 0;
  v8 = 0;
  v10 = 0;
  if ( v2 != 74 )
  {
    if ( v2 <= 0x4A )
    {
      if ( v2 != 73 )
        goto LABEL_4;
    }
    else if ( v2 - 75 > 2 )
    {
LABEL_4:
      sub_255A80((__int64 *)&v5, a1, 0);
      goto LABEL_5;
    }
    goto LABEL_11;
  }
  sub_255A80((__int64 *)&v5, *(_QWORD *)(a1 + 24) + 72LL, 0);
  if ( v12 )
  {
    sub_255A80((__int64 *)&v5, *(_QWORD *)(a1 + 24) + 136LL, 0);
    if ( v12 )
LABEL_11:
      sub_255A80((__int64 *)&v5, *(_QWORD *)(a1 + 24), 0);
  }
LABEL_5:
  v3 = v13;
  v5 = off_4DBCF8;
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return v3;
}

__int64 __fastcall sub_9B2C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  __int64 v5; // rax
  _DWORD *v6; // r12
  _DWORD *v7; // rdi
  unsigned __int8 v8; // al
  unsigned __int8 v9; // [rsp+8h] [rbp-B0h]
  _DWORD *v10; // [rsp+18h] [rbp-A0h] BYREF
  _QWORD v11[4]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-68h] BYREF
  __int128 v14; // [rsp+58h] [rbp-60h]
  __int64 v15; // [rsp+68h] [rbp-50h]
  unsigned __int64 v16; // [rsp+78h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 != 10 )
    return 0;
  if ( *(_BYTE *)(a2 + 32) != 4 )
    return 0;
  v2 = *(_QWORD *)(a2 + 40);
  if ( !v2 )
    return 0;
  result = 0;
  if ( (unsigned int)(*(_DWORD *)v2 - 23) <= 1 )
  {
    v11[1] = a1;
    v12[0] = 0xFFFFFFFF00000000LL;
    v13 = 0xFFFFFFFF00000000LL;
    v11[0] = &off_4DBDF0;
    v11[2] = 0;
    v11[3] = 0;
    v12[1] = 0;
    v15 = 0x4FFFFFFFFLL;
    v14 = 0;
    v5 = sub_954F0((__int64)v11, a2, 0);
    v6 = (_DWORD *)v5;
    if ( !v5 || !(unsigned __int8)sub_130320(a1, v5, v5, a2, a2) && !(unsigned __int8)sub_1307A0(a1, v6, v6, a2, a2) )
      goto LABEL_20;
    if ( *v6 == 22 )
      goto LABEL_10;
    if ( !sub_11C8A0(v6, &v10) )
    {
      if ( !under_debugger )
        sub_383060(51694);
      BUG();
    }
    if ( !(unsigned __int8)sub_11FD80(v10, 0, 1) )
    {
LABEL_10:
      v10 = (_DWORD *)(v2 + 32);
      if ( *v6 == 14 && *(_BYTE *)(v2 + 32) == 4 )
      {
        v7 = *(_DWORD **)(v2 + 40);
        if ( *v7 == 5 )
        {
          v10 = v7 + 8;
        }
        else if ( *v7 == 14 )
        {
          sub_11C8A0(v7, &v10);
        }
      }
      v8 = sub_9AD50(a1, (__int64)v11, (__int64)v6, a2);
    }
    else
    {
LABEL_20:
      v8 = 0;
    }
    v9 = v8;
    v11[0] = &off_4DBDF0;
    sub_11CDA0(&v13);
    sub_11CDA0(v12);
    return v9;
  }
  return result;
}

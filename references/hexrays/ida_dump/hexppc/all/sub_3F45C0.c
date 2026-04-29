__int64 __fastcall sub_3F45C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  char *s1; // [rsp+0h] [rbp-118h] BYREF
  __int128 v9; // [rsp+8h] [rbp-110h]
  _QWORD v10[31]; // [rsp+20h] [rbp-F8h] BYREF

  v10[25] = __readfsqword(0x28u);
  s1 = nullptr;
  v9 = 0;
  v3 = sub_3E63A0(a2, (const char **)&s1);
  if ( v3 )
  {
    if ( !(unsigned __int8)func_does_return(a2, &s1, v2) )
    {
LABEL_3:
      LODWORD(v3) = 0;
      goto LABEL_4;
    }
    sub_4004C0(v10, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40));
    v10[23] = a1;
    v10[0] = &off_4D7480;
    v5 = sub_4023E0(v10, v3);
    v10[0] = &off_4D7480;
    LOBYTE(v3) = v5 == 0;
    sub_4005B0(v10);
  }
  else
  {
    LOBYTE(v6) = sub_1CF6E0(s1);
    LODWORD(v3) = v6;
    if ( !(_BYTE)v6 )
      goto LABEL_3;
    if ( !(unsigned __int8)func_does_return(a2, &s1, v7) )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) |= 0x2000u;
      *(_BYTE *)(a1 + 864) = 1;
    }
  }
LABEL_4:
  if ( s1 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(s1);
  }
  return (unsigned int)v3;
}

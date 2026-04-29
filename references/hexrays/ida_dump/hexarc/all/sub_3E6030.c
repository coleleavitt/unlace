__int64 __fastcall sub_3E6030(_QWORD *a1, _DWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  char **v5; // r12
  unsigned int v6; // ebx
  __int64 v8; // rdx
  char *s1; // [rsp+0h] [rbp-118h] BYREF
  __int128 v10; // [rsp+8h] [rbp-110h]
  _QWORD v11[31]; // [rsp+20h] [rbp-F8h] BYREF

  v11[25] = __readfsqword(0x28u);
  *a2 = 0;
  s1 = nullptr;
  v10 = 0;
  v5 = sub_3E24B0(a3, (const char **)&s1);
  if ( v5 )
  {
    if ( !(unsigned __int8)func_does_return(a3, &s1, v4) )
    {
LABEL_3:
      v6 = 0;
      goto LABEL_4;
    }
    sub_3EA720(v11, a1[1], a1[5]);
    v11[23] = a1;
    v11[0] = &off_4B89D8;
    *a2 = sub_3E3C60((__int64)v11, (__int64)v5);
    v11[0] = &off_4B63D8;
    sub_3EA810(v11);
  }
  else
  {
    if ( !sub_1CC1A0(s1) )
      goto LABEL_3;
    if ( !(unsigned __int8)func_does_return(a3, &s1, v8) )
    {
      *a2 = 1;
      *(_DWORD *)(a1[2] + 24LL) |= 0x2000u;
    }
  }
  v6 = 1;
LABEL_4:
  if ( s1 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(s1);
  }
  return v6;
}

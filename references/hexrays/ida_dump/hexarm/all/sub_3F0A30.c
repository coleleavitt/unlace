__int64 __fastcall sub_3F0A30(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  char *v6; // r14
  __int64 v7; // r12
  unsigned int v8; // ebx
  __int64 v10; // rdx
  char *s1; // [rsp+0h] [rbp-118h] BYREF
  __int128 v12; // [rsp+8h] [rbp-110h]
  _QWORD v13[31]; // [rsp+20h] [rbp-F8h] BYREF

  v13[25] = __readfsqword(0x28u);
  s1 = nullptr;
  v12 = 0;
  v4 = sub_40E900(a3, &s1);
  v6 = s1;
  v7 = v4;
  if ( !s1 )
    return 0;
  *a2 = 0;
  if ( !v4 )
  {
    if ( !(unsigned __int8)sub_1D2B20(a1[100], a3, v6) )
    {
      if ( !sub_1D2CC0(v6) )
        goto LABEL_4;
      if ( !(unsigned __int8)func_does_return(a3, a3, v10) )
      {
        *(_DWORD *)(a1[2] + 24LL) |= 0x2000u;
        *a2 = 1;
      }
    }
    goto LABEL_7;
  }
  if ( !(unsigned __int8)func_does_return(a3, &s1, v5) )
  {
LABEL_4:
    v8 = 0;
    goto LABEL_8;
  }
  sub_40D710(v13, a1[1], a1[5]);
  v13[23] = a1;
  v13[0] = &off_4E6480;
  if ( !(unsigned int)sub_40F630(v13, v7) )
  {
    *a2 = 1;
    v13[0] = &off_4E6480;
    sub_40D800(v13);
LABEL_7:
    v8 = 1;
    goto LABEL_8;
  }
  v8 = 0;
  v13[0] = &off_4E6480;
  sub_40D800(v13);
LABEL_8:
  if ( s1 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(s1);
  }
  return v8;
}

__int64 __fastcall sub_3FE910(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  char *v3; // r13
  __int64 v4; // r12
  char **v5; // r12
  char *v6; // rax
  __int64 v7; // r12
  unsigned int v8; // ebx
  char *s1; // [rsp+0h] [rbp-118h] BYREF
  __int128 v11; // [rsp+8h] [rbp-110h]
  _QWORD v12[31]; // [rsp+20h] [rbp-F8h] BYREF

  v12[25] = __readfsqword(0x28u);
  s1 = 0;
  v11 = 0;
  v2 = sub_3E07E0(a2, (__int64 *)&s1);
  v3 = s1;
  v4 = (__int64)v2;
  if ( !s1 )
    return 0;
  if ( v2 )
  {
    sub_408D80(v12, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40));
    v12[23] = a1;
    v12[0] = &off_4EBBF0;
    if ( !(unsigned int)sub_3F24E0((__int64)v12, v4) )
    {
      *(_BYTE *)(a1 + 896) = 1;
      v12[0] = &off_4E9610;
      sub_408E70(v12);
      goto LABEL_19;
    }
    v12[0] = &off_4E9610;
    sub_408E70(v12);
  }
  v5 = sub_3E0ED0(v3);
  if ( v5 )
  {
    if ( !(unsigned __int8)func_does_return() )
    {
LABEL_11:
      v8 = 0;
      goto LABEL_12;
    }
    v6 = v5[3];
    if ( v6 )
    {
      if ( !((unsigned int (__fastcall *)(__int64, char **))v6)(a1, v5) )
        goto LABEL_18;
    }
  }
  v7 = sub_32FE00(v3);
  if ( !v7 )
  {
    if ( (unsigned __int8)sub_1D0560(*(_QWORD *)(a1 + 800), a2, v3) )
      goto LABEL_19;
    if ( !(unsigned __int8)sub_1D0700(v3) )
    {
      if ( !strncmp(v3, "gnu_", 4u) )
        v3 += 4;
      if ( strncmp(v3, "mcount", 6u) || v3[6] && strcmp(v3 + 6, "_nc") )
        goto LABEL_11;
      sub_3F0810(a1, 31);
      goto LABEL_19;
    }
    if ( (unsigned __int8)func_does_return() )
    {
LABEL_19:
      v8 = 1;
      goto LABEL_12;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) |= 0x2000u;
LABEL_18:
    *(_BYTE *)(a1 + 896) = 1;
    goto LABEL_19;
  }
  if ( !(unsigned __int8)func_does_return() )
    goto LABEL_11;
  v8 = sub_3FE420(a1, v7);
LABEL_12:
  if ( s1 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return v8;
}

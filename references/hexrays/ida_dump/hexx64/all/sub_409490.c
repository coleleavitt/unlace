__int64 __fastcall sub_409490(__int64 a1, __int64 a2)
{
  char **p_s1; // rsi
  _UNKNOWN **v4; // rax
  char *v5; // r13
  __int64 v6; // r12
  __int64 v7; // rdx
  char **v8; // r12
  char *v9; // rax
  __int64 v10; // rdx
  const char **v11; // r12
  unsigned int v12; // ebx
  __int64 v14; // rdx
  char *s1; // [rsp+0h] [rbp-118h] BYREF
  __int128 v16; // [rsp+8h] [rbp-110h]
  _QWORD v17[31]; // [rsp+20h] [rbp-F8h] BYREF

  v17[25] = __readfsqword(0x28u);
  p_s1 = &s1;
  s1 = nullptr;
  v16 = 0;
  v4 = sub_3EB450(a2, (__int64 *)&s1);
  v5 = s1;
  v6 = (__int64)v4;
  if ( !s1 )
    return 0;
  if ( v4 )
  {
    sub_413900(v17, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40));
    p_s1 = (char **)v6;
    v17[23] = a1;
    v17[0] = &off_4ECC30;
    if ( !(unsigned int)sub_3FD040((__int64)v17, v6, 0.0) )
    {
      *(_BYTE *)(a1 + 896) = 1;
      v17[0] = &off_4EA590;
      sub_4139F0(v17);
      goto LABEL_19;
    }
    v17[0] = &off_4EA590;
    sub_4139F0(v17);
  }
  v8 = sub_3EBB10(v5);
  if ( v8 )
  {
    if ( !(unsigned __int8)func_does_return(a2, p_s1, v7) )
    {
LABEL_11:
      v12 = 0;
      goto LABEL_12;
    }
    v9 = v8[3];
    if ( v9 )
    {
      p_s1 = v8;
      if ( !((unsigned int (__fastcall *)(__int64, char **))v9)(a1, v8) )
        goto LABEL_18;
    }
  }
  v11 = sub_333280(v5);
  if ( !v11 )
  {
    if ( (unsigned __int8)sub_1D30E0(*(_QWORD *)(a1 + 800), a2, v5) )
      goto LABEL_19;
    if ( !sub_1D3280(v5) )
    {
      if ( !strncmp(v5, "gnu_", 4u) )
        v5 += 4;
      if ( strncmp(v5, "mcount", 6u) || v5[6] && strcmp(v5 + 6, "_nc") )
        goto LABEL_11;
      sub_3FB370(a1, 31);
      goto LABEL_19;
    }
    if ( (unsigned __int8)func_does_return(a2, a2, v14) )
    {
LABEL_19:
      v12 = 1;
      goto LABEL_12;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) |= 0x2000u;
LABEL_18:
    *(_BYTE *)(a1 + 896) = 1;
    goto LABEL_19;
  }
  if ( !(unsigned __int8)func_does_return(a2, p_s1, v10) )
    goto LABEL_11;
  v12 = sub_408FA0(a1, (__int64)v11);
LABEL_12:
  if ( s1 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(s1);
  }
  return v12;
}

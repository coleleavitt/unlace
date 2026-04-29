__int64 __fastcall sub_3E8B60(__int64 a1)
{
  unsigned __int16 v1; // ax
  __int64 v2; // r12
  __int64 v3; // rdx
  __int64 v4; // rbp
  unsigned int v5; // eax
  unsigned int v6; // ebp
  unsigned int v8; // eax
  __int64 v9; // rdx
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v1 = *(_WORD *)(a1 + 48);
  v12 = __readfsqword(0x28u);
  if ( v1 != 163 )
  {
    if ( v1 > 0xA3u )
    {
      if ( (unsigned __int16)(v1 - 164) <= 1u )
        goto LABEL_5;
      return 0;
    }
    if ( v1 != 3 )
    {
      if ( v1 == 140 )
      {
LABEL_5:
        v2 = *(_QWORD *)(a1 + 80);
        goto LABEL_6;
      }
      return 0;
    }
  }
  v2 = *(_QWORD *)(a1 + 120);
LABEL_6:
  s1 = nullptr;
  v11 = 0;
  v4 = sub_3EF7F0(v2, &s1);
  if ( v4 )
  {
    if ( (unsigned __int8)func_does_return(v2, &s1, v3) )
    {
      LOBYTE(v5) = sub_1CE470(*(_QWORD *)(a1 + 8), a1, v4);
      v6 = v5;
      goto LABEL_9;
    }
  }
  else
  {
    LOBYTE(v8) = sub_1CEC40(s1);
    v6 = v8;
    if ( (_BYTE)v8 )
    {
      if ( !(unsigned __int8)func_does_return(v2, &s1, v9) )
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) |= 0x2000u;
      goto LABEL_9;
    }
  }
  v6 = 0;
LABEL_9:
  if ( s1 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(s1);
  }
  return v6;
}

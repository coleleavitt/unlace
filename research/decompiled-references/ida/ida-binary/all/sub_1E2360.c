__int64 __fastcall sub_1E2360(__int64 a1, const char *a2)
{
  int v2; // r12d
  __int64 v3; // rbp
  __int64 v4; // r15
  char v5; // bl
  __int64 result; // rax
  int v7; // [rsp+0h] [rbp-68h] BYREF
  __int64 v8; // [rsp+8h] [rbp-60h]
  __int128 v9; // [rsp+10h] [rbp-58h]
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 220);
  if ( v2 < 0 )
    return 7;
  if ( v2 >= (unsigned __int64)xmmword_8CC398 )
    return 7;
  v3 = 56LL * v2;
  v4 = qword_8CC390 + v3;
  if ( !(qword_8CC390 + v3) )
    return 7;
  v5 = (char)a2;
  if ( ((unsigned __int8)a2 & 1) != 0 )
  {
    if ( dword_8CC5F0 >= 0 )
      return 7;
    if ( ((unsigned __int8)a2 & 2) == 0 )
      goto LABEL_15;
  }
  else if ( ((unsigned __int8)a2 & 2) == 0 )
  {
    goto LABEL_6;
  }
  if ( !(unsigned __int8)sub_1E22F0(v2) )
    return 7;
  if ( v2 >= (unsigned __int64)xmmword_8CC398 )
    return 7;
  v7 = -2;
  v8 = -1;
  v9 = 0;
  if ( !(qword_8CC390 + v3) )
    return 7;
  if ( !(unsigned __int8)sub_235DE0(qword_8CC390 + v3)
    || (a2 = (const char *)&v7, !(unsigned __int8)sub_23F750((unsigned int)v2, &v7)) )
  {
    if ( v7 < -1 )
      return 7;
LABEL_26:
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v8, a2);
    }
    return 7;
  }
  if ( !(unsigned __int8)is_mapped(v8) )
  {
    if ( v7 + 1 < 0 != __OFADD__(1, v7) )
      return 7;
    goto LABEL_26;
  }
  if ( v7 + 1 < 0 == __OFADD__(1, v7) && v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8, (const char *)&v7);
  }
LABEL_6:
  if ( (v5 & 4) == 0 )
    goto LABEL_7;
  if ( dword_8CC5F0 >= 0 )
    return 7;
LABEL_15:
  if ( (*(_BYTE *)(v4 + 36) & 2) != 0 )
    return 7;
LABEL_7:
  if ( (v5 & 8) != 0 && !sub_1DED40(v4) )
    return 7;
  if ( (v5 & 0x10) != 0 && !(unsigned __int8)sub_235DE0(v4) )
    return 7;
  result = 3;
  if ( (v5 & 0x20) != 0 && *(_DWORD *)(v4 + 40) != -1 )
    return 7;
  return result;
}

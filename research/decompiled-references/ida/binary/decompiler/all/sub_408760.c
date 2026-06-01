__int64 __fastcall sub_408760(__int64 a1, int a2)
{
  bool v2; // zf
  unsigned __int16 v4; // ax
  __int64 v5; // rdx
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  int v7; // [rsp+8h] [rbp-30h]
  unsigned int v8; // [rsp+Ch] [rbp-2Ch]
  char v9; // [rsp+10h] [rbp-28h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 892) == -1;
  v10 = __readfsqword(0x28u);
  if ( v2 )
  {
    v4 = *(_WORD *)(a1 + 48);
    if ( v4 != 515 )
    {
      if ( v4 > 0x203u )
      {
        if ( v4 != 604 )
          goto LABEL_2;
      }
      else if ( v4 > 0x100u )
      {
        if ( (unsigned __int16)(v4 - 258) > 0x53u )
          goto LABEL_2;
      }
      else if ( v4 <= 0xF4u )
      {
        goto LABEL_2;
      }
    }
    *(_DWORD *)(a1 + 892) = sub_404F20((_QWORD *)a1);
  }
LABEL_2:
  v6 = a1;
  v7 = a2;
  v8 = -1;
  v9 = 0;
  sub_3EFA20((int *)&v6, 1, 0);
  if ( !v9 && !(unsigned __int8)sub_3F0150((__int64)&v6) )
    sub_3E07C0(&v6, 1, v5);
  return v8;
}

__int64 __fastcall sub_4132E0(__int64 a1, int a2, double a3, __m128 a4)
{
  bool v4; // zf
  unsigned __int16 v6; // ax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  int v8; // [rsp+8h] [rbp-30h]
  unsigned int v9; // [rsp+Ch] [rbp-2Ch]
  char v10; // [rsp+10h] [rbp-28h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v4 = *(_DWORD *)(a1 + 892) == -1;
  v11 = __readfsqword(0x28u);
  if ( v4 )
  {
    v6 = *(_WORD *)(a1 + 48);
    if ( v6 != 515 )
    {
      if ( v6 > 0x203u )
      {
        if ( v6 != 604 )
          goto LABEL_2;
      }
      else if ( v6 > 0x100u )
      {
        if ( (unsigned __int16)(v6 - 258) > 0x53u )
          goto LABEL_2;
      }
      else if ( v6 <= 0xF4u )
      {
        goto LABEL_2;
      }
    }
    *(_DWORD *)(a1 + 892) = sub_40FAA0((_QWORD *)a1);
  }
LABEL_2:
  v7 = a1;
  v8 = a2;
  v9 = -1;
  v10 = 0;
  sub_3FA580((int *)&v7, 1, 0, a3);
  if ( !v10 && !(unsigned __int8)sub_3FACB0((__int64)&v7, a3, a4) )
    sub_3EB430(a3, (__int64)&v7, 1);
  return v9;
}

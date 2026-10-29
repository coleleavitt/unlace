__int64 __fastcall sub_769DF0(char a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned int v10; // [rsp+10h] [rbp-28h] BYREF
  int v11; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v9 = sub_769BC0(0, a2, a3, a4, a5);
  v10 = sub_767DE0(0, a2, v5, v6, v7);
  if ( (_WORD)v9 )
  {
    if ( BYTE2(v9) == 64 )
    {
      if ( (dword_2CD44CC & 0x40000) != 0 )
        goto LABEL_5;
    }
    else
    {
      dword_2CD44C8 |= 0x80u;
    }
    v11 = sub_771250(&v9, 46);
    v10 = sub_771320(&v11, &v10);
  }
LABEL_5:
  BYTE2(v10) = a1;
  sub_772B70(qword_2CD44D0, &v10);
  return v10;
}

__int64 __fastcall sub_75B000(_BYTE *a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  _BYTE *v5; // rbp
  int v6; // eax
  char *v7; // rdx
  char *v8; // r15
  unsigned int v9; // eax
  unsigned int v11; // [rsp+0h] [rbp-48h] BYREF
  int v12; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v5 = a1;
  v11 = 0;
  v6 = (unsigned __int8)*qword_2CD44C0;
  if ( (_BYTE)v6 != 81 )
  {
    v7 = (char *)(unsigned int)(v6 - 48);
    if ( (unsigned __int8)(v6 - 48) <= 9u )
      goto LABEL_3;
LABEL_5:
    sub_76E6C0(a1, a2, v7, a4);
  }
  a2 = nullptr;
  a1 = nullptr;
  if ( !(unsigned int)sub_75A2F0(0, nullptr) )
    goto LABEL_5;
  LOBYTE(v6) = *qword_2CD44C0;
LABEL_3:
  while ( 1 )
  {
    v12 = sub_75AB60((int *)((_BYTE)v6 == 95), a2, v7, a4, a5);
    sub_770B70(&v11, &v12);
    v8 = qword_2CD44C0;
    v9 = *qword_2CD44C0;
    if ( v9 > 0x7F )
      return v11;
    if ( v9 - 48 > 9 )
    {
      if ( (unsigned __int8)(v9 - 70) > 0x19u )
        return v11;
      if ( ((1LL << ((unsigned __int8)v9 - 70)) & 0xB9001) != 0 )
      {
        v12 = 0;
        if ( !(unsigned __int8)sub_76E4E0(sub_75BE70, &v12) )
        {
          qword_2CD44C0 = v8;
          return v11;
        }
        sub_770B70(&v11, &v12);
      }
      else
      {
        if ( (_BYTE)v9 != 81 )
        {
          if ( (_BYTE)v9 != 95 )
            return v11;
          goto LABEL_11;
        }
        if ( !(unsigned int)sub_75A2F0(0, nullptr) )
          return v11;
      }
    }
    if ( v5 && *qword_2CD44C0 == 48 && (unsigned __int8)(qword_2CD44C0[1] - 48) > 9u )
    {
      ++qword_2CD44C0;
      *v5 = 0;
      return v11;
    }
LABEL_11:
    a2 = (_BYTE *)(&qword_28 + 6);
    sub_76FD20(&v11, 46);
    LOBYTE(v6) = *qword_2CD44C0;
  }
}

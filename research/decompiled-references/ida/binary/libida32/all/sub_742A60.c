__int64 __fastcall sub_742A60(__int64 a1, __int64 a2, __int64 a3, char *a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned int *v7; // rcx
  __int64 v8; // r8
  char v10; // al
  unsigned int v11; // [rsp+8h] [rbp-1040h] BYREF
  int v12; // [rsp+Ch] [rbp-103Ch] BYREF
  char *v13; // [rsp+10h] [rbp-1038h] BYREF
  int v14; // [rsp+18h] [rbp-1030h]
  char v15; // [rsp+20h] [rbp-1028h] BYREF
  unsigned __int64 v16; // [rsp+1028h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v11 = 0;
  v13 = &v15;
  v14 = (int)&loc_2000000;
  qword_2CAA5D0 = &v13;
  byte_2CA2EA8 = 1;
  if ( dword_2CAA5C8 == 1879048192 )
  {
    byte_2CA2EA8 = 0;
    v5 = qword_2CAA5B8 - (_QWORD)qword_2CAA5C0;
    if ( (unsigned int)(qword_2CAA5B8 - (_DWORD)qword_2CAA5C0) <= 9
      || *(_WORD *)(qword_2CAA5B8 - 5) != 24415
      || (a4 = (char *)*(unsigned __int8 *)(qword_2CAA5B8 - 3),
          v5 = (unsigned int)((_DWORD)a4 - 48),
          (unsigned __int8)((_BYTE)a4 - 48) > 9u)
      || (a4 = (char *)*(unsigned __int8 *)(qword_2CAA5B8 - 2),
          v5 = (unsigned int)((_DWORD)a4 - 48),
          (unsigned __int8)((_BYTE)a4 - 48) > 9u)
      || (a4 = (char *)*(unsigned __int8 *)(qword_2CAA5B8 - 1),
          v5 = (unsigned int)((_DWORD)a4 - 48),
          (unsigned __int8)((_BYTE)a4 - 48) > 9u) )
    {
LABEL_3:
      if ( !(unsigned __int8)sub_7426E0((__int64)&v11, a2, v5, a4, a5) )
        goto LABEL_18;
LABEL_4:
      if ( *qword_2CAA5C0 )
        goto LABEL_19;
      goto LABEL_5;
    }
    sub_74E2F0(qword_2CAA5B8 - 5);
    dword_2CAA5C8 |= 0x800000u;
    --byte_2CAA5A1;
  }
  else
  {
    v10 = sub_74EBF0(0);
    v5 = (__int64)&byte_2CAA5A0;
    byte_2CAA5A0 = v10;
    if ( (unsigned __int8)v10 <= 1u )
      qword_2CAA5C0 += 11;
  }
  if ( !byte_2CA2EA8 )
    goto LABEL_3;
  if ( (unsigned __int8)sub_742280((int *)&v11, a2, v5, a4, a5) )
    goto LABEL_4;
LABEL_18:
  v12 = sub_73FB40(1);
  sub_7506B0(&v11, &v12);
  if ( *qword_2CAA5C0 )
  {
LABEL_19:
    sub_741D90((__int64)&v11, (int *)((char *)&dword_0 + 1), v6, v7, v8);
    if ( byte_2CA2EA8 )
      goto LABEL_20;
    goto LABEL_6;
  }
LABEL_5:
  if ( byte_2CA2EA8 )
  {
LABEL_20:
    sub_74EE20(&v11);
    return v11;
  }
LABEL_6:
  if ( (unsigned __int8)byte_2CAA5A1 > 1u )
    sub_750840(&v11);
  return v11;
}


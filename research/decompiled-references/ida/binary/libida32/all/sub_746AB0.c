__int64 __fastcall sub_746AB0(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // edx
  char *v3; // rax
  char *v4; // rdx
  char *v6; // [rsp+0h] [rbp-D8h] BYREF
  int v7; // [rsp+8h] [rbp-D0h]
  char v8; // [rsp+10h] [rbp-C8h] BYREF
  char *v9; // [rsp+60h] [rbp-78h] BYREF
  int v10; // [rsp+68h] [rbp-70h]
  char v11; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v12; // [rsp+C8h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  byte_2CA2EA9 = 0;
  qword_2CAA5D0 = &v6;
  qword_2CA2EB0 = (__int64)&v9;
  v9 = &v11;
  qword_2CA2EB8 = 0;
  byte_2CA2EAA = 0;
  v6 = &v8;
  byte_2CA2EAB = 0;
  v7 = 655360;
  v10 = 655360;
  v2 = dword_2CAA5CC & 7;
  if ( v2 == 5 )
  {
    if ( (~(_WORD)dword_2CAA5CC & 0x120) == 0 )
      byte_2CA2EA9 = -1;
  }
  else if ( v2 <= 5 )
  {
    byte_2CA2EA9 = v2 != 1;
  }
  v3 = qword_2CAA5C0;
  if ( *qword_2CAA5C0 == 36 )
  {
    ++qword_2CAA5C0;
    dword_2CAA5C8 |= 0x4000000u;
    return sub_745AD0(0, a2);
  }
  else
  {
    if ( *qword_2CAA5C0 == 64 )
    {
      v4 = qword_2CAA5C0 + 2;
      qword_2CAA5C0 += 2;
      if ( v3[1] != 63 )
        sub_74E200(a1, a2, v4, &qword_2CAA5C0);
      dword_2CAA5C8 |= 0x8000000u;
    }
    return sub_743070(1, a2);
  }
}


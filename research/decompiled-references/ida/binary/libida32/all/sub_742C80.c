__int64 __fastcall sub_742C80(unsigned int *a1, __int64 a2, __int64 a3, char *a4)
{
  char *v4; // rax
  char *v5; // rdx
  char v6; // al
  unsigned __int8 v7; // al
  char *v9; // rax
  unsigned int v10; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v10 = 0;
  v4 = qword_2CAA5C0;
  v5 = ++qword_2CAA5C0;
  v6 = *v4;
  if ( v6 == 81 )
  {
    a1 = &v11;
    a2 = (__int64)"`non-type-template-parameter'";
    sub_74F560(&v11, "`non-type-template-parameter'", 29);
    v10 = v11;
    v9 = qword_2CAA5C0;
    v5 = ++qword_2CAA5C0;
    v6 = *v9;
  }
  if ( !v6 )
    goto LABEL_16;
  if ( (unsigned __int8)(v6 - 48) <= 9u )
  {
    if ( v6 == 57 )
      sub_750270(&v10, 12337);
    else
      sub_74F860(&v10, (unsigned __int8)(v6 + 1));
  }
  else
  {
    if ( v6 != 64 )
    {
      v5 = qword_2CAA5C0;
      a2 = 0;
      while ( 1 )
      {
        v7 = v6 - 65;
        if ( v7 > 0xFu )
          break;
        a4 = v5 + 1;
        qword_2CAA5C0 = v5 + 1;
        a2 = v7 + 16 * a2;
        v6 = *v5;
        if ( *v5 == 64 )
          goto LABEL_10;
        ++v5;
      }
LABEL_16:
      sub_74E200(a1, a2, v5, a4);
    }
    a2 = 0;
LABEL_10:
    sub_74E800(&v11, a2);
    sub_7506B0(&v10, &v11);
  }
  return v10;
}


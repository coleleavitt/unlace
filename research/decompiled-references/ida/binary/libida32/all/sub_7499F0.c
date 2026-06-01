__int64 __fastcall sub_7499F0(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  char *v6; // rax
  char *v7; // rcx
  int v8; // eax

  v5 = (__int64)&qword_2CAA5C0;
  v6 = qword_2CAA5C0;
  v7 = ++qword_2CAA5C0;
  v8 = (unsigned __int8)*v6;
  if ( (_BYTE)v8 == 83 )
    return sub_7471D0(a1, (__int64)a2, (__int64)&qword_2CAA5C0, v7, a5);
  if ( (char)v8 > 83 )
  {
    if ( (_BYTE)v8 == 86 )
      return sub_749930(((_BYTE)v8 == 80) << 7, a2, v5, (__int64)v7, a5);
    goto LABEL_8;
  }
  if ( (_BYTE)v8 != 67 )
  {
    v5 = (unsigned int)(v8 - 79);
    if ( (unsigned __int8)(v8 - 79) <= 1u )
      return sub_749930(((_BYTE)v8 == 80) << 7, a2, v5, (__int64)v7, a5);
LABEL_8:
    sub_74E200(a1, a2, v5, v7);
  }
  return sub_749930(32, a2, (__int64)&qword_2CAA5C0, (__int64)v7, a5);
}


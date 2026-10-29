__int64 __fastcall sub_7338B0(_QWORD *a1, int a2)
{
  unsigned __int16 *v2; // rbx
  int v3; // r13d
  bool v4; // zf
  void (__fastcall *v5)(__int64, _QWORD); // rax
  __int64 result; // rax
  void (__fastcall *v7)(__int64, _QWORD); // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(__int64, _QWORD); // rax

  if ( !*a1 )
  {
    v9 = (void (__fastcall *)(__int64, _QWORD))a1[2];
    if ( !v9 )
      off_2C81BC0();
    v9(36, 0);
    return 0;
  }
  v2 = (unsigned __int16 *)a1[68];
  v3 = 0;
  do
  {
    while ( 1 )
    {
      if ( !*((_BYTE *)v2 + 41) )
      {
        if ( !*((_BYTE *)v2 + 40) )
          goto LABEL_12;
        goto LABEL_6;
      }
      v4 = *((_BYTE *)v2 + 40) == 0;
      *((_BYTE *)v2 + 41) = 0;
      if ( !v4 )
        break;
LABEL_9:
      v2 = *((unsigned __int16 **)v2 + 4);
      if ( (unsigned __int16 *)a1[68] == v2 )
        goto LABEL_13;
    }
    if ( v3 )
    {
      ++v3;
LABEL_6:
      if ( a2 != -1 )
        sub_7349C0(*a1, *v2, (char *)v2 + *((unsigned __int16 *)a1 + 294));
      *((_BYTE *)v2 + 40) = 0;
      goto LABEL_9;
    }
    v7 = (void (__fastcall *)(__int64, _QWORD))a1[2];
    if ( !v7 )
      off_2C81BC0();
    v7(35, *v2);
    v3 = 1;
    if ( *((_BYTE *)v2 + 40) )
      goto LABEL_6;
LABEL_12:
    v2 = *((unsigned __int16 **)v2 + 4);
  }
  while ( (unsigned __int16 *)a1[68] != v2 );
LABEL_13:
  if ( (a2 & 0xFFFFFFFD) != 0 )
  {
    if ( a2 != -1 )
    {
      v5 = (void (__fastcall *)(__int64, _QWORD))a1[2];
      if ( !v5 )
        off_2C81BC0();
      v5(40, 0);
    }
    return 1;
  }
  else
  {
    sub_734B30(*a1);
    if ( a2 != 2 )
      return 1;
    if ( !(unsigned __int8)sub_734800(*a1) )
      return 1;
    v8 = sub_7333F0(a1, a1[70], a1[70]);
    result = 0xFFFFFFFFLL;
    if ( v8 == a1[70] )
      return 1;
  }
  return result;
}

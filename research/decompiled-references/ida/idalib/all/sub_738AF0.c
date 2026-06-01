__int64 __fastcall sub_738AF0(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int *v6; // rbx
  int v8; // r12d
  bool v9; // zf
  void (__fastcall *v10)(__int64, _QWORD); // rax
  __int64 result; // rax
  void (__fastcall *v12)(__int64, __int64); // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  void (__fastcall *v15)(__int64, _QWORD); // rax

  if ( !*a1 )
  {
    v15 = (void (__fastcall *)(__int64, _QWORD))a1[2];
    if ( !v15 )
      off_2C81BC0(0x24u, 0, a3, a4, a5, a6);
    v15(36, 0);
    return 0;
  }
  v6 = (unsigned int *)a1[68];
  v8 = 0;
  do
  {
    while ( 1 )
    {
      if ( !*((_BYTE *)v6 + 41) )
      {
        if ( !*((_BYTE *)v6 + 40) )
          goto LABEL_12;
        goto LABEL_6;
      }
      v9 = *((_BYTE *)v6 + 40) == 0;
      *((_BYTE *)v6 + 41) = 0;
      if ( !v9 )
        break;
LABEL_9:
      v6 = *((unsigned int **)v6 + 4);
      if ( (unsigned int *)a1[68] == v6 )
        goto LABEL_13;
    }
    if ( v8 )
    {
      ++v8;
LABEL_6:
      if ( a2 != -1 )
        sub_73B4C0(*a1, *v6, (char *)v6 + *((unsigned __int16 *)a1 + 294));
      *((_BYTE *)v6 + 40) = 0;
      goto LABEL_9;
    }
    v12 = (void (__fastcall *)(__int64, __int64))a1[2];
    v13 = *v6;
    if ( !v12 )
      off_2C81BC0(0x23u, v13, a3, a4, a5, a6);
    v12(35, v13);
    v8 = 1;
    if ( *((_BYTE *)v6 + 40) )
      goto LABEL_6;
LABEL_12:
    v6 = *((unsigned int **)v6 + 4);
  }
  while ( (unsigned int *)a1[68] != v6 );
LABEL_13:
  if ( (a2 & 0xFFFFFFFD) != 0 )
  {
    if ( a2 != -1 )
    {
      v10 = (void (__fastcall *)(__int64, _QWORD))a1[2];
      if ( !v10 )
        off_2C81BC0(0x28u, 0, a3, a4, a5, a6);
      v10(40, 0);
    }
    return 1;
  }
  else
  {
    sub_73B630(*a1);
    if ( a2 != 2 )
      return 1;
    if ( !(unsigned __int8)sub_73B300(*a1) )
      return 1;
    v14 = sub_738630(a1, a1[70], a1[70]);
    result = 0xFFFFFFFFLL;
    if ( v14 == a1[70] )
      return 1;
  }
  return result;
}

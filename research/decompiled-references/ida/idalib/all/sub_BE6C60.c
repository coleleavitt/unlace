__int64 __fastcall sub_BE6C60(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rax
  unsigned int v8; // ebp
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // r12
  _QWORD *v14; // rbx
  __int64 *v15[4]; // [rsp+8h] [rbp-20h] BYREF

  v15[0] = a1;
  if ( !(unsigned __int8)sub_BC9800(v15, a2) )
    return 0;
  v3 = v15[0];
  v4 = *v15[0];
  v5 = *(__int64 (**)())(*v15[0] + 1248);
  if ( v5 != sub_BC5B10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(v15[0], a2) )
      return 0;
    v3 = v15[0];
    v4 = *v15[0];
  }
  v6 = *(__int64 (**)())(v4 + 1320);
  if ( v6 != sub_BC5BA0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(v3, a2) )
      return 0;
    v3 = v15[0];
    v4 = *v15[0];
  }
  v7 = *(__int64 (**)())(v4 + 1440);
  if ( v7 == sub_BC5C90 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v7)(v3, a2) )
  {
    v8 = sub_BC9420(v15, a2);
    if ( (_BYTE)v8 )
    {
      if ( !sub_B8E0B0(a2) || (v10 = sub_B8D340(a2)) == 0 || (unsigned __int8)sub_BCF900(v15, v10) )
      {
        v11 = sub_9C8850(a2);
        v13 = v12;
        v14 = (_QWORD *)v11;
        if ( (_QWORD *)v11 == v12 )
          return v8;
        while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v15[0] + 32))(v15[0], *v14) )
        {
          if ( v13 == ++v14 )
            return v8;
        }
      }
    }
  }
  return 0;
}

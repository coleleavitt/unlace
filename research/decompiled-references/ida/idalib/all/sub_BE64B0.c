__int64 __fastcall sub_BE64B0(__int64 *a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rdx
  __int64 (*v9)(); // rax
  unsigned int v10; // ebp
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // r12
  _QWORD *v16; // rbx
  __int64 *v17[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = (_QWORD *)*a1;
  v17[0] = a1;
  v4 = (unsigned __int8 (*)(void))v3[27];
  if ( (char *)v4 != (char *)sub_BC58E0 )
  {
    if ( !v4() )
      return 0;
    a1 = v17[0];
    v3 = (_QWORD *)*v17[0];
  }
  v5 = (__int64 (*)())v3[145];
  if ( v5 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v17[0];
    v3 = (_QWORD *)*v17[0];
  }
  v6 = (__int64 (*)())v3[156];
  if ( v6 != sub_BC5B10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(a1, a2) )
      return 0;
    a1 = v17[0];
    v3 = (_QWORD *)*v17[0];
  }
  v7 = (__int64 (*)())v3[165];
  if ( v7 != sub_BC5BA0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v7)(a1, a2) )
      return 0;
    a1 = v17[0];
    v3 = (_QWORD *)*v17[0];
  }
  v8 = (__int64 (*)())v3[172];
  if ( v8 != sub_BC5C10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v8)(a1, a2) )
      return 0;
    a1 = v17[0];
    v3 = (_QWORD *)*v17[0];
  }
  v9 = (__int64 (*)())v3[176];
  if ( v9 == sub_BC5C50 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v9)(a1, a2) )
  {
    v10 = sub_BC9500(v17, a2);
    if ( (_BYTE)v10 )
    {
      if ( !sub_B8E0B0(a2) || (v12 = sub_B8D340(a2)) == 0 || (unsigned __int8)sub_BCF900(v17, v12) )
      {
        v13 = sub_9C8850(a2);
        v15 = v14;
        v16 = (_QWORD *)v13;
        if ( (_QWORD *)v13 == v14 )
          return v10;
        while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v17[0] + 32))(v17[0], *v16) )
        {
          if ( v15 == ++v16 )
            return v10;
        }
      }
    }
  }
  return 0;
}

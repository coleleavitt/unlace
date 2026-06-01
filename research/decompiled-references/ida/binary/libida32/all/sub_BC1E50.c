__int64 __fastcall sub_BC1E50(__int64 *a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rax
  unsigned int v9; // ebp
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // r12
  _QWORD *v15; // rbx
  __int64 *v16[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = (_QWORD *)*a1;
  v16[0] = a1;
  v4 = (unsigned __int8 (*)(void))v3[27];
  if ( (char *)v4 != (char *)sub_BA1BA0 )
  {
    if ( !v4() )
      return 0;
    a1 = v16[0];
    v3 = (_QWORD *)*v16[0];
  }
  v5 = (__int64 (*)())v3[145];
  if ( v5 != sub_BA1D20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v16[0];
    v3 = (_QWORD *)*v16[0];
  }
  v6 = (__int64 (*)())v3[156];
  if ( v6 != sub_BA1DD0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(a1, a2) )
      return 0;
    a1 = v16[0];
    v3 = (_QWORD *)*v16[0];
  }
  v7 = (__int64 (*)())v3[165];
  if ( v7 != sub_BA1E60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v7)(a1, a2) )
      return 0;
    a1 = v16[0];
    v3 = (_QWORD *)*v16[0];
  }
  v8 = (__int64 (*)())v3[172];
  if ( v8 == sub_BA1ED0 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v8)(a1, a2) )
  {
    v9 = sub_BA57C0(v16, a2);
    if ( (_BYTE)v9 )
    {
      if ( !sub_B6A370(a2) || (v11 = sub_B69600(a2)) == 0 || (unsigned __int8)sub_BABBC0(v16, v11) )
      {
        v12 = sub_9A4B10(a2);
        v14 = v13;
        v15 = (_QWORD *)v12;
        if ( (_QWORD *)v12 == v13 )
          return v9;
        while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v16[0] + 32))(v16[0], *v15) )
        {
          if ( v14 == ++v15 )
            return v9;
        }
      }
    }
  }
  return 0;
}


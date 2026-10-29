__int64 __fastcall sub_BC6F90(__int64 *a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rax
  unsigned int v9; // ebp
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // r12
  _QWORD *v14; // rbx
  __int64 *v15; // [rsp+8h] [rbp-20h] BYREF

  v2 = (_QWORD *)*a1;
  v15 = a1;
  v3 = (unsigned __int8 (*)(void))v2[27];
  if ( (char *)v3 != (char *)sub_BA1BA0 )
  {
    if ( !v3() )
      return 0;
    a1 = v15;
    v2 = (_QWORD *)*v15;
  }
  v4 = (__int64 (*)())v2[145];
  if ( v4 != sub_BA1D20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v4)(a1, a2) )
      return 0;
    a1 = v15;
    v2 = (_QWORD *)*v15;
  }
  v5 = (__int64 (*)())v2[156];
  if ( v5 != sub_BA1DD0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v5)(a1, a2) )
      return 0;
    a1 = v15;
    v2 = (_QWORD *)*v15;
  }
  v6 = (__int64 (*)())v2[165];
  if ( v6 != sub_BA1E60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v6)(a1, a2) )
      return 0;
    a1 = v15;
    v2 = (_QWORD *)*v15;
  }
  v7 = (__int64 (*)())v2[166];
  if ( v7 != sub_BA1E70 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v7)(a1, a2) )
      return 0;
    a1 = v15;
    v2 = (_QWORD *)*v15;
  }
  v8 = (__int64 (*)())v2[167];
  if ( v8 == sub_BA1E80 || ((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v8)(a1, a2) )
  {
    v9 = sub_BC6980(&v15, a2);
    if ( (_BYTE)v9 )
    {
      v11 = sub_9A4B10((__int64)a2);
      v13 = v12;
      v14 = (_QWORD *)v11;
      if ( (_QWORD *)v11 == v12 )
        return v9;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v15 + 32))(v15, *v14) )
      {
        if ( v13 == ++v14 )
          return v9;
      }
    }
  }
  return 0;
}


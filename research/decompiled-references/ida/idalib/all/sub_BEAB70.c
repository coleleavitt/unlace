__int64 __fastcall sub_BEAB70(__int64 *a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rax
  unsigned int v8; // ebp
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // r12
  _QWORD *v13; // rbx
  __int64 *v14; // [rsp+8h] [rbp-20h] BYREF

  v2 = (_QWORD *)*a1;
  v14 = a1;
  v3 = (unsigned __int8 (*)(void))v2[27];
  if ( (char *)v3 != (char *)sub_BC58E0 )
  {
    if ( !v3() )
      return 0;
    a1 = v14;
    v2 = (_QWORD *)*v14;
  }
  v4 = (__int64 (*)())v2[145];
  if ( v4 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v4)(a1, a2) )
      return 0;
    a1 = v14;
    v2 = (_QWORD *)*v14;
  }
  v5 = (__int64 (*)())v2[156];
  if ( v5 != sub_BC5B10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v5)(a1, a2) )
      return 0;
    a1 = v14;
    v2 = (_QWORD *)*v14;
  }
  v6 = (__int64 (*)())v2[165];
  if ( v6 != sub_BC5BA0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v6)(a1, a2) )
      return 0;
    a1 = v14;
    v2 = (_QWORD *)*v14;
  }
  v7 = (__int64 (*)())v2[166];
  if ( v7 == sub_BC5BB0 || ((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v7)(a1, a2) )
  {
    v8 = sub_BEA6C0(&v14, a2);
    if ( (_BYTE)v8 )
    {
      v10 = sub_9C8850((__int64)a2);
      v12 = v11;
      v13 = (_QWORD *)v10;
      if ( (_QWORD *)v10 == v11 )
        return v8;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v14 + 32))(v14, *v13) )
      {
        if ( v12 == ++v13 )
          return v8;
      }
    }
  }
  return 0;
}

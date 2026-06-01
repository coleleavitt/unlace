__int64 __fastcall sub_BEB170(__int64 *a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rdx
  __int64 (*v9)(); // rax
  unsigned int v10; // ebp
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // r12
  _QWORD *v15; // rbx
  __int64 *v16; // [rsp+8h] [rbp-20h] BYREF

  v2 = (_QWORD *)*a1;
  v16 = a1;
  v3 = (unsigned __int8 (*)(void))v2[27];
  if ( (char *)v3 != (char *)sub_BC58E0 )
  {
    if ( !v3() )
      return 0;
    a1 = v16;
    v2 = (_QWORD *)*v16;
  }
  v4 = (__int64 (*)())v2[145];
  if ( v4 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v4)(a1, a2) )
      return 0;
    a1 = v16;
    v2 = (_QWORD *)*v16;
  }
  v5 = (__int64 (*)())v2[156];
  if ( v5 != sub_BC5B10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v5)(a1, a2) )
      return 0;
    a1 = v16;
    v2 = (_QWORD *)*v16;
  }
  v6 = (__int64 (*)())v2[165];
  if ( v6 != sub_BC5BA0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v6)(a1, a2) )
      return 0;
    a1 = v16;
    v2 = (_QWORD *)*v16;
  }
  v7 = (__int64 (*)())v2[166];
  if ( v7 != sub_BC5BB0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v7)(a1, a2) )
      return 0;
    a1 = v16;
    v2 = (_QWORD *)*v16;
  }
  v8 = (__int64 (*)())v2[167];
  if ( v8 != sub_BC5BC0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v8)(a1, a2) )
      return 0;
    a1 = v16;
    v2 = (_QWORD *)*v16;
  }
  v9 = (__int64 (*)())v2[170];
  if ( v9 == sub_BC5BF0 || ((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v9)(a1, a2) )
  {
    v10 = sub_BEA6C0(&v16, a2);
    if ( (_BYTE)v10 )
    {
      v12 = sub_9C8850((__int64)a2);
      v14 = v13;
      v15 = (_QWORD *)v12;
      if ( (_QWORD *)v12 == v13 )
        return v10;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v16 + 32))(v16, *v15) )
      {
        if ( v14 == ++v15 )
          return v10;
      }
    }
  }
  return 0;
}

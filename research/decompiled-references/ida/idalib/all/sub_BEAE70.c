__int64 __fastcall sub_BEAE70(__int64 *a1, _QWORD *a2)
{
  __int64 *v2; // rdi
  _QWORD *v3; // rax
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
  __int64 *v15[4]; // [rsp+8h] [rbp-20h] BYREF

  v15[0] = a1;
  if ( !(unsigned __int8)sub_BC9800(v15, (__int64)a2) )
    return 0;
  v2 = v15[0];
  v3 = (_QWORD *)*v15[0];
  v4 = *(__int64 (**)())(*v15[0] + 1248);
  if ( v4 != sub_BC5B10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v4)(v15[0], a2) )
      return 0;
    v2 = v15[0];
    v3 = (_QWORD *)*v15[0];
  }
  v5 = (__int64 (*)())v3[165];
  if ( v5 != sub_BC5BA0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v5)(v2, a2) )
      return 0;
    v2 = v15[0];
    v3 = (_QWORD *)*v15[0];
  }
  v6 = (__int64 (*)())v3[166];
  if ( v6 != sub_BC5BB0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v6)(v2, a2) )
      return 0;
    v2 = v15[0];
    v3 = (_QWORD *)*v15[0];
  }
  v7 = (__int64 (*)())v3[167];
  if ( v7 != sub_BC5BC0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v7)(v2, a2) )
      return 0;
    v2 = v15[0];
    v3 = (_QWORD *)*v15[0];
  }
  v8 = (__int64 (*)())v3[168];
  if ( v8 == sub_BC5BD0 || ((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v8)(v2, a2) )
  {
    v9 = sub_BEA6C0(v15, a2);
    if ( (_BYTE)v9 )
    {
      v11 = sub_9C8850((__int64)a2);
      v13 = v12;
      v14 = (_QWORD *)v11;
      if ( (_QWORD *)v11 == v12 )
        return v9;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v15[0] + 32))(v15[0], *v14) )
      {
        if ( v13 == ++v14 )
          return v9;
      }
    }
  }
  return 0;
}

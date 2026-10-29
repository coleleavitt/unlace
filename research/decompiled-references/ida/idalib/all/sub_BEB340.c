__int64 __fastcall sub_BEB340(__int64 *a1, _QWORD *a2)
{
  __int64 *v2; // rdi
  _QWORD *v3; // rax
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rax
  unsigned int v8; // ebp
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // r12
  _QWORD *v13; // rbx
  __int64 *v14[4]; // [rsp+8h] [rbp-20h] BYREF

  v14[0] = a1;
  if ( !(unsigned __int8)sub_BC9800(v14, (__int64)a2) )
    return 0;
  v2 = v14[0];
  v3 = (_QWORD *)*v14[0];
  v4 = *(__int64 (**)())(*v14[0] + 1248);
  if ( v4 != sub_BC5B10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v4)(v14[0], a2) )
      return 0;
    v2 = v14[0];
    v3 = (_QWORD *)*v14[0];
  }
  v5 = (__int64 (*)())v3[165];
  if ( v5 != sub_BC5BA0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v5)(v2, a2) )
      return 0;
    v2 = v14[0];
    v3 = (_QWORD *)*v14[0];
  }
  v6 = (__int64 (*)())v3[166];
  if ( v6 != sub_BC5BB0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v6)(v2, a2) )
      return 0;
    v2 = v14[0];
    v3 = (_QWORD *)*v14[0];
  }
  v7 = (__int64 (*)())v3[171];
  if ( v7 == sub_BC5C00 || ((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v7)(v2, a2) )
  {
    v8 = sub_BEA6C0(v14, a2);
    if ( (_BYTE)v8 )
    {
      v10 = sub_9C8850((__int64)a2);
      v12 = v11;
      v13 = (_QWORD *)v10;
      if ( (_QWORD *)v10 == v11 )
        return v8;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v14[0] + 32))(v14[0], *v13) )
      {
        if ( v12 == ++v13 )
          return v8;
      }
    }
  }
  return 0;
}

__int64 __fastcall sub_BC1140(__int64 *a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 *v3; // rdi
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rax
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // r12
  _QWORD *v13; // rbx
  __int64 *v14[4]; // [rsp+8h] [rbp-20h] BYREF

  v14[0] = a1;
  v2 = sub_BA5AC0(v14, a2);
  if ( !(_BYTE)v2 )
    return 0;
  v3 = v14[0];
  v4 = v2;
  v5 = *v14[0];
  v6 = *(__int64 (**)())(*v14[0] + 1176);
  if ( v6 != sub_BA1D40 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(v14[0], a2) )
      return 0;
    v3 = v14[0];
    v5 = *v14[0];
  }
  v7 = *(__int64 (**)())(v5 + 1200);
  if ( v7 != sub_BA1D70 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v7)(v3, a2) )
      return 0;
    v3 = v14[0];
    v5 = *v14[0];
  }
  v8 = *(__int64 (**)())(v5 + 1216);
  if ( (v8 == sub_BA1D90 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v8)(v3, a2))
    && (!a2 || (unsigned __int8)sub_BABBC0(v14, a2 + 48)) )
  {
    v10 = sub_9A4B10(a2);
    v12 = v11;
    v13 = (_QWORD *)v10;
    if ( (_QWORD *)v10 == v11 )
      return v4;
    while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v14[0] + 32))(v14[0], *v13) )
    {
      if ( v12 == ++v13 )
        return v4;
    }
  }
  return 0;
}


__int64 __fastcall sub_BE9980(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  unsigned int v7; // ebp
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // r12
  _QWORD *v13; // rbx
  __int64 *v14[4]; // [rsp+8h] [rbp-20h] BYREF

  v14[0] = a1;
  if ( !(unsigned __int8)sub_BC9800(v14, a2) )
    return 0;
  v3 = v14[0];
  v4 = *v14[0];
  v5 = *(__int64 (**)())(*v14[0] + 1736);
  if ( v5 != sub_BC5EE0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(v14[0], a2) )
      return 0;
    v3 = v14[0];
    v4 = *v14[0];
  }
  v6 = *(__int64 (**)())(v4 + 1744);
  if ( v6 != sub_BC5EF0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(v3, a2) )
      return 0;
    v3 = v14[0];
    v4 = *v14[0];
  }
  v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(v4 + 136))(
         v3,
         **(_QWORD **)(a2 + 64),
         *(_QWORD *)(a2 + 64) + 8LL);
  if ( (_BYTE)v7 )
  {
    if ( !sub_B8E0B0(a2) || (v9 = sub_B8D340(a2)) == 0 || (unsigned __int8)sub_BCF900(v14, v9) )
    {
      v10 = sub_9C8850(a2);
      v12 = v11;
      v13 = (_QWORD *)v10;
      if ( (_QWORD *)v10 == v11 )
        return v7;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v14[0] + 32))(v14[0], *v13) )
      {
        if ( v12 == ++v13 )
          return v7;
      }
    }
  }
  return 0;
}

__int64 __fastcall sub_BC39B0(__int64 *a1, __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ebp
  __int64 (*v5)(); // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // r12
  _QWORD *v10; // rbx
  __int64 *v12[4]; // [rsp+8h] [rbp-20h] BYREF

  v12[0] = a1;
  v3 = sub_BA5AC0(v12, a2);
  if ( (_BYTE)v3 )
  {
    v4 = v3;
    v5 = *(__int64 (**)())(*v12[0] + 1496);
    if ( (v5 == sub_BA1FC0 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(v12[0], a2))
      && (!sub_B6A370(a2) || (v6 = sub_B69600(a2)) == 0 || (unsigned __int8)sub_BABBC0(v12, v6)) )
    {
      v7 = sub_9A4B10(a2);
      v9 = v8;
      v10 = (_QWORD *)v7;
      if ( (_QWORD *)v7 == v8 )
        return v4;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v12[0] + 32))(v12[0], *v10) )
      {
        if ( v9 == ++v10 )
          return v4;
      }
    }
  }
  return 0;
}


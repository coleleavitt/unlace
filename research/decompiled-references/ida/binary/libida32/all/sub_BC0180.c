__int64 __fastcall sub_BC0180(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  unsigned int v5; // ebp
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // r12
  _QWORD *v10; // rbx
  _QWORD *v11; // [rsp+8h] [rbp-20h] BYREF

  v2 = *a1;
  v11 = a1;
  v3 = *(unsigned __int8 (**)(void))(v2 + 216);
  if ( (char *)v3 != (char *)sub_BA1BA0 )
  {
    if ( !v3() )
      return 0;
    a1 = v11;
    v2 = *v11;
  }
  v4 = *(__int64 (**)())(v2 + 1024);
  if ( v4 != sub_BA1C10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v4)(a1, a2) )
      return 0;
    a1 = v11;
    v2 = *v11;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(v2 + 96))(a1, *(_QWORD *)(a2 + 72)) )
  {
    v5 = sub_BABBC0(&v11, a2 + 40);
    if ( (_BYTE)v5 )
    {
      v7 = sub_9A4B10(a2);
      v9 = v8;
      v10 = (_QWORD *)v7;
      if ( (_QWORD *)v7 == v8 )
        return v5;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v11 + 32LL))(v11, *v10) )
      {
        if ( v9 == ++v10 )
          return v5;
      }
    }
  }
  return 0;
}


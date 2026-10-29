__int64 __fastcall sub_BC6810(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rax
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rbx
  unsigned __int8 v8; // al
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rbp
  _QWORD *v13; // rbx
  __int64 result; // rax
  _QWORD *v15; // [rsp+8h] [rbp-20h] BYREF

  v2 = *a1;
  v15 = a1;
  v3 = *(unsigned __int8 (**)(void))(v2 + 216);
  if ( (char *)v3 != (char *)sub_BA1BA0 )
  {
    if ( !v3() )
      return 0;
    a1 = v15;
    v2 = *v15;
  }
  v4 = *(__int64 (**)())(v2 + 1016);
  if ( v4 != sub_BA1C00 && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v4)(a1, a2) )
    return 0;
  v5 = *(_QWORD *)(a2 + 88);
  v6 = *(_QWORD *)(v5 + 23264);
  v7 = *(_QWORD *)(v5 + 23256);
  if ( v6 - v7 != 8 || (*(_BYTE *)(*(_QWORD *)v7 + 28LL) & 0x7F) != 0 )
  {
    for ( ; v6 != v7; v7 += 8 )
    {
      v8 = *(_BYTE *)(*(_QWORD *)v7 + 28LL) & 0x7F;
      if ( ((v8 + 121) & 0x7Fu) > 1
        && ((unsigned int)v8 - 59 > 2
         || (v9 = *(_QWORD *)(*(_QWORD *)v7 + 128LL)) == 0
         || (*(_BYTE *)(v9 + 10) & 0x20) == 0)
        && !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v15 + 56LL))(v15) )
      {
        return 0;
      }
    }
  }
  else if ( !(unsigned __int8)sub_BABBC0(&v15, a2 + 40) )
  {
    return 0;
  }
  v10 = sub_9A4B10(a2);
  v12 = v11;
  v13 = (_QWORD *)v10;
  if ( (_QWORD *)v10 == v11 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v15 + 32LL))(v15, *v13);
    if ( !(_BYTE)result )
      break;
    if ( v12 == ++v13 )
      return 1;
  }
  return result;
}


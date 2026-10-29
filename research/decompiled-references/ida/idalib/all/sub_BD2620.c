__int64 __fastcall sub_BD2620(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rax
  _QWORD *v5; // rbx
  __int64 v6; // r12
  __int64 result; // rax

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 232);
  if ( (char *)v3 != (char *)sub_BC5900 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 6848);
  if ( v4 != sub_BC7320 && !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
    return 0;
  if ( a2 != *(_QWORD *)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF0LL)
    && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 128))(a1) )
  {
    return 0;
  }
  v5 = (_QWORD *)(a2 + 48);
  v6 = a2 + 48 + (*(_WORD *)(a2 + 18) & 0x3F8);
  if ( a2 + 48 == v6 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 128))(a1, *v5);
    if ( !(_BYTE)result )
      break;
    if ( (_QWORD *)v6 == ++v5 )
      return 1;
  }
  return result;
}

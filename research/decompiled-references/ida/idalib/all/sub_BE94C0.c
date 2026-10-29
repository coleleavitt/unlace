__int64 __fastcall sub_BE94C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // r12
  _QWORD *v10; // rbx
  __int64 result; // rax

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 216);
  if ( (char *)v3 != (char *)sub_BC58E0 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 1160);
  if ( v4 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  v5 = *(__int64 (**)())(v2 + 1696);
  if ( v5 != sub_BC5E90 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  v6 = *(_QWORD **)(a2 + 64);
  if ( v6 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(v2 + 136))(a1, *v6, v6 + 1) )
      goto LABEL_6;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v2 + 128))(a1, *(_QWORD *)(a2 + 56)) )
    return 0;
LABEL_6:
  v7 = sub_9C8850(a2);
  v9 = v8;
  v10 = (_QWORD *)v7;
  if ( (_QWORD *)v7 == v8 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 32))(a1, *v10);
    if ( !(_BYTE)result )
      break;
    if ( v9 == ++v10 )
      return 1;
  }
  return result;
}

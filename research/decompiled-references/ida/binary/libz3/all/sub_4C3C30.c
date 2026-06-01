__int64 __fastcall sub_4C3C30(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // r13
  __int64 v6; // rbp

  v3 = *(_QWORD *)(a1 + 112);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) )
    return *(_QWORD *)(a1 + 112);
  v4 = *(_QWORD **)(a1 + 24);
  if ( !v4 )
    return 0;
  v5 = &v4[*((unsigned int *)v4 - 1)];
  if ( v5 == v4 )
    return 0;
  while ( 1 )
  {
    v6 = *v4;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v4 + 24LL))(*v4, a2) )
      break;
    if ( v5 == ++v4 )
      return 0;
  }
  return v6;
}


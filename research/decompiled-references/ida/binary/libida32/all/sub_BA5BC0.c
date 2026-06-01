__int64 __fastcall sub_BA5BC0(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  __int64 (*v4)(); // rdx
  unsigned int v5; // r12d
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 *v9; // [rsp+8h] [rbp-20h] BYREF

  v9 = a1;
  if ( !(unsigned __int8)sub_BA5B20(&v9, a2) )
    return 0;
  v2 = v9;
  v3 = *v9;
  v4 = *(__int64 (**)())(*v9 + 4016);
  if ( v4 != sub_BA2370 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(v9, a2) )
      return 0;
    v2 = v9;
    v3 = *v9;
  }
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v3 + 96))(v2, *(_QWORD *)(a2 + 16));
  if ( (_BYTE)v5 )
  {
    v6 = a2 + 24;
    v7 = a2 + 8LL * *(unsigned __int16 *)(a2 + 4) + 16;
    if ( a2 + 24 == v7 )
      return v5;
    while ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v9 + 96))(v9) )
    {
      v6 += 8;
      if ( v7 == v6 )
        return v5;
    }
  }
  return 0;
}


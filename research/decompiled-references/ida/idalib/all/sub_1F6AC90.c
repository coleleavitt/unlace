_QWORD *__fastcall sub_1F6AC90(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rax

  v3 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 48LL))(a1);
  if ( v3 )
  {
    v4 = v3;
    while ( 1 )
    {
      if ( *(char *)(v4 + 29) < 0 )
      {
        if ( !(unsigned int)sub_B88070(v4) )
          return a1;
      }
      else
      {
        v16 = (_QWORD *)(*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
          v16 = (_QWORD *)*v16;
        v17 = sub_B8EAA0((__int64)v16);
        v18 = a1[2];
        v19 = v17;
        if ( (v18 & 4) != 0 )
          v5 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v5 = v18 & 0xFFFFFFFFFFFFFFF8LL;
        v10 = sub_B8EAA0(v5);
        if ( v10 )
        {
          v11 = sub_B91570(v19, a2, v6, v7, v8, v9);
          if ( v11 == sub_B91570(v10, a2, v12, v13, v14, v15) )
            return (_QWORD *)v4;
        }
      }
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
      if ( !v4 )
        return a1;
    }
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  v4 = v20;
  if ( !v20 || *(char *)(v20 + 29) < 0 )
    return a1;
  return (_QWORD *)v4;
}

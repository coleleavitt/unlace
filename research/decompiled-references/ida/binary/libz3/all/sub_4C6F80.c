__int64 __fastcall sub_4C6F80(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rbx
  _QWORD *v5; // r14
  __int64 v6; // rbp
  __int64 v9; // rbp
  __int64 v10; // rax
  _QWORD v11[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( a3 != -1 )
  {
    v9 = sub_4C3DD0(a1, a3);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, a2, a3) )
      return (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v9 + 48LL))(v9, a2, a3);
  }
  v3 = *(_QWORD *)(a1 + 112);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v3 + 24LL))(*(_QWORD *)(a1 + 112), a2) )
    return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 40LL))(v3, a2);
  if ( (unsigned __int8)sub_4C6E10(a1, a2, v11) )
    return v11[0];
  v4 = *(_QWORD **)(a1 + 24);
  if ( v4 && (v5 = &v4[*((unsigned int *)v4 - 1)], v5 != v4) )
  {
    while ( 1 )
    {
      v6 = *v4;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v4 + 24LL))(*v4, a2) )
        return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 40LL))(v6, a2);
      if ( v5 == ++v4 )
        goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    v10 = sub_579060(a1);
    return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 40LL))(v10, a2);
  }
}


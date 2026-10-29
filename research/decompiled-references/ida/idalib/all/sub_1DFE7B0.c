_DWORD *__fastcall sub_1DFE7B0(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _DWORD *v5; // rbx
  _DWORD *v6; // r12
  _DWORD *v7; // r14

  v4 = 0x6DB6DB6DB6DB6DB7LL * ((a2 - (__int64)a1) >> 3);
  v5 = a1;
  if ( v4 >> 2 > 0 )
  {
    v6 = &a1[56 * (v4 >> 2)];
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _DWORD *, bool))a3)(*(_QWORD *)(a3 + 8), v5, v5[2] != 13) )
    {
      v7 = v5 + 14;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _DWORD *, bool))a3)(*(_QWORD *)(a3 + 8), v5 + 14, v5[16] != 13) )
        return v7;
      v7 = v5 + 28;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _DWORD *, bool))a3)(*(_QWORD *)(a3 + 8), v5 + 28, v5[30] != 13) )
        return v7;
      v7 = v5 + 42;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _DWORD *, bool))a3)(*(_QWORD *)(a3 + 8), v5 + 42, v5[44] != 13) )
        return v7;
      v5 += 56;
      if ( v6 == v5 )
      {
        v4 = 0x6DB6DB6DB6DB6DB7LL * ((a2 - (__int64)v5) >> 3);
        goto LABEL_11;
      }
    }
    return v5;
  }
LABEL_11:
  if ( v4 == 2 )
    goto LABEL_17;
  if ( v4 == 3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _DWORD *, bool))a3)(*(_QWORD *)(a3 + 8), v5, v5[2] != 13) )
      return v5;
    v5 += 14;
LABEL_17:
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _DWORD *, bool))a3)(*(_QWORD *)(a3 + 8), v5, v5[2] != 13) )
    {
      v5 += 14;
      goto LABEL_19;
    }
    return v5;
  }
  if ( v4 != 1 )
    return (_DWORD *)a2;
LABEL_19:
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _DWORD *, bool))a3)(*(_QWORD *)(a3 + 8), v5, v5[2] != 13) )
    return (_DWORD *)a2;
  return v5;
}

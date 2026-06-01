__int64 __fastcall sub_35F660(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        char *a8,
        const char *a9)
{
  __int64 v9; // rax
  unsigned int v10; // ebp
  __int64 custom_data_type; // rax
  __int64 v14; // r12
  __int64 v15; // r8
  __int64 (__fastcall *v16)(_QWORD, _QWORD, _QWORD); // rax
  _QWORD *v17; // r15
  __int64 v18; // r12
  unsigned int v19; // r13d
  __int64 v20; // r13
  __int64 *v21; // rax
  __int64 v22; // r14
  __int64 v23; // r12
  __int64 result; // rax
  unsigned int v25; // eax

  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 88LL);
  if ( !*(_BYTE *)(v9 + 293) )
    return 0xFFFFFFFFLL;
  v10 = a2;
  custom_data_type = get_custom_data_type((unsigned int)*(__int16 *)(v9 + 88));
  v14 = custom_data_type;
  if ( !custom_data_type )
    return 0xFFFFFFFFLL;
  v15 = *(_QWORD *)(custom_data_type + 48);
  if ( !v15 )
    return 0xFFFFFFFFLL;
  v16 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(custom_data_type + 72);
  if ( !v16 )
  {
    v25 = a7 & 0xFFFFFFFD;
    if ( (*(_BYTE *)(v14 + 16) & 1) == 0 )
      v25 = a7;
    LOBYTE(result) = sub_35EA80(
                       a1,
                       a2,
                       a3,
                       a4,
                       v15,
                       *(_DWORD *)(v14 + 56),
                       a5,
                       *(_QWORD *)a6,
                       *(_DWORD *)(a6 + 8),
                       v25,
                       a8,
                       a9,
                       nullptr);
    return (unsigned __int8)result;
  }
  if ( a3 )
  {
    v17 = (_QWORD *)v14;
    v18 = a6;
    while ( 1 )
    {
      v19 = v16(v17[1], v10, a3);
      if ( v19 - 1 >= a3 )
        break;
      if ( (unsigned __int8)sub_35EA80(
                              a1,
                              v10,
                              v19,
                              a4,
                              v17[6],
                              v19,
                              a5,
                              *(_QWORD *)v18,
                              *(_DWORD *)(v18 + 8),
                              a7,
                              a8,
                              a9,
                              nullptr) )
        return 1;
      v10 += v19;
      a3 -= v19;
      if ( !a3 )
        return 0;
      v16 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v17[9];
    }
    v20 = v18;
    v21 = *(__int64 **)(a1 + 88);
    v22 = *v21;
    v23 = *(_QWORD *)(*v21 + 984);
    if ( (unsigned int)nbits(v10) != 8 && *(_DWORD *)(v22 + 780) == 8 )
      v23 = *(_QWORD *)(v22 + 992);
    LOBYTE(result) = sub_35EA80(
                       a1,
                       v10,
                       a3,
                       1024,
                       v23,
                       1u,
                       a5,
                       *(_QWORD *)v20,
                       *(_DWORD *)(v20 + 8),
                       a7,
                       a8,
                       a9,
                       nullptr);
    return (unsigned __int8)result;
  }
  return 0;
}


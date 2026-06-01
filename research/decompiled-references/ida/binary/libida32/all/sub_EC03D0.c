__int64 __fastcall sub_EC03D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 **v18; // r13
  _QWORD *v19; // r12
  __int64 **v20; // r15
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // r13
  __int64 v27; // r14
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 *v31; // [rsp+0h] [rbp-48h]

  if ( a1[6] < a3 )
    return 1;
  if ( !(unsigned __int8)sub_EB53D0((__int64)a1, *(_QWORD *)a2, a3, a4, a5, a6) )
    return 0;
  v13 = sub_EBA840(*a1, *(char **)a2, v9, v10, v11, v12);
  v18 = *(__int64 ***)(a2 + 16);
  v19 = v13;
  v20 = &v18[*(unsigned int *)(a2 + 24)];
  if ( v18 == v20 )
  {
LABEL_10:
    v22 = *(_QWORD *)(a2 + 64);
    if ( v22 && *(_QWORD *)(v22 + 72) == a2 && !(unsigned __int8)sub_EC03D0(a1, v22, a3) )
      return 0;
    v26 = sub_B5ABC0(*(_QWORD *)a2, v22, v14, (__int64)v15, v16, v17);
    if ( v26 )
    {
LABEL_13:
      if ( (*(_BYTE *)(v26 + 68) & 1) == 0 )
      {
        v27 = v26;
        if ( *(char *)(v26 + 29) < 0 )
          v27 = sub_B4E9E0(v26);
        v28 = *(unsigned int *)(v27 + 68);
        if ( (v28 & 0xFFFFFFF0) == 0 )
        {
          sub_B5AD70(v27, v22, v28, v23, v24, v25);
          LODWORD(v28) = *(_DWORD *)(v27 + 68);
        }
        v29 = sub_A742B0(*a1, *(_QWORD *)(v19[6] + 8LL * (((unsigned int)v28 >> 4) - 1)));
        v22 = v26;
        result = sub_EBE290(a1, v26, v29 + a3);
        if ( !(_BYTE)result )
          return result;
      }
      while ( 1 )
      {
        v30 = *(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v26 = v30;
        if ( !v30 )
          break;
        if ( (*(_BYTE *)(v30 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_13;
      }
    }
    return 1;
  }
  while ( 1 )
  {
    v15 = *v18;
    if ( !*((_BYTE *)*v18 + 8) )
    {
      v31 = *v18;
      v21 = sub_EB7560(v19 + 9, *v15, v14, (__int64)v15, v16, v17);
      result = sub_EC03D0(a1, v31, v21 + a3);
      if ( !(_BYTE)result )
        return result;
    }
    if ( v20 == ++v18 )
      goto LABEL_10;
  }
}


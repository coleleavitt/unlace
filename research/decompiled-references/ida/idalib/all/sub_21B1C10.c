__int64 __fastcall sub_21B1C10(__int64 a1, unsigned __int64 *a2)
{
  __int64 (*v2)(void); // rdx
  char v3; // al
  __int64 v4; // r12
  unsigned __int64 v5; // rbx
  __int16 v6; // ax
  unsigned __int64 *v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned int v10; // ebx
  __int16 v11; // dx
  unsigned int *v12; // rcx
  unsigned __int32 v13; // eax
  __int64 v14; // rdi
  unsigned __int32 v15; // edx

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v2 == (char *)sub_21B1110 )
  {
    v3 = *(_DWORD *)(a1 + 8) == 12;
  }
  else
  {
    v3 = v2();
    v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 64LL);
  }
  v4 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    v5 = _byteswap_uint64(*a2);
    if ( (char *)v2 != (char *)sub_21B1110 )
      ((void (__fastcall *)(__int64))v2)(a1);
    v6 = __ROL2__(*(_WORD *)(*(_QWORD *)(a1 + 48) + 2LL), 8);
    if ( v6 )
    {
      v7 = (unsigned __int64 *)(v4 + 16);
      while ( 1 )
      {
        v8 = _byteswap_uint64(*v7);
        if ( v5 >= v8 && v8 + _byteswap_uint64(v7[1]) > v5 )
          break;
        v7 += 9;
        if ( (unsigned __int64 *)(v4 + 72LL * (unsigned __int16)(v6 - 1) + 88) == v7 )
          return -1;
      }
      return v5 - v8;
    }
    return -1;
  }
  v10 = *(_DWORD *)a2;
  if ( (char *)v2 != (char *)sub_21B1110 )
    ((void (__fastcall *)(__int64))v2)(a1);
  v11 = __ROL2__(*(_WORD *)(*(_QWORD *)(a1 + 48) + 2LL), 8);
  if ( !v11 )
    return -1;
  v12 = (unsigned int *)(v4 + 12);
  v13 = _byteswap_ulong(v10);
  v14 = v4 + 40LL * (unsigned __int16)(v11 - 1) + 52;
  while ( 1 )
  {
    v15 = _byteswap_ulong(*v12);
    if ( v15 <= v13 && v15 + _byteswap_ulong(v12[1]) > v13 )
      break;
    v12 += 10;
    if ( v12 == (unsigned int *)v14 )
      return -1;
  }
  return v13 - v15;
}

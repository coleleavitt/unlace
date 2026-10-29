__int64 __fastcall sub_7B0B60(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, __int64, __int64, unsigned __int16 *, size_t, __int64),
        __int64 a4)
{
  char v6; // al
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int16 *v9; // rax
  __int64 v10; // rcx
  unsigned __int16 v11; // dx
  unsigned __int16 *v12; // r9
  __int64 v13; // rsi
  void *v14; // r10
  unsigned __int32 v15; // edi
  unsigned __int32 v16; // edx
  unsigned int v17; // ebx
  __int16 *v19; // rax
  __int16 *v20; // rbx
  __int64 v21; // rax
  unsigned __int16 v22; // r14
  __int64 v23; // r15
  __int64 v24; // rax
  unsigned __int16 *v25; // r15
  size_t v26; // r8
  __int64 v27; // rsi
  __int64 v28; // r10
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // [rsp+10h] [rbp-48h]
  size_t v32; // [rsp+18h] [rbp-40h]

  v6 = is_cvt64(a1, a2, a3);
  v7 = *(_QWORD *)(a1 + 1736);
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v6 )
  {
    if ( !v8 )
      v8 = *(_QWORD *)v7;
    *(_WORD *)(v7 + 53) = 9;
    *(_QWORD *)(v7 + 56) = swap64(a2);
    sub_7443D0(v8, (unsigned __int16 *)(v7 + 53));
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          sub_741460(v8);
          v20 = v19;
          if ( v19 )
          {
            v21 = (__int64)v19 - 1;
            if ( v21 )
            {
              v22 = *v20;
              if ( *((_BYTE *)v20 + 2) == 46 )
                continue;
            }
          }
          goto LABEL_16;
        }
        while ( v22 <= 9u );
        v23 = v21 + v22 + 3;
        v24 = swap64(*(_QWORD *)((char *)v20 + 3));
        v25 = (unsigned __int16 *)(v23 + 2);
        v26 = *(v25 - 1);
        v27 = *((unsigned __int8 *)v20 + 11);
        v28 = v24;
        if ( v22 != 11 )
          break;
        v29 = *((unsigned __int8 *)v20 + 12);
LABEL_29:
        if ( a3 )
        {
          v17 = a3(v28, v27, v29, v25, v26, a4);
          if ( v17 )
            goto LABEL_17;
        }
      }
      if ( v22 == 18 )
      {
        v32 = *(v25 - 1);
        v31 = v24;
        v30 = swap64(*(_QWORD *)(v20 + 6));
        v27 = (unsigned __int8)v27;
        v28 = v31;
        v26 = v32;
        v29 = v30;
        if ( (_BYTE)v27 != 83 || v31 != *(_QWORD *)(v8 + 5896) || (*(_BYTE *)(v8 + 6016) & 1) != 0 )
          goto LABEL_29;
        sub_7AE780((_QWORD *)v8, v30 >> 8, v25, v32);
      }
      else if ( v22 == 10 )
      {
        v29 = -1;
        goto LABEL_29;
      }
    }
  }
  if ( !v8 )
    v8 = *(_QWORD *)v7;
  *(_DWORD *)(v7 + 56) = _byteswap_ulong(a2);
  *(_WORD *)(v7 + 53) = 5;
  sub_7443D0(v8, (unsigned __int16 *)(v7 + 53));
LABEL_5:
  sub_741460(v8);
  while ( v9 )
  {
    v10 = (__int64)v9 - 1;
    if ( v9 == (__int16 *)((char *)&dword_0 + 1) )
      break;
    v11 = *v9;
    if ( *((_BYTE *)v9 + 2) != 46 )
      break;
    if ( v11 <= 5u )
      goto LABEL_5;
    v12 = (unsigned __int16 *)(v10 + v11 + 3);
    v13 = *((unsigned __int8 *)v9 + 7);
    v14 = (void *)(v10 + v11 + 5);
    v15 = _byteswap_ulong(*(_DWORD *)((char *)v9 + 3));
    switch ( v11 )
    {
      case 7u:
        v16 = *((unsigned __int8 *)v9 + 8);
        break;
      case 0xAu:
        v16 = _byteswap_ulong(*((_DWORD *)v9 + 2));
        if ( (_BYTE)v13 == 83 && v15 == *(_QWORD *)(v8 + 5896) && (*(_BYTE *)(v8 + 6016) & 1) == 0 )
        {
          sub_7AE780((_QWORD *)v8, v16 >> 8, v14, *v12);
          goto LABEL_5;
        }
        break;
      case 6u:
        v16 = -1;
        break;
      default:
        goto LABEL_5;
    }
    if ( !a3 )
      goto LABEL_5;
    v17 = a3(v15, v13, v16, (unsigned __int16 *)v14, *v12, a4);
    if ( v17 )
      goto LABEL_17;
    sub_741460(v8);
  }
LABEL_16:
  v17 = 0;
LABEL_17:
  sub_7B0910(v8);
  return v17;
}

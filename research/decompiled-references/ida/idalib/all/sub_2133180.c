__int64 __fastcall sub_2133180(__int64 a1, unsigned int a2, __int64 *a3, __int64 a4)
{
  __m128 *v8; // rsi
  unsigned int v9; // ebx
  _QWORD **v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64, __int64); // rax
  __int64 v12; // rdi
  int v13; // eax
  char v14; // dl
  unsigned int v15; // eax
  __int64 v16; // r9
  unsigned int *v17; // rax
  __int64 v18; // rdi
  unsigned int v19; // eax
  char v20; // dl
  __int64 i; // [rsp+18h] [rbp-50h]
  int v23; // [rsp+20h] [rbp-48h] BYREF
  int v24; // [rsp+24h] [rbp-44h] BYREF
  __int64 v25[8]; // [rsp+28h] [rbp-40h] BYREF

  for ( i = *(_QWORD *)(a1 + 184); ; *a3 = sub_210EB10(v23, *a3, v25[0], *(_QWORD **)(a1 + 16), i, v16) )
  {
    v17 = *(unsigned int **)(a1 + 48);
    v18 = *(_QWORD *)(a1 + 40);
    v23 = 0;
    v19 = *v17;
    v20 = *(_BYTE *)(v18 + 376);
    if ( *(_BYTE *)(a1 + 860) )
    {
      v8 = (__m128 *)&v23;
      v9 = sub_2128E70(v19, &v23, v20);
      if ( a2 > v9 )
        return 0;
    }
    else
    {
      v8 = (__m128 *)v19;
      v9 = sub_212A5C0(v18, v19, &v23, v20);
      if ( a2 > v9 )
        return 0;
    }
    sub_2132C70(a1, v8);
    v10 = *(_QWORD ***)(a1 + 8);
    v11 = (__int64 (__fastcall *)(__int64, __int64, __int64))(*v10)[3];
    if ( v11 == sub_2128D30 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *, __int64, _QWORD))(*v10[1] + 208LL))(
             v10[1],
             v25,
             a4,
             0) )
      {
        return 1;
      }
    }
    else if ( (unsigned __int8)v11((__int64)v10, (__int64)v25, a4) )
    {
      return 1;
    }
    v12 = *(_QWORD *)(a1 + 40);
    v13 = **(_DWORD **)(a1 + 48);
    v14 = *(_BYTE *)(v12 + 376);
    v15 = *(_BYTE *)(a1 + 860) ? sub_2128E70(v13, &v24, v14) : sub_212A5C0(v12, v13, &v24, v14);
    if ( v9 < v15 && (unsigned __int8)sub_2133180(a1, v9 + 1, v25, a4) )
      break;
  }
  return 1;
}

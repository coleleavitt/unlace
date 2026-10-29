__int64 __fastcall sub_E3CA0(__int64 a1, double a2, double a3, __int64 a4, __int64 **a5)
{
  __int64 (*v6)(); // rax
  int v8; // ebp
  int v9; // eax
  const char *v10; // rsi
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // [rsp+8h] [rbp-C0h]

  v6 = *(__int64 (**)())(**a5 + 120);
  if ( v6 == sub_B6E10 || ((unsigned int (__fastcall *)(__int64 *, _QWORD))v6)(*a5, *(_QWORD *)(a1 + 8)) != 2 )
    return 0;
  v8 = (*(__int64 (__fastcall **)(__int64 *))(**a5 + 56))(*a5);
  v9 = **(_DWORD **)(a1 + 16);
  if ( v9 != -1 && v8 == v9 )
    return 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(**a5 + 72))(*a5, a1 + 32) )
  {
    if ( (*((_BYTE *)&debug + 2) & 4) != 0 )
    {
      v10 = "<unnamed>";
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(**a5 + 16))(*a5, &qword_251070) )
      {
        v10 = s1;
        if ( (_QWORD)xmmword_251078 )
          v10 = (const char *)qword_251070;
      }
      sub_91EA0((__int64)"Lookup local variable for function: %s. (bounds: ", v10);
      v11 = *(_QWORD *)(a1 + 40);
      v12 = debug;
      if ( !v11 )
      {
LABEL_21:
        if ( (v12 & 0x40000) != 0 )
          sub_91EA0((__int64)")\n");
        goto LABEL_14;
      }
      v13 = *(_QWORD *)(a1 + 32);
      v14 = 0;
      if ( (debug & 0x40000) != 0 )
      {
        while ( 1 )
        {
          v15 = (int)v14++;
          v16 = *(unsigned int *)(v13 + 8 * v15);
          sub_91EA0((__int64)"[%a -> %a[", a2, a3);
          v12 = debug;
          if ( v11 == v14 )
            goto LABEL_21;
          if ( (debug & 0x40000) != 0 )
          {
            v17 = *(_QWORD *)(a1 + 32);
            sub_91EA0((__int64)" ", v16);
            v13 = v17;
            if ( (debug & 0x40000) != 0 )
              continue;
          }
          break;
        }
      }
    }
LABEL_14:
    if ( !get_func() )
    {
      *(_QWORD *)&a2 = _mm_load_si128((const __m128i *)&unk_1D2310).m128i_u64[0];
      if ( !(unsigned __int8)add_func_ex() )
        return 0xFFFFFFFFLL;
    }
    **(_DWORD **)(a1 + 16) = v8;
    sub_E36F0(a1, *a5, a2, a3);
    return 1;
  }
  return 0xFFFFFFFFLL;
}


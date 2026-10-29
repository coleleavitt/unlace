__int64 *__fastcall sub_1782DA0(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  __int64 *result; // rax
  __int64 v6; // rbp
  __int64 *v7; // rdx
  __int64 v8; // rdi
  __int64 *v9; // rcx
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // rax
  _BYTE v13[168]; // [rsp+0h] [rbp-A8h] BYREF

  v4 = 0;
  if ( !a3 )
    v4 = *(_QWORD *)a1[1];
  result = (__int64 *)sub_18B1C40(*a1, v4, a2, 0);
  if ( (_DWORD)result )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 > 5 || (result = (__int64 *)sub_B75A50(a2, 0), (_DWORD)result != 377) )
    {
      v6 = a1[2];
      if ( *(_DWORD *)(v6 + 12) == *(_DWORD *)(v6 + 16) )
      {
        v12 = *(_QWORD *)(*a1 + 544LL);
        if ( !v12 )
          BUG();
        sub_168B9F0((__int64)v13, (__int64 *)(*a1 + 8LL), *(_DWORD *)(v12 - 48), 0xDC5u, 0);
        sub_15F7200(v13);
        v6 = a1[2];
      }
      if ( !*(_BYTE *)(v6 + 20) )
        goto LABEL_16;
      v7 = *(__int64 **)v6;
      v8 = *(unsigned int *)(v6 + 12);
      v9 = (__int64 *)(*(_QWORD *)v6 + 8 * v8);
      if ( *(__int64 **)v6 != v9 )
      {
        result = *(__int64 **)v6;
        if ( a2 == *v7 )
          goto LABEL_15;
        do
        {
          if ( v9 == ++result )
            break;
        }
        while ( a2 != *result );
      }
      if ( (unsigned int)v8 < *(_DWORD *)(v6 + 8) )
      {
        *(_DWORD *)(v6 + 12) = v8 + 1;
        *v9 = a2;
        v7 = *(__int64 **)v6;
        result = (__int64 *)(*(_QWORD *)v6 + 8 * v8);
      }
      else
      {
LABEL_16:
        result = (__int64 *)sub_2236760(v6, a2);
        v7 = *(__int64 **)v6;
        if ( !*(_BYTE *)(v6 + 20) )
        {
          v10 = &v7[*(unsigned int *)(v6 + 8)];
          goto LABEL_18;
        }
      }
LABEL_15:
      v10 = &v7[*(unsigned int *)(v6 + 12)];
LABEL_18:
      if ( v10 != result && (unsigned __int64)*result >= 0xFFFFFFFFFFFFFFFELL )
      {
        ++result;
        do
        {
          v11 = result;
          if ( v10 == result )
            break;
          ++result;
        }
        while ( (unsigned __int64)*v11 >= 0xFFFFFFFFFFFFFFFELL );
      }
    }
  }
  return result;
}

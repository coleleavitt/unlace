__int64 *__fastcall sub_8D6820(__int64 a1)
{
  bool (__fastcall *v1)(__int64); // rax
  __int64 v2; // rdx
  __int64 *result; // rax
  int v4; // ecx
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // r13d
  unsigned int *v8; // rbp
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  char v12; // bp
  unsigned int v13; // [rsp+Ch] [rbp-5Ch] BYREF
  char v14[88]; // [rsp+10h] [rbp-58h] BYREF

  do
  {
    while ( 1 )
    {
      do
      {
        v1 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 176LL);
        if ( v1 == sub_894050 )
        {
          v2 = *(_QWORD *)(a1 + 672);
          result = (__int64 *)*(unsigned int *)(a1 + 680);
          if ( v2 )
            v4 = *(_DWORD *)(v2 - 4);
          else
            v4 = 0;
          if ( (_DWORD)result == v4 )
            return result;
        }
        else
        {
          result = (__int64 *)((__int64 (__fastcall *)(__int64))v1)(a1);
          if ( !(_BYTE)result )
            return result;
          LODWORD(result) = *(_DWORD *)(a1 + 680);
          v2 = *(_QWORD *)(a1 + 672);
        }
        v5 = qword_1C7EC18;
        v6 = *(_QWORD *)(v2 + 8LL * (unsigned int)result);
        *(_DWORD *)(a1 + 680) = (_DWORD)result + 1;
        result = *(__int64 **)(a1 + 16);
        if ( result[1123] != v5 || *((_BYTE *)result + 2416) )
          return result;
        v7 = *(_DWORD *)(v6 + 12);
        if ( *(_BYTE *)(v6 + 4) )
          v7 = *(_DWORD *)(v6 + 8);
        v13 = v7;
        v8 = (unsigned int *)(*(_QWORD *)(a1 + 256) + ((unsigned __int64)v7 << 6));
      }
      while ( *((_BYTE *)v8 + 56) );
      v9 = *(_DWORD *)(a1 + 344);
      v10 = *v8;
      *((_BYTE *)v8 + 56) = 1;
      v8[12] = v9;
      *(_DWORD *)(a1 + 344) = v9 + 1;
      v11 = *(_QWORD *)(a1 + 240);
      *(_DWORD *)(a1 + 348) = v7;
      sub_89AC50((__int64)v14, v11 + 40LL * v8[1], v11 + 40 * v10);
      if ( (unsigned __int8)sub_89B840((__int64)(v8 + 2), (__int64)v14) )
        break;
      sub_25A130(v14);
      sub_893BD0((unsigned int **)(a1 + 352), &v13);
    }
    sub_25A130(v14);
    v12 = sub_8D21C0(a1 + 216, v7);
    sub_893BD0((unsigned int **)(a1 + 352), &v13);
  }
  while ( v12 );
  return sub_8C01C0(a1);
}


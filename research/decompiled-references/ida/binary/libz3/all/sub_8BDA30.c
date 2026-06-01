__int64 *__fastcall sub_8BDA30(__int64 a1)
{
  bool (__fastcall *v1)(__int64); // rax
  __int64 v2; // rdx
  __int64 *result; // rax
  int v4; // ecx
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // r12d
  unsigned int *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  char v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // rdx

  do
  {
    while ( 1 )
    {
      do
      {
        v1 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 176LL);
        if ( v1 == sub_893FE0 )
        {
          v2 = *(_QWORD *)(a1 + 640);
          result = (__int64 *)*(unsigned int *)(a1 + 648);
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
          LODWORD(result) = *(_DWORD *)(a1 + 648);
          v2 = *(_QWORD *)(a1 + 640);
        }
        v5 = qword_1C7EC18;
        v6 = *(_QWORD *)(v2 + 8LL * (unsigned int)result);
        *(_DWORD *)(a1 + 648) = (_DWORD)result + 1;
        result = *(__int64 **)(a1 + 16);
        if ( result[1123] != v5 || *((_BYTE *)result + 2416) )
          return result;
        v7 = *(_DWORD *)(v6 + 12);
        if ( *(_BYTE *)(v6 + 4) )
          v7 = *(_DWORD *)(v6 + 8);
        v8 = (unsigned int *)(*(_QWORD *)(a1 + 224) + 24LL * v7);
      }
      while ( *((_BYTE *)v8 + 20) );
      v9 = *(_DWORD *)(a1 + 312);
      v10 = v8[1];
      *((_BYTE *)v8 + 20) = 1;
      v11 = 1;
      v12 = *v8;
      v8[3] = v9;
      *(_DWORD *)(a1 + 312) = v9 + 1;
      v13 = *(_QWORD *)(a1 + 208);
      *(_DWORD *)(a1 + 316) = v7;
      if ( *(_DWORD *)(v13 + 4 * v10) - *(_DWORD *)(v13 + 4 * v12) > (int)v8[2] )
        break;
      v14 = *(_QWORD *)(a1 + 320);
      if ( !v14 )
        goto LABEL_20;
LABEL_13:
      v15 = *(unsigned int *)(v14 - 4);
      if ( (_DWORD)v15 == *(_DWORD *)(v14 - 8) )
        goto LABEL_20;
      *(_DWORD *)(v14 + 4 * v15) = v7;
      ++*(_DWORD *)(v14 - 4);
      if ( !v11 )
        return sub_8B5FC0(a1);
    }
    v16 = sub_8BC080((unsigned int **)(a1 + 184), v7);
    v14 = *(_QWORD *)(a1 + 320);
    v11 = v16;
    if ( v14 )
      goto LABEL_13;
LABEL_20:
    sub_313C10((unsigned int **)(a1 + 320));
    v17 = *(_QWORD *)(a1 + 320);
    *(_DWORD *)(v17 + 4LL * (unsigned int)(*(_DWORD *)(v17 - 4))++) = v7;
  }
  while ( v11 );
  return sub_8B5FC0(a1);
}


_QWORD *__fastcall sub_BB1CC0(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _DWORD *v3; // rdx
  unsigned int *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi

  result = (_QWORD *)a2;
  if ( !*(_WORD *)(a2 + 4) )
  {
    do
    {
      v3 = *(_DWORD **)(result[2] + 24LL);
      if ( !v3 )
        break;
      if ( *v3 )
        break;
      if ( v3[1] != 4 )
        break;
      v4 = (unsigned int *)result[5];
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
      if ( !v5 )
        break;
      v6 = *(unsigned int *)result;
      if ( (unsigned int)v6 >= *(_DWORD *)(v5 - 4) )
        break;
      v7 = *(_QWORD *)(v5 + 8 * v6);
      if ( !v7 )
        break;
      v8 = *(_QWORD *)(v7 + 8);
      if ( v8 != *(_QWORD *)(*(_QWORD *)(v5 + 8LL * *v4) + 8LL) )
      {
        v4 = (unsigned int *)result[6];
        if ( v8 != *(_QWORD *)(*(_QWORD *)(v5 + 8LL * *v4) + 8LL) )
          break;
      }
      result = v4;
    }
    while ( !*((_WORD *)v4 + 2) );
  }
  return result;
}


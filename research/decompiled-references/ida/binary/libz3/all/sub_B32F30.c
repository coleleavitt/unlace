__int64 __fastcall sub_B32F30(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 *v4; // r12
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int i; // ebx
  __int64 v10; // rdx
  __int64 result; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdx

  v3 = *((_QWORD *)a1 + 32);
  v4 = *(__int64 **)(v3 + 8LL * a3);
  if ( !*(_BYTE *)(*(_QWORD *)(v3 + 8LL * a2) + 24LL) && *((_BYTE *)v4 + 24) )
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 392LL))(a1);
  v5 = *v4;
  if ( *v4 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= *(_DWORD *)(v5 - 4) )
        break;
      v7 = v6++;
      sub_B32AD0(a1, a2, *(_QWORD **)(v5 + 8 * v7));
      v5 = *v4;
    }
    while ( *v4 );
  }
  v8 = v4[2];
  for ( i = 0; v8; v8 = v4[2] )
  {
    if ( i >= *(_DWORD *)(v8 - 4) )
      break;
    v10 = i++;
    sub_B321C0((__int64)a1, a2, *(_QWORD *)(v8 + 8 * v10));
  }
  result = v4[1];
  if ( result )
  {
    v12 = 0;
    do
    {
      if ( v12 >= *(_DWORD *)(result - 4) )
        break;
      v13 = v12++;
      (*(void (__fastcall **)(unsigned int *, _QWORD, _QWORD))(*(_QWORD *)a1 + 424LL))(
        a1,
        a2,
        *(_QWORD *)(result + 8 * v13));
      result = v4[1];
    }
    while ( result );
  }
  return result;
}


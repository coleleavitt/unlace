__int64 __fastcall sub_399980(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ecx
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned int v6; // r14d
  __int64 v7; // rax
  _QWORD v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *a1;
  if ( !*a1 || (v3 = *(_DWORD *)(v2 - 4), v3 == *(_DWORD *)(v2 - 8)) )
  {
    sub_39BC80(a1);
    v2 = *a1;
    v3 = *(_DWORD *)(*a1 - 4);
  }
  v4 = v2 + 16LL * v3;
  *(_QWORD *)v4 = *a2;
  *(_QWORD *)(v4 + 8) = 0;
  result = a2[1];
  if ( result )
  {
    v6 = 0;
    do
    {
      if ( v6 >= *(_DWORD *)(result - 4) )
        break;
      v7 = *(_QWORD *)(result + 8LL * v6);
      v8[0] = v7;
      if ( v7 )
        ++*(_DWORD *)(v7 + 8);
      sub_399930((unsigned int **)(v4 + 8), v8);
      result = a2[1];
      ++v6;
    }
    while ( result );
    v2 = *a1;
    v3 = *(_DWORD *)(*a1 - 4);
  }
  *(_DWORD *)(v2 - 4) = v3 + 1;
  return result;
}


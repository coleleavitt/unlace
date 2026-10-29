unsigned __int64 __fastcall sub_1E01910(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5)
{
  unsigned __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r13
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // rcx

  result = sub_B76070(a2, a2, a3, a4);
  if ( !(_DWORD)result || (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return result;
  v10 = result;
  v11 = sub_B8C3D0(a2, a2, v6, v7, v8, v9);
  v12 = (_QWORD *)*v11;
  result = *v11 + 8LL * *((unsigned int *)v11 + 2);
  if ( (unsigned __int64)v12 >= result )
  {
    if ( v12 == (_QWORD *)result )
      return result;
    while ( *(_WORD *)(*(_QWORD *)result + 36LL) != 195 )
    {
      result += 8LL;
      if ( v12 == (_QWORD *)result )
        return result;
    }
    goto LABEL_9;
  }
  v13 = v12;
  while ( *(_WORD *)(*v13 + 36LL) != 195 )
  {
    if ( (_QWORD *)result == ++v13 )
      return result;
  }
  if ( (_QWORD *)result != v13 )
  {
LABEL_9:
    v14 = *v12;
    if ( *(_WORD *)(*v12 + 36LL) != 195 )
    {
      v15 = v12 + 1;
      do
        v14 = *v15++;
      while ( *(_WORD *)(v14 + 36) != 195 );
    }
    v16 = (unsigned int)(v10 - 1);
    v17 = 0;
    v18 = 8 * v16 + 8;
    do
    {
      v19 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + v17);
      v17 += 8;
      sub_190F640(a1, *(unsigned int *)(v14 + 24), a2, v19, nullptr, 1, a5);
      result = sub_1906AD0(a1);
    }
    while ( v18 != v17 );
  }
  return result;
}

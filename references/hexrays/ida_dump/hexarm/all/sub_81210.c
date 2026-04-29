_BYTE *__fastcall sub_81210(const void ***a1, __int64 a2)
{
  const void **v4; // rdi
  __int64 v5; // rsi
  char v6; // cl
  char *v7; // rax
  char v8; // cl
  char *v9; // rax
  char v10; // cl
  char *v11; // rax
  char v12; // cl
  char *v13; // rax
  _BYTE *v14; // r13
  _BYTE *result; // rax
  __int64 v16; // r12
  size_t v17; // rbx
  size_t v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rax

  *(_QWORD *)a2 = unpack_dq(*a1, (*a1)[1]);
  v4 = *a1;
  if ( *((_DWORD *)a1 + 4) == 1 )
    v5 = (unsigned int)unpack_dd(v4);
  else
    v5 = unpack_dq(v4, (*a1)[1]);
  sub_32A040(a2 + 8, v5);
  v6 = 0;
  v7 = (char *)**a1;
  if ( v7 < (*a1)[1] )
    v6 = *v7++;
  **a1 = v7;
  *(_BYTE *)(a2 + 12) = v6;
  v8 = 0;
  v9 = (char *)**a1;
  if ( v9 < (*a1)[1] )
    v8 = *v9++;
  **a1 = v9;
  *(_BYTE *)(a2 + 13) = v8;
  v10 = 0;
  v11 = (char *)**a1;
  if ( v11 < (*a1)[1] )
    v10 = *v11++;
  **a1 = v11;
  *(_BYTE *)(a2 + 14) = v10;
  v12 = 0;
  v13 = (char *)**a1;
  if ( v13 < (*a1)[1] )
    v12 = *v13++;
  **a1 = v13;
  *(_BYTE *)(a2 + 15) = v12;
  v14 = **a1;
  result = v14;
  while ( result < (*a1)[1] )
  {
    if ( !*result++ )
    {
      **a1 = result;
      if ( v14 )
      {
        v16 = *(_QWORD *)(a2 + 24);
        v17 = result - v14 - 1;
        v18 = v17;
        if ( v16 )
        {
          --v16;
          v18 = v17 + v16;
        }
        v19 = *(_QWORD *)(a2 + 16);
        if ( *(_QWORD *)(a2 + 32) < v18 + 1 )
        {
          v20 = qvector_reserve(a2 + 16, v19, v18 + 1, 1);
          *(_QWORD *)(a2 + 16) = v20;
          v19 = v20;
        }
        *(_QWORD *)(a2 + 24) = v18 + 1;
        *(_BYTE *)(v19 + v18) = 0;
        return memmove((void *)(v16 + *(_QWORD *)(a2 + 16)), v14, v17);
      }
      return result;
    }
  }
  return result;
}

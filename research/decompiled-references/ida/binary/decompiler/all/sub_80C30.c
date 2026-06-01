_BYTE *__fastcall sub_80C30(const void ***a1, __int64 a2)
{
  __int64 v3; // rsi
  char v4; // cl
  char *v5; // rax
  char v6; // cl
  char *v7; // rax
  char v8; // cl
  char *v9; // rax
  char v10; // cl
  char *v11; // rax
  _BYTE *v12; // r13
  _BYTE *result; // rax
  __int64 v14; // r12
  size_t v15; // rbx
  size_t v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rax

  *(_QWORD *)a2 = unpack_dq();
  if ( *((_DWORD *)a1 + 4) == 1 )
    v3 = (unsigned int)unpack_dd();
  else
    v3 = unpack_dq();
  sub_3268A0(a2 + 8, v3);
  v4 = 0;
  v5 = (char *)**a1;
  if ( v5 < (*a1)[1] )
    v4 = *v5++;
  **a1 = v5;
  *(_BYTE *)(a2 + 12) = v4;
  v6 = 0;
  v7 = (char *)**a1;
  if ( v7 < (*a1)[1] )
    v6 = *v7++;
  **a1 = v7;
  *(_BYTE *)(a2 + 13) = v6;
  v8 = 0;
  v9 = (char *)**a1;
  if ( v9 < (*a1)[1] )
    v8 = *v9++;
  **a1 = v9;
  *(_BYTE *)(a2 + 14) = v8;
  v10 = 0;
  v11 = (char *)**a1;
  if ( v11 < (*a1)[1] )
    v10 = *v11++;
  **a1 = v11;
  *(_BYTE *)(a2 + 15) = v10;
  v12 = **a1;
  result = v12;
  while ( result < (*a1)[1] )
  {
    if ( !*result++ )
    {
      **a1 = result;
      if ( v12 )
      {
        v14 = *(_QWORD *)(a2 + 24);
        v15 = result - v12 - 1;
        v16 = v15;
        if ( v14 )
        {
          --v14;
          v16 = v15 + v14;
        }
        v17 = *(_QWORD *)(a2 + 16);
        if ( *(_QWORD *)(a2 + 32) < v16 + 1 )
        {
          v18 = qvector_reserve();
          *(_QWORD *)(a2 + 16) = v18;
          v17 = v18;
        }
        *(_QWORD *)(a2 + 24) = v16 + 1;
        *(_BYTE *)(v17 + v16) = 0;
        return memmove((void *)(v14 + *(_QWORD *)(a2 + 16)), v12, v15);
      }
      return result;
    }
  }
  return result;
}

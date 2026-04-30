__int64 __fastcall atl_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v6; // rbx
  __int64 v7; // rbp
  unsigned __int64 v8; // r13
  __int64 result; // rax
  unsigned __int64 v10; // r12
  const void *v11; // rbp
  void *v12; // rax
  const void *v13; // r15
  void *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax

  v6 = *a2;
  v7 = *(_QWORD *)(a1 + 192) + 56 * a5;
  if ( (__int64 *)v7 == *a2 )
  {
LABEL_4:
    if ( !*(_BYTE *)(v7 + 48) )
      goto LABEL_5;
    goto LABEL_15;
  }
  v8 = *(_QWORD *)(v7 + 8);
  if ( v8 <= 1 )
  {
    v6[1] = 0;
    v6 = *a2;
    goto LABEL_4;
  }
  v13 = *(const void **)v7;
  v14 = (void *)*v6;
  if ( v6[2] < v8 )
  {
    v17 = qvector_reserve(v6, *v6, *(_QWORD *)(v7 + 8), 1);
    *v6 = v17;
    v14 = (void *)v17;
  }
  v6[1] = v8;
  memmove(v14, v13, v8 - 1);
  *(_BYTE *)(*v6 + v8 - 1) = 0;
  v6 = *a2;
  if ( *(_BYTE *)(v7 + 48) )
  {
LABEL_15:
    v15 = v6[3];
    if ( (unsigned __int64)v6[5] <= 3 )
    {
      v16 = qvector_reserve(v6 + 3, v15, 4, 1);
      v6[3] = v16;
      v15 = v16;
    }
    v6[4] = 4;
    *(_WORD *)v15 = 25945;
    *(_BYTE *)(v15 + 2) = 115;
    *(_BYTE *)(v6[3] + 3) = 0;
    v6 = *a2;
  }
LABEL_5:
  result = v7 + 24;
  if ( v6 + 6 != (__int64 *)(v7 + 24) )
  {
    v10 = *(_QWORD *)(v7 + 32);
    if ( v10 > 1 )
    {
      v11 = *(const void **)(v7 + 24);
      v12 = (void *)v6[6];
      if ( v6[8] < v10 )
      {
        v12 = (void *)qvector_reserve(v6 + 6, v6[6], v10, 1);
        v6[6] = (__int64)v12;
      }
      v6[7] = v10;
      memmove(v12, v11, v10 - 1);
      result = v6[6];
      *(_BYTE *)(result + v10 - 1) = 0;
    }
    else
    {
      v6[7] = 0;
    }
  }
  return result;
}

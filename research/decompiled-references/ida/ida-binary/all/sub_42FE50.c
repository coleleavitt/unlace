__int64 __fastcall file_assoc_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbp
  __int64 v6; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r13
  __int64 result; // rax
  unsigned __int64 v11; // r12
  const void *v12; // rbx
  void *v13; // rax
  const void *v14; // r15
  void *v15; // rax
  const void *v16; // r15
  void *v17; // rax
  const void *v18; // r15
  void *v19; // rdi
  __int64 v20; // rax

  v5 = *a2;
  v6 = *(_QWORD *)(a1 + 184) + 240 * a5;
  if ( (__int64 *)v6 != *a2 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 > 1 )
    {
      v18 = *(const void **)v6;
      v19 = (void *)*v5;
      if ( v5[2] < v7 )
      {
        v20 = qvector_reserve(v5, *v5, *(_QWORD *)(v6 + 8), 1);
        *v5 = v20;
        v19 = (void *)v20;
      }
      v5[1] = v7;
      memmove(v19, v18, v7 - 1);
      *(_BYTE *)(*v5 + v7 - 1) = 0;
      v5 = *a2;
    }
    else
    {
      v5[1] = 0;
      v5 = *a2;
    }
  }
  if ( v5 + 3 != (__int64 *)(v6 + 24) )
  {
    v8 = *(_QWORD *)(v6 + 32);
    if ( v8 > 1 )
    {
      v16 = *(const void **)(v6 + 24);
      v17 = (void *)v5[3];
      if ( v5[5] < v8 )
      {
        v17 = (void *)qvector_reserve(v5 + 3, v5[3], *(_QWORD *)(v6 + 32), 1);
        v5[3] = (__int64)v17;
      }
      v5[4] = v8;
      memmove(v17, v16, v8 - 1);
      *(_BYTE *)(v5[3] + v8 - 1) = 0;
      v5 = *a2;
    }
    else
    {
      v5[4] = 0;
      v5 = *a2;
    }
  }
  if ( v5 + 6 != (__int64 *)(v6 + 72) )
  {
    v9 = *(_QWORD *)(v6 + 80);
    if ( v9 > 1 )
    {
      v14 = *(const void **)(v6 + 72);
      v15 = (void *)v5[6];
      if ( v5[8] < v9 )
      {
        v15 = (void *)qvector_reserve(v5 + 6, v5[6], *(_QWORD *)(v6 + 80), 1);
        v5[6] = (__int64)v15;
      }
      v5[7] = v9;
      memmove(v15, v14, v9 - 1);
      *(_BYTE *)(v5[6] + v9 - 1) = 0;
      v5 = *a2;
    }
    else
    {
      v5[7] = 0;
      v5 = *a2;
    }
  }
  result = v6 + 120;
  if ( v5 + 9 != (__int64 *)(v6 + 120) )
  {
    v11 = *(_QWORD *)(v6 + 128);
    if ( v11 > 1 )
    {
      v12 = *(const void **)(v6 + 120);
      v13 = (void *)v5[9];
      if ( v5[11] < v11 )
      {
        v13 = (void *)qvector_reserve(v5 + 9, v5[9], v11, 1);
        v5[9] = (__int64)v13;
      }
      v5[10] = v11;
      memmove(v13, v12, v11 - 1);
      result = v5[9];
      *(_BYTE *)(result + v11 - 1) = 0;
    }
    else
    {
      v5[10] = 0;
    }
  }
  return result;
}

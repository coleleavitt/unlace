__int64 __fastcall sub_AED20(__int64 a1, _DWORD *a2, unsigned __int64 a3, __m128i *a4, unsigned __int64 a5)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v11; // r14
  char *v12; // r13
  int v13; // eax
  char *v14; // r12
  char *v15; // r12
  int v16; // eax
  unsigned __int64 v17; // r12
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // [rsp-8h] [rbp-38h]

  v7 = sub_AD030(a1, a2, a3, a4, a5, 1, 1u);
  v8 = v20;
  v9 = v7;
  if ( v7 > 0xFFFFFFFFFFFFFF88LL )
    return v9;
  v11 = a3 - v7;
  v12 = (char *)a2 + v7;
  v13 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 )
  {
    if ( v13 == 1 )
    {
      v8 = v11;
      v19 = sub_A7710(v12, v11, (_DWORD *)(a1 + 232), 0, 0);
      if ( v19 > 0xFFFFFFFFFFFFFF88LL )
        return v19;
      v11 -= v19;
      v14 = &v12[v19];
      *(_DWORD *)a1 = 2;
    }
    else
    {
      if ( v13 == 3 )
      {
        if ( !*(_DWORD *)(a1 + 268) )
        {
          *(_DWORD *)a1 = 0;
          v17 = 0;
LABEL_12:
          v18 = *(_QWORD *)(a1 + 760);
          if ( !v18 || v18 == *(_QWORD *)(a1 + 768) + 1LL )
          {
            sub_AEC20(a1);
            return v17 + v9;
          }
          return -72;
        }
        v15 = v12;
        goto LABEL_9;
      }
      v14 = v12;
    }
    if ( v11 <= 2 )
      return -70;
    v14[2] = 0;
    v11 -= 3LL;
    v15 = v14 + 3;
    *(_WORD *)(v15 - 3) = 1;
    if ( !*(_DWORD *)(a1 + 268) )
      goto LABEL_11;
LABEL_9:
    v16 = sub_117F40(a1 + 784, v8);
    if ( v11 > 3 )
    {
      *(_DWORD *)v15 = v16;
      v15 += 4;
LABEL_11:
      v17 = v15 - v12;
      *(_DWORD *)a1 = 0;
      if ( v17 > 0xFFFFFFFFFFFFFF88LL )
        return v17;
      goto LABEL_12;
    }
    return -70;
  }
  return -60;
}


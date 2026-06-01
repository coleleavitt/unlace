void __fastcall sub_B6CE00(
        _QWORD *a1,
        unsigned int *a2,
        unsigned __int8 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  __int64 v17; // rdi
  __int16 v19; // ax
  __int64 v20; // rsi
  _DWORD *v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // ebp
  __int64 v25; // rdx
  unsigned __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rsi
  unsigned int v29; // ebp

  v17 = a1[13];
  if ( a2 == *(unsigned int **)(v17 + 856) || a2 == *(unsigned int **)(v17 + 864) )
    return;
  v19 = *((_WORD *)a2 + 2);
  if ( v19 )
  {
    v27 = a1[1104];
    if ( v27 )
    {
      v28 = *a2;
      if ( (unsigned int)v28 < *(_DWORD *)(v27 - 4) && *(_DWORD *)(v27 + 4 * v28) != 0x7FFFFFFF )
        return;
    }
    v29 = a3;
    goto LABEL_20;
  }
  v20 = *((_QWORD *)a2 + 2);
  v21 = *(_DWORD **)(v20 + 24);
  if ( v21 && !*v21 )
  {
    if ( v21[1] == 8 && a3 )
    {
      sub_B6DE20((int)a1);
      return;
    }
    v22 = a1[1104];
    if ( !v22 )
    {
LABEL_29:
      v29 = a3;
      if ( v21[1] != 2 )
        goto LABEL_30;
      if ( !(unsigned __int8)sub_15D2CB0(v17, *((_QWORD *)a2 + 4)) )
      {
        sub_B6CD60(a1, a2, v29, a4, *(double *)a5.m128_u64, a6);
        return;
      }
      v19 = *((_WORD *)a2 + 2);
      if ( !v19 )
      {
        v21 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
        if ( !v21 )
          goto LABEL_25;
LABEL_30:
        if ( !*v21 && v21[1] == 3 )
        {
          sub_B6E2A0((int)a1, a10);
          return;
        }
        goto LABEL_25;
      }
LABEL_20:
      if ( v19 == 2 )
        sub_B68180((__int64)a1, (__int64)a2, v29, v27, a8, a9, a10, a11, a12, a13, a14, a15, a16);
      else
        sub_B6C890(a1, a2, v29, a4, *(double *)a5.m128_u64, a6);
      return;
    }
  }
  else
  {
    v22 = a1[1104];
    if ( !v22 )
    {
LABEL_24:
      v29 = a3;
LABEL_25:
      if ( (unsigned __int8)sub_B68DE0(a1, a2, v29, a4, a5, a6) )
        return;
      v19 = *((_WORD *)a2 + 2);
      goto LABEL_20;
    }
  }
  v23 = *a2;
  if ( *a2 >= *(_DWORD *)(v22 - 4) || (v24 = *(_DWORD *)(v22 + 4LL * v23), v24 == 0x7FFFFFFF) )
  {
    v21 = *(_DWORD **)(v20 + 24);
    if ( !v21 || *v21 )
      goto LABEL_24;
    goto LABEL_29;
  }
  if ( !a3 )
  {
    v25 = a1[1082];
    if ( v25 && v23 < *(_DWORD *)(v25 - 4) && (v26 = *(_QWORD *)(v25 + 8LL * v23)) != 0 )
    {
      if ( *(char *)(v26 + 44) >= 0 )
        sub_B671D0(a1, v26, v24, 0);
    }
    else
    {
      sub_B68280((__int64)a1, a2, 1, 1u, 0, a4, *(double *)a5.m128_u64, a6);
      sub_B66DE0((__int64)a1, v24, 0);
      if ( *(_BYTE *)(a1[1106] + 2 * v24) )
        sub_8F4D60((__int64)a1, v24, a4, a5);
    }
  }
}


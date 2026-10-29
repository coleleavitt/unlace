__int64 __fastcall sub_C84C40(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rax
  unsigned int v6; // eax
  size_t v7; // r14
  __int64 v8; // rsi
  __int64 result; // rax
  size_t v10; // r13
  unsigned __int64 v11; // rsi
  size_t v12; // rsi
  size_t v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned __int8 v17; // [rsp+3h] [rbp-35h] BYREF
  unsigned int v18; // [rsp+4h] [rbp-34h] BYREF
  __int64 v19[6]; // [rsp+8h] [rbp-30h] BYREF

  v17 = 1;
  v18 = 397;
  sub_C7BEC0((__int64 *)(a1 + 440), &v18, &v17);
  if ( (*a3 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v19[0] = *(_QWORD *)(a1 + 448) - *(_QWORD *)(a1 + 440);
    sub_C7C0D0(a1 + 464, v19, a3);
  }
  v5 = sub_21D4FB0(*(unsigned int *)(a2 + 8));
  v6 = sub_21D53E0(v5);
  v7 = *(_QWORD *)(a1 + 448);
  v8 = v6;
  result = 0;
  v10 = v7 - *(_QWORD *)(a1 + 440);
  v11 = 8 * ((unsigned __int64)(v8 + 63) >> 6);
  if ( v11 + v10 + 4 <= 0xFFFFFFFF )
  {
    v12 = v11 + 8;
    if ( v10 < v12 + v10 )
    {
      sub_C7BD20(a1 + 440, v12);
      v7 = v10 + *(_QWORD *)(a1 + 440);
    }
    else if ( __CFADD__(v12, v10) )
    {
      v13 = v12 + *(_QWORD *)(a1 + 448);
      if ( v7 != v13 )
        *(_QWORD *)(a1 + 448) = v13;
    }
    *(_DWORD *)v7 = *(_DWORD *)(a2 + 8);
    v14 = sub_21D4FB0(*(unsigned int *)(a2 + 8));
    if ( ((unsigned __int64)(unsigned int)sub_21D53E0(v14) + 63) >> 6 == 1 )
    {
      *(_QWORD *)(v7 + 4) = *(_QWORD *)a2;
    }
    else
    {
      v15 = sub_21D4FB0(*(unsigned int *)(a2 + 8));
      v16 = sub_21D53E0(v15);
      memcpy((void *)(v7 + 4), *(const void **)a2, 8 * (((unsigned __int64)v16 + 63) >> 6));
    }
    return v17;
  }
  return result;
}


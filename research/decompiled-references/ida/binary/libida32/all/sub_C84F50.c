__int64 __fastcall sub_C84F50(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rbx
  size_t v7; // rdi
  __int64 result; // rax
  __int64 v9; // rdx
  size_t v10; // r12
  unsigned __int64 v11; // rsi
  size_t v12; // rsi
  size_t v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int8 v15; // [rsp+3h] [rbp-35h] BYREF
  unsigned int v16; // [rsp+4h] [rbp-34h] BYREF
  __int64 v17[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = a1 + 440;
  v15 = 1;
  v16 = 399;
  sub_C7BEC0((__int64 *)(a1 + 440), &v16, &v15);
  if ( (*a3 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v17[0] = *(_QWORD *)(a1 + 448) - *(_QWORD *)(a1 + 440);
    sub_C7C0D0(a1 + 464, v17, a3);
  }
  v7 = *(_QWORD *)(a1 + 448);
  result = 0;
  v9 = *(unsigned int *)(a2 + 8);
  v10 = *(_QWORD *)(a1 + 448) - *(_QWORD *)(a1 + 440);
  v11 = 8 * ((unsigned __int64)(v9 + 63) >> 6);
  if ( v11 + v10 + 4 <= 0xFFFFFFFF )
  {
    v12 = v11 + 8;
    if ( v10 < v12 + v10 )
    {
      sub_C7BD20(v6, v12);
      LODWORD(v9) = *(_DWORD *)(a2 + 8);
      v7 = v10 + *(_QWORD *)(a1 + 440);
    }
    else if ( __CFADD__(v12, v10) )
    {
      v13 = v12 + *(_QWORD *)(a1 + 448);
      if ( v7 != v13 )
      {
        *(_QWORD *)(a1 + 448) = v13;
        LODWORD(v9) = *(_DWORD *)(a2 + 8);
      }
    }
    *(_DWORD *)v7 = v9;
    v14 = ((unsigned __int64)*(unsigned int *)(a2 + 8) + 63) >> 6;
    if ( v14 == 1 )
      *(_QWORD *)(v7 + 4) = *(_QWORD *)a2;
    else
      memcpy((void *)(v7 + 4), *(const void **)a2, 8 * v14);
    return v15;
  }
  return result;
}


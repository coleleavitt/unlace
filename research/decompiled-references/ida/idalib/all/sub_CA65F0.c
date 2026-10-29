__int64 __fastcall sub_CA65F0(__int64 a1, int a2, char a3, __int64 *a4)
{
  __int64 v7; // rbp
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rsi
  __int64 v17; // rsi
  unsigned __int8 v18; // [rsp+3h] [rbp-35h] BYREF
  unsigned int v19; // [rsp+4h] [rbp-34h] BYREF
  _QWORD v20[6]; // [rsp+8h] [rbp-30h] BYREF

  v7 = a1 + 440;
  v18 = 1;
  v19 = 882;
  sub_C9FC00((__int64 *)(a1 + 440), &v19, &v18);
  if ( (*a4 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v20[0] = *(_QWORD *)(a1 + 448) - *(_QWORD *)(a1 + 440);
    sub_C9FE10(a1 + 464, v20, a4);
  }
  v9 = *(_QWORD *)(a1 + 448);
  v10 = *(_QWORD *)(a1 + 440);
  v11 = *(_QWORD *)(a1 + 448) - v10;
  if ( v11 + 4 > 0xFFFFFFFF )
  {
    v18 = 0;
    result = 0;
    if ( v11 + 1 > 0xFFFFFFFF )
      return result;
    goto LABEL_12;
  }
  v13 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v14 = v13 + 8;
  if ( v11 < v13 + 8 )
  {
    sub_C9FA60(v7, v14 - v11);
    v9 = *(_QWORD *)(a1 + 448);
    v10 = *(_QWORD *)(a1 + 440);
    *(_DWORD *)(v10 + v13) = a2;
    v11 = v9 - v10;
  }
  else
  {
    if ( v11 > v13 + 8 && v9 != v10 + v14 )
    {
      *(_QWORD *)(a1 + 448) = v10 + v14;
      v11 = v13 + 8;
      v9 = v10 + v14;
    }
    *(_DWORD *)(v10 + v13) = a2;
  }
  result = 0;
  if ( v11 + 1 <= 0xFFFFFFFF )
  {
LABEL_12:
    v15 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v16 = v15 + 8;
    if ( v15 + 8 > v11 )
    {
      sub_C9FA60(v7, v16 - v11);
      *(_BYTE *)(*(_QWORD *)(a1 + 440) + v15) = a3;
      return v18;
    }
    else
    {
      if ( v15 + 8 < v11 )
      {
        v17 = v10 + v16;
        if ( v17 != v9 )
          *(_QWORD *)(a1 + 448) = v17;
      }
      *(_BYTE *)(v10 + v15) = a3;
      return v18;
    }
  }
  return result;
}

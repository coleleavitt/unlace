unsigned __int64 __fastcall sub_B6C3F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  bool v19; // sf
  __int64 v20; // rax
  double v21[4]; // [rsp+8h] [rbp-20h] BYREF

  result = *(_QWORD *)(a1 + 16);
  v9 = result & 0xFFFFFFFFFFFFFFF8LL;
  if ( (result & 4) != 0 )
  {
    if ( a2 == *(_QWORD *)(v9 + 8) )
      return result;
    *(_QWORD *)(v9 + 8) = a2;
  }
  else
  {
    if ( a2 == v9 )
      return result;
    v10 = a1;
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
      v10 = sub_B68580(a1);
    v11 = *(_QWORD **)(v10 + 88);
    v12 = v11[294];
    v11[304] += 16LL;
    v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v11[295] >= v13 + 16 && v12 )
    {
      v11[294] = v13 + 16;
      result = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      result = sub_962430((__int64)(v11 + 294), 16, 16, 3, a5, a6);
      v13 = result & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)&v21[0] = a2;
    *(__m128 *)result = _mm_loadh_ps(v21);
    *(_QWORD *)(a1 + 16) = v13 | 4;
  }
  if ( *(char *)(a1 + 29) >= 0 )
  {
    v14 = 0;
    if ( a2 )
    {
      v15 = sub_B68470(a2);
      v16 = *(_QWORD *)(v15 + 8) & 7LL;
      if ( (*(_QWORD *)(v15 + 8) & 7) != 0 )
      {
        if ( *(char *)(v15 + 29) >= 0 )
          goto LABEL_13;
        if ( (*(_BYTE *)(v15 + 28) & 0x7F) != 0 )
          v15 = sub_B68580(v15);
        v18 = *(_QWORD *)(*(_QWORD *)(v15 + 88) + 2320LL);
        if ( *(_BYTE *)(v18 + 201) >> 5 )
        {
LABEL_13:
          v14 = v16;
        }
        else
        {
          v19 = *(char *)(v18 + 22) < 0;
          v20 = 0;
          if ( v19 )
            v20 = v16;
          v14 = v20;
        }
      }
    }
    result = v14 | *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 8) = result;
    if ( (result & 7) != 0 )
    {
      v17 = sub_B68470(a2);
      result = sub_B68D70(v17);
      *(_QWORD *)(a1 - 8) = result;
    }
  }
  return result;
}


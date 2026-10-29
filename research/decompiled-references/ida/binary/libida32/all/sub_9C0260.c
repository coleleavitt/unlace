__int64 __fastcall sub_9C0260(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rax
  __int64 result; // rax
  __int64 v5; // rbx
  int v6; // eax
  unsigned __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rsi
  char v10; // cl
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx

  v2 = *(_QWORD *)(a2 + 16);
  v3 = (_QWORD *)sub_B69600(*(_QWORD *)(a1[3] + 8), a2);
  result = sub_9BE320(v2, v3);
  if ( result )
  {
    v5 = *a1;
    v6 = sub_9C0140(*a1 + 96, result);
    v7 = *(_QWORD *)(v5 + 88);
    v8 = 2 * v6;
    if ( (v7 & 1) != 0 )
    {
      v14 = v7 >> 58 << 57;
      v15 = ~(-1LL << (v7 >> 58));
      v16 = v15 & (v7 >> 1) | (1LL << v8);
      result = v8 + 1;
      *(_QWORD *)(v5 + 88) = 2 * (v14 | v15 & v16) + 1;
      v11 = *(_QWORD *)(v5 + 88);
      if ( (v11 & 1) != 0 )
        goto LABEL_4;
    }
    else
    {
      v9 = v8 >> 6;
      v10 = v8 & 0x3F;
      result = v8 + 1;
      *(_QWORD *)(*(_QWORD *)v7 + 8 * v9) |= 1LL << v10;
      v11 = *(_QWORD *)(v5 + 88);
      if ( (v11 & 1) != 0 )
      {
LABEL_4:
        v12 = v11 >> 58;
        v13 = (v11 >> 1) & ~(1LL << result);
        result = ~(-1LL << v12);
        *(_QWORD *)(v5 + 88) = 2 * ((v12 << 57) | result & v13) + 1;
        return result;
      }
    }
    *(_QWORD *)(*(_QWORD *)v11 + 8LL * ((unsigned int)result >> 6)) &= ~(1LL << result);
  }
  return result;
}


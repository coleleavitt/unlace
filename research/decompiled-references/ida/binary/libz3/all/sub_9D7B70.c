__int64 __fastcall sub_9D7B70(__int64 a1, unsigned int a2)
{
  _DWORD *v2; // rdx
  __int64 result; // rax
  __int64 v4; // r13
  __int64 v6; // rsi
  int *v7; // r13
  __int64 v8; // rsi
  void *v9; // r14
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx

  v2 = (_DWORD *)(*(_QWORD *)(a1 + 856) + 4LL * a2);
  result = *(unsigned int *)(a1 + 848);
  if ( (unsigned int)result >= *v2 )
  {
    v4 = *(_QWORD *)(a1 + 600);
    v6 = 32LL * a2;
    *v2 = result + 1;
    v7 = (int *)(v6 + v4);
    v8 = *(_QWORD *)(a1 + 608) + v6;
    v9 = qword_1C7F2C0;
    if ( (v7[1] & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v8, v7);
    }
    else
    {
      v10 = *v7;
      *(_BYTE *)(v8 + 4) &= ~1u;
      *(_DWORD *)v8 = v10;
    }
    if ( (v7[5] & 1) != 0 )
    {
      sub_182C690(v9, v8 + 16, v7 + 4);
    }
    else
    {
      v11 = v7[4];
      *(_BYTE *)(v8 + 20) &= ~1u;
      *(_DWORD *)(v8 + 16) = v11;
    }
    result = *(_QWORD *)(a1 + 840);
    if ( !result || (v12 = *(unsigned int *)(result - 4), (_DWORD)v12 == *(_DWORD *)(result - 8)) )
    {
      sub_2FD3F0((unsigned int **)(a1 + 840));
      result = *(_QWORD *)(a1 + 840);
      *(_DWORD *)(result + 4LL * (unsigned int)(*(_DWORD *)(result - 4))++) = a2;
    }
    else
    {
      *(_DWORD *)(result + 4 * v12) = a2;
      ++*(_DWORD *)(result - 4);
    }
    *(_BYTE *)(a1 + 1185) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 1185) = 1;
  }
  return result;
}


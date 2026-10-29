int *__fastcall ClpNonLinearCost::goBackAll(ClpNonLinearCost *this, const CoinIndexedVector *a2)
{
  int v2; // r9d
  int *v3; // rsi
  __int64 v4; // r8
  int *result; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _BYTE *v10; // rdx

  v2 = *((_DWORD *)a2 + 4);
  v3 = *(int **)a2;
  v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 1256LL);
  result = (int *)*((unsigned int *)this + 36);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( v2 > 0 )
    {
      v6 = *((_QWORD *)this + 9);
      result = v3;
      do
      {
        v7 = *result++;
        *(_DWORD *)(v6 + 4LL * *(int *)(v4 + 4 * v7)) = 0;
      }
      while ( &v3[v2 - 1 + 1] != result );
      if ( (*((_BYTE *)this + 144) & 2) != 0 )
      {
LABEL_6:
        v8 = 0;
        do
        {
          v9 = v3[v8++];
          v10 = (_BYTE *)(*((_QWORD *)this + 15) + *(int *)(v4 + 4 * v9));
          result = (int *)(*v10 & 0xF | 0x40u);
          *v10 = *v10 & 0xF | 0x40;
        }
        while ( v2 > (int)v8 );
      }
    }
  }
  else if ( ((unsigned __int8)result & 2) != 0 && v2 > 0 )
  {
    goto LABEL_6;
  }
  return result;
}


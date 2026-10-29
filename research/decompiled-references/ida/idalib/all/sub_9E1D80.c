unsigned __int64 __fastcall sub_9E1D80(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  int v3; // r10d
  int v4; // edx
  unsigned int v5; // r8d
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 i; // rbx
  __int64 v14; // rax

  result = *(_QWORD *)(a1 + 88);
  if ( (result & 1) != 0 )
  {
    v3 = result >> 59;
    if ( !(result >> 59) )
      return result;
  }
  else
  {
    v3 = *(_DWORD *)(result + 64) >> 1;
    if ( !((unsigned __int64)*(unsigned int *)(result + 64) >> 1) )
      return result;
  }
  v4 = 0;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 88) & 1LL;
  if ( a2 )
    goto LABEL_9;
LABEL_4:
  if ( v6 )
  {
    v11 = result;
    v12 = result >> 1;
    v9 = v11 >> 58;
    for ( i = ~((-1LL << v9) | (1LL << v5)); ; v12 = i & (result >> 1) | (1LL << v5) )
    {
      v14 = (v9 << 57) | i & v12;
      LOBYTE(v9) = v5 + 1;
      v7 = 2 * v14 + 1;
LABEL_13:
      ++v4;
      result = 2 * ((v7 >> 58 << 57) | ~(-1LL << (v7 >> 58)) & ~(1LL << v9) & (v7 >> 1)) + 1;
      *(_QWORD *)(a1 + 88) = result;
      if ( v3 == v4 )
        break;
LABEL_8:
      result = *(_QWORD *)(a1 + 88);
      v5 = 2 * v4;
      v6 = result & 1;
      if ( !a2 )
        goto LABEL_4;
LABEL_9:
      if ( !v6 )
      {
        *(_QWORD *)(*(_QWORD *)result + 8LL * (v5 >> 6)) |= 1LL << (v5 & 0x3F);
        v7 = *(_QWORD *)(a1 + 88);
        v8 = v7 & 1;
        goto LABEL_6;
      }
      v9 = result >> 58;
      i = ~(-1LL << (result >> 58));
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)result + 8LL * (v5 >> 6)) &= ~(1LL << (v5 & 0x3F));
    v7 = *(_QWORD *)(a1 + 88);
    v8 = v7 & 1;
LABEL_6:
    LODWORD(v9) = v5 + 1;
    if ( v8 )
      goto LABEL_13;
    v10 = *(_QWORD *)v7;
    ++v4;
    result = ~(1LL << v9);
    *(_QWORD *)(v10 + 8LL * ((unsigned int)v9 >> 6)) &= result;
    if ( v4 != v3 )
      goto LABEL_8;
  }
  return result;
}

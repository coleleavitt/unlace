__int64 __fastcall sub_9BFF50(__int64 *a1, int a2, char a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // esi
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned int v7; // esi
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi

  v3 = *a1;
  v4 = 2 * a2;
  v5 = *a1 & 1;
  if ( (a3 & 1) == 0 )
  {
    if ( !v5 )
    {
      *(_QWORD *)(*(_QWORD *)v3 + 8LL * (v4 >> 6)) &= __ROL8__(-2, v4 & 0x3F);
      goto LABEL_4;
    }
    v13 = v3 >> 1;
    v14 = (unsigned __int64)*a1 >> 58;
    v15 = ~((-1LL << v14) | (1LL << v4));
    goto LABEL_9;
  }
  if ( v5 )
  {
    v14 = v3 >> 58;
    v15 = ~(-1LL << (v3 >> 58));
    v13 = v15 & (v3 >> 1) | (1LL << v4);
LABEL_9:
    *a1 = 2 * ((v14 << 57) | v15 & v13) + 1;
    goto LABEL_4;
  }
  *(_QWORD *)(*(_QWORD *)v3 + 8LL * (v4 >> 6)) |= 1LL << (v4 & 0x3F);
LABEL_4:
  v6 = *a1;
  v7 = v4 + 1;
  v8 = *a1 & 1;
  if ( (a3 & 2) != 0 )
  {
    if ( v8 )
    {
      v9 = v6 >> 58;
      v10 = ~(-1LL << (v6 >> 58));
      v11 = v10 & (v6 >> 1) | (1LL << v7);
LABEL_7:
      result = 2 * ((v9 << 57) | v10 & v11) + 1;
      *a1 = result;
      return result;
    }
    *(_QWORD *)(*(_QWORD *)v6 + 8LL * (v7 >> 6)) |= 1LL << v7;
    return 1LL << v7;
  }
  else
  {
    if ( v8 )
    {
      v11 = v6 >> 1;
      v9 = (unsigned __int64)*a1 >> 58;
      v10 = ~((-1LL << v9) | (1LL << v7));
      goto LABEL_7;
    }
    v16 = *(_QWORD *)v6;
    result = ~(1LL << v7);
    *(_QWORD *)(v16 + 8LL * (v7 >> 6)) &= result;
  }
  return result;
}


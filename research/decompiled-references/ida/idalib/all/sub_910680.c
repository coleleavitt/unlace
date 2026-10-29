__int64 __fastcall sub_910680(__int64 a1, _DWORD *a2, unsigned __int64 a3, __m128i *a4, unsigned __int64 a5)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v9; // r14
  char *v10; // r13
  int v11; // eax
  char *v12; // r12
  char *v13; // r12
  int v14; // eax
  unsigned __int64 v15; // r12
  __int64 v16; // rdx
  unsigned __int64 v17; // rax

  v6 = sub_90E990(a1, a2, a3, a4, a5, 1, 1u);
  v7 = v6;
  if ( v6 > 0xFFFFFFFFFFFFFF88LL )
    return v7;
  v9 = a3 - v6;
  v10 = (char *)a2 + v6;
  v11 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 )
  {
    if ( v11 == 1 )
    {
      v17 = sub_909070(v10, v9, (_DWORD *)(a1 + 232), 0, 0);
      if ( v17 > 0xFFFFFFFFFFFFFF88LL )
        return v17;
      v9 -= v17;
      v12 = &v10[v17];
      *(_DWORD *)a1 = 2;
    }
    else
    {
      if ( v11 == 3 )
      {
        if ( !*(_DWORD *)(a1 + 268) )
        {
          *(_DWORD *)a1 = 0;
          v15 = 0;
LABEL_12:
          v16 = *(_QWORD *)(a1 + 760);
          if ( !v16 || v16 == *(_QWORD *)(a1 + 768) + 1LL )
          {
            sub_910580(a1, v15);
            return v15 + v7;
          }
          return -72;
        }
        v13 = v10;
        goto LABEL_9;
      }
      v12 = v10;
    }
    if ( v9 <= 2 )
      return -70;
    v12[2] = 0;
    v9 -= 3LL;
    v13 = v12 + 3;
    *(_WORD *)(v13 - 3) = 1;
    if ( !*(_DWORD *)(a1 + 268) )
      goto LABEL_11;
LABEL_9:
    v14 = sub_903900(a1 + 784);
    if ( v9 > 3 )
    {
      *(_DWORD *)v13 = v14;
      v13 += 4;
LABEL_11:
      v15 = v13 - v10;
      *(_DWORD *)a1 = 0;
      if ( v15 > 0xFFFFFFFFFFFFFF88LL )
        return v15;
      goto LABEL_12;
    }
    return -70;
  }
  return -60;
}

__int64 __fastcall sub_5BA580(__m128i *a1, __int64 a2, void *a3)
{
  unsigned __int64 *v5; // rax
  unsigned __int64 *v6; // rcx
  unsigned __int64 *v7; // rdi
  unsigned __int64 v8; // r15
  unsigned int v9; // eax
  _QWORD *v11; // r13
  unsigned __int64 v12; // rbp
  _QWORD *v13; // rcx

  v5 = sub_5B9070(a1, a2, (unsigned __int64)a3);
  if ( !v5 )
    return 0;
  v6 = v5;
  if ( (void *)*v5 != a3 )
    return 0;
  v7 = *(unsigned __int64 **)(a2 + 72);
  v8 = v5[1];
  if ( v7 != v5 )
    v8 -= *(v5 - 1);
  v9 = *(_DWORD *)(a2 + 68) - 1;
  *(_DWORD *)(a2 + 68) = v9;
  if ( !v9 )
  {
    qfree(v7);
    *(_QWORD *)(a2 + 72) = 0;
    goto LABEL_7;
  }
  v11 = v6 + 2;
  v12 = ((char *)v6 - (char *)v7) >> 4;
  v13 = memmove(v6, v6 + 2, 16 * (v9 - v12));
  if ( v12 < *(unsigned int *)(a2 + 68) )
  {
    while ( 1 )
    {
      v13[1] -= v8;
      ++v12;
      v13 = v11;
      if ( v12 >= *(unsigned int *)(a2 + 68) )
        break;
      v11 += 2;
    }
    if ( *(_QWORD *)a2 < (unsigned __int64)a3 )
      goto LABEL_7;
  }
  else if ( *(_QWORD *)a2 < (unsigned __int64)a3 )
  {
    goto LABEL_7;
  }
  sub_5BA4E0(a1, a2);
LABEL_7:
  clr_abits(a3, 2);
  if ( (get_merge_state(a3, 2) & 2) != 0 )
  {
    sub_5D07F0(a1, a2, 1);
    return 1;
  }
  else
  {
    sub_5CC740(a1, a2, a3, -1, 0);
    return sub_5BA1C0((__int64)a1, a2, 1);
  }
}

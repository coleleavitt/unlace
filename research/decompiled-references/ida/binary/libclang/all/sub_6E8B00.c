unsigned __int64 __fastcall sub_6E8B00(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rbx
  __int64 v10; // rax

  v2 = *(_QWORD *)(a2 + 48);
  if ( v2 )
    return v2 & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_QWORD *)(a2 + 96);
  if ( (v4 & 1) != 0
    || (v4 & 2) != 0
    || (v5 = sub_6E77B0((unsigned __int64 *)(a2 + 96), a2)) == 0
    || (v6 = *(_QWORD *)(v5 + 48)) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 32LL;
    v8 = (v7 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v8 + 32 && v7 )
    {
      *(_QWORD *)(a1 + 2192) = v8 + 32;
      v9 = (v7 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v9 = sub_6A76A0(a1 + 2192, 32, 4);
      v8 = v9;
    }
    sub_B149D0(v9, 47, a2, 0);
    *(_QWORD *)(a2 + 48) = v9;
    v10 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v10 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v10 + 1, 8);
      v10 = *(unsigned int *)(a1 + 16);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v10) = v8;
    ++*(_DWORD *)(a1 + 16);
    return v9 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    *(_QWORD *)(a2 + 48) = v6;
    return v6 & 0xFFFFFFFFFFFFFFF0LL;
  }
}


unsigned __int64 __fastcall sub_6C7D80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+0h] [rbp-20h]

  v2 = *(_QWORD *)(a2 + 48);
  if ( v2 )
    return v2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(char *)(a2 + 29) < 0 && (v8 = sub_77A0C0(a2)) != 0 && (v9 = *(_QWORD *)(v8 + 48)) != 0 )
  {
    *(_QWORD *)(a2 + 48) = v9;
    return v9 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 32LL;
    v5 = (v4 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v5 + 32 && v4 )
    {
      *(_QWORD *)(a1 + 2192) = v5 + 32;
      v6 = (v4 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v6 = sub_6A76A0(a1 + 2192, 32, 4);
      v5 = v6;
    }
    *(_BYTE *)(v6 + 18) &= 0xF8u;
    *(_QWORD *)v6 = v6;
    *(_QWORD *)(v6 + 8) = v6 & 0xFFFFFFFFFFFFFFF0LL;
    *(_WORD *)(v6 + 16) = 1590;
    *(_QWORD *)(v6 + 24) = a2;
    *(_QWORD *)(a2 + 48) = v6;
    v7 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v7 + 1) )
    {
      v10 = v6;
      sub_25D6060(a1 + 8, a1 + 24, v7 + 1, 8);
      v7 = *(unsigned int *)(a1 + 16);
      v6 = v10;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) = v5;
    ++*(_DWORD *)(a1 + 16);
    return v6 & 0xFFFFFFFFFFFFFFF0LL;
  }
}


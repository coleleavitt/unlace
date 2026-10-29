__int64 __fastcall sub_1B30DB0(unsigned __int64 a1, __int64 a2)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rax

  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 64LL) > 0x31u
    && ((*(_BYTE *)(a2 + 1) >> 1) & 3) == 1
    && *(_BYTE *)(a2 + 2) >> 3 == 5 )
  {
    if ( *(_QWORD *)(a1 + 32) )
      return 1;
    v5 = *(_QWORD *)(a1 + 16);
    v6 = a2 & 0xFFFFFFFFFFFFFFFDLL;
    if ( *(_DWORD *)(v5 + 12) <= *(_DWORD *)(v5 + 8) )
    {
      sub_1AF6AE0(v5, v6, 0);
    }
    else
    {
      v7 = (unsigned __int64 *)(*(_QWORD *)v5 + 16LL * *(unsigned int *)(v5 + 8));
      *v7 = v6;
      v7[1] = 0;
      ++*(_DWORD *)(v5 + 8);
    }
    if ( *(_QWORD *)(a1 + 32) )
    {
      return 1;
    }
    else
    {
      v8 = sub_BFBAE0(*(_QWORD *)(a2 + 16));
      return sub_1B2FFC0(a1, v8);
    }
  }
  else
  {
    sub_1B2FD60((unsigned int *)a1);
    return 0;
  }
}

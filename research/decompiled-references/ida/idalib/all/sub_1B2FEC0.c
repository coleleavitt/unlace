__int64 __fastcall sub_1B2FEC0(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rsi
  unsigned __int64 *v10; // rdx
  __int64 v11; // rsi
  unsigned __int64 v12; // rsi

  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 64LL) <= 0x31u
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 42 )
  {
    sub_1B2FD60((unsigned int *)a1);
    return 0;
  }
  v5 = sub_BFBAE0(*(_QWORD *)(a2 + 16));
  v6 = sub_BFBAE0(*(_QWORD *)(a2 + 24));
  v7 = *(_QWORD *)(a1 + 16);
  v8 = v6;
  v9 = a2 & 0xFFFFFFFFFFFFFFFDLL;
  if ( *(_DWORD *)(v7 + 12) <= *(_DWORD *)(v7 + 8) )
  {
    sub_1AF6AE0(v7, v9, 0);
  }
  else
  {
    v10 = (unsigned __int64 *)(*(_QWORD *)v7 + 16LL * *(unsigned int *)(v7 + 8));
    *v10 = v9;
    v10[1] = 0;
    ++*(_DWORD *)(v7 + 8);
  }
  v11 = *(_QWORD *)(a1 + 32);
  result = 1;
  if ( *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( !v11 )
    {
      v12 = v5;
      return sub_1B2FFC0(a1, v12);
    }
  }
  else if ( !v11 )
  {
    v12 = v8;
    return sub_1B2FFC0(a1, v12);
  }
  return result;
}

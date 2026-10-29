__int64 __fastcall sub_B8FCF0(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // r13
  unsigned __int64 v7; // rbx
  unsigned int *v8; // r13
  char v9; // r14
  __int64 v10; // rdi
  __int64 v11; // r8
  char *v12; // rax
  __int64 v13; // rsi
  __int64 result; // rax
  __int64 *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v19[4]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v20; // [rsp+30h] [rbp-38h]

  v5 = *(_QWORD *)(a2 + 40);
  if ( (v5 & 7) != 0 )
  {
    v7 = 0;
    v6 = 0;
  }
  else
  {
    v6 = 0;
    v7 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v5 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      if ( (*((_BYTE *)a1 + 13) & 0x10) != 0 )
      {
        v6 = sub_FBA480(v5 & 0xFFFFFFFFFFFFFFF8LL);
        v7 = a3;
      }
      else
      {
        v8 = *(unsigned int **)(v7 + 16);
        v7 = *v8;
        v6 = (__int64)(v8 + 4);
      }
    }
  }
  v9 = *(_BYTE *)(a2 + 80);
  v18 = *(_QWORD *)(a2 + 48);
  v10 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) == 38
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38
    && (v10 = sub_F3F310(v10, a2, a3, v18 & 0xFFFFFFFFFFFFFFF0LL)) != 0 )
  {
    v11 = *((unsigned int *)a1 + 8);
    v18 = *(_QWORD *)(v10 + 32);
    v12 = "...";
  }
  else
  {
    v12 = "...";
    v11 = *((unsigned int *)a1 + 8);
    if ( !v9 )
      v12 = (char *)&byte_22CD811;
  }
  v19[3] = v7;
  v13 = *a1;
  v20 = 1283;
  v19[0] = v12;
  v19[2] = v6;
  result = sub_F50AF0(&v18, v13, a1 + 1, v19, v11);
  if ( (*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    sub_971800(*a1, " = ");
    if ( !(_BYTE)byte_2CA2540 && __cxa_guard_acquire(&byte_2CA2540) )
    {
      qword_2CA2560 &= 0xFFFFFFFE00000000LL;
      qword_2CA2568 = 0;
      qword_2CA2578 = 0;
      __cxa_guard_release(&byte_2CA2540);
    }
    v15 = (__int64 *)(*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v15 )
    {
      v16 = (*(__int64 *)(a2 + 72) >> 1) & 3;
      if ( v16 == 1 )
      {
        v17 = v15[9];
        v15 = nullptr;
        if ( !v17 )
          return sub_EFA2F0(v15, a1 + 1, *a1, 0);
        v15 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
        if ( ((v17 >> 1) & 3) != 2 || !v15 )
          return sub_EFA2F0(v15, a1 + 1, *a1, 0);
      }
      else if ( v16 != 2 )
      {
        return sub_EFA2F0(v15, a1 + 1, *a1, 0);
      }
      v15 = (__int64 *)v15[1];
    }
    else
    {
      v15 = &qword_2CA2560;
    }
    return sub_EFA2F0(v15, a1 + 1, *a1, 0);
  }
  return result;
}


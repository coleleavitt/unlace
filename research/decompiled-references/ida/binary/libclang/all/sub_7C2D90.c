__int64 __fastcall sub_7C2D90(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r13
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r12
  char v8; // r14
  __int64 v9; // rdi
  __int64 v10; // r8
  char *v11; // rax
  __int64 v12; // rsi
  __int64 result; // rax
  unsigned int *v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  __int64 *v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v23[4]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v24; // [rsp+30h] [rbp-38h]

  v4 = *(_QWORD *)(a2 + 40);
  if ( (v4 & 7) != 0 )
  {
    v7 = 0;
    v5 = 0;
  }
  else
  {
    v5 = 0;
    v6 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    v7 = v6;
    if ( v6 )
    {
      if ( (*((_BYTE *)a1 + 13) & 0x10) != 0 )
      {
        v5 = sub_C86900(v6);
        v7 = v20;
      }
      else
      {
        v14 = *(unsigned int **)(v6 + 16);
        v7 = *v14;
        v5 = (__int64)(v14 + 4);
      }
    }
  }
  v8 = *(_BYTE *)(a2 + 80);
  v22 = *(_QWORD *)(a2 + 48);
  v9 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v9 + 16) == 37
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 37 && (v9 = sub_B0D320(v9)) != 0 )
  {
    v10 = *((unsigned int *)a1 + 8);
    v22 = *(_QWORD *)(v9 + 32);
    v11 = "...";
  }
  else
  {
    v11 = (char *)&byte_3B9466E;
    v10 = *((unsigned int *)a1 + 8);
    if ( v8 )
      v11 = "...";
  }
  v23[3] = v7;
  v12 = *a1;
  v24 = 1283;
  v23[0] = v11;
  v23[2] = v5;
  result = sub_B2AEC0(&v22, v12, a1 + 1, v23, v10);
  if ( *(_QWORD *)(a2 + 72) > 7u )
  {
    v15 = *a1;
    v16 = *(_QWORD *)(*a1 + 32LL);
    if ( (unsigned __int64)(*(_QWORD *)(*a1 + 24LL) - v16) <= 2 )
    {
      sub_26240F0(v15, " = ", 3);
    }
    else
    {
      *(_BYTE *)(v16 + 2) = 32;
      *(_WORD *)v16 = 15648;
      *(_QWORD *)(v15 + 32) += 3LL;
    }
    if ( !(_BYTE)qword_4AD2140 && __cxa_guard_acquire(&qword_4AD2140) )
    {
      LODWORD(qword_4AD2160[0]) = 0;
      qword_4AD2160[1] = 0;
      qword_4AD2160[3] = 0;
      __cxa_guard_release(&qword_4AD2140);
    }
    v17 = *(_QWORD *)(a2 + 72);
    if ( v17 <= 7 )
    {
      v18 = qword_4AD2160;
      return sub_AFE2C0(v18, a1 + 1, *a1, 0);
    }
    v18 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
    v19 = *(_QWORD *)(a2 + 72) & 6LL;
    if ( v19 == 2 )
    {
      v21 = v18[9];
      v18 = nullptr;
      if ( !v21 )
        return sub_AFE2C0(v18, a1 + 1, *a1, 0);
      v18 = (__int64 *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v21 & 6) != 4 || !v18 )
        return sub_AFE2C0(v18, a1 + 1, *a1, 0);
    }
    else if ( v19 != 4 )
    {
      return sub_AFE2C0(v18, a1 + 1, *a1, 0);
    }
    v18 = (__int64 *)v18[1];
    return sub_AFE2C0(v18, a1 + 1, *a1, 0);
  }
  return result;
}


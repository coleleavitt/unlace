__int64 __fastcall sub_1F59C70(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rax
  _QWORD *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 result; // rax
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 v21; // rdi
  void *v22; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-60h]
  __int64 v24; // [rsp+20h] [rbp-58h] BYREF
  __int64 v25; // [rsp+28h] [rbp-50h]

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  *(_BYTE *)(a2 + 2) = (8 * *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5)) | *(_BYTE *)(a2 + 2) & 7;
  v6 = *a1;
  v7 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v6 + 24) = v7 + 1;
  v8 = *(_BYTE *)(a2 + 2) >> 3;
  *(_BYTE *)(a2 + 3) = (*(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7) != 0) | *(_BYTE *)(a2 + 3) & 0xFE;
  v9 = *a1;
  v10 = sub_21F8CF0(v8);
  sub_1EAED50((__int64)&v24, v9, v10);
  v11 = *(_QWORD **)(*(_QWORD *)(*a1 + 8) + 144LL);
  v13 = sub_21F90D0(&v24, v9, v12);
  if ( v24 == v13 )
    sub_22010F0(&v22, &v24);
  else
    sub_21FEE00(&v22, &v24);
  sub_C0CB30(a2 + 16, v11, (__int64)&v22, v14, v15, v16);
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
  if ( v24 == v13 )
  {
    if ( v25 )
    {
      v18 = 24LL * *(_QWORD *)(v25 - 8);
      v19 = v25 + v18;
      if ( v25 != v25 + v18 )
      {
        while ( 1 )
        {
          v20 = v19 - 24;
          v21 = v19 - 24;
          if ( v13 == *(_QWORD *)(v19 - 24) )
          {
            sub_A4F010(v21);
            if ( v25 == v20 )
            {
LABEL_17:
              operator delete[]((void *)(v19 - 32), 24LL * *(_QWORD *)(v19 - 32) + 8);
              goto LABEL_8;
            }
          }
          else
          {
            sub_21F9830(v21);
            if ( v25 == v20 )
              goto LABEL_17;
          }
          v19 -= 24;
        }
      }
      operator delete[]((void *)(v25 - 8), v18 + 8);
    }
  }
  else
  {
    sub_21F9830(&v24);
  }
LABEL_8:
  result = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 28) = result;
  return result;
}

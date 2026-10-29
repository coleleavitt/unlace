__int64 __fastcall sub_4FE850(volatile signed __int32 **a1, int *a2, double a3, __m128 a4)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rsi
  volatile signed __int32 *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // r13
  void *v18; // rdi
  __int64 v19; // rsi
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-40h]
  char v23; // [rsp+10h] [rbp-38h]
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v4 = *a1;
  v24 = __readfsqword(0x28u);
  if ( !v4 )
  {
    v7 = nullptr;
    v6 = nullptr;
LABEL_7:
    v8 = (volatile signed __int32 *)sub_4FDC40(v7, a3, a4);
    *a1 = v8;
    v7 = v8;
    goto LABEL_8;
  }
  v6 = nullptr;
  if ( *v4 > 1u )
  {
    v6 = v4;
    if ( *v4 != -1 )
      _InterlockedAdd(v4, 1u);
  }
  v7 = *a1;
  if ( !*a1 || *v7 > 1u )
    goto LABEL_7;
LABEL_8:
  sub_4FE4C0((__int64)&v21, v7, a2);
  v9 = v21;
  v10 = v22 & 0x7F;
  v11 = 144 * (v22 >> 7);
  if ( !v23 )
  {
    v12 = *(_QWORD *)(v11 + *(_QWORD *)(v21 + 32) + 128)
        + 16LL * *(unsigned __int8 *)(v11 + *(_QWORD *)(v21 + 32) + v10);
    v13 = *a2;
    *(_QWORD *)(v12 + 8) = 0;
    *(_DWORD *)v12 = v13;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + v11 + 128)
      + 16LL * *(unsigned __int8 *)(*(_QWORD *)(v9 + 32) + v11 + v10)
      + 8;
  if ( v6 && *v6 != -1 && !_InterlockedSub(v6, 1u) )
  {
    v15 = *((_QWORD *)v6 + 4);
    if ( v15 )
    {
      v16 = v15 + 144LL * *(_QWORD *)(v15 - 8);
      if ( v15 == v16 )
      {
        v19 = 0;
      }
      else
      {
        do
        {
          v17 = v16;
          v18 = *(void **)(v16 - 16);
          v16 -= 144;
          if ( v18 )
            operator delete[](v18);
        }
        while ( *((_QWORD *)v6 + 4) != v16 );
        v19 = 144LL * *(_QWORD *)(v17 - 152);
      }
      operator delete[]((void *)(v16 - 8), v19 + 8);
    }
    operator delete((void *)v6, 0x28u);
  }
  return v14;
}

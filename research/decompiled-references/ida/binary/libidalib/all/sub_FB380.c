__int64 __fastcall sub_FB380(__int64 a1, __int64 a2, __int64 a3, __int64 **a4)
{
  __int64 v4; // r13
  int v5; // r12d
  int v6; // eax
  int v7; // ebx
  __int64 *v8; // rax
  __int64 *v9; // r15
  int v10; // eax
  int v11; // edx
  __int64 v13; // rbp
  __int64 v14; // rax
  __int16 v15; // ax
  int v18; // [rsp+1Ch] [rbp-3Ch]
  int v19; // [rsp+1Ch] [rbp-3Ch]

  v4 = *(_QWORD *)(a3 + 40);
  v5 = -1030792151
     * (((__int64)(*(_QWORD *)(a1 + 288) - *(_QWORD *)(a1 + 296)) >> 3)
      + ((__int64)(*(_QWORD *)(a1 + 272) - *(_QWORD *)(a1 + 256)) >> 3))
     + 2
     * ((*(_QWORD *)(a1 + 312) == 0) + (unsigned int)((__int64)(*(_QWORD *)(a1 + 312) - *(_QWORD *)(a1 + 280)) >> 3) - 1)
     - *(_DWORD *)(a1 + 320);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
  if ( v6 < 0 )
    v6 = 0;
  if ( v5 > v6 )
    v5 = v6;
  if ( v5 <= 0 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = (__int64 *)sub_FB160(a1, v7);
    v9 = v8;
    if ( v8 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 8) + 184LL))(
              *(_QWORD *)(a1 + 8),
              *v8,
              v4);
      v11 = v10;
      if ( v10 != -1 )
        break;
    }
    if ( ++v7 == v5 )
      return 0;
  }
  v13 = *v9;
  if ( *(_QWORD *)(a2 + 40) )
  {
    v18 = v10;
    qfree();
    *(_QWORD *)(a2 + 40) = 0;
    v11 = v18;
  }
  if ( v13 )
  {
    v19 = v11;
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v11 = v19;
    *(_QWORD *)(a2 + 40) = v14;
  }
  v15 = v11;
  if ( v11 == -2 )
    v15 = *(_WORD *)(a3 + 28);
  *(_WORD *)(a2 + 28) = v15;
  *(_WORD *)(a2 + 30) = v7;
  *(_DWORD *)(a2 + 24) = -1;
  if ( a4 )
    *a4 = v9;
  return 1;
}


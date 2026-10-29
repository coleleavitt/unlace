/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000ED10
// Address: 0x000000010000ED10

//----- (000000010000ED10) ----------------------------------------------------
__int64 __fastcall sub_10000ED10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r15
  unsigned __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // r12
  __int128 v11; // xmm1
  void *v12; // rdi
  __int64 v13; // r12
  __int128 v14; // xmm1
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  __int128 v19; // [rsp+0h] [rbp-90h]
  __int128 v20; // [rsp+10h] [rbp-80h]
  __int64 v21; // [rsp+20h] [rbp-70h]
  __int64 v22; // [rsp+28h] [rbp-68h]
  unsigned __int64 v23; // [rsp+40h] [rbp-50h]
  unsigned __int64 v24; // [rsp+48h] [rbp-48h]
  __int64 v25; // [rsp+50h] [rbp-40h]
  __int16 v26; // [rsp+58h] [rbp-38h]

  if ( a4 >= 2 )
  {
    v5 = (unsigned __int64)(a4 - 2) >> 1;
    v6 = a1 + 80 * v5;
    v7 = a2 - 80;
    v8 = *(_QWORD *)(a2 - 80);
    v23 = v8;
    if ( *(_QWORD *)v6 <= v8 )
    {
      if ( *(_QWORD *)(a1 + 80 * v5) >= v8 )
      {
        v24 = *(_QWORD *)(a2 - 72);
        if ( *(_QWORD *)(v6 + 8) >= v24 )
          return __stack_chk_guard;
      }
      else
      {
        v24 = *(_QWORD *)(a2 - 72);
      }
      v21 = *(_QWORD *)(a2 - 64);
      *(_QWORD *)(a2 - 64) = 0;
      v19 = *(_OWORD *)(a2 - 56);
      *(_OWORD *)(a2 - 56) = 0;
      v22 = *(_QWORD *)(a2 - 40);
      *(_QWORD *)(a2 - 40) = 0;
      v20 = *(_OWORD *)(a2 - 32);
      *(_OWORD *)(a2 - 32) = 0;
      v26 = *(_WORD *)(a2 - 8);
      v25 = *(_QWORD *)(a2 - 16);
      while ( 1 )
      {
        v9 = v6;
        *(_OWORD *)v7 = *(_OWORD *)v6;
        v10 = *(_QWORD *)(v6 + 16);
        *(_QWORD *)(v6 + 16) = 0;
        v11 = *(_OWORD *)(v6 + 24);
        *(_OWORD *)(v6 + 24) = 0;
        v12 = *(void **)(v7 + 16);
        if ( v12 )
        {
          *(_QWORD *)(v7 + 24) = 0;
          qfree(v12);
        }
        *(_QWORD *)(v7 + 16) = v10;
        *(_OWORD *)(v7 + 24) = v11;
        v13 = *(_QWORD *)(v9 + 40);
        *(_QWORD *)(v9 + 40) = 0;
        v14 = *(_OWORD *)(v9 + 48);
        *(_OWORD *)(v9 + 48) = 0;
        v15 = *(void **)(v7 + 40);
        if ( v15 )
        {
          *(_QWORD *)(v7 + 48) = 0;
          qfree(v15);
        }
        *(_QWORD *)(v7 + 40) = v13;
        *(_OWORD *)(v7 + 48) = v14;
        *(_QWORD *)(v7 + 64) = *(_QWORD *)(v9 + 64);
        *(_WORD *)(v7 + 72) = *(_WORD *)(v9 + 72);
        if ( !v5 )
          break;
        v5 = (v5 - 1) >> 1;
        v6 = a1 + 80 * v5;
        if ( *(_QWORD *)v6 > v23 )
          break;
        v7 = v9;
        if ( *(_QWORD *)(a1 + 80 * v5) >= v23 )
        {
          v7 = v9;
          if ( *(_QWORD *)(v6 + 8) >= v24 )
            break;
        }
      }
      *(_QWORD *)v9 = v23;
      *(_QWORD *)(v9 + 8) = v24;
      v16 = *(void **)(v9 + 16);
      if ( v16 )
      {
        *(_QWORD *)(v9 + 24) = 0;
        qfree(v16);
      }
      *(_QWORD *)(v9 + 16) = v21;
      *(_OWORD *)(v9 + 24) = v19;
      v17 = *(void **)(v9 + 40);
      if ( v17 )
      {
        *(_QWORD *)(v9 + 48) = 0;
        qfree(v17);
      }
      *(_QWORD *)(v9 + 40) = v22;
      *(_OWORD *)(v9 + 48) = v20;
      *(_WORD *)(v9 + 72) = v26;
      *(_QWORD *)(v9 + 64) = v25;
    }
  }
  return __stack_chk_guard;
}

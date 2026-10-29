/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_774F0
// Address: 0x00000000000774F0

//----- (00000000000774F0) ----------------------------------------------------
__int64 __fastcall sub_774F0(__int64 a1, __int128 *a2, double a3, __m128 a4)
{
  __int64 v5; // r12
  __int64 v6; // rbx
  __int128 v7; // xmm0
  __int64 v8; // rax
  char *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  char v15[8]; // [rsp+0h] [rbp-48h] BYREF
  void *ptr[2]; // [rsp+8h] [rbp-40h]
  __int64 v17; // [rsp+18h] [rbp-30h]
  unsigned __int64 v18; // [rsp+20h] [rbp-28h]

  v18 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = 32 * (*(_QWORD *)(a1 + 32) - 1LL);
  if ( !(unsigned int)idcv_string(v5 + v6, a3, a4) )
  {
    v7 = *a2;
    v8 = *((_QWORD *)a2 + 2);
    *a2 = *(_OWORD *)(v5 + v6 + 8);
    *((_QWORD *)a2 + 2) = *(_QWORD *)(v5 + v6 + 24);
    *(_OWORD *)(v5 + v6 + 8) = v7;
    *(_QWORD *)(v5 + v6 + 24) = v8;
    v9 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
    v15[0] = 2;
    *(_OWORD *)ptr = 0;
    v17 = 0;
    copy_idcv(v15, v9, 0.0, a4);
    v10 = *(_QWORD *)(a1 + 32);
    if ( v10 )
    {
      v11 = v10 - 1;
      *(_QWORD *)(a1 + 32) = v11;
      free_idcv((char *)(*(_QWORD *)(a1 + 24) + 32 * v11), 0.0, a4);
    }
    if ( v15[0] == 5 )
    {
      sub_72DD0((char **)ptr[0], v15, 0.0, a4);
    }
    else if ( v15[0] == 7 )
    {
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        v17 = 0;
      }
    }
    v12 = *(_QWORD *)(a1 + 24);
    v13 = 32 * (*(_QWORD *)(a1 + 32) - 1LL);
    if ( *(_BYTE *)(v12 + v13) == 5 )
      return *(_QWORD *)(v12 + v13 + 8);
    set_qerrno(0x5FCu);
  }
  return 0;
}

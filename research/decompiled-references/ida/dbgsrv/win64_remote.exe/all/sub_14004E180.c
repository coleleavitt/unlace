/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004E180
// Address: 0x000000014004E180

//----- (000000014004E180) ----------------------------------------------------
unsigned __int64 __fastcall sub_14004E180(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v7; // r15
  unsigned __int64 v8; // r12
  __int64 v9; // rbx
  size_t v10; // rdi
  void *v11; // rax
  size_t v12; // rdi
  void *v13; // rax
  _OWORD *v14; // rdx
  _OWORD *v15; // rax
  __int64 v16; // rcx

  sub_14004D9E0((__int64)a1, a2);
  result = a1[1];
  if ( result < a2 )
  {
    v7 = 432 * result;
    v8 = a2 - result;
    do
    {
      v9 = v7 + *a1;
      *(_QWORD *)v9 = *(_QWORD *)a3;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
      *(_QWORD *)(v9 + 24) = 0;
      v10 = *(_QWORD *)(a3 + 16);
      if ( v10 )
      {
        v11 = sub_14005AAA0(*(_QWORD *)(a3 + 16));
        *(_QWORD *)(v9 + 8) = v11;
        *(_QWORD *)(v9 + 24) = v10;
        memcpy(v11, *(const void **)(a3 + 8), v10);
        *(_QWORD *)(v9 + 16) = v10;
      }
      *(_DWORD *)(v9 + 32) = *(_DWORD *)(a3 + 32);
      *(_QWORD *)(v9 + 40) = 0;
      *(_QWORD *)(v9 + 48) = 0;
      *(_QWORD *)(v9 + 56) = 0;
      v12 = *(_QWORD *)(a3 + 48);
      if ( v12 )
      {
        v13 = sub_14005AAA0(*(_QWORD *)(a3 + 48));
        *(_QWORD *)(v9 + 40) = v13;
        *(_QWORD *)(v9 + 56) = v12;
        memcpy(v13, *(const void **)(a3 + 40), v12);
        *(_QWORD *)(v9 + 48) = v12;
      }
      v14 = (_OWORD *)(v9 + 64);
      v15 = (_OWORD *)(a3 + 64);
      v16 = 2;
      do
      {
        *v14 = *v15;
        v14[1] = v15[1];
        v14[2] = v15[2];
        v14[3] = v15[3];
        v14[4] = v15[4];
        v14[5] = v15[5];
        v14[6] = v15[6];
        v14 += 8;
        *(v14 - 1) = v15[7];
        v15 += 8;
        --v16;
      }
      while ( v16 );
      *v14 = *v15;
      v14[1] = v15[1];
      v14[2] = v15[2];
      v14[3] = v15[3];
      v14[4] = v15[4];
      v14[5] = v15[5];
      *((_QWORD *)v14 + 12) = *((_QWORD *)v15 + 12);
      *(_BYTE *)(v9 + 424) = *(_BYTE *)(a3 + 424);
      result = *(unsigned int *)(a3 + 428);
      *(_DWORD *)(v9 + 428) = result;
      v7 += 432;
      --v8;
    }
    while ( v8 );
  }
  a1[1] = a2;
  return result;
}

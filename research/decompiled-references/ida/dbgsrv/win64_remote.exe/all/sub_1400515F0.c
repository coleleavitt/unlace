/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400515F0
// Address: 0x00000001400515F0

//----- (00000001400515F0) ----------------------------------------------------
void __fastcall sub_1400515F0(_QWORD *a1, char a2, unsigned __int64 *a3)
{
  unsigned int v5; // eax
  __int64 v6; // r13
  __int64 v7; // r15
  unsigned __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  _QWORD *v12; // rbx
  void *v13; // rcx
  __int64 i; // rbp
  __int64 v15; // r15
  int v16; // eax
  size_t v17; // r13
  __int64 v18; // rbx
  void *v19; // rcx
  const void *v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // [rsp+20h] [rbp-68h] BYREF
  void *v23[2]; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-48h] BYREF
  void *Block[2]; // [rsp+48h] [rbp-40h]
  __int64 v27; // [rsp+58h] [rbp-30h]

  v5 = sub_14005B690(a3, a3[1]);
  v6 = v5;
  v7 = (int)v5;
  v8 = a1[1];
  v9 = 0;
  if ( v5 != v8 )
  {
    v22 = 0;
    *(_OWORD *)v23 = 0;
    v24 = 0;
    if ( (int)v5 >= v8 )
    {
      if ( (int)v5 > v8 )
      {
        if ( (unsigned __int64)&v22 < *a1 || (unsigned __int64)&v22 >= *a1 + 32LL * a1[2] )
        {
          sub_140051950((__int64)a1, (int)v5, (__int64)&v22);
        }
        else
        {
          v25 = v22;
          *(_OWORD *)Block = 0;
          v27 = 0;
          sub_140051950((__int64)a1, (int)v5, (__int64)&v25);
          if ( Block[0] )
            j_free(Block[0]);
        }
      }
    }
    else
    {
      v10 = 32LL * (int)v5;
      v11 = v8 - (int)v5;
      do
      {
        v12 = (_QWORD *)(v10 + *a1);
        v13 = (void *)v12[1];
        if ( v13 )
        {
          v12[2] = 0;
          j_free(v13);
          v12[1] = 0;
          v12[3] = 0;
        }
        v10 += 32;
        --v11;
      }
      while ( v11 );
      a1[1] = v7;
    }
    if ( v23[0] )
      j_free(v23[0]);
  }
  if ( (int)v6 > 0 )
  {
    for ( i = v6; i; --i )
    {
      v15 = v9 + *a1;
      *(_DWORD *)v15 = sub_14005B690(a3, a3[1]);
      v16 = sub_14005B690(a3, a3[1]);
      v17 = v16;
      v18 = v16;
      if ( (unsigned __int64)v16 <= *(_QWORD *)(v15 + 16) )
      {
        if ( v16 == *(_QWORD *)(v15 + 16) || (unsigned __int64)v16 >= *(_QWORD *)(v15 + 16) )
          goto LABEL_26;
      }
      else
      {
        if ( (unsigned __int64)v16 > *(_QWORD *)(v15 + 24) )
          *(_QWORD *)(v15 + 8) = sub_14005ABE0(v15 + 8, *(void **)(v15 + 8), v16, 1u);
        memset((void *)(*(_QWORD *)(v15 + 8) + *(_QWORD *)(v15 + 16)), 0, v18 - *(_QWORD *)(v15 + 16));
      }
      *(_QWORD *)(v15 + 16) = v18;
LABEL_26:
      if ( a2 )
      {
        *(_DWORD *)(v15 + 4) = sub_14005B690(a3, a3[1]);
        v19 = *(void **)(v15 + 8);
        v20 = (const void *)*a3;
        v21 = *a3 + v17;
        if ( v21 >= *a3 && v21 <= a3[1] )
        {
          *a3 = v21;
          memcpy(v19, v20, v17);
        }
      }
      v9 += 32;
    }
  }
}

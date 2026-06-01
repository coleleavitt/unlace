/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000E560
// Address: 0x000000010000E560

//----- (000000010000E560) ----------------------------------------------------
__int64 __fastcall sub_10000E560(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 *v4; // r14
  signed __int64 v6; // rcx
  __int64 v7; // r13
  unsigned __int64 *v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  unsigned __int64 *v11; // r15
  unsigned __int64 v12; // r12
  __int128 v13; // xmm1
  void *v14; // rdi
  unsigned __int64 v15; // r12
  __int128 v16; // xmm1
  void *v17; // rdi
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  __int128 v23; // [rsp+0h] [rbp-A0h]
  __int128 v24; // [rsp+10h] [rbp-90h]
  signed __int64 v25; // [rsp+20h] [rbp-80h]
  unsigned __int64 v27; // [rsp+30h] [rbp-70h]
  unsigned __int64 v28; // [rsp+38h] [rbp-68h]
  unsigned __int64 v29; // [rsp+50h] [rbp-50h]
  unsigned __int64 v30; // [rsp+58h] [rbp-48h]
  unsigned __int64 v31; // [rsp+60h] [rbp-40h]
  __int16 v32; // [rsp+68h] [rbp-38h]

  if ( a3 >= 2 )
  {
    v4 = a4;
    v6 = 0xCCCCCCCCCCCCCCCDLL * (((__int64)a4 - a1) >> 4);
    v25 = (unsigned __int64)(a3 - 2) >> 1;
    if ( v25 >= v6 )
    {
      v7 = 2 * v6 + 1;
      v8 = (unsigned __int64 *)(a1 + 80 * v7);
      v9 = 2 * v6 + 2;
      if ( v9 < a3 )
      {
        v10 = v8[10];
        if ( *v8 <= v10 && (*v8 < v10 || v8[1] < v8[11]) )
        {
          v8 += 10;
          v7 = v9;
        }
      }
      v29 = *v4;
      if ( *v8 <= *v4 )
      {
        if ( *v8 < *v4 )
          return __stack_chk_guard;
        v30 = v4[1];
        if ( v8[1] < v30 )
          return __stack_chk_guard;
      }
      else
      {
        v30 = v4[1];
      }
      v27 = v4[2];
      v4[2] = 0;
      v23 = *(_OWORD *)(v4 + 3);
      *(_OWORD *)(v4 + 3) = 0;
      v28 = v4[5];
      v4[5] = 0;
      v24 = *((_OWORD *)v4 + 3);
      *((_OWORD *)v4 + 3) = 0;
      v32 = *((_WORD *)v4 + 36);
      v31 = v4[8];
      while ( 1 )
      {
        v11 = v8;
        *(_OWORD *)v4 = *(_OWORD *)v8;
        v12 = v8[2];
        v8[2] = 0;
        v13 = *(_OWORD *)(v8 + 3);
        *(_OWORD *)(v8 + 3) = 0;
        v14 = (void *)v4[2];
        if ( v14 )
        {
          v4[3] = 0;
          qfree(v14);
        }
        v4[2] = v12;
        *(_OWORD *)(v4 + 3) = v13;
        v15 = v11[5];
        v11[5] = 0;
        v16 = *((_OWORD *)v11 + 3);
        *((_OWORD *)v11 + 3) = 0;
        v17 = (void *)v4[5];
        if ( v17 )
        {
          v4[6] = 0;
          qfree(v17);
        }
        v4[5] = v15;
        *((_OWORD *)v4 + 3) = v16;
        v4[8] = v11[8];
        *((_WORD *)v4 + 36) = *((_WORD *)v11 + 36);
        if ( v25 < v7 )
          break;
        v8 = (unsigned __int64 *)(a1 + 80 * (2 * v7 + 1));
        v18 = 2 * v7 + 2;
        if ( v18 < a3 && (v19 = v8[10], *v8 <= v19) )
        {
          if ( *v8 < v19 || (v7 = 2 * v7 + 1, v8[1] < v8[11]) )
          {
            v8 += 10;
            v7 = v18;
          }
        }
        else
        {
          v7 = 2 * v7 + 1;
        }
        v4 = v11;
        if ( *v8 <= v29 )
        {
          if ( *v8 < v29 )
            break;
          v4 = v11;
          if ( v8[1] < v30 )
            break;
        }
      }
      *v11 = v29;
      v11[1] = v30;
      v20 = (void *)v11[2];
      if ( v20 )
      {
        v11[3] = 0;
        qfree(v20);
      }
      v11[2] = v27;
      *(_OWORD *)(v11 + 3) = v23;
      v21 = (void *)v11[5];
      if ( v21 )
      {
        v11[6] = 0;
        qfree(v21);
      }
      v11[5] = v28;
      *((_OWORD *)v11 + 3) = v24;
      *((_WORD *)v11 + 36) = v32;
      v11[8] = v31;
    }
  }
  return __stack_chk_guard;
}

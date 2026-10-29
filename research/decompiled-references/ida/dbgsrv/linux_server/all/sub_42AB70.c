/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42AB70
// Address: 0x000000000042AB70

//----- (000000000042AB70) ----------------------------------------------------
__int64 __fastcall sub_42AB70(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r14
  char *v13; // rsi
  __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r15
  unsigned __int64 v21; // r15
  __int64 v22; // r13
  void *v23; // rdi
  void *v24; // rdi
  __m128i si128; // xmm1
  __int64 v26; // [rsp+0h] [rbp-108h] BYREF
  __int128 v27; // [rsp+8h] [rbp-100h]
  __int64 v28; // [rsp+18h] [rbp-F0h]
  __int128 v29; // [rsp+20h] [rbp-E8h]
  _BYTE v30[40]; // [rsp+30h] [rbp-D8h] BYREF
  int v31; // [rsp+58h] [rbp-B0h]
  __int16 v32; // [rsp+5Ch] [rbp-ACh]
  char v33; // [rsp+5Eh] [rbp-AAh]
  __int64 v34; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v35; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+78h] [rbp-90h]
  __int128 v37; // [rsp+80h] [rbp-88h]
  __m128i v38; // [rsp+90h] [rbp-78h]
  __int64 v39; // [rsp+A0h] [rbp-68h]
  __int128 v40; // [rsp+A8h] [rbp-60h]
  int v41; // [rsp+B8h] [rbp-50h]
  __int16 v42; // [rsp+BCh] [rbp-4Ch]
  char v43; // [rsp+BEh] [rbp-4Ah]
  unsigned __int64 v44; // [rsp+C8h] [rbp-40h]

  v7 = *(unsigned int *)(a1 + 72);
  v44 = __readfsqword(0x28u);
  if ( (unsigned int)v7 < *(_DWORD *)(a1 + 76) )
    goto LABEL_2;
  v10 = *(_QWORD *)(a1 + 64);
  v11 = *(_QWORD *)(a1 + 24) - v10;
  if ( !v11 )
    return 0;
  v12 = *(_QWORD *)(a1 + 48);
  if ( v11 != v12 )
  {
    a3 = 0;
    v26 = 0;
    v28 = 0;
    memset(v30, 0, sizeof(v30));
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v27 = 0;
    v29 = 0;
    if ( v11 < v12 )
    {
      v21 = v11;
      do
      {
        v22 = *(_QWORD *)(a1 + 40) + 96 * v21;
        v23 = *(void **)(v22 + 24);
        if ( v23 )
        {
          *(_QWORD *)(v22 + 32) = 0;
          j__free(v23);
        }
        v24 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *(_QWORD *)(v22 + 8) = 0;
          j__free(v24);
        }
        ++v21;
      }
      while ( v21 < v12 );
    }
    else
    {
      v13 = *(char **)(a1 + 40);
      a3 = *(_QWORD *)(a1 + 56);
      v14 = a1 + 40;
      if ( &v26 >= (__int64 *)v13 && &v26 < (__int64 *)&v13[96 * a3] )
      {
        v35 = 0;
        si128 = _mm_load_si128((const __m128i *)v30);
        v34 = 0;
        v39 = *(_QWORD *)&v30[16];
        v36 = 0;
        v41 = 0;
        v42 = 0;
        v43 = 0;
        v37 = 0;
        v38 = si128;
        v40 = 0;
        sub_42A960(v14, v11, (__int64)&v34);
        goto LABEL_13;
      }
      if ( a3 < v11 )
      {
        *(_QWORD *)(a1 + 40) = sub_481540(v14, v13, v11, 0x60u);
        v12 = *(_QWORD *)(a1 + 48);
      }
      while ( v12 < v11 )
        sub_424260(*(_QWORD *)(a1 + 40) + 96 * v12++, (__int64)&v26);
    }
    *(_QWORD *)(a1 + 48) = v11;
LABEL_13:
    v10 = *(_QWORD *)(a1 + 64);
  }
  *(_DWORD *)(a1 + 72) = 0;
  if ( !v10 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 600LL) + 16LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 600LL),
      *(_QWORD *)(a1 + 8),
      a3,
      a4,
      a5,
      a6,
      v26,
      v27,
      *((_QWORD *)&v27 + 1),
      v28,
      v29,
      *((_QWORD *)&v29 + 1),
      *(_QWORD *)v30,
      *(_QWORD *)&v30[8]);
    v10 = *(_QWORD *)(a1 + 64);
  }
  v15 = *(_QWORD *)(a1 + 32);
  if ( v15 && (v10 && !is_mul_ok(v15, v10) || !is_mul_ok(v11, v15)) )
    goto LABEL_28;
  v16 = *(_QWORD *)(a1 + 8);
  v17 = sub_47F740(*(_QWORD *)(v16 + 472), 0, 1);
  v18 = *(_QWORD *)(v16 + 480);
  v19 = v17 - v18;
  if ( sub_47F740(*(_QWORD *)(v16 + 472), v18 + *(_QWORD *)(a1 + 16) + *(_QWORD *)(a1 + 32) * *(_QWORD *)(a1 + 64), 0) == -1 )
  {
    sub_47F740(*(_QWORD *)(v16 + 472), v19 + *(_QWORD *)(v16 + 480), 0);
LABEL_28:
    *(_DWORD *)(a1 + 76) = 0;
    return 0;
  }
  v20 = 0;
  while ( (unsigned __int8)sub_4275F0(a1, *(_QWORD *)(a1 + 40) + 96 * v20) )
  {
    if ( v11 == ++v20 )
      goto LABEL_24;
  }
  LODWORD(v11) = v20;
LABEL_24:
  sub_47F740(*(_QWORD *)(v16 + 472), v19 + *(_QWORD *)(v16 + 480), 0);
  *(_DWORD *)(a1 + 76) = v11;
  if ( !(_DWORD)v11 )
    return 0;
  *(_QWORD *)(a1 + 64) += (unsigned int)v11;
  v7 = *(unsigned int *)(a1 + 72);
  if ( (unsigned int)v7 < (unsigned int)v11 )
  {
LABEL_2:
    *a2 = *(_QWORD *)(a1 + 40) + 96 * v7;
    ++*(_DWORD *)(a1 + 72);
    return 1;
  }
  return 0;
}
// 42AE43: conditional instruction was optimized away because rcx.8!=0
// 42AD9E: variable 'a3' is possibly undefined
// 42AD9E: variable 'a4' is possibly undefined
// 42AD9E: variable 'a5' is possibly undefined
// 42AD9E: variable 'a6' is possibly undefined

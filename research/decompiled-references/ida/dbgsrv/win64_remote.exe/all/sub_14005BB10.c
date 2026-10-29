/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005BB10
// Address: 0x000000014005BB10

//----- (000000014005BB10) ----------------------------------------------------
void __fastcall sub_14005BB10(__int64 *a1, const __m128i *a2)
{
  const __m128i *v2; // r14
  const __m128i *v4; // rax
  __int64 v5; // rbx
  void *v6; // rax
  size_t v7; // rbx
  __int16 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  void *v11; // rbx
  void *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int16 *v16; // rdx
  unsigned __int16 *v17; // rcx
  unsigned __int16 *v18; // rdx
  unsigned __int16 *v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rbx
  void *v22; // rcx
  void *v23; // rcx
  void **v24; // rdi
  void *v25; // rdi
  __int64 v26; // rsi
  char v27[16]; // [rsp+20h] [rbp-39h] BYREF
  void *v28[2]; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-19h]
  void *Src; // [rsp+48h] [rbp-11h] BYREF
  __int64 v31; // [rsp+50h] [rbp-9h]
  __int64 v32; // [rsp+58h] [rbp-1h]
  void *v33[2]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v34; // [rsp+70h] [rbp+17h]
  void *Block[2]; // [rsp+78h] [rbp+1Fh]
  void *v36; // [rsp+88h] [rbp+2Fh]

  v2 = a2;
  if ( a2->m128i_i16[0] )
  {
    while ( 1 )
    {
      v4 = sub_14006CC00(v2, 0x3Du);
      if ( v4 )
        break;
LABEL_53:
      v2 = (const __m128i *)((char *)v2 + 2 * wcslen((const wchar_t *)v2) + 2);
      if ( !v2->m128i_i16[0] )
        return;
    }
    v5 = ((char *)v4 - (char *)v2) >> 1;
    Src = nullptr;
    v31 = 0;
    v32 = 0;
    if ( v5 )
    {
      v6 = nullptr;
      if ( v5 != -1 )
      {
        v6 = sub_14005ABE0((__int64)&Src, nullptr, v5 + 1, 2u);
        Src = v6;
      }
      v31 = v5 + 1;
      v7 = v5;
      memcpy(v6, v2, v7 * 2);
      *(_WORD *)((char *)Src + v7 * 2) = 0;
    }
    else
    {
      v7 = 0;
    }
    *(_OWORD *)v28 = 0;
    v29 = 0;
    v8 = &v2->m128i_i16[v7 + 1];
    if ( v8 )
    {
      v9 = sub_140061950(&v2->m128i_i16[v7 + 1]);
      v10 = v9;
      v11 = (void *)(v9 + 1);
      if ( v9 + 1 <= v29 )
      {
        v12 = v28[0];
      }
      else
      {
        v12 = sub_14005ABE0((__int64)v28, v28[0], v9 + 1, 2u);
        v28[0] = v12;
      }
      v28[1] = v11;
      memcpy(v12, v8, 2 * v10);
      *((_WORD *)v28[0] + v10) = 0;
    }
    v13 = *a1;
    v14 = *(_QWORD *)(*a1 + 8);
    v15 = *a1;
    if ( !*(_BYTE *)(v14 + 25) )
    {
      do
      {
        v16 = (unsigned __int16 *)&dword_140092834;
        if ( v31 )
          v16 = (unsigned __int16 *)Src;
        v17 = (unsigned __int16 *)&dword_140092834;
        if ( *(_QWORD *)(v14 + 40) )
          v17 = *(unsigned __int16 **)(v14 + 32);
        if ( (int)sub_14007B4C8(v17, v16) >= 0 )
          v13 = v14;
        else
          v14 += 16;
        v14 = *(_QWORD *)v14;
      }
      while ( !*(_BYTE *)(v14 + 25) );
      v15 = *a1;
    }
    if ( !*(_BYTE *)(v13 + 25) )
    {
      v18 = (unsigned __int16 *)&dword_140092834;
      if ( *(_QWORD *)(v13 + 40) )
        v18 = *(unsigned __int16 **)(v13 + 32);
      v19 = (unsigned __int16 *)&dword_140092834;
      if ( v31 )
        v19 = (unsigned __int16 *)Src;
      if ( (int)sub_14007B4C8(v19, v18) >= 0 )
        goto LABEL_31;
      v15 = *a1;
    }
    v13 = v15;
LABEL_31:
    if ( v13 == *a1 )
    {
      v25 = v28[1];
      if ( v28[1] > (void *)1 )
      {
        *(_OWORD *)v33 = 0;
        v34 = 0;
        v26 = v31;
        if ( v31 )
        {
          v33[0] = sub_14005AAA0(2 * v31);
          v34 = v26;
          memcpy(v33[0], Src, 2 * v26);
          v33[1] = (void *)v26;
          v25 = v28[1];
        }
        *(_OWORD *)Block = 0;
        v36 = nullptr;
        if ( v25 )
        {
          Block[0] = sub_14005AAA0(2LL * (_QWORD)v25);
          v36 = v25;
          memcpy(Block[0], v28[0], 2LL * (_QWORD)v25);
          Block[1] = v25;
        }
        sub_14005B880(a1, (__int64)v27, (__int64)v33);
        if ( Block[0] )
          j_free(Block[0]);
        if ( v33[0] )
          j_free(v33[0]);
      }
    }
    else if ( v28[1] > (void *)1 )
    {
      v24 = (void **)(v13 + 56);
      if ( v24 != v28 )
        sub_14005BF00((__int64)v24, v28[0], (__int64)v28[1] - 1);
    }
    else
    {
      v20 = sub_14000C8A0(a1, v13);
      v21 = (_QWORD *)v20;
      v22 = *(void **)(v20 + 56);
      if ( v22 )
      {
        *(_QWORD *)(v20 + 64) = 0;
        j_free(v22);
        v21[7] = 0;
        v21[9] = 0;
      }
      v23 = (void *)v21[4];
      if ( v23 )
      {
        v21[5] = 0;
        j_free(v23);
        v21[4] = 0;
        v21[6] = 0;
      }
      j_j_free(v21);
    }
    if ( v28[0] )
    {
      v28[1] = nullptr;
      j_free(v28[0]);
      v28[0] = nullptr;
      v29 = 0;
    }
    if ( Src )
    {
      v31 = 0;
      j_free(Src);
    }
    goto LABEL_53;
  }
}
// 14005BD2F: conditional instruction was optimized away because %var_80@8.8>=2u
// 14005BD36: conditional instruction was optimized away because %var_80@8.8>=2u
// 140092834: using guessed type int dword_140092834;

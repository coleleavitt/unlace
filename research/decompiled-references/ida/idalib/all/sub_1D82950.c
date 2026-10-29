__int64 __fastcall sub_1D82950(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int8 a7)
{
  int v11; // r15d
  unsigned __int8 v12; // bp
  char v13; // al
  char v14; // dl
  char v15; // r10
  _QWORD *v16; // rdi
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  unsigned int v32; // [rsp+8h] [rbp-70h]
  __int64 v33; // [rsp+18h] [rbp-60h] BYREF
  __m128i v34; // [rsp+20h] [rbp-58h] BYREF
  __int64 v35; // [rsp+38h] [rbp-40h]

  v11 = *(_DWORD *)(a3 + 64);
  v12 = (*(_BYTE *)(a3 + 60) & 2) != 0;
  v13 = sub_BBE5D0(a3);
  v14 = *(_BYTE *)(a3 + 60);
  v15 = 0;
  if ( (v14 & 1) != 0 )
    v15 = (v14 & 2) == 0;
  v16 = *(_QWORD **)(a1 + 248);
  v17 = *(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a3 + 40) & 7) != 0 )
    v17 = 0;
  v18 = sub_BBE1D0(v16, a2, *(_DWORD *)(a3 + 56), *(_DWORD *)(a3 + 24), a5, a6, v17, v15, v13, v12, v11);
  v19 = v18;
  if ( (*(_BYTE *)(a3 + 60) & 4) != 0 && a3 != -80 )
    sub_1DD7690(a1, v18, a3 + 80, a4, a7);
  if ( (*(_QWORD *)(a3 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v34.m128i_i64[1] = 0;
    v21 = *(_QWORD *)(a3 + 40);
    v35 = 0;
    v34.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
    v33 = v21;
    v22 = (unsigned int)sub_BBE470(a3);
    if ( !(_BYTE)byte_2CCC480 )
    {
      v32 = v22;
      v30 = __cxa_guard_acquire(&byte_2CCC480);
      v22 = v32;
      if ( v30 )
      {
        qword_2CCC4A0 &= 0xFFFFFFFE00000000LL;
        qword_2CCC4A8 = 0;
        qword_2CCC4B8 = 0;
        __cxa_guard_release(&byte_2CCC480);
        v22 = v32;
      }
    }
    v23 = (__int64 *)(*(_QWORD *)(a3 + 72) & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v23 )
    {
      v23 = &qword_2CCC4A0;
      goto LABEL_13;
    }
    v28 = (*(__int64 *)(a3 + 72) >> 1) & 3;
    if ( v28 == 1 )
    {
      v29 = v23[9];
      v23 = nullptr;
      if ( v29 )
      {
        v23 = (__int64 *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
        if ( ((v29 >> 1) & 3) == 2 )
        {
          if ( v23 )
            goto LABEL_19;
        }
      }
    }
    else if ( v28 == 2 )
    {
LABEL_19:
      v23 = (__int64 *)v23[1];
    }
LABEL_13:
    sub_1DD6BB0(a1, v23, a4, &v34, v22, &v33);
    if ( !v27 )
      sub_BC48F0(v19, *(_QWORD **)(a1 + 248), &v34, v24, v25, v26);
  }
  sub_1DC20B0(*(_QWORD *)(a1 + 11280), a3, v19);
  return v19;
}

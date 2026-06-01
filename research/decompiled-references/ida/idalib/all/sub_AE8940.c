void __fastcall sub_AE8940(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  char v8; // cl
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __m128i v12; // xmm0
  __int64 v13; // rdx
  _QWORD *v14; // rbp
  _QWORD *v15; // rbx
  void (__fastcall *v16)(_QWORD *, _QWORD *, __int64); // rax
  char v17; // [rsp+Fh] [rbp-569h]
  _WORD v18[2]; // [rsp+10h] [rbp-568h] BYREF
  int v19; // [rsp+14h] [rbp-564h]
  __int16 v20; // [rsp+18h] [rbp-560h] BYREF
  _BYTE *v21; // [rsp+20h] [rbp-558h]
  __int64 v22; // [rsp+28h] [rbp-550h]
  _BYTE v23[1024]; // [rsp+30h] [rbp-548h] BYREF
  void *ptr; // [rsp+430h] [rbp-148h]
  __int64 v25; // [rsp+438h] [rbp-140h]
  int v26; // [rsp+440h] [rbp-138h] BYREF
  char v27; // [rsp+444h] [rbp-134h]
  __int64 v28; // [rsp+4A8h] [rbp-D0h]
  char v29; // [rsp+4B0h] [rbp-C8h]
  __int64 v30; // [rsp+4C0h] [rbp-B8h]
  __int64 v31; // [rsp+4C8h] [rbp-B0h]
  __int64 v32; // [rsp+4D0h] [rbp-A8h]
  __int64 v33; // [rsp+4D8h] [rbp-A0h]
  __int64 v34; // [rsp+4E0h] [rbp-98h]
  __int64 v35; // [rsp+4E8h] [rbp-90h]
  _BYTE v36[24]; // [rsp+4F0h] [rbp-88h] BYREF
  __int64 v37; // [rsp+508h] [rbp-70h]
  __int64 v38; // [rsp+510h] [rbp-68h]
  __int64 v39; // [rsp+518h] [rbp-60h]
  __int64 v40; // [rsp+520h] [rbp-58h]
  __int64 v41; // [rsp+528h] [rbp-50h]
  __int64 v42; // [rsp+530h] [rbp-48h]

  v6 = sub_B8C330(a1);
  v7 = v6;
  if ( a4 == 1 )
  {
    v9 = *(_QWORD *)(v6 + 2312);
    v32 = a2;
    v18[0] = 0;
    v20 = 257;
    v10 = v7;
    v21 = v23;
    v22 = 0x2000000000LL;
    v25 = 0x1000000001LL;
    v34 = v9;
    v35 = v7;
    v11 = v7 + 18568;
    v19 = 0;
    ptr = &v26;
    v30 = 0;
    v31 = 0;
    v33 = 2;
    v26 = 0;
    v27 = 0;
    sub_E70380(v36, v10);
    v12 = _mm_loadu_si128((const __m128i *)(v11 - 1104));
    v37 = v11;
    *(__m128i *)&v36[8] = v12;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    sub_ADDB10((__int64)v18, a1);
    sub_E703F0(v36, a1, v13);
    if ( ptr != &v26 )
      free(ptr);
    v14 = v21;
    v15 = &v21[32 * (unsigned int)v22];
    if ( v21 != (_BYTE *)v15 )
    {
      do
      {
        while ( 1 )
        {
          v15 -= 4;
          v16 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v15[2];
          if ( !v16 )
            break;
          v16(v15, v15, 3);
          if ( v14 == v15 )
            goto LABEL_9;
        }
      }
      while ( v14 != v15 );
LABEL_9:
      v15 = v21;
    }
    if ( v15 != (_QWORD *)v23 )
      free(v15);
  }
  else
  {
    v8 = *(_BYTE *)(sub_A62AC0(v6) + 9);
    v18[0] = 0;
    v19 = 0;
    v17 = v8;
    sub_F29A40(&v20, a2, v7);
    v28 = a2;
    v29 = v17;
    LOBYTE(v18[0]) = a3;
    sub_AD13F0((__int64)v18, a1);
    sub_ACC5A0((__int64)&v20);
  }
}

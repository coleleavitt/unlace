__int64 __fastcall sub_1172E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v6; // ebp
  const __m128i *v7; // rax
  __m128i v10; // xmm1
  unsigned int v11; // eax
  __int64 v12; // rdi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rsi
  const char *v17; // rax
  _QWORD v18[2]; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v19; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+30h] [rbp-B8h]
  __int64 v21; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v22; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+48h] [rbp-A0h]
  __int64 v24; // [rsp+58h] [rbp-90h]
  __int64 v25; // [rsp+60h] [rbp-88h]
  __int64 v26; // [rsp+68h] [rbp-80h]
  __int128 v27; // [rsp+70h] [rbp-78h]
  __int128 v28; // [rsp+80h] [rbp-68h]
  __int64 v29; // [rsp+90h] [rbp-58h]
  __int64 v30; // [rsp+98h] [rbp-50h]
  int v31; // [rsp+A0h] [rbp-48h]
  __int16 v32; // [rsp+A4h] [rbp-44h]
  unsigned __int64 v33; // [rsp+B8h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  v5 = a3;
  LOBYTE(a3) = a2 != 0 && a1 != 0;
  v6 = a3;
  if ( (_BYTE)a3 )
  {
    if ( *(_DWORD *)a2 == 62 )
      return 0;
    v7 = *(const __m128i **)(a1 + 480);
    v20 = a2;
    v21 = 0;
    v10 = _mm_loadl_epi64(v7 + 7);
    v22 = 0xFFFFFFFF00000000LL;
    v11 = *(_DWORD *)a4;
    v24 = 0;
    v25 = -1;
    v19 = _mm_unpacklo_epi64(v10, (__m128i)(unsigned __int64)a1);
    v23 = 0;
    v27 = 0;
    v26 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v28 = 0;
    if ( v11 <= 0x18 )
    {
      if ( v11 > 0x16 )
      {
        if ( !(unsigned __int8)sub_116310(&v19, v5, (_DWORD *)a4) )
          goto LABEL_8;
        if ( *(_BYTE *)(a4 + 32) == 4 )
        {
          v14 = *(_QWORD *)(a2 + 16);
          if ( v14 )
          {
            if ( (unsigned __int8)sub_123690(v14, v10.m128i_i64[0], *(_QWORD *)(a4 + 40), 0) )
            {
              v15 = *(_QWORD *)(a2 + 16);
              if ( *(_DWORD *)(v15 + 68) == *(_DWORD *)(a4 + 36) )
              {
                v16 = a4;
                if ( !(unsigned __int8)sub_115B20(&v19, (int *)a4) )
                  goto LABEL_8;
                if ( v15 )
                {
                  v18[1] = 0;
                  v18[0] = 0xFFFFFFFF00000000LL;
                  sub_123DE0(v18, a4);
                  sub_11A5D0(v15 + 32, v18);
                  v16 = v10.m128i_i64[0];
                  sub_11E5D0(v15 + 48, v10.m128i_i64[0], v31, 1, *(_QWORD *)(v15 + 24), 0);
                  *(_DWORD *)v15 = 22;
                  sub_11A960(v18);
                }
LABEL_22:
                v17 = (const char *)sub_1B3250(a4, v16);
                sub_A17A0(a1, (__int64)"div found: %s", v17);
                v12 = v26;
LABEL_9:
                if ( v12 )
                {
                  *(_QWORD *)&v27 = 0;
                  qfree();
                }
                goto LABEL_11;
              }
            }
          }
        }
      }
      else
      {
        if ( v11 != 11 )
        {
          if ( v11 - 12 <= 1 )
            goto LABEL_7;
          goto LABEL_28;
        }
        LODWORD(v30) = 8 * (*(_DWORD *)(a4 + 36) - *(_DWORD *)(a4 + 68));
        if ( !(unsigned __int8)sub_1155C0(&v19, a2, (int *)a4, 1) || !(unsigned __int8)sub_115540((__int64)&v19, 0) )
          goto LABEL_8;
      }
LABEL_25:
      v16 = a4;
      if ( !(unsigned __int8)sub_115B20(&v19, (int *)a4) )
        goto LABEL_8;
      goto LABEL_22;
    }
    if ( v11 - 32 <= 1 )
    {
LABEL_7:
      if ( !sub_116BA0((__int64)&v19, a4) )
      {
LABEL_8:
        v12 = v26;
        v6 = 0;
        goto LABEL_9;
      }
      goto LABEL_25;
    }
LABEL_28:
    v6 = 0;
LABEL_11:
    sub_11A960(&v22);
  }
  return v6;
}

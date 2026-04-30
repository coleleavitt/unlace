__int64 __fastcall sub_214320(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 *a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int128 *v20; // r15
  __int64 v21; // rax
  char v22; // bp
  const void *errdesc; // rax
  const void *v25; // rax
  __int64 v26; // rax
  const char *v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  double v31; // xmm4_8
  double v32; // xmm5_8
  __int64 v33; // [rsp+0h] [rbp-128h]
  char v34; // [rsp+1Fh] [rbp-109h] BYREF
  int v35; // [rsp+20h] [rbp-108h] BYREF
  unsigned int v36; // [rsp+24h] [rbp-104h] BYREF
  __int64 v37; // [rsp+28h] [rbp-100h] BYREF
  __int128 v38; // [rsp+30h] [rbp-F8h] BYREF
  _OWORD v39[2]; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v40[136]; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 v41; // [rsp+E8h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( a4 )
  {
    v18 = fopenM(a2);
    if ( v18 )
      goto LABEL_3;
  }
  else
  {
    v18 = fopenWB(a2);
    if ( v18 )
    {
LABEL_3:
      v35 = 1413563465;
      qfwrite(v18, &v35, 4);
      v34 = 11;
      qfwrite(v18, &v34, 1);
      v37 = a1[2] & *(_QWORD *)(a1[15] + 16LL);
      qfwrite(v18, &v37, 8);
      v19 = a3;
      memset(v40, 0, 0x80u);
      v20 = &v38;
      qstrncpy(v40, v19, 128);
      qfwrite(v18, v40, 128);
      if ( getinf_buf(76, &v38, 16) != 16 )
        v38 = 0;
      v21 = qfwrite(v18, &v38, 16);
      LOBYTE(v20) = v21 == 16;
      v22 = (v21 == 16) & (a4 ^ 1);
      if ( v22 )
      {
        v26 = a1[1];
        v27 = &s1;
        memset(v39, 0, sizeof(v39));
        if ( *(_QWORD *)(v26 + 248) )
          v27 = *(const char **)(v26 + 240);
        qstrncpy(v39, v27, 32);
        if ( qfwrite(v18, v39, 32) == 32 )
        {
          v28 = a1[1];
          v29 = *(_QWORD *)(v28 + 376);
          if ( !v29 && dbg )
          {
            sub_210770(v28);
            v29 = *(_QWORD *)(a1[1] + 376LL);
          }
          v36 = v29;
          qfwrite(v18, &v36, 4);
          v30 = qfwrite(v18, *(_QWORD *)(a1[1] + 368LL), v36);
          if ( v36 == v30 )
          {
            v33 = qftell(v18);
            v36 = 0;
            qfwrite(v18, &v36, 4);
            LODWORD(v20) = sub_214240((__int64)a1, v18, (__int64)&v36, 0.0, a7, a8, a9, v31, v32, a12, a13);
            if ( (_BYTE)v20 )
            {
              if ( !(unsigned int)qfseek(v18, v33, 0) && qfwrite(v18, &v36, 4) )
                goto LABEL_10;
            }
          }
        }
        LODWORD(v20) = 0;
      }
      else
      {
        v22 = v21 != 16;
      }
      if ( a5 && v22 )
      {
        LODWORD(v20) = 0;
        errdesc = (const void *)get_errdesc(a2, 0xFFFFFFFFLL);
        sub_20B400(a5, errdesc);
      }
LABEL_10:
      qfclose(v18);
      return (unsigned int)v20;
    }
  }
  if ( a5 )
  {
    v25 = (const void *)get_errdesc(a2, 0xFFFFFFFFLL);
    sub_20B400(a5, v25);
  }
  LODWORD(v20) = 0;
  return (unsigned int)v20;
}

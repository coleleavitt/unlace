unsigned __int64 __fastcall sub_3B5340(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  unsigned __int64 *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 **v18; // rbp
  unsigned __int64 **v19; // r12
  _QWORD *v20; // r13
  _QWORD *v21; // r12
  __m128i *v22; // r15
  __int64 v23; // r14
  __m128i *v24; // rbp
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __m128i *v27; // r14
  __int64 v28; // rdi
  _QWORD *v29; // rdx
  _QWORD *i; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 **v35; // rdi
  __int64 v36; // rbp
  __int64 v37; // rbx
  unsigned __int64 **v38; // rdi
  _QWORD *v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rcx
  _QWORD *v43; // [rsp+0h] [rbp-68h]
  _QWORD *v44; // [rsp+8h] [rbp-60h]
  unsigned __int64 **v45; // [rsp+10h] [rbp-58h] BYREF
  __int128 v46; // [rsp+18h] [rbp-50h]
  unsigned __int64 v47; // [rsp+28h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 64) )
  {
    while ( *(_QWORD *)(a1 + 56) )
      sub_3B1EC0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 32LL), 1, a11, a12);
    *(_BYTE *)(a1 + 65) = 1;
    v14 = (unsigned __int64 *)&v45;
    v46 = 0;
    v45 = nullptr;
    sub_369800(a2, (__int64)&v45, nullptr, 16, 0.0, a4, a5, a6, a7, a8, a9);
    v18 = v45;
    v19 = &v45[v46];
    if ( v19 != v45 )
    {
      do
      {
        v14 = *v18;
        sub_3B4E50(a1, *v18++, 0, v15, v16);
      }
      while ( v19 != v18 );
    }
    v44 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      if ( *(_QWORD *)(a1 + 8) )
      {
        v43 = (_QWORD *)v44[1];
        if ( v44 != v43 )
        {
          while ( 1 )
          {
            v20 = (_QWORD *)v43[6];
            if ( v20 )
            {
              if ( v43[7] )
                break;
            }
LABEL_23:
            if ( (*v43 & 2) == 0 )
            {
              v31 = (_QWORD *)v43[2];
              if ( (*(_BYTE *)v31 & 2) != 0 )
              {
                v32 = (_QWORD *)(*v43 & 0xFFFFFFFFFFFFFFFCLL);
                v33 = *v32;
                if ( (*v32 & 2) == 0 )
                {
                  while ( (_QWORD *)v32[2] == v43 )
                  {
                    v43 = v32;
                    v34 = v33 & 0xFFFFFFFFFFFFFFFCLL;
                    v33 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v33 & 2) != 0 )
                    {
                      v43 = (_QWORD *)v34;
                      goto LABEL_29;
                    }
                    v32 = (_QWORD *)v34;
                  }
                }
                v43 = v32;
              }
              else
              {
                do
                {
                  v43 = v31;
                  v31 = (_QWORD *)v31[1];
                }
                while ( (*(_BYTE *)v31 & 2) == 0 );
              }
            }
LABEL_29:
            if ( v44 == v43 )
              goto LABEL_30;
          }
          v21 = (_QWORD *)v20[1];
LABEL_12:
          if ( v20 == v21 )
            goto LABEL_23;
          while ( 1 )
          {
            v22 = (__m128i *)v21[4];
            v23 = 40LL * v21[5];
            v24 = (__m128i *)((char *)v22 + v23);
            if ( v22 == (__m128i *)&v22->m128i_i8[v23] )
              goto LABEL_18;
            v25 = 0xCCCCCCCCCCCCCCCDLL * (v23 >> 3);
            if ( !v25 )
              break;
            _BitScanReverse64(&v26, v25);
            sub_3B4BD0(v21[4], v24, 2LL * (int)v26, 0xCCCCCCCCCCCCCCCDLL, v16, v17);
            if ( v23 <= 640 )
              goto LABEL_37;
            v27 = v22 + 40;
            v14 = (unsigned __int64 *)&v22[40];
            sub_3A9A30(v22, v22 + 40);
            do
            {
              v28 = (__int64)v27;
              v27 = (__m128i *)((char *)v27 + 40);
              sub_3A98C0(v28);
            }
            while ( v24 != v27 );
LABEL_18:
            if ( (*v21 & 2) != 0 )
              goto LABEL_12;
            v29 = (_QWORD *)v21[2];
            if ( (*(_BYTE *)v29 & 2) != 0 )
            {
              v40 = (_QWORD *)(*v21 & 0xFFFFFFFFFFFFFFFCLL);
              v41 = *v40;
              if ( (*v40 & 2) != 0 || (_QWORD *)v40[2] != v21 )
              {
LABEL_39:
                v21 = v40;
              }
              else
              {
                while ( 1 )
                {
                  v21 = (_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCLL);
                  v41 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v41 & 2) != 0 )
                    break;
                  v42 = v40;
                  v40 = v21;
                  if ( (_QWORD *)v21[2] != v42 )
                    goto LABEL_39;
                }
              }
              goto LABEL_12;
            }
            for ( i = (_QWORD *)v29[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
              v29 = i;
            v21 = v29;
            if ( v20 == v29 )
              goto LABEL_23;
          }
          sub_3B4BD0(v21[4], v24, -2, 0xCCCCCCCCCCCCCCCDLL, v16, v17);
LABEL_37:
          v14 = &v22->m128i_u64[(unsigned __int64)v23 / 8];
          sub_3A9A30(v22, v24);
          goto LABEL_18;
        }
      }
    }
LABEL_30:
    v35 = v45;
    *(_BYTE *)(a1 + 65) = 0;
    if ( v35 )
    {
      v36 = v46;
      if ( (_QWORD)v46 )
      {
        v37 = 0;
        do
        {
          v38 = &v35[v37++];
          sub_140140(v38, (__int64)v14);
          v35 = v45;
        }
        while ( v36 != v37 );
      }
      *(_QWORD *)&v46 = 0;
      qfree(v35);
    }
  }
  return v47 - __readfsqword(0x28u);
}

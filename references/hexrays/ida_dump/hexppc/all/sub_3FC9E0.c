unsigned __int64 __fastcall sub_3FC9E0(_DWORD *a1, __int64 a2, __m128i *a3)
{
  _QWORD *v4; // rdi
  unsigned __int64 v6; // r9
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  int i; // r12d
  __int64 v11; // r10
  __int64 v12; // rsi
  _QWORD *v13; // rdi
  _QWORD *v14; // r8
  bool v15; // cf
  char v16; // dl
  _QWORD *v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // r8
  _QWORD *v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // r11
  char v23; // dl
  __int64 v24; // rdx
  unsigned __int64 v26; // rsi
  _QWORD *v27; // rdx
  __int64 v28; // rsi
  int v29; // r12d
  __int64 v30; // rax
  _QWORD *v31; // rdi
  const __m128i *v32; // [rsp+8h] [rbp-50h] BYREF
  __int64 v33; // [rsp+10h] [rbp-48h] BYREF
  char v34; // [rsp+18h] [rbp-40h]
  unsigned __int64 v35; // [rsp+28h] [rbp-30h]

  v35 = __readfsqword(0x28u);
  v4 = (_QWORD *)a3->m128i_i64[0];
  if ( a3->m128i_i64[0] )
  {
    if ( a3->m128i_i64[1] )
    {
      v6 = v4[1];
      if ( (_QWORD *)v6 != v4 )
      {
        v7 = (_QWORD *)v4[1];
        v8 = 0;
        do
        {
LABEL_5:
          while ( (*v7 & 2) != 0 )
          {
LABEL_8:
            ++v8;
            if ( v4 == v7 )
              goto LABEL_9;
          }
          v9 = (_QWORD *)v7[2];
          if ( (*(_BYTE *)v9 & 2) == 0 )
          {
            do
            {
              v7 = v9;
              v9 = (_QWORD *)v9[1];
            }
            while ( (*(_BYTE *)v9 & 2) == 0 );
            goto LABEL_8;
          }
          v17 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
          v18 = *v17;
          if ( (*v17 & 2) == 0 )
          {
            while ( (_QWORD *)v17[2] == v7 )
            {
              v7 = v17;
              v19 = v18 & 0xFFFFFFFFFFFFFFFCLL;
              v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v18 & 2) != 0 )
              {
                v7 = (_QWORD *)v19;
                ++v8;
                if ( v4 != (_QWORD *)v19 )
                  goto LABEL_5;
                goto LABEL_9;
              }
              v17 = (_QWORD *)v19;
            }
          }
          v7 = v17;
          ++v8;
        }
        while ( v4 != v17 );
LABEL_9:
        for ( i = a1[117]; v8 > 0; v8 = v8 - 1 - v11 )
        {
LABEL_10:
          v11 = v8 >> 1;
          if ( !(v8 >> 1) )
          {
            v23 = *(_BYTE *)(v6 + 32);
            if ( v23 && (v23 != 1 || i <= *(_QWORD *)(v6 + 24)) )
              break;
            v24 = *(_QWORD *)v6;
            if ( (*(_QWORD *)v6 & 2) != 0 )
              break;
            goto LABEL_44;
          }
          v12 = v11 - 1;
          v13 = (_QWORD *)v6;
          do
          {
LABEL_12:
            while ( (*v13 & 2) != 0 )
            {
LABEL_15:
              v15 = v12-- == 0;
              if ( v15 )
                goto LABEL_16;
            }
            v14 = (_QWORD *)v13[2];
            if ( (*(_BYTE *)v14 & 2) == 0 )
            {
              do
              {
                v13 = v14;
                v14 = (_QWORD *)v14[1];
              }
              while ( (*(_BYTE *)v14 & 2) == 0 );
              goto LABEL_15;
            }
            v20 = (_QWORD *)(*v13 & 0xFFFFFFFFFFFFFFFCLL);
            v21 = *v20;
            if ( (*v20 & 2) == 0 )
            {
              while ( (_QWORD *)v20[2] == v13 )
              {
                v13 = v20;
                v22 = v21 & 0xFFFFFFFFFFFFFFFCLL;
                v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v21 & 2) != 0 )
                {
                  v13 = (_QWORD *)v22;
                  v15 = v12-- == 0;
                  if ( !v15 )
                    goto LABEL_12;
                  goto LABEL_16;
                }
                v20 = (_QWORD *)v22;
              }
            }
            v13 = v20;
            v15 = v12-- == 0;
          }
          while ( !v15 );
LABEL_16:
          v16 = *((_BYTE *)v13 + 32);
          if ( v16 && (v16 != 1 || i <= v13[3]) )
          {
            v8 >>= 1;
            goto LABEL_10;
          }
          v24 = *v13;
          v6 = (unsigned __int64)v13;
          if ( (*v13 & 2) == 0 )
          {
LABEL_44:
            v26 = *(_QWORD *)(v6 + 16);
            if ( (*(_BYTE *)v26 & 2) != 0 )
            {
              v27 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
              v28 = *v27;
              if ( (*v27 & 2) != 0 || v6 != v27[2] )
              {
LABEL_46:
                v6 = (unsigned __int64)v27;
              }
              else
              {
                while ( 1 )
                {
                  v6 = v28 & 0xFFFFFFFFFFFFFFFCLL;
                  v28 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v28 & 2) != 0 )
                    break;
                  v31 = v27;
                  v27 = (_QWORD *)v6;
                  if ( v31 != *(_QWORD **)(v6 + 16) )
                    goto LABEL_46;
                }
              }
            }
            else
            {
              do
              {
                v6 = v26;
                v26 = *(_QWORD *)(v26 + 8);
              }
              while ( (*(_BYTE *)v26 & 2) == 0 );
            }
          }
        }
        if ( (_QWORD *)v6 != v7 && *(_BYTE *)(v6 + 32) == 1 && i + 4 > *(_DWORD *)(v6 + 24) )
        {
          v29 = a1[118];
          while ( a1[119] >= v29 )
          {
            v33 = v29++;
            v34 = 1;
            v32 = (const __m128i *)&v33;
            sub_3FC6F0(a3, (__int64)&v33, &v32);
          }
          v30 = (int)a1[120];
          v34 = 1;
          v33 = v30;
          v32 = (const __m128i *)&v33;
          sub_3FC6F0(a3, (__int64)&v33, &v32);
        }
      }
    }
  }
  return v35 - __readfsqword(0x28u);
}

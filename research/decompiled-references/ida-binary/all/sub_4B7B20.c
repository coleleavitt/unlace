char __fastcall sub_4B7B20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 *v5; // rax
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v9; // rbp
  const char *v10; // rsi
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r12
  _BYTE *v16; // rbx
  _BYTE *v17; // r12
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __int64 *v26; // [rsp+8h] [rbp-90h]
  char v27; // [rsp+8h] [rbp-90h]
  char v28; // [rsp+8h] [rbp-90h]
  __int64 v29; // [rsp+10h] [rbp-88h] BYREF
  __int128 v30; // [rsp+18h] [rbp-80h]
  __int64 *v31; // [rsp+30h] [rbp-68h] BYREF
  __int64 v32; // [rsp+38h] [rbp-60h]
  __m128i v33; // [rsp+40h] [rbp-58h] BYREF
  __int64 v34; // [rsp+50h] [rbp-48h]
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  if ( *(_DWORD *)a1 != 3 )
    sub_4B5660(a5, a1, a2, a3, a4);
  v5 = *(__int64 **)(a1 + 8);
  v6 = v5[1];
  if ( !v6 )
  {
LABEL_9:
    LOBYTE(v11) = 0;
    return v11;
  }
  v7 = *v5;
  v9 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(v7 + 8) )
    {
      v10 = "window_state";
      v11 = strcmp(*(const char **)v7, "window_state");
      if ( !v11 )
        break;
    }
    ++v9;
    v7 += 40;
    if ( v6 == v9 )
      goto LABEL_9;
  }
  if ( *(_DWORD *)(v7 + 24) == 2 )
  {
    v12 = *(__int64 **)(v7 + 32);
    v26 = v12;
    if ( (unsigned __int64)v12[1] > 1 )
    {
      v29 = 0;
      v30 = 0;
      v13 = v12[1];
      if ( !v13 )
        goto LABEL_22;
      v14 = v13 - 1;
      v15 = v14 >> 1;
      if ( v14 >> 1 )
      {
        v10 = nullptr;
        v29 = qvector_reserve(&v29, 0, v14 >> 1, 1);
        memset((void *)(v29 + v30), 0, v15 - v30);
        v16 = (_BYTE *)v29;
        *(_QWORD *)&v30 = v15;
        v17 = (_BYTE *)(v29 + v15);
        v18 = *v26;
        if ( (_BYTE *)v29 == v17 )
        {
          v19 = *v26;
          v20 = v26[1];
          if ( !v20 )
            goto LABEL_22;
        }
        else
        {
          do
          {
            v10 = "%02X";
            LODWORD(v31) = 0;
            if ( (unsigned int)qsscanf(v18, "%02X", &v31) != 1 )
              break;
            if ( (unsigned int)v31 > 0xFF )
              break;
            *v16++ = (_BYTE)v31;
            v18 += 2;
          }
          while ( v17 != v16 );
          v19 = *v26;
          v20 = v26[1];
          if ( !v20 )
          {
LABEL_21:
            LOBYTE(v11) = 0;
            if ( v19 != v18 )
            {
LABEL_27:
              if ( v29 )
              {
                v28 = v11;
                *(_QWORD *)&v30 = 0;
                qfree(v29, v10);
                LOBYTE(v11) = v28;
              }
              return v11;
            }
LABEL_22:
            v31 = &v29;
            v10 = (const char *)sub_4B54B0;
            v33 = 0;
            v32 = 0;
            v34 = 0;
            v11 = zip_inflate(&v31, sub_4B54B0, sub_4B5FD0);
            v21 = v32;
            LOBYTE(v11) = v11 == 0;
            if ( a2 && (_BYTE)v11 )
            {
              v22 = *(_QWORD *)a2;
              v23 = *(_QWORD *)(a2 + 16);
              *(_QWORD *)a2 = v32;
              v24 = _mm_load_si128(&v33);
              v32 = v22;
              v21 = v22;
              v33.m128i_i64[1] = v23;
              *(__m128i *)(a2 + 8) = v24;
            }
            if ( v21 )
            {
              v27 = v11;
              v33.m128i_i64[0] = 0;
              qfree(v21, (const char *)sub_4B54B0);
              LOBYTE(v11) = v27;
            }
            goto LABEL_27;
          }
        }
        v14 = v20 - 1;
      }
      else
      {
        v19 = *v12;
        v18 = *v12;
      }
      v19 += v14;
      goto LABEL_21;
    }
  }
  return v11;
}

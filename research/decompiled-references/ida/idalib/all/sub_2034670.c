void __fastcall sub_2034670(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        unsigned int *a8)
{
  __int64 v8; // r14
  char v9; // dl
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 i; // rbp
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int64 *v18; // rsi
  __int64 v19; // r10
  unsigned __int64 v20; // r14
  unsigned int v21; // r13d
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  unsigned int v26; // ecx
  __int64 *v27; // rsi
  __int64 v28; // r10
  unsigned __int64 v29; // r14
  _QWORD *v30; // rdx
  int v31; // esi
  int v32; // esi
  unsigned int v33; // r13d
  bool v34; // al
  __int64 v35; // rcx
  int v36; // esi
  __int64 v37; // rax
  unsigned int v38; // r13d
  int v39; // r9d
  int v40; // r9d
  __int64 v41; // [rsp+0h] [rbp-98h]
  char *v42; // [rsp+10h] [rbp-88h]
  unsigned int *v43; // [rsp+18h] [rbp-80h]
  __int64 v44; // [rsp+20h] [rbp-78h]
  int v46; // [rsp+34h] [rbp-64h]
  unsigned __int64 v47; // [rsp+38h] [rbp-60h]
  __m128i v48; // [rsp+40h] [rbp-58h] BYREF
  __int64 v49; // [rsp+50h] [rbp-48h]

  if ( a1 != a2 )
  {
    v8 = a1 + 16;
    if ( a2 != a1 + 16 )
    {
      v47 = a1 + ((a2 - 32 - a1) & 0xFFFFFFFFFFFFFFF0LL) + 32;
      do
      {
        while ( 1 )
        {
          v44 = v8 + 16;
          if ( !(unsigned __int8)sub_2033A10((__int64)&a7, *(_QWORD *)v8, *(_QWORD *)a1) )
            break;
          v35 = *(_QWORD *)v8;
          v36 = *(_DWORD *)(v8 + 8);
          v37 = (v8 - a1) >> 4;
          if ( v8 - a1 > 0 )
          {
            do
            {
              v8 -= 16;
              *(_QWORD *)(v8 + 16) = *(_QWORD *)v8;
              *(_DWORD *)(v8 + 24) = *(_DWORD *)(v8 + 8);
              --v37;
            }
            while ( v37 );
          }
          v8 = v44;
          *(_QWORD *)a1 = v35;
          *(_DWORD *)(a1 + 8) = v36;
          if ( v44 == v47 )
            return;
        }
        v11 = a7;
        v43 = a8;
        v48 = _mm_loadu_si128((const __m128i *)&a7);
        v49 = (__int64)a8;
        v42 = (char *)v48.m128i_i64[1];
        v12 = *(_QWORD *)(v8 - 16);
        v41 = *(_QWORD *)v8;
        v46 = *(_DWORD *)(v8 + 8);
        if ( *(_QWORD *)v8 == v12 )
          goto LABEL_8;
        for ( i = v8 - 16; ; i -= 16 )
        {
          v14 = *(_QWORD *)v11;
          v15 = *(_QWORD *)(v41 + 24);
          v16 = *(unsigned int *)(v11 + 16);
          if ( !(_DWORD)v16 )
          {
LABEL_29:
            sub_2033890(
              (__m128 *)&v48,
              (_QWORD *)(v14 + 16LL * (unsigned int)v16),
              (_QWORD *)(v14 + 16LL * (unsigned int)v16),
              v11,
              1);
            v20 = v48.m128i_i64[0];
            goto LABEL_15;
          }
          v17 = (v16 - 1) & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
          v18 = (__int64 *)(v14 + 16LL * v17);
          v19 = *v18;
          if ( v15 != *v18 )
          {
            v31 = 1;
            if ( v19 == -4096 )
              goto LABEL_29;
            while ( 1 )
            {
              v39 = v31 + 1;
              v17 = (v16 - 1) & (v31 + v17);
              v18 = (__int64 *)(v14 + 16LL * v17);
              if ( v15 == *v18 )
                break;
              if ( *v18 == -4096 )
                goto LABEL_29;
              v31 = v39;
            }
          }
          sub_2033890((__m128 *)&v48, v18, (_QWORD *)(16 * v16 + v14), v11, 1);
          v20 = v48.m128i_i64[0];
LABEL_15:
          v21 = 0;
          v22 = (_QWORD *)(*(_QWORD *)v11 + 16LL * *(unsigned int *)(v11 + 16));
          sub_2033890((__m128 *)&v48, v22, v22, v11, 1);
          if ( v20 != v48.m128i_i64[0] )
            v21 = *(_DWORD *)(*(_QWORD *)(v11 + 24) + 16LL * *(unsigned int *)(v20 + 8) + 8);
          v23 = *(unsigned int *)(v11 + 16);
          v24 = *(_QWORD *)(v12 + 24);
          v25 = *(_QWORD *)v11;
          if ( (_DWORD)v23 )
          {
            v26 = (v23 - 1) & (((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4));
            v27 = (__int64 *)(v25 + 16LL * v26);
            v28 = *v27;
            if ( v24 == *v27 )
              goto LABEL_19;
            v32 = 1;
            if ( v28 != -4096 )
            {
              while ( 1 )
              {
                v40 = v32 + 1;
                v26 = (v23 - 1) & (v26 + v32);
                v27 = (__int64 *)(v25 + 16LL * v26);
                if ( v24 == *v27 )
                  break;
                if ( *v27 == -4096 )
                  goto LABEL_31;
                v32 = v40;
              }
LABEL_19:
              sub_2033890((__m128 *)&v48, v27, (_QWORD *)(16 * v23 + v25), v11, 1);
              v29 = v48.m128i_i64[0];
              goto LABEL_20;
            }
          }
LABEL_31:
          sub_2033890(
            (__m128 *)&v48,
            (_QWORD *)(v25 + 16LL * (unsigned int)v23),
            (_QWORD *)(v25 + 16LL * (unsigned int)v23),
            v11,
            1);
          v29 = v48.m128i_i64[0];
LABEL_20:
          v30 = (_QWORD *)(*(_QWORD *)v11 + 16LL * *(unsigned int *)(v11 + 16));
          sub_2033890((__m128 *)&v48, v30, v30, v11, 1);
          if ( v48.m128i_i64[0] == v29 )
          {
            v9 = *v42;
            v10 = 0;
          }
          else
          {
            v9 = *v42;
            v10 = *(_DWORD *)(*(_QWORD *)(v11 + 24) + 16LL * *(unsigned int *)(v29 + 8) + 8);
            if ( v10 > v21 )
            {
              if ( !v9 || *v43 < v10 )
                goto LABEL_7;
              goto LABEL_25;
            }
          }
          if ( v21 <= v10 )
          {
            if ( v9 && *v43 >= v21 )
            {
              v38 = sub_20C9A20(v41);
              v34 = v38 < (unsigned int)sub_20C9A20(v12);
            }
            else
            {
              v33 = sub_20C9A20(v41);
              v34 = v33 > (unsigned int)sub_20C9A20(v12);
            }
            if ( !v34 )
            {
LABEL_7:
              v8 = i + 16;
              goto LABEL_8;
            }
          }
          else if ( v9 && *v43 >= v21 )
          {
            goto LABEL_7;
          }
LABEL_25:
          v12 = *(_QWORD *)(i - 16);
          *(_QWORD *)(i + 16) = *(_QWORD *)i;
          *(_DWORD *)(i + 24) = *(_DWORD *)(i + 8);
          if ( v41 == v12 )
            break;
        }
        v8 = i;
LABEL_8:
        *(_QWORD *)v8 = v41;
        *(_DWORD *)(v8 + 8) = v46;
        v8 = v44;
      }
      while ( v44 != v47 );
    }
  }
}

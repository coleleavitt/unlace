__int64 __fastcall sub_7ECB80(__int64 *a1, _QWORD *a2, __int64 a3)
{
  _BYTE *v3; // r13
  bool v4; // cf
  _BYTE *v5; // rdx
  unsigned __int64 v8; // rbx
  _BYTE *i; // rbp
  const void *v10; // r14
  __int64 v11; // r8
  size_t v12; // r9
  _BYTE *v13; // r10
  __int64 v14; // rsi
  __int64 v15; // rdx
  const void *v16; // rsi
  _BYTE *v17; // r13
  _BYTE *v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbp
  size_t v21; // r9
  size_t v22; // r10
  __int64 v23; // rsi
  __int64 v24; // rdx
  const void *v25; // r8
  _BYTE *j; // rax
  _BYTE *v27; // r14
  __int64 v28; // rax
  __int64 v29; // r13
  size_t v30; // rbp
  size_t v31; // r9
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rbp
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  void *src; // [rsp+0h] [rbp-68h]
  void *srcc; // [rsp+0h] [rbp-68h]
  void *srca; // [rsp+0h] [rbp-68h]
  void *srcb; // [rsp+0h] [rbp-68h]
  size_t v43; // [rsp+8h] [rbp-60h]
  size_t v44; // [rsp+8h] [rbp-60h]
  const void *v45; // [rsp+10h] [rbp-58h]
  __int64 v46; // [rsp+10h] [rbp-58h]
  _BYTE *v47; // [rsp+18h] [rbp-50h]
  size_t v48; // [rsp+18h] [rbp-50h]
  _QWORD v49[9]; // [rsp+20h] [rbp-48h] BYREF

  v49[1] = __readfsqword(0x28u);
  v3 = (_BYTE *)*a2;
  v4 = __CFADD__(*a2, a3);
  v5 = (_BYTE *)(*a2 + a3);
  if ( !v4 )
  {
    v8 = (unsigned __int64)v5;
    for ( i = (_BYTE *)*a2; v5 != i; ++i )
    {
      v10 = i + 1;
      if ( !*i )
      {
        if ( v3 )
        {
          v11 = a1[1];
          v12 = i - v3;
          v13 = (_BYTE *)(i - v3);
          if ( v11 )
          {
            --v11;
            v13 = (_BYTE *)(v12 + v11);
          }
          v14 = *a1;
          v15 = (__int64)(v13 + 1);
          if ( a1[2] < (unsigned __int64)(v13 + 1) )
          {
            v47 = v13;
            v46 = v11;
            srca = v13 + 1;
            v37 = qvector_reserve(a1, v14, v15, 1);
            v13 = v47;
            v11 = v46;
            v12 = i - v3;
            v15 = (__int64)srca;
            *a1 = v37;
            v14 = v37;
          }
          a1[1] = v15;
          v13[v14] = 0;
          v16 = v3;
          v17 = i + 1;
          memmove((void *)(v11 + *a1), v16, v12);
          while ( (unsigned __int64)v17 < v8 )
          {
            v18 = v17 + 1;
            if ( !*v17 )
            {
              v19 = v17 - i;
              v20 = a1[4];
              v21 = v19 - 1;
              v22 = v21;
              if ( v20 )
              {
                --v20;
                v22 = v21 + v20;
              }
              v23 = a1[3];
              v24 = v22 + 1;
              if ( a1[5] < v22 + 1 )
              {
                v48 = v21;
                v44 = v22;
                srcb = (void *)(v22 + 1);
                v38 = qvector_reserve(a1 + 3, v23, v24, 1);
                v21 = v48;
                v18 = v17 + 1;
                a1[3] = v38;
                v22 = v44;
                v23 = v38;
                v24 = (__int64)srcb;
              }
              a1[4] = v24;
              *(_BYTE *)(v23 + v22) = 0;
              src = v18;
              memmove((void *)(v20 + a1[3]), v10, v21);
              v25 = src;
              for ( j = src; (unsigned __int64)j < v8; ++j )
              {
                v27 = j + 1;
                if ( !*j )
                {
                  v28 = j - v17;
                  v29 = a1[7];
                  v30 = v28 - 1;
                  v31 = v28 - 1;
                  if ( v29 )
                  {
                    --v29;
                    v31 = v30 + v29;
                  }
                  v32 = a1[6];
                  v33 = v31 + 1;
                  if ( a1[8] < v31 + 1 )
                  {
                    v45 = src;
                    v43 = v31;
                    srcc = (void *)(v31 + 1);
                    v36 = qvector_reserve(a1 + 6, v32, v33, 1);
                    v25 = v45;
                    v31 = v43;
                    a1[6] = v36;
                    v33 = (__int64)srcc;
                    v32 = v36;
                  }
                  a1[7] = v33;
                  *(_BYTE *)(v32 + v31) = 0;
                  memmove((void *)(v29 + a1[6]), v25, v30);
                  if ( v8 >= (unsigned __int64)v27 )
                  {
                    v49[0] = v27;
                    v34 = unpack_dq(v49, v8);
                    v35 = v49[0];
                    a1[9] = v34;
                    if ( (unsigned __int64)v27 < v35 )
                    {
                      a1[10] = unpack_dq(v49, v8);
                      if ( v35 < v49[0] )
                      {
                        *a2 = v49[0];
                        return 1;
                      }
                    }
                  }
                  return 0;
                }
              }
              return 0;
            }
            ++v17;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}


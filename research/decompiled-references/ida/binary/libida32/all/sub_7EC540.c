__int64 __fastcall sub_7EC540(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned int v4; // r13d
  _BYTE *v8; // r8
  _BYTE *v9; // rbx
  __int64 v10; // r14
  size_t v11; // r9
  size_t v12; // r10
  __int64 v13; // rsi
  size_t v14; // rdx
  void *v15; // rdi
  _BYTE *v16; // r14
  __int64 v17; // r15
  size_t v18; // r8
  size_t v19; // r9
  __int64 v20; // rsi
  size_t v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  size_t v24; // [rsp+0h] [rbp-68h]
  size_t v25; // [rsp+0h] [rbp-68h]
  _BYTE *v26; // [rsp+8h] [rbp-60h]
  size_t v27; // [rsp+8h] [rbp-60h]
  __int64 v28; // [rsp+10h] [rbp-58h]
  size_t v29; // [rsp+18h] [rbp-50h]
  void *src[9]; // [rsp+20h] [rbp-48h] BYREF

  src[1] = (void *)__readfsqword(0x28u);
  v3 = a3 + *a2;
  if ( !__CFADD__(a3, *a2) )
  {
    src[0] = *(void **)a2;
    v4 = sub_7EC3D0((__int64)(a1 + 2), (unsigned __int64 *)src, a3);
    if ( (_BYTE)v4 )
    {
      v8 = src[0];
      v9 = src[0];
      while ( (unsigned __int64)v9 < v3 )
      {
        if ( !*v9++ )
        {
          src[0] = v9;
          if ( v8 )
          {
            v10 = a1[8];
            v11 = v9 - v8 - 1;
            v12 = v11;
            if ( v10 )
            {
              --v10;
              v12 = v11 + v10;
            }
            v13 = a1[7];
            v14 = v12 + 1;
            if ( a1[9] < v12 + 1 )
            {
              v29 = v12;
              v28 = v9 - v8 - 1;
              v26 = v8;
              v24 = v12 + 1;
              v22 = qvector_reserve(a1 + 7, v13, v14, 1);
              v12 = v29;
              v11 = v28;
              v8 = v26;
              v14 = v24;
              a1[7] = v22;
              v13 = v22;
            }
            a1[8] = v14;
            *(_BYTE *)(v13 + v12) = 0;
            v15 = (void *)(v10 + a1[7]);
            v16 = v9;
            memmove(v15, v8, v11);
            while ( (unsigned __int64)v16 < v3 )
            {
              if ( !*v16++ )
              {
                src[0] = v16;
                if ( !v9 )
                  return 0;
                v17 = a1[11];
                v18 = v16 - v9 - 1;
                v19 = v18;
                if ( v17 )
                {
                  --v17;
                  v19 = v18 + v17;
                }
                v20 = a1[10];
                v21 = v19 + 1;
                if ( a1[12] < v19 + 1 )
                {
                  v27 = v19;
                  v25 = v19 + 1;
                  v23 = qvector_reserve(a1 + 10, v20, v21, 1);
                  v18 = v16 - v9 - 1;
                  v19 = v27;
                  a1[10] = v23;
                  v21 = v25;
                  v20 = v23;
                }
                a1[11] = v21;
                *(_BYTE *)(v20 + v19) = 0;
                memmove((void *)(v17 + a1[10]), v9, v18);
                *a2 = v16;
                return v4;
              }
            }
          }
          return 0;
        }
      }
    }
  }
  return 0;
}


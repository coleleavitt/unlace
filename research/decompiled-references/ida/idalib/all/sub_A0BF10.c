void __fastcall sub_A0BF10(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rax
  _BYTE *v6; // r12
  void *v7; // rdx
  unsigned __int64 v8; // rdx
  _BYTE *v9; // rdx
  _BYTE *v10; // rax
  __int64 v11; // rdx
  void *v12; // [rsp+18h] [rbp-60h] BYREF
  void *v13[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v14[9]; // [rsp+30h] [rbp-48h] BYREF

  sub_A0AC30(a1, a2);
  v2 = (*a1)++;
  if ( *(_BYTE *)v2 )
    *(_BYTE *)(a2 + 72) = (2 * (*(_BYTE *)(v2 + 1) & 3)) | *(_BYTE *)(a2 + 72) & 0xF8 | 1;
  *a1 = v2 + 2;
  v3 = *(unsigned __int16 *)(v2 + 2);
  v4 = v2 + 4;
  v5 = v14;
  *a1 = v2 + 4;
  v6 = (_BYTE *)(v2 + 4 + v3);
  v13[0] = v14;
  v7 = (void *)v3;
  v12 = (void *)v3;
  if ( v3 > 0xF )
  {
    v5 = (_QWORD *)sub_A099D0((__int64 *)&v12, 0);
    v7 = v12;
    v13[0] = v5;
    v14[0] = v12;
  }
  if ( (_BYTE *)v4 != v6 )
  {
    if ( ((unsigned __int64)v5 >= v2 + 20 || v4 >= (unsigned __int64)(v5 + 2)) && v3 - 1 > 0xE )
    {
      v8 = 0;
      do
      {
        *(__m128i *)&v5[v8 / 8] = _mm_loadu_si128((const __m128i *)(v2 + v8 + 4));
        v8 += 16LL;
      }
      while ( v8 != (v3 & 0xFFFFFFFFFFFFFFF0LL) );
      v9 = (_BYTE *)(v4 + (v3 & 0xFFFFFFFFFFFFFFF0LL));
      v10 = (char *)v5 + (v3 & 0xFFFFFFFFFFFFFFF0LL);
      if ( v3 != (v3 & 0xFFFFFFFFFFFFFFF0LL) )
      {
        *v10 = *v9;
        if ( v6 != v9 + 1 )
        {
          v10[1] = v9[1];
          if ( v6 != v9 + 2 )
          {
            v10[2] = v9[2];
            if ( v6 != v9 + 3 )
            {
              v10[3] = v9[3];
              if ( v6 != v9 + 4 )
              {
                v10[4] = v9[4];
                if ( v6 != v9 + 5 )
                {
                  v10[5] = v9[5];
                  if ( v6 != v9 + 6 )
                  {
                    v10[6] = v9[6];
                    if ( v6 != v9 + 7 )
                    {
                      v10[7] = v9[7];
                      if ( v6 != v9 + 8 )
                      {
                        v10[8] = v9[8];
                        if ( v6 != v9 + 9 )
                        {
                          v10[9] = v9[9];
                          if ( v6 != v9 + 10 )
                          {
                            v10[10] = v9[10];
                            if ( v6 != v9 + 11 )
                            {
                              v10[11] = v9[11];
                              if ( v6 != v9 + 12 )
                              {
                                v10[12] = v9[12];
                                if ( v6 != v9 + 13 )
                                {
                                  v10[13] = v9[13];
                                  if ( v6 != v9 + 14 )
                                    v10[14] = v9[14];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v11 = 0;
      do
      {
        *((_BYTE *)v5 + v11) = *(_BYTE *)(v2 + v11 + 4);
        ++v11;
      }
      while ( v11 != v3 );
    }
    v7 = v12;
    v5 = v13[0];
  }
  v13[1] = v7;
  *((_BYTE *)v7 + (_QWORD)v5) = 0;
  sub_9EE8A0(a2 + 80, (__int64)v13);
  if ( v13[0] != v14 )
    operator delete(v13[0]);
  *a1 += v3;
}

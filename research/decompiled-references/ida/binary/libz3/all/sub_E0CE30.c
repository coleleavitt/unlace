__int64 __fastcall sub_E0CE30(__int64 *a1, __int64 a2, unsigned int a3, __int64 *a4, __int64 a5)
{
  __int64 *v5; // r15
  __int64 *v6; // r14
  __int64 *v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 *v19; // [rsp+20h] [rbp-C8h]
  __int64 v20; // [rsp+28h] [rbp-C0h]
  _BYTE v21[184]; // [rsp+30h] [rbp-B8h] BYREF

  v19 = (__int64 *)v21;
  v20 = 0x1000000000LL;
  if ( a3 )
  {
    v5 = a4;
    v6 = (__int64 *)v21;
    v7 = &a4[a3];
    while ( 1 )
    {
      v8 = *v5;
      if ( !*v5 )
        break;
      v9 = sub_15D1F10(*v5);
      v10 = v20;
      v11 = v9;
      if ( (unsigned int)v20 < HIDWORD(v20) )
      {
        v6 = v19;
      }
      else
      {
        v12 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v20)));
        v10 = v20;
        v6 = (__int64 *)v12;
        if ( (_DWORD)v20 )
        {
          if ( (unsigned int)(v20 - 1) <= 2 || (__int64 *)v12 == v19 + 1 )
          {
            v16 = 0;
            do
            {
              v6[v16] = v19[v16];
              ++v16;
            }
            while ( (unsigned int)v20 != v16 );
          }
          else
          {
            v13 = 0;
            do
            {
              *(__m128i *)&v6[v13] = _mm_loadu_si128((const __m128i *)&v19[v13]);
              v13 += 2;
            }
            while ( 2LL * ((unsigned int)v20 >> 1) != v13 );
            if ( (v20 & 1) != 0 )
              v6[(unsigned int)v20 & 0xFFFFFFFE] = v19[(unsigned int)v20 & 0xFFFFFFFE];
          }
        }
        if ( v19 != (__int64 *)v21 && v19 )
        {
          sub_186B220(v19);
          v10 = v20;
        }
        v19 = v6;
        HIDWORD(v20) *= 2;
      }
      ++v5;
      v6[v10] = v11;
      LODWORD(v20) = v10 + 1;
      if ( v5 == v7 )
        goto LABEL_19;
    }
  }
  else
  {
    v6 = (__int64 *)v21;
LABEL_19:
    v14 = sub_E0CA70(a1, a2, a3, v6, a5);
    v6 = v19;
    v8 = v14;
  }
  if ( v6 != (__int64 *)v21 && v6 )
    sub_186B220(v6);
  return v8;
}


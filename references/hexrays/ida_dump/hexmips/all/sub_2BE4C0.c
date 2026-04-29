unsigned __int64 __fastcall sub_2BE4C0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rsi
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v8; // r14
  __int64 *v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-90h]
  __int64 v20; // [rsp+20h] [rbp-78h] BYREF
  __int128 v21; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+40h] [rbp-58h]
  __int128 v23; // [rsp+48h] [rbp-50h]
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v20 = 0;
    v21 = 0;
    if ( a2 < v2 )
    {
      v8 = a2;
      do
      {
        v9 = (__int64 *)(*a1 + 24 * v8);
        v10 = *v9;
        if ( *v9 )
        {
          v17 = v9[1];
          if ( v17 )
          {
            v11 = 0;
            v12 = 0;
            do
            {
              v13 = v10 + v11;
              ++v12;
              v11 += 112;
              sub_118BA0(v13 + 88);
              sub_118BA0(v13 + 72);
              sub_118BA0(v13 + 56);
              v10 = *v9;
            }
            while ( v17 != v12 );
          }
          v9[1] = 0;
          qfree(v10);
        }
        ++v8;
      }
      while ( v2 != v8 );
      a1[1] = a2;
    }
    else
    {
      v3 = *a1;
      v4 = a1[2];
      if ( (unsigned __int64)&v20 < *a1 || (unsigned __int64)&v20 >= v3 + 24 * v4 )
      {
        if ( v4 < a2 )
        {
          v16 = qvector_reserve(a1, v3, a2, 24);
          v2 = a1[1];
          *a1 = v16;
        }
        if ( v2 < a2 )
        {
          v5 = 24 * v2;
          do
          {
            ++v2;
            v6 = v5 + *a1;
            v5 += 24;
            *(_QWORD *)v6 = 0;
            *(_OWORD *)(v6 + 8) = 0;
          }
          while ( a2 != v2 );
        }
      }
      else
      {
        v23 = 0;
        v22 = 0;
        if ( v4 < a2 )
        {
          *a1 = qvector_reserve(a1, v3, a2, 24);
          v2 = a1[1];
        }
        if ( v2 < a2 )
        {
          v14 = 24 * v2;
          do
          {
            ++v2;
            v15 = v14 + *a1;
            v14 += 24;
            *(_QWORD *)v15 = 0;
            *(_OWORD *)(v15 + 8) = 0;
          }
          while ( a2 != v2 );
        }
      }
      a1[1] = a2;
    }
  }
  return v24 - __readfsqword(0x28u);
}

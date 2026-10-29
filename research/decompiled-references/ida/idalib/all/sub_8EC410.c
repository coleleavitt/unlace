unsigned __int64 __fastcall sub_8EC410(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 i; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rdi
  unsigned __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // [rsp+0h] [rbp-158h] BYREF
  __int128 v15; // [rsp+8h] [rbp-150h]
  __int64 v16; // [rsp+18h] [rbp-140h]
  __int128 v17; // [rsp+20h] [rbp-138h]
  __int64 v18; // [rsp+30h] [rbp-128h]
  __int128 v19; // [rsp+38h] [rbp-120h]
  __int64 v20; // [rsp+48h] [rbp-110h]
  __int128 v21; // [rsp+50h] [rbp-108h]
  __int64 v22; // [rsp+60h] [rbp-F8h]
  __int128 v23; // [rsp+68h] [rbp-F0h]
  __int128 v24; // [rsp+78h] [rbp-E0h]
  _BYTE v25[136]; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v26; // [rsp+118h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v14 = 0;
    v24 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    if ( a2 < v2 )
    {
      v8 = a2;
      v9 = 136 * a2;
      do
      {
        ++v8;
        v10 = v9 + *a1;
        v9 += 136;
        sub_8E3880(v10);
      }
      while ( v2 != v8 );
    }
    else
    {
      v5 = *a1;
      v6 = a1[2];
      if ( (unsigned __int64)&v14 >= *a1 && (unsigned __int64)&v14 < v5 + 136 * v6 )
      {
        sub_8E39F0((__int64)v25, (__int64)&v14);
        if ( a1[2] < a2 )
          *a1 = qvector_reserve(a1, *a1, a2, 136);
        v12 = a1[1];
        v13 = 136 * v12;
        if ( v12 < a2 )
        {
          do
          {
            sub_8E39F0(v13 + *a1, (__int64)v25);
            ++v12;
            v13 += 136;
          }
          while ( a2 != v12 );
        }
        a1[1] = a2;
        sub_8E3880((__int64)v25);
        goto LABEL_12;
      }
      if ( v6 < a2 )
      {
        *a1 = qvector_reserve(a1, v5, a2, 136);
        v2 = a1[1];
      }
      for ( i = 136 * v2; v2 < a2; i += 136 )
      {
        sub_8E39F0(i + *a1, (__int64)&v14);
        ++v2;
      }
    }
    a1[1] = a2;
LABEL_12:
    sub_8E3880((__int64)&v14);
  }
  return v26 - __readfsqword(0x28u);
}

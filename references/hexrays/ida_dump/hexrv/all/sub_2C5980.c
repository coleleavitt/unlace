unsigned __int64 __fastcall sub_2C5980(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // r13
  _QWORD *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD v16[3]; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+18h] [rbp-A0h]
  __int64 v18; // [rsp+28h] [rbp-90h]
  int v19; // [rsp+30h] [rbp-88h]
  __int64 (__fastcall **v20)(); // [rsp+40h] [rbp-78h]
  __int64 v21; // [rsp+48h] [rbp-70h]
  __int64 v22; // [rsp+50h] [rbp-68h]
  __int128 v23; // [rsp+58h] [rbp-60h]
  __int64 v24; // [rsp+68h] [rbp-50h]
  int v25; // [rsp+70h] [rbp-48h]
  unsigned __int64 v26; // [rsp+78h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v16[1] = -1;
    v19 = -2;
    v16[2] = 0;
    v18 = -1;
    v16[0] = off_4B3E28;
    v17 = 0;
    if ( a2 < v2 )
    {
      v10 = a2;
      v11 = 56 * a2;
      do
      {
        v12 = (_QWORD *)(v11 + *a1);
        v13 = v12[2];
        *v12 = off_4B3E00;
        if ( v13 )
        {
          v12[3] = 0;
          qfree(v13);
        }
        ++v10;
        v11 += 56;
      }
      while ( v2 != v10 );
      a1[1] = a2;
    }
    else
    {
      v5 = *a1;
      v6 = a1[2];
      if ( (unsigned __int64)v16 < *a1 || (unsigned __int64)v16 >= v5 + 56 * v6 )
      {
        if ( v6 < a2 )
        {
          *a1 = qvector_reserve(a1, v5, a2, 56);
          v2 = a1[1];
        }
        if ( v2 < a2 )
        {
          v7 = 56 * v2;
          do
          {
            ++v2;
            v8 = v7 + *a1;
            v7 += 56;
            *(_QWORD *)(v8 + 8) = -1;
            *(_QWORD *)(v8 + 16) = 0;
            *(_QWORD *)(v8 + 40) = -1;
            *(_DWORD *)(v8 + 48) = -2;
            *(_QWORD *)v8 = off_4B3E28;
            *(_OWORD *)(v8 + 24) = 0;
          }
          while ( a2 != v2 );
        }
      }
      else
      {
        v21 = -1;
        v22 = 0;
        v24 = -1;
        v25 = -2;
        v20 = off_4B3E28;
        v23 = 0;
        if ( v6 < a2 )
        {
          *a1 = qvector_reserve(a1, v5, a2, 56);
          v2 = a1[1];
        }
        if ( v2 < a2 )
        {
          v14 = 56 * v2;
          do
          {
            ++v2;
            v15 = v14 + *a1;
            v14 += 56;
            *(_QWORD *)(v15 + 8) = -1;
            *(_QWORD *)(v15 + 16) = 0;
            *(_QWORD *)(v15 + 40) = -1;
            *(_DWORD *)(v15 + 48) = -2;
            *(_QWORD *)v15 = off_4B3E28;
            *(_OWORD *)(v15 + 24) = 0;
          }
          while ( a2 != v2 );
        }
      }
      a1[1] = a2;
    }
  }
  return v26 - __readfsqword(0x28u);
}

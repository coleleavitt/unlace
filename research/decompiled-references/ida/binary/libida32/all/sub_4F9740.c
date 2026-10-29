unsigned __int64 __fastcall sub_4F9740(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // r13
  void *v13; // rdi
  void *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-78h] BYREF
  __int128 v20; // [rsp+8h] [rbp-70h]
  __int64 v21; // [rsp+18h] [rbp-60h]
  __int128 v22; // [rsp+20h] [rbp-58h]
  int v23; // [rsp+30h] [rbp-48h]
  char v24; // [rsp+34h] [rbp-44h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v24 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v20 = 0;
    v22 = 0;
    if ( a2 < v2 )
    {
      v10 = a2;
      v11 = 56 * a2;
      do
      {
        v12 = v11 + *a1;
        v13 = *(void **)(v12 + 24);
        if ( v13 )
        {
          *(_QWORD *)(v12 + 32) = 0;
          qfree(v13);
        }
        v14 = *(void **)v12;
        if ( *(_QWORD *)v12 )
        {
          *(_QWORD *)(v12 + 8) = 0;
          qfree(v14);
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
      if ( (unsigned __int64)&v19 < *a1 || (unsigned __int64)&v19 >= v5 + 56 * v6 )
      {
        if ( v6 < a2 )
        {
          v17 = qvector_reserve(a1, v5, a2, 56);
          v2 = a1[1];
          *a1 = v17;
        }
        if ( v2 < a2 )
        {
          v7 = 56 * v2;
          do
          {
            ++v2;
            v8 = v7 + *a1;
            v7 += 56;
            *(_QWORD *)v8 = 0;
            *(_QWORD *)(v8 + 24) = 0;
            *(_DWORD *)(v8 + 48) = 0;
            *(_BYTE *)(v8 + 52) = 0;
            *(_OWORD *)(v8 + 8) = 0;
            *(_OWORD *)(v8 + 32) = 0;
          }
          while ( a2 != v2 );
        }
      }
      else
      {
        if ( v6 < a2 )
        {
          v18 = qvector_reserve(a1, v5, a2, 56);
          v2 = a1[1];
          *a1 = v18;
        }
        if ( v2 < a2 )
        {
          v15 = 56 * v2;
          do
          {
            ++v2;
            v16 = v15 + *a1;
            v15 += 56;
            *(_QWORD *)v16 = 0;
            *(_QWORD *)(v16 + 24) = 0;
            *(_DWORD *)(v16 + 48) = 0;
            *(_BYTE *)(v16 + 52) = 0;
            *(_OWORD *)(v16 + 8) = 0;
            *(_OWORD *)(v16 + 32) = 0;
          }
          while ( a2 != v2 );
        }
      }
      a1[1] = a2;
    }
  }
  return v25 - __readfsqword(0x28u);
}


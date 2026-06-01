unsigned __int64 __fastcall sub_506080(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ebx
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v13; // r13
  __int64 v14; // r12
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v20; // [rsp+8h] [rbp-B0h]
  __int128 v21; // [rsp+18h] [rbp-A0h]
  __int128 v22; // [rsp+28h] [rbp-90h]
  int v23; // [rsp+38h] [rbp-80h]
  __int64 v24; // [rsp+40h] [rbp-78h]
  __int128 v25; // [rsp+48h] [rbp-70h]
  __int128 v26; // [rsp+58h] [rbp-60h]
  __int128 v27; // [rsp+68h] [rbp-50h]
  int v28; // [rsp+78h] [rbp-40h]
  unsigned __int64 v29; // [rsp+88h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 24);
  v29 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)(v2 + 68);
  *(_DWORD *)(a1 + 40) = v3;
  v4 = *(_DWORD *)(v2 + 72);
  *(_DWORD *)(a1 + 44) = v4;
  v5 = v4 + 1 - v3;
  if ( v5 != v1 )
  {
    v19 = 0;
    v23 = 0;
    v20 = 0;
    v22 = 0;
    v21 = 0;
    if ( v5 < v1 )
    {
      v13 = v5;
      do
      {
        v14 = *(_QWORD *)(a1 + 16) + (v13 << 6);
        v15 = *(void **)(v14 + 32);
        if ( v15 )
        {
          *(_QWORD *)(v14 + 40) = 0;
          qfree(v15);
        }
        v16 = *(void **)v14;
        if ( *(_QWORD *)v14 )
        {
          *(_QWORD *)(v14 + 8) = 0;
          qfree(v16);
        }
        ++v13;
      }
      while ( v13 < v1 );
      *(_QWORD *)(a1 + 24) = v5;
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 16);
      v8 = *(_QWORD *)(a1 + 32);
      v9 = a1 + 16;
      if ( (unsigned __int64)&v19 < v7 || (unsigned __int64)&v19 >= v7 + (v8 << 6) )
      {
        if ( v8 < v5 )
        {
          *(_QWORD *)(a1 + 16) = qvector_reserve(v9, v7, v5, 64);
          v1 = *(_QWORD *)(a1 + 24);
        }
        if ( v1 < v5 )
        {
          do
          {
            v10 = v1++;
            v11 = *(_QWORD *)(a1 + 16) + (v10 << 6);
            *(_QWORD *)v11 = 0;
            *(_DWORD *)(v11 + 56) = 0;
            *(_OWORD *)(v11 + 8) = 0;
            *(_OWORD *)(v11 + 24) = 0;
            *(_OWORD *)(v11 + 40) = 0;
          }
          while ( v5 != v1 );
        }
      }
      else
      {
        v24 = 0;
        v28 = 0;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        if ( v8 < v5 )
        {
          *(_QWORD *)(a1 + 16) = qvector_reserve(v9, v7, v5, 64);
          v1 = *(_QWORD *)(a1 + 24);
        }
        if ( v1 < v5 )
        {
          do
          {
            v17 = v1++;
            v18 = *(_QWORD *)(a1 + 16) + (v17 << 6);
            *(_QWORD *)v18 = 0;
            *(_DWORD *)(v18 + 56) = 0;
            *(_OWORD *)(v18 + 8) = 0;
            *(_OWORD *)(v18 + 24) = 0;
            *(_OWORD *)(v18 + 40) = 0;
          }
          while ( v5 != v1 );
        }
      }
      *(_QWORD *)(a1 + 24) = v5;
    }
  }
  return v29 - __readfsqword(0x28u);
}


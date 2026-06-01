unsigned __int64 __fastcall sub_8C8060(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r13
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  unsigned __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // r12
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // r15
  unsigned __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 v19; // r12
  __int64 v20; // rax
  void *v21; // [rsp+8h] [rbp-D0h]
  __int64 v22; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+28h] [rbp-B0h]
  __int64 v24; // [rsp+38h] [rbp-A0h] BYREF
  __int128 v25; // [rsp+40h] [rbp-98h]
  __int64 v26; // [rsp+50h] [rbp-88h]
  void *v27; // [rsp+60h] [rbp-78h] BYREF
  __int128 v28; // [rsp+68h] [rbp-70h]
  void *ptr; // [rsp+78h] [rbp-60h] BYREF
  __int128 v30; // [rsp+80h] [rbp-58h]
  int v31; // [rsp+90h] [rbp-48h]
  unsigned __int64 v32; // [rsp+98h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v26 = 0;
    v22 = 0;
    v24 = 0;
    v23 = 0;
    v25 = 0;
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
      if ( (unsigned __int64)&v22 < *a1 || (unsigned __int64)&v22 >= v5 + 56 * v6 )
      {
        if ( v6 < a2 )
        {
          v20 = qvector_reserve(a1, v5, a2, 56);
          v2 = a1[1];
          *a1 = v20;
        }
        if ( v2 < a2 )
        {
          v7 = 56 * v2;
          do
          {
            v8 = v7 + *a1;
            *(_QWORD *)v8 = 0;
            *(_OWORD *)(v8 + 8) = 0;
            sub_8B2290((_QWORD *)v8, (__int64)&v22);
            *(_QWORD *)(v8 + 24) = 0;
            *(_OWORD *)(v8 + 32) = 0;
            sub_8B2290((_QWORD *)(v8 + 24), (__int64)&v24);
            ++v2;
            v7 += 56;
            *(_DWORD *)(v8 + 48) = 0;
          }
          while ( v2 < a2 );
        }
        a1[1] = a2;
      }
      else
      {
        v28 = 0;
        v27 = nullptr;
        sub_8B2290(&v27, (__int64)&v22);
        ptr = nullptr;
        v30 = 0;
        sub_8B2290(&ptr, (__int64)&v24);
        v15 = ptr;
        v31 = 0;
        v21 = v27;
        if ( a1[2] < a2 )
          *a1 = qvector_reserve(a1, *a1, a2, 56);
        v16 = a1[1];
        if ( v16 < a2 )
        {
          v17 = 56 * v16;
          do
          {
            v18 = *a1;
            ptr = v15;
            v19 = v17 + v18;
            v27 = v21;
            *(_QWORD *)v19 = 0;
            *(_OWORD *)(v19 + 8) = 0;
            sub_8B2290((_QWORD *)v19, (__int64)&v27);
            *(_QWORD *)(v19 + 24) = 0;
            *(_OWORD *)(v19 + 32) = 0;
            sub_8B2290((_QWORD *)(v19 + 24), (__int64)&ptr);
            ++v16;
            v17 += 56;
            *(_DWORD *)(v19 + 48) = 0;
          }
          while ( a2 != v16 );
        }
        a1[1] = a2;
        if ( v15 )
          qfree(v15);
        if ( v21 )
          qfree(v21);
      }
    }
  }
  return v32 - __readfsqword(0x28u);
}


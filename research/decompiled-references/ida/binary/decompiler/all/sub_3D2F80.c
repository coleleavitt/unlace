unsigned __int64 __fastcall sub_3D2F80(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbp
  _QWORD *v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r13
  int v8; // edx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // r12
  unsigned __int64 v15; // r15
  bool v16; // zf
  __int64 *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v23; // r12
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // [rsp+10h] [rbp-D8h] BYREF
  __int128 v28; // [rsp+18h] [rbp-D0h]
  _QWORD v29[3]; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v30; // [rsp+48h] [rbp-A0h]
  _QWORD v31[5]; // [rsp+58h] [rbp-90h] BYREF
  char v32; // [rsp+80h] [rbp-68h]
  __int64 v33; // [rsp+88h] [rbp-60h]
  __int64 v34; // [rsp+90h] [rbp-58h]
  __int64 v35; // [rsp+98h] [rbp-50h]
  unsigned __int64 v36; // [rsp+A8h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v29[0] = &off_4E8338;
  v29[1] = 0;
  v29[2] = 0;
  v30 = 0u;
  memset(&v31[1], 0, 32);
  v31[0] = off_4E8368;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = a1;
  sub_3CFB80(a1 + 88);
  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
  {
    v2 = *(_QWORD *)(a1 + 120);
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 24 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = *(_QWORD *)(a1 + 112);
        }
      }
    }
    *(_QWORD *)(a1 + 120) = 0;
    qfree();
    *(_QWORD *)(a1 + 112) = 0;
    *(_QWORD *)(a1 + 128) = 0;
  }
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a1 + 120);
  v7 = *(int *)(v5 + 64);
  v8 = *(_DWORD *)(v5 + 64);
  if ( v7 != v6 )
  {
    v27 = 0;
    v28 = 0;
    if ( v7 < v6 )
    {
      v23 = v7;
      do
      {
        v24 = (_QWORD *)(*(_QWORD *)(a1 + 112) + 24 * v23);
        if ( *v24 )
        {
          v24[1] = 0;
          qfree();
        }
        ++v23;
      }
      while ( v23 < v6 );
      v5 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 120) = v7;
      v8 = *(_DWORD *)(v5 + 64);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 112);
      v10 = *(_QWORD *)(a1 + 128);
      if ( (unsigned __int64)&v27 < v9 || (unsigned __int64)&v27 >= v9 + 24 * v10 )
      {
        if ( v10 < v7 )
        {
          *(_QWORD *)(a1 + 112) = qvector_reserve();
          v6 = *(_QWORD *)(a1 + 120);
        }
        if ( v6 < v7 )
        {
          v11 = 24 * v6;
          do
          {
            ++v6;
            v12 = v11 + *(_QWORD *)(a1 + 112);
            v11 += 24;
            *(_QWORD *)v12 = 0;
            *(_OWORD *)(v12 + 8) = 0;
          }
          while ( v7 != v6 );
        }
      }
      else
      {
        if ( v10 < v7 )
        {
          *(_QWORD *)(a1 + 112) = qvector_reserve();
          v6 = *(_QWORD *)(a1 + 120);
        }
        if ( v6 < v7 )
        {
          v25 = 24 * v6;
          do
          {
            ++v6;
            v26 = v25 + *(_QWORD *)(a1 + 112);
            v25 += 24;
            *(_QWORD *)v26 = 0;
            *(_OWORD *)(v26 + 8) = 0;
          }
          while ( v7 != v6 );
        }
      }
      v5 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 120) = v7;
      v8 = *(_DWORD *)(v5 + 64);
    }
  }
  v13 = 0;
  if ( v8 )
  {
    do
    {
      v14 = *(_QWORD *)(*(_QWORD *)(v5 + 528) + 8 * v13);
      v15 = *(_QWORD *)(v14 + 48);
      if ( v15 )
      {
        do
        {
          v17 = (__int64 *)(24 * v13 + *(_QWORD *)(a1 + 112));
          v18 = v17[1];
          v19 = *v17;
          if ( v17[2] < (unsigned __int64)(v18 + 1) )
          {
            v20 = qvector_reserve();
            *v17 = v20;
            v19 = v20;
            v18 = v17[1];
          }
          *(_QWORD *)(v19 + 8 * v18) = v15;
          ++v17[1];
          v16 = *(_BYTE *)(v15 + 64) == 0;
          v30 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
          if ( v16 && *(_DWORD *)(v15 + 68) != -1 )
            sub_3D2AB0((__int64)v29, v15 + 64, 1);
          sub_11C4C0((_BYTE *)v15, (__int64)v31);
          if ( *(_QWORD *)(v14 + 56) == v15 )
            break;
          v15 = *(_QWORD *)(v15 + 8);
        }
        while ( v15 );
        v5 = *(_QWORD *)(a1 + 64);
      }
      ++v13;
    }
    while ( (unsigned int)v13 < *(_DWORD *)(v5 + 64) );
  }
  if ( *(_QWORD *)(a1 + 160) )
  {
    sub_3D24B0((unsigned __int64 **)(a1 + 160));
    if ( *(_QWORD *)(a1 + 160) )
      qfree();
  }
  v21 = v33;
  *(_DWORD *)(a1 + 60) = 1;
  *(_QWORD *)(a1 + 160) = v21;
  *(_QWORD *)(a1 + 168) = v34;
  return v36 - __readfsqword(0x28u);
}

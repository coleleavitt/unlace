__int64 __fastcall sub_30AD40(__int64 a1, __m128i *a2)
{
  __int64 v2; // rax
  int *v3; // r14
  __int64 v4; // r12
  unsigned int v5; // ebx
  int v6; // ebp
  _BYTE *v7; // rdx
  __int64 v8; // rcx
  _BYTE *i; // rdi
  int v10; // esi
  unsigned int v11; // eax
  int v12; // esi
  unsigned int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rdi
  _DWORD *v25; // rbx
  __int64 v26; // rbp
  _DWORD *v27; // r12
  int v28; // eax
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // [rsp+0h] [rbp-118h] BYREF
  __int128 v32; // [rsp+8h] [rbp-110h]
  __int64 (__fastcall **v33)(); // [rsp+20h] [rbp-F8h] BYREF
  __int64 v34; // [rsp+28h] [rbp-F0h]
  __int64 v35; // [rsp+30h] [rbp-E8h]
  __int64 v36; // [rsp+50h] [rbp-C8h]
  __int64 v37; // [rsp+58h] [rbp-C0h]
  __int64 v38; // [rsp+68h] [rbp-B0h]
  __int64 v39; // [rsp+70h] [rbp-A8h]
  __int64 v40; // [rsp+80h] [rbp-98h]
  __int64 v41; // [rsp+88h] [rbp-90h]
  __int64 v42; // [rsp+98h] [rbp-80h]
  __int64 v43; // [rsp+A0h] [rbp-78h]
  __int64 v44; // [rsp+B8h] [rbp-60h]
  __int64 v45; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v46; // [rsp+D8h] [rbp-40h]

  v2 = a2[11].m128i_i64[0];
  v46 = __readfsqword(0x28u);
  v31 = 0;
  v3 = *(int **)(v2 + 8);
  v32 = 0;
  v4 = v3[16];
  if ( v3[16] )
  {
    v31 = qvector_reserve(&v31, 0, v3[16], 4);
    memset((void *)(v31 + 4 * v32), 0, 4 * (v4 - v32));
    v25 = (_DWORD *)v31;
    *(_QWORD *)&v32 = v4;
    v26 = *((_QWORD *)v3 + 65);
    v27 = (_DWORD *)(v31 + 4 * v4);
    do
    {
      *v25 = 0;
      *v25 = *(_DWORD *)(v26 + 76) == 5;
      if ( sub_329780(v26) == 1 )
      {
        v30 = *(_QWORD *)(v26 + 56);
        if ( *(_DWORD *)v30 == 55 && *(_BYTE *)(v30 + 32) == 7 )
          *v25 |= 2u;
      }
      v28 = sub_133320(v26, 0);
      if ( v28 )
      {
        v29 = *v25 | 8;
        if ( v28 < 0 )
          v29 = *v25 | 0x18;
        *v25 = v29;
      }
      ++v25;
      v26 = *(_QWORD *)(v26 + 8);
    }
    while ( v27 != v25 );
  }
  v5 = *v3;
  v6 = *(_DWORD *)(*((_QWORD *)v3 + 187) + 604LL);
  sub_6A9E0((__int64)&v33, a1);
  if ( (unsigned __int8)sub_726A0(
                          (__int64)&v33,
                          a2,
                          (__int64)&v31,
                          ((v6 & 0x20) != 0) | (unsigned __int8)((v5 >> 22) & 2)) )
  {
    v7 = (_BYTE *)a2[17].m128i_i64[1];
    v8 = *((_QWORD *)v3 + 65);
    for ( i = &v7[4 * a2[18].m128i_i64[0]]; v7 != i; v8 = *(_QWORD *)(v8 + 8) )
    {
      v10 = *(_DWORD *)(v8 + 24);
      v11 = v10 & 0xFFFFFFFB;
      v12 = v10 | 4;
      if ( (*v7 & 4) != 0 )
        v11 = v12;
      v7 += 4;
      *(_DWORD *)(v8 + 24) = v11;
    }
    v13 = 0;
  }
  else
  {
    v13 = -34;
  }
  v33 = off_4B7AD8;
  if ( v44 )
  {
    v45 = 0;
    qfree(v44);
  }
  if ( v42 )
  {
    v43 = 0;
    qfree(v42);
  }
  if ( v40 )
  {
    v41 = 0;
    qfree(v40);
  }
  v14 = v38;
  if ( v38 )
  {
    v15 = v39;
    if ( v39 )
    {
      v16 = 0;
      do
      {
        v17 = (__int64 *)(v14 + 24 * v16);
        v18 = *v17;
        if ( *v17 )
        {
          v17[1] = 0;
          qfree(v18);
          v14 = v38;
        }
        ++v16;
      }
      while ( v15 != v16 );
    }
    v39 = 0;
    qfree(v14);
  }
  v19 = v36;
  if ( v36 )
  {
    v20 = v37;
    if ( v37 )
    {
      v21 = 0;
      do
      {
        v22 = (__int64 *)(v19 + 24 * v21);
        v23 = *v22;
        if ( *v22 )
        {
          v22[1] = 0;
          qfree(v23);
          v19 = v36;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    v37 = 0;
    qfree(v19);
  }
  v33 = (__int64 (__fastcall **)())&unk_4B8648;
  if ( v34 )
  {
    v35 = 0;
    qfree(v34);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  return v13;
}

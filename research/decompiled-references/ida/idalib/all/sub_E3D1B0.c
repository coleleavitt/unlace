__int64 __fastcall sub_E3D1B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 *v7; // rdi
  __int64 v8; // r8
  unsigned __int64 v9; // r13
  __int64 *v10; // rdx
  __int64 v11; // rdi
  int v12; // ebp
  _BYTE *v13; // rax
  int v15; // edi
  int v16; // r10d
  __int64 v17; // r8
  __m128 v18[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1 + 232;
  v4 = *(unsigned int *)(a1 + 248);
  v5 = *(_QWORD *)(a1 + 232);
  if ( (_DWORD)v4 )
  {
    v6 = (v4 - 1) & (((0xBF58476D1CE4E5B9LL * a2) >> 31) ^ (484763065 * a2));
    v7 = (__int64 *)(v5 + 16LL * v6);
    v8 = *v7;
    if ( *v7 == a2 )
    {
LABEL_3:
      sub_E3D150(v18, v7, (__int64 *)(16 * v4 + v5), v2, 1);
      v9 = v18[0].m128_u64[0];
      goto LABEL_4;
    }
    v15 = 1;
    if ( v8 != -1 )
    {
      do
      {
        v16 = v15 + 1;
        v6 = (v4 - 1) & (v15 + v6);
        v7 = (__int64 *)(v5 + 16LL * v6);
        v17 = *v7;
        if ( *v7 == a2 )
          goto LABEL_3;
        v15 = v16;
      }
      while ( v17 != -1 );
    }
  }
  sub_E3D150(v18, (__int64 *)(v5 + 16LL * (unsigned int)v4), (__int64 *)(v5 + 16LL * (unsigned int)v4), v2, 1);
  v9 = v18[0].m128_u64[0];
LABEL_4:
  v10 = (__int64 *)(*(_QWORD *)(a1 + 232) + 16LL * *(unsigned int *)(a1 + 248));
  sub_E3D150(v18, v10, v10, v2, 1);
  if ( v18[0].m128_u64[0] == v9 )
    return 0;
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_DWORD *)(v9 + 8);
  v13 = *(_BYTE **)(v11 + 32);
  if ( (unsigned __int64)v13 >= *(_QWORD *)(v11 + 24) )
  {
    sub_227BA10(v11, 83);
  }
  else
  {
    *(_QWORD *)(v11 + 32) = v13 + 1;
    *v13 = 83;
  }
  sub_E38850((__int64 *)(a1 + 8), v12);
  return 1;
}

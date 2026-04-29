__int64 __fastcall sub_33600(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v5; // ecx
  int v7; // ebp
  int *v8; // rbx
  unsigned __int64 v9; // rsi
  int v10; // eax
  int v11; // edx
  const char *v13; // rcx
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rdi
  int v17; // r9d
  const char *v18; // r8
  const char *v19; // rcx
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rdi
  __int64 v23; // [rsp+0h] [rbp-88h] BYREF
  __int64 v24; // [rsp+8h] [rbp-80h]
  __int64 v25; // [rsp+20h] [rbp-68h] BYREF
  __int64 v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+40h] [rbp-48h] BYREF
  __m128i v28; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 560);
  v3 = *(_QWORD *)(a2 + 568);
  v29 = __readfsqword(0x28u);
  if ( (int)v3 > 1 )
  {
    v5 = *(_DWORD *)(a2 + 204);
    v7 = *(_DWORD *)(v2 + 4) + 1;
    v8 = (int *)(v2 + 64);
    v9 = v2 + ((unsigned __int64)(unsigned int)(v3 - 2) << 6) + 128;
    do
    {
      v11 = *v8;
      if ( *v8 > v5 )
        break;
      v10 = v8[1];
      if ( v5 < v10 )
        break;
      if ( v11 != v7 )
      {
        sub_28EA0((__int64)&v25, a2, v11);
        v13 = s1;
        if ( v26 )
          LODWORD(v13) = v25;
        sub_64B50(
          (unsigned int)&v27,
          *(_QWORD *)(a2 + 176),
          (unsigned int)"%s: expected begin %d != %d",
          (_DWORD)v13,
          v7,
          *v8);
        v14 = v27;
        v15 = _mm_loadu_si128(&v28);
        *(_BYTE *)(a1 + 24) = 1;
        v16 = v25;
        *(_QWORD *)a1 = v14;
        *(__m128i *)(a1 + 8) = v15;
        if ( v16 )
        {
          v26 = 0;
          qfree(v16);
        }
        return a1;
      }
      if ( v10 < v7 )
      {
        sub_28EA0((__int64)&v23, a2, v7);
        sub_28EA0((__int64)&v25, a2, v8[1]);
        v18 = s1;
        if ( v24 )
          LODWORD(v18) = v23;
        v19 = s1;
        if ( v26 )
          LODWORD(v19) = v25;
        sub_64B50((unsigned int)&v27, *(_QWORD *)(a2 + 176), (unsigned int)"%s < %s", (_DWORD)v19, (_DWORD)v18, v17);
        v20 = v27;
        v21 = _mm_loadu_si128(&v28);
        *(_BYTE *)(a1 + 24) = 1;
        v22 = v25;
        *(_QWORD *)a1 = v20;
        *(__m128i *)(a1 + 8) = v21;
        if ( v22 )
        {
          v26 = 0;
          qfree(v22);
        }
        if ( v23 )
        {
          v24 = 0;
          qfree(v23);
        }
        return a1;
      }
      v8 += 16;
      v7 = v10 + 1;
    }
    while ( v8 != (int *)v9 );
  }
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}

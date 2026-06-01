__int64 __fastcall sub_1466280(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        _QWORD *a4,
        __m128i a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v16; // r12
  unsigned int v17; // esi
  int v18; // eax
  __int64 v19; // rax
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  _QWORD *v22; // r8
  __int64 v23; // rax
  __int64 *v24; // rdi
  __int64 v25; // rcx
  _DWORD *v26; // rax
  _DWORD *v27; // rdx
  _QWORD *v28; // [rsp+8h] [rbp-40h]

  if ( a3 + 2 + *(_DWORD *)(a1 + 20) <= 0xFDC )
  {
    v16 = *(_QWORD *)a1;
    v17 = *(_DWORD *)(a1 + 16) & 0x7FFFFFFF;
    if ( v17 >= *(_DWORD *)(*(_QWORD *)a1 + 476LL) && v17 < *(_DWORD *)(v16 + 480) )
      v18 = *(_DWORD *)(v16 + 472);
    else
      v18 = sub_101D590(*(_QWORD *)a1, v17);
    if ( (unsigned int)(v18 + 1) <= 1 )
    {
      v19 = *(_QWORD *)(v16 + 184);
    }
    else if ( v18 < 0 )
    {
      v20 = (unsigned int)(-2 - v18);
      v21 = *(_QWORD *)(*(_QWORD *)(v16 + 320) + 8LL * ((unsigned int)(-2 - v18) >> 6));
      if ( _bittest64(&v21, v20) )
      {
        v22 = (_QWORD *)(*(_QWORD *)(v16 + 272) + 8 * ((unsigned __int64)(int)v20 >> 5));
        v23 = *v22;
        if ( !*v22 )
        {
          v24 = (__int64 *)(*(_QWORD *)(v16 + 288) & 0xFFFFFFFFFFFFFFF8LL);
          v25 = *v24;
          v24[10] += 768;
          v26 = (_DWORD *)((v25 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v24[1] >= (unsigned __int64)(v26 + 192) && v25 )
          {
            *v24 = (__int64)(v26 + 192);
          }
          else
          {
            v28 = v22;
            v26 = (_DWORD *)sub_986170((__int64)v24, 768, 768, 3, (__int64)v22, a7);
            v22 = v28;
          }
          *v22 = v26;
          v27 = v26 + 192;
          do
          {
            *v26 = 0;
            v26 += 6;
            *((_OWORD *)v26 - 1) = 0;
            *((_QWORD *)v26 - 1) = 0;
          }
          while ( v27 != v26 );
          v23 = *v22;
        }
        v19 = v23 + 24 * (v20 & 0x1F);
      }
      else
      {
        v19 = sub_101F930(v16, v20, nullptr);
      }
    }
    else
    {
      v19 = *(_QWORD *)(v16 + 184) + 24LL * (unsigned int)v18;
    }
    *(_QWORD *)((*(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 40) = 0;
  }
  else
  {
    sub_14660A0(a1, a3 + 2, a5);
  }
  v11 = *(unsigned int *)(a1 + 20);
  v12 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v11 + 1;
  *(_BYTE *)(v12 + v11) = 10;
  v13 = *(unsigned int *)(a1 + 20);
  *a4 = v13 + *(_QWORD *)(a1 + 8);
  memcpy((void *)(*(_QWORD *)(a1 + 8) + v13), a2, a3);
  v14 = *(_DWORD *)(a1 + 20) + a3;
  *(_DWORD *)(a1 + 20) = v14 + 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + v14) = 0;
  return ~a3 + *(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 16);
}

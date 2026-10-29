unsigned __int64 __fastcall sub_E570(
        __int64 a1,
        __int64 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 *v15; // rbx
  __int64 *v16; // rdi
  int v17; // edx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbp
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v23; // [rsp+8h] [rbp-40h]
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  sub_A400(a3, a4, a5, a6, a7, a8, a9, a10, a1, a2);
  sub_7AC0(a2);
  v10 = *a2;
  v11 = 96 * a2[1];
  v12 = *a2 + v11;
  if ( *a2 != v12 )
  {
    v13 = 0xAAAAAAAAAAAAAAABLL * (v11 >> 5);
    if ( v13 )
    {
      _BitScanReverse64(&v14, v13);
      sub_DD30(*a2, v12, 2LL * (int)v14, (unsigned __int8 (__fastcall *)(int *, int *))sub_5380);
      if ( v11 > 1536 )
      {
        v15 = (__int64 *)(v10 + 1536);
        sub_CB10(v10, v10 + 1536, (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))sub_5380);
        do
        {
          v16 = v15;
          v15 += 12;
          sub_C6E0(v16, (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))sub_5380);
        }
        while ( (__int64 *)v12 != v15 );
        goto LABEL_6;
      }
    }
    else
    {
      sub_DD30(*a2, v12, -2, (unsigned __int8 (__fastcall *)(int *, int *))sub_5380);
    }
    sub_CB10(v10, v12, (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))sub_5380);
  }
LABEL_6:
  ptr = nullptr;
  v23 = 0;
  if ( (_BYTE)dword_1C340 )
  {
    v17 = dword_1C318;
    v18 = *a2;
    ++dword_1C318;
    v19 = 96 * a2[1];
    v20 = v18 + v19;
    if ( v18 + v19 == v18 )
    {
      dword_1C318 = v17;
    }
    else
    {
      do
      {
        sub_7440(v18, (__int64)&ptr);
        sub_5F00();
        v18 += 96;
      }
      while ( v20 != v18 );
      --dword_1C318;
      if ( ptr )
      {
        *(_QWORD *)&v23 = 0;
        j__free(ptr);
      }
    }
  }
  return v24 - __readfsqword(0x28u);
}


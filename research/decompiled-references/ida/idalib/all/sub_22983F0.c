__int64 __fastcall sub_22983F0(__int64 a1, __int64 a2)
{
  char **v3; // rbx
  char *v4; // rdi
  __int64 *v5; // rcx
  char *v6; // rax
  _QWORD *v7; // rcx
  __int64 *v9; // r8
  __int64 v10; // r10
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r15
  __int64 *v14; // rax
  __int64 *v15; // r15
  char *v16; // r11
  char **v17; // r10
  __int64 *v18; // rdi
  __int64 *v19; // r10
  __int64 v20; // rdx
  __int64 v21; // r11
  unsigned __int64 v22; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v23; // [rsp+8h] [rbp-50h]
  void *v24; // [rsp+10h] [rbp-48h]
  __int64 v25; // [rsp+18h] [rbp-40h]

  v3 = (char **)&unk_2B414C8;
  do
  {
    while ( 1 )
    {
      if ( ((1LL << *(_DWORD *)v3) & *(_QWORD *)(a1 + 8LL * (*(_DWORD *)v3 >> 6))) != 0 )
      {
        v4 = v3[6];
        if ( v4 )
          break;
      }
LABEL_2:
      v3 += 14;
      if ( v3 == &off_2B44FD8 )
        return 1;
    }
    v5 = *(__int64 **)(a2 + 8);
    if ( v5 == *(__int64 **)(a2 + 16) )
    {
      v9 = *(__int64 **)a2;
      v10 = (__int64)v5 - *(_QWORD *)a2;
      v11 = v10 >> 4;
      if ( v10 >> 4 )
      {
        v12 = 2 * v11;
        v13 = 0x1FFFFFFFFFFFFFFELL;
        if ( v11 <= 2 * v11 )
        {
          if ( v12 > 0xFFFFFFFFFFFFFFFLL )
          {
            v13 = 0x1FFFFFFFFFFFFFFELL;
          }
          else
          {
            if ( !v12 )
            {
              v22 = 16;
              v15 = nullptr;
              v14 = nullptr;
              goto LABEL_11;
            }
            v13 = 4 * v11;
          }
        }
      }
      else
      {
        v13 = 2;
      }
      v25 = (__int64)v5 - *(_QWORD *)a2;
      v24 = v9;
      v23 = v5;
      v14 = (__int64 *)operator new(v13 * 8);
      v4 = v3[6];
      v5 = v23;
      v9 = (__int64 *)v24;
      v10 = v25;
      v15 = &v14[v13];
      v22 = (unsigned __int64)(v14 + 2);
LABEL_11:
      v16 = v3[5];
      v17 = (char **)((char *)v14 + v10);
      v17[1] = v4;
      *v17 = v16;
      if ( v5 != v9 )
      {
        v18 = v9;
        v19 = v14;
        do
        {
          v20 = *v18;
          v21 = v18[1];
          v18 += 2;
          v19 += 2;
          *(v19 - 2) = v20;
          *(v19 - 1) = v21;
        }
        while ( v5 != v18 );
        v22 = (unsigned __int64)v14 + (((char *)(v5 - 2) - (char *)v9) & 0xFFFFFFFFFFFFFFF0LL) + 32;
      }
      if ( v9 )
      {
        v23 = v14;
        operator delete(v9);
        v14 = v23;
      }
      v23 = v14;
      *(_QWORD *)(a2 + 16) = v15;
      *(__m128 *)a2 = _mm_loadh_ps((const double *)&v22);
      goto LABEL_2;
    }
    v6 = v3[5];
    v7 = v5 + 2;
    *(v7 - 1) = v4;
    v3 += 14;
    *(v7 - 2) = v6;
    *(_QWORD *)(a2 + 8) = v7;
  }
  while ( v3 != &off_2B44FD8 );
  return 1;
}

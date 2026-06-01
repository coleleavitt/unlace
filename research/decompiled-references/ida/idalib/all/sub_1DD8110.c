__int64 __fastcall sub_1DD8110(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // r13
  unsigned int v7; // eax
  __int64 v8; // rdi
  int v9; // r13d
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // r15d
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // ebp
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  int v22; // [rsp+10h] [rbp-98h]
  unsigned __int8 v23; // [rsp+10h] [rbp-98h]
  int v24; // [rsp+18h] [rbp-90h]
  char v25; // [rsp+2Ah] [rbp-7Eh] BYREF
  char v26; // [rsp+2Bh] [rbp-7Dh] BYREF
  int v27; // [rsp+2Ch] [rbp-7Ch] BYREF
  __int64 v28; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int64 v31; // [rsp+48h] [rbp-60h]
  _BYTE v32[88]; // [rsp+50h] [rbp-58h] BYREF

  ptr = v32;
  v31 = 0x200000000LL;
  v5 = *(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v5 = *(_QWORD *)(v5 + 32);
  v6 = *(_QWORD *)v5;
  v7 = sub_F6C520(*(_QWORD *)(*(_QWORD *)v5 + 32LL));
  v28 = *(_QWORD *)(v6 + 32);
  v8 = *a1;
  v29 = v7 * ((v5 + 12 - (v5 != -12)) / v7 + (v5 != -12));
  sub_1E4C9B0(v8, v28, v29, &ptr);
  v9 = *(_DWORD *)(v6 + 20);
  v25 = 0;
  v24 = (int)ptr;
  v22 = v31;
  v26 = 0;
  v27 = v9;
  sub_F6CE20(&v28);
  v10 = sub_F6CCB0(&v28, a3);
  v23 = sub_1DDBB60((_DWORD)a1, *(_DWORD *)(v5 + 8), v10, v24, v22, (unsigned int)&v25, (__int64)&v26, (__int64)&v27);
  if ( !v23 )
  {
    v14 = 0;
    sub_1DC29F0(*(_QWORD *)(*a1 + 11280), a2, v11, v12);
    if ( v27 != 1 )
    {
      while ( 1 )
      {
        v15 = *a1;
        v16 = *((unsigned __int8 *)a1 + 56);
        ++v14;
        v17 = a1[4];
        v18 = *(_DWORD *)(*a1 + 12632);
        *(_DWORD *)(v15 + 12632) = v14;
        v19 = sub_1DD7820(v15, a2, v17, 0, v9, 0, a3, a4, v16);
        if ( !v19 )
          break;
        if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 47LL) & 0x20) != 0 )
        {
          sub_17A40B0(*a1, v19);
          v21 = v27;
          *(_DWORD *)(v15 + 12632) = v18;
          if ( v14 == v21 - 1 )
            goto LABEL_4;
        }
        else
        {
          v20 = v27;
          *(_DWORD *)(v15 + 12632) = v18;
          if ( v20 - 1 == v14 )
            goto LABEL_4;
        }
      }
      *(_DWORD *)(v15 + 12632) = v18;
      v23 = 1;
    }
  }
LABEL_4:
  if ( ptr != v32 )
    free(ptr);
  return v23;
}

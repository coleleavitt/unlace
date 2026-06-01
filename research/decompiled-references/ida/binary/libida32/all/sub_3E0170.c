__int64 __fastcall sub_3E0170(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  char *v9; // rbx
  char *v10; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  char *v14; // rbx
  char *v15; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  void *v18; // rdi
  __int64 v19; // rbx
  char *v20; // rdx
  char *v21; // rax
  __int64 v22; // rcx
  unsigned int v24; // eax
  unsigned int v25; // r14d
  unsigned int *v26; // rbx
  unsigned int v27; // r15d
  unsigned int v28; // r13d
  unsigned int *v29; // r12
  __int64 v30; // rdx
  unsigned int v31; // [rsp+4h] [rbp-8Ch]
  __int64 v32; // [rsp+10h] [rbp-80h] BYREF
  void *ptr; // [rsp+18h] [rbp-78h] BYREF
  __int128 v34; // [rsp+20h] [rbp-70h]
  void *v35; // [rsp+38h] [rbp-58h] BYREF
  __int128 v36; // [rsp+40h] [rbp-50h]
  unsigned __int64 v37; // [rsp+50h] [rbp-40h]

  v5 = *(int *)(a1 + 8);
  v37 = __readfsqword(0x28u);
  v34 = 0;
  ptr = nullptr;
  v6 = switch_dbctx(v5);
  sub_3DF5C0(a1, v6, (__int64 *)&ptr, a3);
  v7 = *(int *)(a2 + 8);
  v35 = nullptr;
  v36 = 0;
  v8 = switch_dbctx(v7);
  sub_3DF5C0(a2, v8, (__int64 *)&v35, a3);
  if ( *(_BYTE *)(a1 + 72) == 100 )
  {
    v24 = *(_DWORD *)(a1 + 12);
    v32 = 0;
    v25 = *(_DWORD *)(a2 + 12);
    v31 = v24;
    getinf_buf(26, &v32, 8);
    v26 = (unsigned int *)v35;
    v27 = v32;
    v28 = HIDWORD(v32);
    v29 = (unsigned int *)((char *)v35 + 12 * v36);
    if ( v35 != v29 )
    {
      do
      {
        v30 = *v26;
        if ( (unsigned int)v30 >= v27 && (unsigned int)v30 < v28 )
          (*(void (__fastcall **)(_QWORD, unsigned int *, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 24LL))(
            *(_QWORD *)(a1 + 32),
            v26,
            v30,
            v25,
            v31,
            0);
        v26 += 3;
      }
      while ( v29 != v26 );
    }
  }
  v9 = (char *)ptr;
  v10 = (char *)ptr + 12 * v34;
  if ( ptr != v10 )
  {
    v11 = 0xAAAAAAAAAAAAAAABLL * ((12 * (__int64)v34) >> 2);
    v12 = -2;
    if ( v11 )
    {
      _BitScanReverse64(&v11, v11);
      v12 = 2LL * (int)v11;
    }
    sub_3DBC30((__int64)ptr, (unsigned __int64)ptr + 12 * v34, v12);
    sub_3DB5A0(v9, v10);
  }
  v13 = v36;
  v14 = (char *)v35;
  v15 = (char *)v35 + 12 * v36;
  if ( v35 != v15 )
  {
    v16 = 0xAAAAAAAAAAAAAAABLL * ((12 * (__int64)v36) >> 2);
    v17 = -2;
    if ( v16 )
    {
      _BitScanReverse64(&v16, v16);
      v17 = 2LL * (int)v16;
    }
    sub_3DBC30((__int64)v35, (unsigned __int64)v35 + 12 * v36, v17);
    sub_3DB5A0(v14, v15);
    v15 = (char *)v35;
    v13 = v36;
  }
  v18 = ptr;
  v19 = 1;
  if ( (_QWORD)v34 == v13 )
  {
    if ( v13 )
    {
      v20 = (char *)ptr;
      v21 = v15;
      v22 = 0;
      while ( v20[4] == v21[4] && *(_DWORD *)v20 == *(_DWORD *)v21 && v20[8] == v21[8] )
      {
        ++v22;
        v20 += 12;
        v21 += 12;
        if ( (_QWORD)v34 == v22 )
          goto LABEL_23;
      }
      v19 = 1;
    }
    else
    {
LABEL_23:
      v19 = 0;
    }
  }
  if ( v15 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v15);
    v18 = ptr;
  }
  if ( v18 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v18);
  }
  return v19;
}


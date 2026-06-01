void __fastcall sub_E1BA80(__int64 a1, char **a2, __int64 a3)
{
  __m128 v4; // xmm0
  _DWORD *v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // r12
  char *v9; // r13
  __int64 *v10; // rdi
  char *v11; // r12
  char *v12; // rbp
  _BYTE *v13; // rax
  signed __int64 v14; // rax
  size_t v15; // rdx
  _BYTE *v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-150h] BYREF
  __m128 v19; // [rsp+10h] [rbp-148h] BYREF
  __int16 v20; // [rsp+20h] [rbp-138h]
  char v21; // [rsp+22h] [rbp-136h]
  __int64 v22; // [rsp+28h] [rbp-130h]
  __int128 v23; // [rsp+30h] [rbp-128h]
  void **v24; // [rsp+40h] [rbp-118h] BYREF
  void *v25; // [rsp+48h] [rbp-110h] BYREF
  __int64 v26; // [rsp+50h] [rbp-108h]
  _BYTE v27[64]; // [rsp+58h] [rbp-100h] BYREF
  void *ptr; // [rsp+98h] [rbp-C0h]
  __int64 v29; // [rsp+A0h] [rbp-B8h]
  _BYTE v30[64]; // [rsp+A8h] [rbp-B0h] BYREF
  void ***v31; // [rsp+E8h] [rbp-70h]
  __int64 *v32; // [rsp+F0h] [rbp-68h]
  __int64 v33; // [rsp+F8h] [rbp-60h]
  __int64 v34; // [rsp+100h] [rbp-58h]
  int v35; // [rsp+108h] [rbp-50h]
  __int64 v36; // [rsp+110h] [rbp-48h]
  __int64 v37; // [rsp+118h] [rbp-40h]
  int v38; // [rsp+120h] [rbp-38h]

  v18 = a3;
  v20 = 0;
  v25 = v27;
  v26 = 0x400000000LL;
  v4 = _mm_loadh_ps((const double *)&v18);
  v29 = 0x400000000LL;
  v31 = &v24;
  ptr = v30;
  v5 = *(_DWORD **)(a3 + 32);
  v24 = &v25;
  v6 = *(_QWORD *)(a3 + 24);
  v19 = v4;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v32 = nullptr;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  if ( (unsigned __int64)(v6 - (_QWORD)v5) > 3 )
  {
    *v5 = 1229412959;
    *(_QWORD *)(a3 + 32) += 4LL;
  }
  else
  {
    sub_22581D0(a3, "_ZGI", 4);
  }
  v7 = *((_DWORD *)a2 + 9);
  v8 = 8;
  v9 = "<global>";
  if ( ((v7 - 6) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned int)(v7 - 4) <= 1 )
    {
      v15 = (size_t)a2[1];
      v9 = *a2;
      v8 = -1;
      if ( v15 )
      {
        v16 = memchr(*a2, 58, v15);
        if ( v16 )
          v8 = v16 - v9;
      }
    }
    else if ( v7 == 7 )
    {
      v17 = sub_FCB100(a2);
      v9 = *(char **)v17;
      v8 = *(_QWORD *)(v17 + 8);
    }
    else
    {
      v9 = *a2;
      v8 = (__int64)a2[1];
    }
  }
  sub_E1B660((__int64)&v19, v9, (void *)v8, 0);
  if ( (unsigned int)(*((_DWORD *)a2 + 9) - 4) <= 1 )
  {
    v11 = a2[1];
    v12 = *a2;
    if ( v11 )
    {
      v13 = memchr(v12, 58, (size_t)v11);
      if ( v13 )
      {
        v14 = v13 - v12;
        v11 = &v11[-v14 - 1];
        v12 += v14 + 1;
      }
    }
    sub_E1B660((__int64)&v19, v12, v11, 1u);
  }
  operator delete();
  operator delete();
  v10 = v32;
  if ( v32 )
  {
    sub_E16EB0(
      v32,
      (char *)(*v32 + 16LL * *((unsigned int *)v32 + 2)),
      (char *)v25,
      (char *)v25 + 16 * (unsigned int)v26);
    sub_E16EB0(
      v32 + 10,
      (char *)(v32[10] + 16LL * *((unsigned int *)v32 + 22)),
      (char *)ptr,
      (char *)ptr + 16 * (unsigned int)v29);
    v10 = v32;
  }
  *v31 = (void **)v10;
  if ( ptr != v30 )
    free(ptr);
  if ( v25 != v27 )
    free(v25);
}


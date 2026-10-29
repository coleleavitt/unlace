__int64 __fastcall sub_FE9870(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rbp
  char *v14; // rdi
  size_t v15; // rdx
  bool v16; // al
  void *v17; // rbx
  __int64 v19; // [rsp+8h] [rbp-40h] BYREF
  void *v20; // [rsp+10h] [rbp-38h] BYREF
  void *s2; // [rsp+18h] [rbp-30h]
  __int64 v22; // [rsp+20h] [rbp-28h]

  v8 = *(_DWORD *)(a1 + 8);
  v19 = a3;
  v9 = *(unsigned int *)(a1 + 16);
  v10 = v8 + 1;
  v11 = 2 * v9;
  v12 = (unsigned int)(3 * v9);
  if ( 4 * v10 < (unsigned int)v12 )
  {
    v12 = (unsigned int)(v9 - *(_DWORD *)(a1 + 12) - v10);
    if ( (unsigned int)v12 > (unsigned int)v9 >> 3 )
      goto LABEL_3;
    v11 = *(_DWORD *)(a1 + 16);
  }
  sub_E3EDD0(a1, v11, v9, v12, a5, a6);
  sub_E3A630((__int64 *)a1, a2, &v19);
  v10 = *(_DWORD *)(a1 + 8) + 1;
LABEL_3:
  *(_DWORD *)(a1 + 8) = v10;
  sub_E35C20((void ***)&v20, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
  v13 = v19;
  v14 = *(char **)(v19 + 8);
  if ( s2 == (void *)-1LL )
  {
    v16 = v14 + 1 == nullptr;
  }
  else
  {
    if ( s2 != (void *)-2LL )
    {
      v15 = *(_QWORD *)(v19 + 16);
      if ( v15 != v22 || v15 && memcmp(v14, s2, v15) )
        goto LABEL_8;
      goto LABEL_11;
    }
    v16 = v14 + 2 == nullptr;
  }
  if ( !v16 )
LABEL_8:
    --*(_DWORD *)(a1 + 12);
LABEL_11:
  v17 = v20;
  if ( v20 )
  {
    if ( *(void **)v20 != (char *)v20 + 16 )
      operator delete(*(void **)v20);
    operator delete(v17, 0x20u);
  }
  return v13;
}


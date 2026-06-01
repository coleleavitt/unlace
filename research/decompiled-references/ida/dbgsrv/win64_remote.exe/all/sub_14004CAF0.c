/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004CAF0
// Address: 0x000000014004CAF0

//----- (000000014004CAF0) ----------------------------------------------------
__int64 __fastcall sub_14004CAF0(__int64 a1, void **a2, __int64 a3, _QWORD *a4, int a5, _QWORD *Block)
{
  int v9; // edx
  _DWORD *v10; // rax
  __int64 v11; // r10
  __int64 v13; // rax
  const void **v14; // r14
  unsigned int v15; // edi
  size_t v16; // rbx
  size_t v17; // rbp
  struct _exception *v18; // rsi
  const char *v19; // rbx
  struct _exception *v20; // rcx
  _QWORD *v21; // rcx
  __int64 v22; // rbx
  size_t v23; // rax
  __int64 v24; // rdx
  void *Blocka; // [rsp+98h] [rbp+30h]

  v9 = *(unsigned __int16 *)(a1 + 8);
  v10 = (_DWORD *)*Block;
  v11 = *Block + 4LL * Block[1];
  if ( *Block == v11 )
  {
LABEL_4:
    sub_140002CE0((struct __crt_locale_pointers *)"Bad DWARF section index: %uh.\n", v9);
    return 0xFFFFFFFFLL;
  }
  else
  {
    while ( v9 != *v10 )
    {
      if ( ++v10 == (_DWORD *)v11 )
        goto LABEL_4;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
    v14 = (const void **)v13;
    v15 = 0;
    v16 = *(_QWORD *)(v13 + 8);
    v17 = 0;
    v18 = nullptr;
    if ( v16 )
    {
      v18 = (struct _exception *)sub_14005AAA0(*(_QWORD *)(v13 + 8));
      memcpy(v18, *v14, v16);
      v17 = v16;
    }
    v19 = Str1;
    v20 = (struct _exception *)Str1;
    if ( v17 )
      v20 = v18;
    v21 = sub_1400639D0(v20, 0);
    Blocka = v21;
    if ( v21 )
    {
      v22 = a4[13] + 120LL * *(unsigned __int16 *)(a1 + 8);
      sub_140063BF0((__int64)v21, *(_QWORD *)(v22 + 48), 0);
      sub_140002EF0((__int64)a2, *(unsigned int *)(v22 + 8));
      v23 = sub_140063BD0((__int64)Blocka, *a2, *(unsigned int *)(v22 + 8));
      v24 = *(unsigned int *)(v22 + 8);
      if ( v23 != v24 )
      {
        sub_140002CE0((struct __crt_locale_pointers *)"Cannot read %u bytes (got %zu).\n", v24, v23);
        v15 = -1;
      }
      sub_140063970(Blocka);
    }
    else
    {
      if ( v17 )
        v19 = (const char *)v18;
      sub_140002CE0((struct __crt_locale_pointers *)"Invalid file path: %s.\n", v19);
      v15 = -1;
    }
    if ( v18 )
      j_free(v18);
    return v15;
  }
}

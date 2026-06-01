/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9CEC0
// Address: 0x000000000009CEC0

//----- (000000000009CEC0) ----------------------------------------------------
__int64 __fastcall sub_9CEC0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  _DWORD *v12; // rdx
  __int64 v13; // rax
  size_t v14; // rbx
  const void **v15; // rbp
  char *v16; // r15
  char *v17; // rbp
  unsigned int v18; // ebx
  _QWORD *v19; // rax
  char *v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rbp
  void *v24; // r13
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  char *v27; // rdi
  unsigned int *v28; // rbx
  size_t v29; // rcx
  __int64 v30; // rsi
  char v32; // [rsp+Fh] [rbp-39h] BYREF
  unsigned __int64 v33; // [rsp+10h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  v9 = *(unsigned __int16 *)(a1 + 8);
  v10 = *(_QWORD *)(a6 + 8);
  v11 = 4 * v10;
  v12 = *(_DWORD **)a6;
  if ( 4 * v10 )
  {
    v12 = *(_DWORD **)a6;
    while ( *v12 != (_DWORD)v9 )
    {
      ++v12;
      v11 -= 4;
      if ( !v11 )
        goto LABEL_9;
    }
  }
  if ( v12 == (_DWORD *)(*(_QWORD *)a6 + 4 * v10) )
  {
LABEL_9:
    sub_390A0((int)"Bad DWARF section index: %uh.\n", v9, v12);
    return (unsigned int)-1;
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a4 + 16LL))(*a4, v9);
    v14 = *(_QWORD *)(v13 + 8);
    if ( v14 )
    {
      v15 = (const void **)v13;
      v16 = (char *)qalloc_or_throw(*(_QWORD *)(v13 + 8));
      memcpy(v16, *v15, v14);
      v17 = v16;
    }
    else
    {
      v16 = (char *)s1;
      v17 = nullptr;
    }
    v19 = open_linput(v16, 0);
    if ( v19 )
    {
      v20 = v17;
      v21 = *(unsigned __int16 *)(a1 + 8);
      v22 = a4[13];
      v23 = 120 * v21;
      v24 = v19;
      qlseek((__int64)v19, *(_QWORD *)(v22 + 120 * v21 + 48), 0);
      v25 = *(unsigned int *)(v22 + v23 + 8);
      v26 = *(_QWORD *)(a2 + 8);
      if ( v26 >= v25 )
      {
        if ( v26 != v25 )
        {
          v32 = 0;
          sub_5E330(a2, v25, &v32);
        }
      }
      else
      {
        if ( *(_QWORD *)(a2 + 16) >= v25 )
        {
          v27 = *(char **)a2;
        }
        else
        {
          v27 = (char *)qvector_reserve(a2, *(char **)a2, *(unsigned int *)(v22 + v23 + 8), 1u);
          *(_QWORD *)a2 = v27;
          v26 = *(_QWORD *)(a2 + 8);
        }
        memset(&v27[v26], 0, v25 - v26);
        *(_QWORD *)(a2 + 8) = v25;
      }
      v28 = (unsigned int *)(v22 + v23 + 8);
      v29 = qlread((__int64)v24, *(void **)a2, *v28);
      v30 = *v28;
      v18 = 0;
      if ( v29 != v30 )
      {
        v18 = -1;
        sub_390A0((int)"Cannot read %u bytes (got %zu).\n", v30, v29);
      }
      close_linput(v24);
      v17 = v20;
    }
    else
    {
      v18 = -1;
      sub_390A0((int)"Invalid file path: %s.\n", v16);
    }
    if ( v17 )
      qfree(v17);
  }
  return v18;
}

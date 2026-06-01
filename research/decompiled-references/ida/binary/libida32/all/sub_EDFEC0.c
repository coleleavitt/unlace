void __fastcall sub_EDFEC0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int *v4; // rbx
  __int64 v5; // r14
  const void *v6; // rbx
  int v7; // esi
  char *v8; // rax
  __int64 *v9; // rdi
  unsigned __int64 v10; // r13
  int v11; // r8d
  __int64 v12; // rdx
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+8h] [rbp-50h]
  _BYTE v15[72]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  if ( (v3 & 1) != 0 )
  {
    v4 = (unsigned int *)(v3 & 0xFFFFFFFFFFFFFFFELL);
    v5 = (__int64)&v4[2 * *v4 + 2];
    v6 = v4 + 2;
  }
  else
  {
    if ( !v3 )
    {
      HIDWORD(v14) = 2;
      LODWORD(v10) = 0;
      v7 = 0;
      v9 = (__int64 *)v15;
      ptr = v15;
      goto LABEL_7;
    }
    v5 = a2 + 16;
    v6 = (const void *)(a2 + 8);
  }
  v7 = 0;
  v8 = v15;
  v14 = 0x200000000LL;
  ptr = v15;
  v9 = (__int64 *)v15;
  v10 = (v5 - (__int64)v6) >> 3;
  if ( v10 > 2 )
  {
    sub_22134E0(&ptr, v15, (v5 - (__int64)v6) >> 3, 8);
    v9 = (__int64 *)ptr;
    v7 = v14;
    v8 = (char *)ptr + 8 * (unsigned int)v14;
  }
  if ( v6 != (const void *)v5 )
  {
    memcpy(v8, v6, v5 - (_QWORD)v6);
    v9 = (__int64 *)ptr;
    v7 = v14;
  }
LABEL_7:
  v11 = *(_DWORD *)(a1 + 8);
  v12 = *(_QWORD *)a1;
  LODWORD(v14) = v10 + v7;
  sub_B96590(v9, v10 + v7, v12, (const __m128i *)(a1 + 24), v11);
  if ( ptr != v15 )
    free(ptr);
}


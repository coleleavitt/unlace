/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85330
// Address: 0x0000000000085330

//----- (0000000000085330) ----------------------------------------------------
__int64 __fastcall sub_85330(__int64 a1, __int64 a2, _BYTE *a3, double a4, __m128 a5)
{
  __int64 v5; // r12
  const char *v8; // rsi
  __int64 *v9; // rax
  __int64 *v10; // r13
  int v11; // ebx
  __int64 v12; // r14
  const char *v13; // rbp
  size_t v14; // rax
  unsigned __int64 v15; // rcx
  char **v16; // rdi
  __int64 v17; // rcx
  char *v18; // rax
  int v19; // r14d
  __int64 v20; // rcx
  __int128 v21; // xmm0
  __int64 v22; // rdx
  const char *v23; // rax
  char *v24; // rbx
  void *v25; // r15
  unsigned __int64 v26; // r13
  __int64 i; // rbp
  void *v28; // rdi
  _BYTE *v30; // [rsp+10h] [rbp-68h]
  char v31; // [rsp+1Fh] [rbp-59h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v33; // [rsp+30h] [rbp-48h]
  unsigned __int64 v34; // [rsp+40h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) )
    v8 = *(const char **)a2;
  else
    v8 = s1;
  v9 = sub_827A0(a1, v8);
  v30 = a3;
  *a3 = 0;
  if ( !v9 )
  {
LABEL_40:
    LODWORD(v5) = 0;
    return (unsigned int)v5;
  }
  v10 = v9;
  v11 = *(_DWORD *)(a1 + 64) - 1;
  if ( v11 >= 0 )
  {
    v12 = 56LL * v11 + 48;
    do
    {
      v5 = *(_QWORD *)(a1 + 56);
      if ( *(__int64 **)(v5 + v12 - 8) == v10 )
      {
        if ( !*((_BYTE *)v10 + 25) )
          goto LABEL_40;
        v13 = s1;
        if ( v10[1] )
          v13 = (const char *)*v10;
        v14 = strlen(v13);
        v15 = *(_QWORD *)(a1 + 8);
        if ( (unsigned __int64)v13 <= v15 && v15 <= (unsigned __int64)&v13[v14] )
          goto LABEL_40;
        if ( *(_DWORD *)(a1 + 80) > *(_DWORD *)(v5 + v12) )
          goto LABEL_40;
      }
      v12 -= 56;
    }
    while ( --v11 >= 0 );
  }
  *(_OWORD *)ptr = 0;
  v33 = 0;
  if ( !*((_BYTE *)v10 + 25) )
    goto LABEL_19;
  LODWORD(v5) = sub_84C30(a1, (__int64)ptr, &v31, 0.0, a5);
  if ( (_DWORD)v5 || !v31 )
  {
LABEL_23:
    v19 = 1;
    goto LABEL_30;
  }
  if ( ptr[1] != (void *)*((unsigned __int8 *)v10 + 24) )
  {
    set_error_string(0, v8);
    LODWORD(v5) = set_qerrno(0x27u);
    goto LABEL_23;
  }
LABEL_19:
  if ( (unsigned __int64)v10[1] >= 2 )
  {
    v16 = (char **)(a1 + 56);
    v17 = *(_QWORD *)(a1 + 64);
    if ( *(_QWORD *)(a1 + 72) >= (unsigned __int64)(v17 + 1) )
    {
      v18 = *v16;
    }
    else
    {
      v18 = (char *)qvector_reserve((__int64)v16, *v16, v17 + 1, 0x38u);
      *(_QWORD *)(a1 + 56) = v18;
      v17 = *(_QWORD *)(a1 + 64);
    }
    v20 = 56 * v17;
    *(_OWORD *)&v18[v20] = 0;
    *(_QWORD *)&v18[v20 + 16] = 0;
    ++*(_QWORD *)(a1 + 64);
    *(_QWORD *)&v18[v20 + 24] = *(_QWORD *)a1;
    *(_QWORD *)&v18[v20 + 32] = *(_QWORD *)(a1 + 8);
    *(_DWORD *)&v18[v20 + 48] = *(_DWORD *)(a1 + 80);
    *(_QWORD *)&v18[v20 + 40] = v10;
    v21 = *(_OWORD *)ptr;
    v22 = v33;
    ptr[0] = *(void **)&v18[v20];
    ptr[1] = *(void **)&v18[v20 + 8];
    v33 = *(_QWORD *)&v18[v20 + 16];
    *(_OWORD *)&v18[v20] = v21;
    *(_QWORD *)&v18[v20 + 16] = v22;
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 64) - 1;
    if ( v10[1] )
      v23 = (const char *)*v10;
    else
      v23 = s1;
    *(_QWORD *)(a1 + 8) = v23;
    *(_QWORD *)a1 = v23;
  }
  *v30 = 1;
  v19 = 0;
LABEL_30:
  v24 = (char *)ptr[0];
  if ( ptr[0] )
  {
    v25 = ptr[1];
    if ( ptr[1] )
    {
      v26 = 1;
      for ( i = 0; ; i += 24 )
      {
        v28 = *(void **)&v24[i];
        if ( v28 )
        {
          *(_QWORD *)&v24[i + 8] = 0;
          qfree(v28);
          *(_QWORD *)&v24[i] = 0;
          *(_QWORD *)&v24[i + 16] = 0;
        }
        if ( v26 >= (unsigned __int64)v25 )
          break;
        v24 = (char *)ptr[0];
        ++v26;
      }
      v24 = (char *)ptr[0];
    }
    ptr[1] = nullptr;
    qfree(v24);
    ptr[0] = nullptr;
    v33 = 0;
  }
  if ( !v19 )
    goto LABEL_40;
  return (unsigned int)v5;
}
// 855DA: variable 'v5' is possibly undefined

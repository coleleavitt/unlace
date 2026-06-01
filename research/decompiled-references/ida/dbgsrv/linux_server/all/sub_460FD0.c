/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_460FD0
// Address: 0x0000000000460FD0

//----- (0000000000460FD0) ----------------------------------------------------
unsigned __int64 __fastcall sub_460FD0(
        __int64 a1,
        __int64 **a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 *v10; // rdx
  __int64 *v11; // rbx
  size_t v13; // r12
  signed __int64 v14; // rax
  double v15; // xmm4_8
  double v16; // xmm5_8
  size_t v17; // r13
  size_t v18; // r9
  size_t v19; // r10
  char *v20; // rsi
  size_t v21; // rax
  size_t v22; // r13
  size_t v23; // r9
  char *v24; // rsi
  size_t v25; // rax
  int v26; // eax
  __int64 v27; // rdi
  __int64 (*v28)(); // rax
  __int64 v29; // r13
  const char *v30; // r12
  signed __int64 v31; // rax
  size_t v32; // r8
  size_t v33; // r13
  unsigned __int64 v34; // r9
  char *v35; // rsi
  size_t v36; // rax
  size_t v37; // rax
  __int64 v38; // r13
  size_t v39; // r8
  unsigned __int64 v40; // r9
  char *v41; // rsi
  size_t v42; // rax
  __int64 *p_ptr; // [rsp+0h] [rbp-98h]
  __int64 v45; // [rsp+8h] [rbp-90h]
  void *v46; // [rsp+10h] [rbp-88h]
  unsigned __int64 *v47; // [rsp+18h] [rbp-80h]
  size_t n; // [rsp+20h] [rbp-78h]
  size_t v49; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  size_t v51; // [rsp+38h] [rbp-60h]
  unsigned __int64 v52; // [rsp+40h] [rbp-58h]
  _BYTE src[5]; // [rsp+4Eh] [rbp-4Ah] BYREF
  _BYTE v54[5]; // [rsp+53h] [rbp-45h] BYREF
  unsigned __int64 v55; // [rsp+58h] [rbp-40h] BYREF

  v10 = a2[1];
  v45 = a1;
  v55 = __readfsqword(0x28u);
  v11 = *a2;
  p_ptr = (__int64 *)&ptr;
  v47 = &v55;
  if ( !(56LL * (_QWORD)v10) )
    return v55 - __readfsqword(0x28u);
  while ( 1 )
  {
    v29 = *v11;
    v30 = s1;
    if ( v11[2] )
      v30 = (const char *)v11[1];
    sub_470050((__int64)p_ptr, 57);
    v31 = sub_47FC90(src, (unsigned __int64)v47, v29 + 1) - src;
    v32 = v31;
    if ( v31 )
    {
      v33 = v51;
      v34 = v51 + v31;
      if ( __CFADD__(v51, v31) )
      {
        if ( v51 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v51 != 0x7FFFFFFFFFFFFFFFLL )
            v51 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_32;
        }
        v34 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v35 = (char *)ptr;
      v36 = v51;
      if ( v52 < v34 )
      {
        n = v32;
        v46 = (void *)v34;
        ptr = sub_481540((__int64)p_ptr, ptr, v34, 1u);
        v35 = (char *)ptr;
        v32 = n;
        v36 = v51;
        v34 = (unsigned __int64)v46;
      }
      n = v32;
      v46 = (void *)v34;
      memset(&v35[v36], 0, v34 - v36);
      v32 = n;
      v51 = (size_t)v46;
LABEL_32:
      memcpy((char *)ptr + v33, src, v32);
    }
    if ( !v30 )
    {
      v38 = v51;
      v39 = 1;
      v30 = "";
      v40 = v51 + 1;
      if ( v51 != -1 )
        goto LABEL_35;
      v38 = -1;
      v30 = "";
LABEL_5:
      v51 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_6;
    }
    v37 = strlen(v30);
    v38 = v51;
    v39 = v37 + 1;
    v40 = v37 + 1 + v51;
    if ( __CFADD__(v37 + 1, v51) )
    {
      if ( v51 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v40 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_35;
      }
      if ( v51 == 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_6;
      goto LABEL_5;
    }
LABEL_35:
    v41 = (char *)ptr;
    v42 = v38;
    if ( v52 < v40 )
    {
      n = v39;
      v46 = (void *)v40;
      ptr = sub_481540((__int64)p_ptr, ptr, v40, 1u);
      v41 = (char *)ptr;
      v39 = n;
      v42 = v51;
      v40 = (unsigned __int64)v46;
    }
    n = v39;
    v46 = (void *)v40;
    memset(&v41[v42], 0, v40 - v42);
    v39 = n;
    v51 = (size_t)v46;
LABEL_6:
    memcpy((char *)ptr + v38, v30, v39);
    v13 = v11[5];
    v46 = (void *)v11[4];
    if ( HIDWORD(v13) )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(5);
      BUG();
    }
    v14 = sub_47FB50(src, (unsigned __int64)v54, (unsigned int)v13) - src;
    v17 = v14;
    if ( v14 )
    {
      v18 = v51;
      v19 = v51 + v14;
      if ( __CFADD__(v51, v14) )
      {
        if ( v51 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v51 != 0x7FFFFFFFFFFFFFFFLL )
            v51 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_12;
        }
        v19 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v20 = (char *)ptr;
      v21 = v51;
      if ( v52 < v19 )
      {
        v49 = v51;
        n = v19;
        ptr = sub_481540((__int64)p_ptr, ptr, v19, 1u);
        v20 = (char *)ptr;
        v18 = v49;
        v21 = v51;
        v19 = n;
      }
      v49 = v18;
      n = v19;
      memset(&v20[v21], 0, v19 - v21);
      v18 = v49;
      v51 = n;
LABEL_12:
      memcpy((char *)ptr + v18, src, v17);
    }
    if ( !v13 )
      goto LABEL_18;
    v22 = v51;
    v23 = v51 + v13;
    if ( __CFADD__(v51, v13) )
    {
      if ( v51 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v51 != 0x7FFFFFFFFFFFFFFFLL )
          v51 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_17;
      }
      v24 = (char *)ptr;
      v25 = v51;
      v23 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v52 < 0x7FFFFFFFFFFFFFFFLL )
      {
LABEL_53:
        n = v23;
        ptr = sub_481540((__int64)p_ptr, v24, v23, 1u);
        v24 = (char *)ptr;
        v23 = n;
        v25 = v51;
      }
    }
    else
    {
      v24 = (char *)ptr;
      v25 = v51;
      if ( v52 < v23 )
        goto LABEL_53;
    }
    n = v23;
    memset(&v24[v25], 0, v23 - v25);
    v51 = n;
LABEL_17:
    memcpy((char *)ptr + v22, v46, v13);
LABEL_18:
    v26 = sub_46B580((__int64 *)(v45 + 192), p_ptr, -1, 0, a3, a4, a5, a6, v15, v16, a9, a10);
    if ( v26 < 0 )
      break;
    if ( v26 )
    {
      v27 = *(_QWORD *)(v45 + 440);
      v28 = *(__int64 (**)())(*(_QWORD *)v27 + 568LL);
      if ( v28 != sub_40C0D0 )
        ((void (__fastcall *)(__int64, __int64 *))v28)(v27, v11);
    }
    if ( ptr )
    {
      v51 = 0;
      j__free(ptr);
    }
    v11 += 7;
    if ( v11 == &(*a2)[7 * (_QWORD)a2[1]] )
      return v55 - __readfsqword(0x28u);
  }
  if ( ptr )
  {
    v51 = 0;
    j__free(ptr);
  }
  return v55 - __readfsqword(0x28u);
}
// 461178: variable 'v15' is possibly undefined
// 461178: variable 'v16' is possibly undefined
// 40C0D0: using guessed type __int64 sub_40C0D0();
// 4C94E1: using guessed type char byte_4C94E1;

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F190
// Address: 0x000000000045F190

//----- (000000000045F190) ----------------------------------------------------
unsigned __int64 __fastcall sub_45F190(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const char *a4,
        const char *a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  __int64 v16; // rax
  signed __int64 v17; // rax
  size_t v18; // r8
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rax
  _BYTE *v22; // rsi
  unsigned __int64 v23; // rdx
  signed __int64 v24; // rax
  double v25; // xmm4_8
  double v26; // xmm5_8
  size_t v27; // rbx
  unsigned __int8 *(__fastcall *v28)(__int64, unsigned __int8, __int64 *, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // rax
  unsigned __int8 *v29; // rax
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // rbx
  size_t v35; // r13
  unsigned __int64 v36; // rbp
  char *v37; // rsi
  unsigned __int64 v38; // rax
  char *v39; // rsi
  unsigned __int64 v40; // rax
  char *v41; // rsi
  unsigned __int64 v42; // rax
  _QWORD *v43; // [rsp+0h] [rbp-88h]
  unsigned __int64 v44; // [rsp+8h] [rbp-80h]
  size_t v45; // [rsp+10h] [rbp-78h]
  unsigned __int64 v46; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v48; // [rsp+28h] [rbp-60h]
  unsigned __int64 v49; // [rsp+30h] [rbp-58h]
  _BYTE src[10]; // [rsp+3Eh] [rbp-4Ah] BYREF
  _QWORD v51[8]; // [rsp+48h] [rbp-40h] BYREF

  v51[0] = __readfsqword(0x28u);
  if ( a3 == 1 )
  {
    v16 = a1 - 192;
    if ( !a1 )
      v16 = 0;
    a4 = (const char *)(*(int (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v16 + 440) + 408LL))(
                         *(_QWORD *)(v16 + 440),
                         a2,
                         0);
  }
  sub_470050((__int64)&ptr, 56);
  v43 = v51;
  v17 = sub_47FC90(src, (unsigned __int64)v51, a2 + 1) - src;
  v18 = v17;
  if ( v17 )
  {
    v19 = v48;
    v20 = v48 + v17;
    if ( __CFADD__(v48, v17) )
    {
      if ( v48 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v48 != 0x7FFFFFFFFFFFFFFFLL )
          v48 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_10:
        memcpy((char *)ptr + v19, src, v18);
        goto LABEL_11;
      }
      v20 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v37 = (char *)ptr;
    v38 = v48;
    if ( v49 < v20 )
    {
      v46 = v48;
      v45 = v18;
      v44 = v20;
      ptr = sub_481540((__int64)&ptr, ptr, v20, 1u);
      v37 = (char *)ptr;
      v19 = v46;
      v38 = v48;
      v18 = v45;
      v20 = v44;
    }
    v46 = v19;
    v45 = v18;
    v44 = v20;
    memset(&v37[v38], 0, v20 - v38);
    v18 = v45;
    v19 = v46;
    v48 = v44;
    goto LABEL_10;
  }
LABEL_11:
  sub_45BD90((char **)&ptr, a3);
  v21 = v48;
  v22 = ptr;
  v23 = v48 + 1;
  if ( a5 == a4 )
  {
    if ( v49 < v23 )
    {
      ptr = sub_481540((__int64)&ptr, ptr, v23, 1u);
      v22 = ptr;
      v21 = v48;
    }
    v22[v21] = 1;
    v33 = v48;
    v34 = ++v48;
    if ( a5 )
    {
      v35 = strlen(a5) + 1;
      v36 = v35 + v34;
      if ( __CFADD__(v35, v34) )
      {
        if ( v34 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v34 == 0x7FFFFFFFFFFFFFFFLL )
          {
LABEL_32:
            memcpy((char *)ptr + v34, a5, v35);
            goto LABEL_15;
          }
LABEL_31:
          v48 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_32;
        }
        v36 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v36 = v33 + 2;
      v35 = 1;
      a5 = "";
      if ( v36 < v34 )
      {
        a5 = "";
        v35 = 1;
        goto LABEL_31;
      }
    }
    v41 = (char *)ptr;
    v42 = v34;
    if ( v49 < v36 )
    {
      ptr = sub_481540((__int64)&ptr, ptr, v36, 1u);
      v41 = (char *)ptr;
      v42 = v48;
    }
    memset(&v41[v42], 0, v36 - v42);
    v48 = v36;
    goto LABEL_32;
  }
  if ( v49 < v23 )
  {
    ptr = sub_481540((__int64)&ptr, ptr, v23, 1u);
    v22 = ptr;
    v21 = v48;
  }
  v22[v21] = 0;
  ++v48;
  v24 = sub_47FC90(src, (unsigned __int64)v43, (unsigned __int64)(a4 + 1)) - src;
  v27 = v24;
  if ( v24 )
  {
    v31 = v48;
    v32 = v48 + v24;
    if ( __CFADD__(v48, v24) )
    {
      if ( v48 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v48 != 0x7FFFFFFFFFFFFFFFLL )
          v48 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_24:
        memcpy((char *)ptr + v31, src, v27);
        goto LABEL_15;
      }
      v32 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v39 = (char *)ptr;
    v40 = v48;
    if ( v49 < v32 )
    {
      ptr = sub_481540((__int64)&ptr, ptr, v32, 1u);
      v39 = (char *)ptr;
      v40 = v48;
    }
    memset(&v39[v40], 0, v32 - v40);
    v48 = v32;
    goto LABEL_24;
  }
LABEL_15:
  v28 = *(unsigned __int8 *(__fastcall **)(__int64, unsigned __int8, __int64 *, __m128, __m128, __m128, __m128, double, double, __m128, __m128))(*(_QWORD *)a1 + 16LL);
  if ( v28 == sub_45B5D0 )
    v29 = sub_46B350(a1, 0x38u, (__int64 *)&ptr, 0, a6, a7, a8, a9, v25, v26, a12, a13);
  else
    v29 = (unsigned __int8 *)((__int64 (__fastcall *)(__int64, __int64, void **))v28)(a1, 56, &ptr);
  j__free(v29);
  if ( ptr )
  {
    v48 = 0;
    j__free(ptr);
  }
  return v51[0] - __readfsqword(0x28u);
}
// 45F2DD: variable 'v25' is possibly undefined
// 45F2DD: variable 'v26' is possibly undefined

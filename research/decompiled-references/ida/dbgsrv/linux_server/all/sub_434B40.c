/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_434B40
// Address: 0x0000000000434B40

//----- (0000000000434B40) ----------------------------------------------------
__int64 __fastcall sub_434B40(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  bool v11; // zf
  __int64 v13; // r12
  __int64 v14; // rbp
  __int64 v15; // rdi
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // rbp
  size_t v19; // rax
  size_t v20; // r15
  size_t v21; // rbp
  const char *v22; // rdi
  int v23; // eax
  double v24; // xmm4_8
  double v25; // xmm5_8
  char v26; // dl
  __int64 v27; // r12
  unsigned __int64 v28; // r15
  __int64 v29; // r14
  int v30; // ebp
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 result; // rax
  size_t v35; // rdx
  _BYTE *v36; // rsi
  unsigned __int64 v37; // rbp
  size_t v38; // r15
  char **v39; // [rsp+8h] [rbp-90h]
  unsigned int v40; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int128 v42; // [rsp+18h] [rbp-80h]
  char v43[8]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v44; // [rsp+38h] [rbp-60h]
  __int64 v45; // [rsp+48h] [rbp-50h]
  unsigned __int64 v46; // [rsp+58h] [rbp-40h]

  v11 = *(_QWORD *)(a1 + 120) == 0;
  v46 = __readfsqword(0x28u);
  if ( !v11 )
    sub_42E7E0((_QWORD *)(a1 + 112));
  v39 = (char **)(a1 + 136);
  if ( *(_QWORD *)(a1 + 144) )
    sub_42E7E0((_QWORD *)(a1 + 136));
  if ( *(_QWORD *)(a1 + 168) )
    sub_42E7E0((_QWORD *)(a1 + 160));
  v13 = *(_QWORD *)(a1 + 432);
  if ( v13 )
  {
    v43[0] = 2;
    a3 = 0.0;
    v14 = 0;
    v45 = 0;
    v44 = 0;
    do
    {
      v15 = v14++;
      sub_441540(*(_QWORD *)(a1 + 424) + 32 * v15, 0.0, a4, a5, a6, a7, a8, a9, a10);
    }
    while ( v13 != v14 );
    *(_QWORD *)(a1 + 432) = 0;
    sub_441540((__int64)v43, 0.0, a4, a5, a6, a7, a8, a9, a10);
  }
  sub_434A30((char **)(a1 + 224), 0);
  sub_434A30((char **)(a1 + 248), 0);
  sub_434A30((char **)(a1 + 272), 0);
  sub_434A30((char **)(a1 + 296), 0);
  if ( *(_QWORD *)(a1 + 328) )
    *(_QWORD *)(a1 + 328) = 0;
  if ( *(_QWORD *)(a1 + 352) )
    *(_QWORD *)(a1 + 352) = 0;
  sub_434AB0((char **)(a1 + 368), 0);
  sub_434AB0((char **)(a1 + 392), 0);
  v18 = *(_QWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 448) = -1;
  if ( !v18 )
  {
    v27 = sub_4396E0(*(__int64 **)(a1 + 104), a2, a3, a4, a5, a6, v16, v17, a9, a10);
    if ( v27 != -1 )
    {
LABEL_32:
      v33 = *(_QWORD *)(**(_QWORD **)(a1 + 104) + 8 * v27);
      *(_BYTE *)(a1 + 212) = -90;
      *(_DWORD *)(a1 + 208) = 0;
      *(__m128i *)(a1 + 192) = _mm_unpacklo_epi64((__m128i)v33, (__m128i)(v33 + 32));
      if ( *(_DWORD *)(v33 + 136) != -1 )
      {
        if ( !byte_4C94E1 )
          sub_481AC0(484);
        BUG();
      }
      return 0;
    }
LABEL_39:
    sub_479F30(0, a2);
    return sub_479EB0(0x28u);
  }
  ptr = nullptr;
  v42 = 0;
  if ( a2 )
  {
    v19 = strlen(a2);
    v20 = v19 + 1;
    v21 = v19;
    ptr = sub_481540((__int64)&ptr, nullptr, v19 + 1, 1u);
    *(_QWORD *)&v42 = v20;
    memmove(ptr, a2, v21);
    *((_BYTE *)ptr + v21) = 0;
    v18 = *(_QWORD *)(a1 + 184);
  }
  v22 = s1;
  if ( *(_QWORD *)(v18 + 64) )
    v22 = *(const char **)(v18 + 56);
  v23 = strcmp(v22, a2);
  v26 = *(_BYTE *)(a1 + 220);
  if ( !v23 )
  {
    if ( !v26 )
    {
      *(_DWORD *)(a1 + 216) = 1;
      goto LABEL_22;
    }
    v35 = v42;
    v36 = ptr;
    if ( (_QWORD)v42 )
    {
      v37 = v42 + 1;
      v38 = v42 - 1;
      if ( *((_QWORD *)&v42 + 1) >= (unsigned __int64)(v42 + 1) )
        goto LABEL_44;
    }
    else
    {
      if ( *((_QWORD *)&v42 + 1) > 1u )
      {
        *(_QWORD *)&v42 = 2;
        *((_BYTE *)ptr + 1) = 0;
LABEL_46:
        *(_BYTE *)ptr = 126;
        v18 = *(_QWORD *)(a1 + 184);
        *(_DWORD *)(a1 + 216) = 2;
        goto LABEL_22;
      }
      v38 = 0;
      v37 = 2;
    }
    ptr = sub_481540((__int64)&ptr, ptr, v37, 1u);
    v36 = ptr;
    v35 = v38 + 1;
LABEL_44:
    *(_QWORD *)&v42 = v37;
    v36[v35] = 0;
    if ( v38 )
      memmove((char *)ptr + 1, ptr, v38);
    goto LABEL_46;
  }
  if ( !v26 )
  {
LABEL_22:
    v27 = sub_43AEF0(v18, *(__int64 **)(a1 + 104), (__int64)&ptr, 0.0, a4, a5, a6, v24, v25, a9, a10);
    if ( v27 != -1 )
    {
      if ( *(_DWORD *)(a1 + 216) == 2 )
        *(_DWORD *)(*(_QWORD *)(a1 + 184) + 88LL) = v27;
      v28 = *(_QWORD *)(a1 + 144);
      if ( v28 )
      {
        v29 = *(_QWORD *)(a1 + 136);
        v30 = 0;
        v31 = 0;
        while ( 1 )
        {
          v32 = v29 + 24 * v31;
          if ( *(_QWORD *)(v32 + 8) )
          {
            if ( !strcmp(*(const char **)v32, "this") )
              break;
          }
          v31 = ++v30;
          if ( v30 >= v28 )
            goto LABEL_37;
        }
      }
      else
      {
LABEL_37:
        sub_430830(v39, "this");
      }
      if ( ptr )
      {
        *(_QWORD *)&v42 = 0;
        j__free(ptr);
      }
      goto LABEL_32;
    }
    if ( ptr )
    {
      *(_QWORD *)&v42 = 0;
      j__free(ptr);
    }
    goto LABEL_39;
  }
  result = sub_479EB0(0x630u);
  if ( ptr )
  {
    v40 = result;
    *(_QWORD *)&v42 = 0;
    j__free(ptr);
    return v40;
  }
  return result;
}
// 434BDD: variable 'a7' is possibly undefined
// 434BDD: variable 'a8' is possibly undefined
// 434D43: variable 'v24' is possibly undefined
// 434D43: variable 'v25' is possibly undefined
// 434E9F: variable 'v16' is possibly undefined
// 434E9F: variable 'v17' is possibly undefined
// 4C94E1: using guessed type char byte_4C94E1;

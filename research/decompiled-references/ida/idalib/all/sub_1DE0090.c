__int64 __fastcall sub_1DE0090(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v5; // rsi
  __int64 *v6; // r13
  __int64 v7; // r12
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // rsi
  __int64 v15; // rbx
  int v17; // eax
  __int64 v18; // r14
  int v19; // r15d
  int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // [rsp+0h] [rbp-B8h]
  __int64 v32; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v33; // [rsp+0h] [rbp-B8h]
  unsigned int v34; // [rsp+Ch] [rbp-ACh]
  char v35; // [rsp+1Fh] [rbp-99h] BYREF
  __int64 v36; // [rsp+20h] [rbp-98h] BYREF
  __int64 *v37; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v39; // [rsp+38h] [rbp-80h]
  _BYTE v40[120]; // [rsp+40h] [rbp-78h] BYREF

  v5 = *(void ***)(a2 + 40);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v6 = (__int64 *)sub_1DD4760((__int64)a1, v5, a3, a4);
  else
    v6 = sub_1DD1930((__int64)a1, (__int64)v5, a3, a4);
  if ( !v6 )
    return 1;
  v7 = *(_QWORD *)(a2 + 16);
  v8 = sub_C94D80(a2);
  v12 = sub_1DD8310((__int64)a1, v8, v7, v9, v10, v11, a3, a4);
  if ( !v12 )
    return 1;
  v13 = *(unsigned int *)(a2 + 32);
  v35 = 0;
  v39 = 0x800000000LL;
  ptr = v40;
  if ( v13 > 8 )
    sub_2237220(&ptr, v40, v13, 8);
  sub_14EE070((__int64)&v36, *a1, 0, (*(_QWORD *)a2 & 0x200000LL) != 0);
  v14 = (unsigned __int64 *)(a2 + 40);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
    v14 = (unsigned __int64 *)(a2 + 48);
  if ( (unsigned __int8)sub_1DDBD00(a1, v14, *(unsigned int *)(a2 + 32), 1u, (__int64)&ptr, &v35, a3, a4) )
    goto LABEL_10;
  if ( (*(_QWORD *)a2 & 0x200000LL) == 0 || (*(_QWORD *)a2 & 0x400000LL) != 0 )
  {
LABEL_19:
    if ( (_BYTE)v37 )
      sub_190D5E0(v36, a3);
    if ( *(_DWORD *)(*a1 + 12632) || *(__int64 **)(a2 + 40) != v6 || v12 != *(_QWORD *)(a2 + 16) || v35 )
    {
      v36 = *v6;
      v37 = v6 + 1;
      v17 = sub_F6CE20(&v36);
      v18 = *(_QWORD *)a2;
      v19 = v17;
      v20 = sub_C94DB0((__int16 *)a2);
      v15 = sub_19AB130(
              *a1,
              v6,
              v19,
              (unsigned __int64 *)ptr,
              (unsigned int)v39,
              v20,
              a3,
              (__m128i)a4,
              (v18 & 0x200000) != 0);
    }
    else
    {
      v31 = *a1;
      v21 = sub_C94D80(a2);
      sub_1910D40(v31, v21, v12, 1, v31, v22, a3, a4);
      v15 = (__int64)sub_19A3E40(*a1, (unsigned __int16 *)a2, v23, v24, v25, a3, a4);
    }
    goto LABEL_12;
  }
  v34 = sub_C94DB0((__int16 *)a2);
  v32 = (unsigned int)v39;
  v26 = sub_C94D80(a2);
  v28 = sub_1909BB0(*a1, v26, (__int64)ptr, v32, v34, v27, (__m128i)a3, a4);
  if ( v28 != 1 )
  {
    v29 = v28 & 0xFFFFFFFFFFFFFFFELL;
    LODWORD(v39) = 0;
    v30 = 0;
    if ( !HIDWORD(v39) )
    {
      v33 = v29;
      sub_2237220(&ptr, v40, 1, 8);
      v29 = v33;
      v30 = 8LL * (unsigned int)v39;
    }
    *(_QWORD *)((char *)ptr + v30) = v29;
    LODWORD(v39) = v39 + 1;
    goto LABEL_19;
  }
LABEL_10:
  v15 = 1;
  if ( (_BYTE)v37 )
    sub_190D5E0(v36, a3);
LABEL_12:
  if ( ptr != v40 )
    free(ptr);
  return v15;
}

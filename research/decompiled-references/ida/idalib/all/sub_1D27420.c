__int64 __fastcall sub_1D27420(__int64 **a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // r13
  __int64 v11; // r15
  unsigned __int64 v12; // rdx
  unsigned __int16 **v13; // rsi
  __int64 v14; // rbx
  int v16; // eax
  __int64 v17; // r14
  int v18; // r15d
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 *v30; // [rsp+0h] [rbp-B8h]
  __int64 v31; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v32; // [rsp+0h] [rbp-B8h]
  unsigned int v33; // [rsp+Ch] [rbp-ACh]
  char v34; // [rsp+1Fh] [rbp-99h] BYREF
  __int64 v35; // [rsp+20h] [rbp-98h] BYREF
  __int64 *v36; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v38; // [rsp+38h] [rbp-80h]
  _BYTE v39[120]; // [rsp+40h] [rbp-78h] BYREF

  v5 = *(void ***)(a2 + 40);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v10 = (__int64 *)sub_1D26A30(a1, v5, a3);
  else
    v10 = sub_1D1AAC0(a1, (__int64)v5, a3, a4);
  if ( !v10 )
    return 1;
  v11 = sub_1D1B120((__int64)a1, *(_QWORD *)(a2 + 16), a3, a4, v6, v7, v8, v9);
  if ( !v11 )
    return 1;
  v12 = *(unsigned int *)(a2 + 32);
  v34 = 0;
  v38 = 0x800000000LL;
  ptr = v39;
  if ( v12 > 8 )
    sub_2237220(&ptr, v39, v12, 8);
  sub_14EE070((__int64)&v35, (__int64)*a1, 0, (*(_QWORD *)a2 & 0x200000LL) != 0);
  v13 = (unsigned __int16 **)(a2 + 40);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
    v13 = (unsigned __int16 **)(a2 + 48);
  if ( (unsigned __int8)sub_1D11730((__int64 *)a1, v13, *(unsigned int *)(a2 + 32), 1u, (__int64)&ptr, &v34, a3, a4) )
    goto LABEL_10;
  if ( (*(_QWORD *)a2 & 0x200000LL) == 0 || (*(_QWORD *)a2 & 0x400000LL) != 0 )
  {
LABEL_19:
    if ( (_BYTE)v36 )
      sub_190D5E0(v35, a3);
    if ( *((_DWORD *)*a1 + 3158) || *(__int64 **)(a2 + 40) != v10 || v11 != *(_QWORD *)(a2 + 16) || v34 )
    {
      v35 = *v10;
      v36 = v10 + 1;
      v16 = sub_F6CE20(&v35);
      v17 = *(_QWORD *)a2;
      v18 = v16;
      v19 = sub_C94DB0((__int16 *)a2);
      v14 = sub_19AB130(
              (__int64)*a1,
              v10,
              v18,
              (unsigned __int64 *)ptr,
              (unsigned int)v38,
              v19,
              a3,
              (__m128i)a4,
              (v17 & 0x200000) != 0);
    }
    else
    {
      v30 = *a1;
      v20 = sub_C94D80(a2);
      sub_1910D40((__int64)v30, v20, v11, 1, (__int64)v30, v21, a3, a4);
      v14 = (__int64)sub_19A3E40((__int64)*a1, (unsigned __int16 *)a2, v22, v23, v24, a3, a4);
    }
    goto LABEL_12;
  }
  v33 = sub_C94DB0((__int16 *)a2);
  v31 = (unsigned int)v38;
  v25 = sub_C94D80(a2);
  v27 = sub_1909BB0((__int64)*a1, v25, (__int64)ptr, v31, v33, v26, (__m128i)a3, a4);
  if ( v27 != 1 )
  {
    v28 = v27 & 0xFFFFFFFFFFFFFFFELL;
    LODWORD(v38) = 0;
    v29 = 0;
    if ( !HIDWORD(v38) )
    {
      v32 = v28;
      sub_2237220(&ptr, v39, 1, 8);
      v28 = v32;
      v29 = 8LL * (unsigned int)v38;
    }
    *(_QWORD *)((char *)ptr + v29) = v28;
    LODWORD(v38) = v38 + 1;
    goto LABEL_19;
  }
LABEL_10:
  v14 = 1;
  if ( (_BYTE)v36 )
    sub_190D5E0(v35, a3);
LABEL_12:
  if ( ptr != v39 )
    free(ptr);
  return v14;
}

__int64 __fastcall sub_1E29270(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v5; // rsi
  __int64 *v6; // r13
  __int64 v7; // r15
  unsigned __int64 v8; // rdx
  unsigned __int16 **v9; // rsi
  __int64 v10; // rbx
  int v12; // eax
  __int64 v13; // r14
  int v14; // r15d
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // [rsp+0h] [rbp-B8h]
  __int64 v27; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v28; // [rsp+0h] [rbp-B8h]
  unsigned int v29; // [rsp+Ch] [rbp-ACh]
  char v30; // [rsp+1Fh] [rbp-99h] BYREF
  __int64 v31; // [rsp+20h] [rbp-98h] BYREF
  __int64 *v32; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v34; // [rsp+38h] [rbp-80h]
  _BYTE v35[120]; // [rsp+40h] [rbp-78h] BYREF

  v5 = *(void ***)(a2 + 40);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v6 = (__int64 *)sub_1E287C0(a1, v5, a3);
  else
    v6 = sub_1E1F330(a1, (__int64)v5, a3, a4);
  if ( !v6 )
    return 1;
  v7 = sub_1E0AF30((__int64)a1, *(_QWORD *)(a2 + 16));
  if ( !v7 )
    return 1;
  v8 = *(unsigned int *)(a2 + 32);
  v30 = 0;
  v34 = 0x800000000LL;
  ptr = v35;
  if ( v8 > 8 )
    sub_2237220(&ptr, v35, v8, 8);
  sub_14EE070((__int64)&v31, *a1, 0, (*(_QWORD *)a2 & 0x200000LL) != 0);
  v9 = (unsigned __int16 **)(a2 + 40);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
    v9 = (unsigned __int16 **)(a2 + 48);
  if ( (unsigned __int8)sub_1E11B50(a1, v9, *(unsigned int *)(a2 + 32), 1u, (__int64)&ptr, &v30, a3, a4) )
    goto LABEL_10;
  if ( (*(_QWORD *)a2 & 0x200000LL) == 0 || (*(_QWORD *)a2 & 0x400000LL) != 0 )
  {
LABEL_19:
    if ( (_BYTE)v32 )
      sub_190D5E0(v31, a3);
    if ( *(_DWORD *)(*a1 + 12632) || *(__int64 **)(a2 + 40) != v6 || v7 != *(_QWORD *)(a2 + 16) || v30 )
    {
      v31 = *v6;
      v32 = v6 + 1;
      v12 = sub_F6CE20(&v31);
      v13 = *(_QWORD *)a2;
      v14 = v12;
      v15 = sub_C94DB0((__int16 *)a2);
      v10 = sub_19AB130(
              *a1,
              v6,
              v14,
              (unsigned __int64 *)ptr,
              (unsigned int)v34,
              v15,
              a3,
              (__m128i)a4,
              (v13 & 0x200000) != 0);
    }
    else
    {
      v26 = *a1;
      v16 = sub_C94D80(a2);
      sub_1910D40(v26, v16, v7, 1, v26, v17, a3, a4);
      v10 = (__int64)sub_19A3E40(*a1, (unsigned __int16 *)a2, v18, v19, v20, a3, a4);
    }
    goto LABEL_12;
  }
  v29 = sub_C94DB0((__int16 *)a2);
  v27 = (unsigned int)v34;
  v21 = sub_C94D80(a2);
  v23 = sub_1909BB0(*a1, v21, (__int64)ptr, v27, v29, v22, (__m128i)a3, a4);
  if ( v23 != 1 )
  {
    v24 = v23 & 0xFFFFFFFFFFFFFFFELL;
    LODWORD(v34) = 0;
    v25 = 0;
    if ( !HIDWORD(v34) )
    {
      v28 = v24;
      sub_2237220(&ptr, v35, 1, 8);
      v24 = v28;
      v25 = 8LL * (unsigned int)v34;
    }
    *(_QWORD *)((char *)ptr + v25) = v24;
    LODWORD(v34) = v34 + 1;
    goto LABEL_19;
  }
LABEL_10:
  v10 = 1;
  if ( (_BYTE)v32 )
    sub_190D5E0(v31, a3);
LABEL_12:
  if ( ptr != v35 )
    free(ptr);
  return v10;
}

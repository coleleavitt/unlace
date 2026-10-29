__int64 __fastcall sub_1BBA3E0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v5; // rax
  __int64 *v6; // r13
  __int64 v7; // r15
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // rsi
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
  __int64 v24; // [rsp+0h] [rbp-B8h]
  __int64 v25; // [rsp+0h] [rbp-B8h]
  unsigned int v26; // [rsp+Ch] [rbp-ACh]
  char v27; // [rsp+17h] [rbp-A1h] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+20h] [rbp-98h] BYREF
  __int64 *v30; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v32; // [rsp+38h] [rbp-80h]
  _BYTE v33[120]; // [rsp+40h] [rbp-78h] BYREF

  v5 = sub_1BBA3C0(a1, *(_QWORD *)(a2 + 40), a3, a4);
  if ( !v5 )
    return 1;
  v6 = (__int64 *)v5;
  v7 = sub_1B03C10((__int64)a1, *(_QWORD *)(a2 + 16));
  if ( !v7 )
    return 1;
  v8 = *(unsigned int *)(a2 + 32);
  v27 = 0;
  v32 = 0x800000000LL;
  ptr = v33;
  if ( v8 > 8 )
    sub_2237220(&ptr, v33, v8, 8);
  sub_14EE070((__int64)&v29, *a1, 0, (*(_QWORD *)a2 & 0x200000LL) != 0);
  v9 = (unsigned __int64 *)(a2 + 40);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
    v9 = (unsigned __int64 *)(a2 + 48);
  if ( (unsigned __int8)sub_1BA5320(a1, v9, *(unsigned int *)(a2 + 32), 1, (__int64)&ptr, &v27, a3, a4) )
    goto LABEL_8;
  if ( (*(_QWORD *)a2 & 0x200000LL) == 0 || (*(_QWORD *)a2 & 0x400000LL) != 0 )
  {
LABEL_16:
    if ( (_BYTE)v30 )
      sub_190D5E0(v29, a3);
    if ( *(_DWORD *)(*a1 + 12632) || v6 != *(__int64 **)(a2 + 40) || v7 != *(_QWORD *)(a2 + 16) || v27 )
    {
      v29 = *v6;
      v30 = v6 + 1;
      v12 = sub_F6CE20(&v29);
      v13 = *(_QWORD *)a2;
      v14 = v12;
      v15 = sub_C94DB0((__int16 *)a2);
      v10 = sub_19AB130(
              *a1,
              v6,
              v14,
              (unsigned __int64 *)ptr,
              (unsigned int)v32,
              v15,
              a3,
              (__m128i)a4,
              (v13 & 0x200000) != 0);
    }
    else
    {
      v24 = *a1;
      v16 = sub_C94D80(a2);
      sub_1910D40(v24, v16, v7, 1, v24, v17, a3, a4);
      v10 = (__int64)sub_19A3E40(*a1, (unsigned __int16 *)a2, v18, v19, v20, a3, a4);
    }
    goto LABEL_10;
  }
  v26 = sub_C94DB0((__int16 *)a2);
  v25 = (unsigned int)v32;
  v21 = sub_C94D80(a2);
  v23 = sub_1909BB0(*a1, v21, (__int64)ptr, v25, v26, v22, (__m128i)a3, a4);
  if ( v23 != 1 )
  {
    LODWORD(v32) = 0;
    v28 = v23 & 0xFFFFFFFFFFFFFFFELL;
    sub_1AF7310((__int64)&ptr, &v28, &v29);
    goto LABEL_16;
  }
LABEL_8:
  v10 = 1;
  if ( (_BYTE)v30 )
    sub_190D5E0(v29, a3);
LABEL_10:
  if ( ptr != v33 )
    free(ptr);
  return v10;
}

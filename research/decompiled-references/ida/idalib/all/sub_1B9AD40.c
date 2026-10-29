__int64 __fastcall sub_1B9AD40(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v5; // rsi
  __int64 *v6; // r13
  unsigned __int64 v7; // rdx
  unsigned __int16 **v8; // rsi
  __int64 v9; // rbx
  int v11; // eax
  __int64 v12; // r14
  int v13; // r15d
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r15
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned int v20; // [rsp+Ch] [rbp-ACh]
  char v21; // [rsp+17h] [rbp-A1h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+20h] [rbp-98h] BYREF
  __int64 *v24; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v26; // [rsp+38h] [rbp-80h]
  _BYTE v27[120]; // [rsp+40h] [rbp-78h] BYREF

  v5 = *(void ***)(a2 + 40);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v6 = (__int64 *)sub_1B9A570(a1, v5, a3);
  else
    v6 = sub_1B90E50(a1, (__int64)v5, a3, a4);
  if ( !v6 || !sub_1B04070((__int64)a1, *(_QWORD *)(a2 + 16)) )
    return 1;
  v7 = *(unsigned int *)(a2 + 32);
  v21 = 0;
  v26 = 0x800000000LL;
  ptr = v27;
  if ( v7 > 8 )
    sub_2237220(&ptr, v27, v7, 8);
  sub_14EE070((__int64)&v23, *a1, 0, (*(_QWORD *)a2 & 0x200000LL) != 0);
  v8 = (unsigned __int16 **)(a2 + 40);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
    v8 = (unsigned __int16 **)(a2 + 48);
  if ( (unsigned __int8)sub_1B7D2C0(a1, v8, *(unsigned int *)(a2 + 32), 1u, (__int64)&ptr, &v21, a3, a4) )
    goto LABEL_10;
  if ( (*(_QWORD *)a2 & 0x200000LL) == 0 || (*(_QWORD *)a2 & 0x400000LL) != 0 )
  {
LABEL_19:
    if ( (_BYTE)v24 )
      sub_190D5E0(v23, a3);
    v23 = *v6;
    v24 = v6 + 1;
    v11 = sub_F6CE20(&v23);
    v12 = *(_QWORD *)a2;
    v13 = v11;
    v14 = sub_C94DB0((__int16 *)a2);
    v9 = sub_19AB130(
           *a1,
           v6,
           v13,
           (unsigned __int64 *)ptr,
           (unsigned int)v26,
           v14,
           a3,
           (__m128i)a4,
           (v12 & 0x200000) != 0);
    goto LABEL_12;
  }
  v15 = sub_C94DB0((__int16 *)a2);
  v16 = (unsigned int)v26;
  v20 = v15;
  v17 = sub_C94D80(a2);
  v19 = sub_1909BB0(*a1, v17, (__int64)ptr, v16, v20, v18, (__m128i)a3, a4);
  if ( v19 != 1 )
  {
    LODWORD(v26) = 0;
    v22 = v19 & 0xFFFFFFFFFFFFFFFELL;
    sub_1AF7310((__int64)&ptr, &v22, &v23);
    goto LABEL_19;
  }
LABEL_10:
  v9 = 1;
  if ( (_BYTE)v24 )
    sub_190D5E0(v23, a3);
LABEL_12:
  if ( ptr != v27 )
    free(ptr);
  return v9;
}

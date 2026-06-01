__int64 __fastcall sub_1C92E40(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v5; // rsi
  __int64 *v6; // r13
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // rsi
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
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  unsigned int v22; // [rsp+Ch] [rbp-ACh]
  char v23; // [rsp+1Fh] [rbp-99h] BYREF
  __int64 v24; // [rsp+20h] [rbp-98h] BYREF
  __int64 *v25; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v27; // [rsp+38h] [rbp-80h]
  _BYTE v28[120]; // [rsp+40h] [rbp-78h] BYREF

  v5 = *(void ***)(a2 + 40);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v6 = (__int64 *)sub_1C925E0(a1, v5, a3);
  else
    v6 = sub_1C8AA80(a1, (__int64)v5, a3, a4);
  if ( !v6 || !sub_1C7A830((__int64)a1, *(_QWORD *)(a2 + 16)) )
    return 1;
  v7 = *(unsigned int *)(a2 + 32);
  v23 = 0;
  v27 = 0x800000000LL;
  ptr = v28;
  if ( v7 > 8 )
    sub_2237220(&ptr, v28, v7, 8);
  sub_14EE070((__int64)&v24, *a1, 0, (*(_QWORD *)a2 & 0x200000LL) != 0);
  v8 = (unsigned __int64 *)(a2 + 40);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
    v8 = (unsigned __int64 *)(a2 + 48);
  if ( (unsigned __int8)sub_1C7D7D0(a1, v8, *(unsigned int *)(a2 + 32), 1u, (__int64)&ptr, &v23, a3, a4) )
    goto LABEL_10;
  if ( (*(_QWORD *)a2 & 0x200000LL) == 0 || (*(_QWORD *)a2 & 0x400000LL) != 0 )
  {
LABEL_19:
    if ( (_BYTE)v25 )
      sub_190D5E0(v24, a3);
    v24 = *v6;
    v25 = v6 + 1;
    v11 = sub_F6CE20(&v24);
    v12 = *(_QWORD *)a2;
    v13 = v11;
    v14 = sub_C94DB0((__int16 *)a2);
    v9 = sub_19AB130(
           *a1,
           v6,
           v13,
           (unsigned __int64 *)ptr,
           (unsigned int)v27,
           v14,
           a3,
           (__m128i)a4,
           (v12 & 0x200000) != 0);
    goto LABEL_12;
  }
  v15 = sub_C94DB0((__int16 *)a2);
  v16 = (unsigned int)v27;
  v22 = v15;
  v17 = sub_C94D80(a2);
  v19 = sub_1909BB0(*a1, v17, (__int64)ptr, v16, v22, v18, (__m128i)a3, a4);
  if ( v19 != 1 )
  {
    LODWORD(v27) = 0;
    v20 = v19 & 0xFFFFFFFFFFFFFFFELL;
    v21 = 0;
    if ( !HIDWORD(v27) )
    {
      sub_2237220(&ptr, v28, 1, 8);
      v21 = 8LL * (unsigned int)v27;
    }
    *(_QWORD *)((char *)ptr + v21) = v20;
    LODWORD(v27) = v27 + 1;
    goto LABEL_19;
  }
LABEL_10:
  v9 = 1;
  if ( (_BYTE)v25 )
    sub_190D5E0(v24, a3);
LABEL_12:
  if ( ptr != v28 )
    free(ptr);
  return v9;
}

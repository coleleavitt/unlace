__int64 __fastcall sub_19904F0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v5; // rsi
  __int64 *v6; // r13
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int16 **v9; // rsi
  __int64 v10; // rbx
  int v12; // eax
  __int64 v13; // r14
  int v14; // r15d
  int v15; // eax
  __int64 v16; // r13
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v26; // [rsp+0h] [rbp-B8h]
  unsigned int v27; // [rsp+Ch] [rbp-ACh]
  char v28; // [rsp+1Fh] [rbp-99h] BYREF
  __int64 v29; // [rsp+20h] [rbp-98h] BYREF
  __int64 *v30; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v32; // [rsp+38h] [rbp-80h]
  _BYTE v33[120]; // [rsp+40h] [rbp-78h] BYREF

  v5 = *(void ***)(a2 + 40);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v6 = (__int64 *)sub_198FB20(a1, v5, a3);
  else
    v6 = sub_1988430(a1, (__int64)v5, a3, a4);
  if ( !v6 )
    return 1;
  v7 = sub_18CBE40((__int64)a1, *(_QWORD *)(a2 + 16));
  if ( !v7 )
    return 1;
  v8 = *(unsigned int *)(a2 + 32);
  v28 = 0;
  v32 = 0x800000000LL;
  ptr = v33;
  if ( v8 > 8 )
    sub_2237220(&ptr, v33, v8, 8);
  sub_14EE070((__int64)&v29, *a1, 0, (*(_QWORD *)a2 & 0x200000LL) != 0);
  v9 = (unsigned __int16 **)(a2 + 40);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
    v9 = (unsigned __int16 **)(a2 + 48);
  if ( (unsigned __int8)sub_197B2A0(a1, v9, *(_DWORD *)(a2 + 32), 1, (__int64)&ptr, &v28, *(double *)a3.m128_u64, a4) )
    goto LABEL_10;
  if ( (*(_QWORD *)a2 & 0x200000LL) == 0 || (*(_QWORD *)a2 & 0x400000LL) != 0 )
  {
LABEL_19:
    if ( (_BYTE)v30 )
      sub_190D5E0(v29, a3);
    if ( *(__int64 **)(a2 + 40) == v6 && v7 == *(_QWORD *)(a2 + 16) && !v28 )
    {
      v16 = *a1;
      v17 = sub_C94D80(a2);
      sub_1910D40(v16, v17, v7, 1, v18, v19, a3, a4);
      v10 = sub_19A3E40(*a1, a2);
    }
    else
    {
      v29 = *v6;
      v30 = v6 + 1;
      v12 = sub_F6CE20(&v29);
      v13 = *(_QWORD *)a2;
      v14 = v12;
      v15 = sub_C94DB0((__int16 *)a2);
      v10 = sub_19AB130(*a1, (_DWORD)v6, v14, (_DWORD)ptr, v32, v15, (v13 & 0x200000) != 0);
    }
    goto LABEL_12;
  }
  v27 = sub_C94DB0((__int16 *)a2);
  v25 = (unsigned int)v32;
  v20 = sub_C94D80(a2);
  v22 = sub_1909BB0(*a1, v20, (__int64)ptr, v25, v27, v21, (__m128i)a3, a4);
  if ( v22 != 1 )
  {
    v23 = v22 & 0xFFFFFFFFFFFFFFFELL;
    LODWORD(v32) = 0;
    v24 = 0;
    if ( !HIDWORD(v32) )
    {
      v26 = v23;
      sub_2237220(&ptr, v33, 1, 8);
      v23 = v26;
      v24 = 8LL * (unsigned int)v32;
    }
    *(_QWORD *)((char *)ptr + v24) = v23;
    LODWORD(v32) = v32 + 1;
    goto LABEL_19;
  }
LABEL_10:
  v10 = 1;
  if ( (_BYTE)v30 )
    sub_190D5E0(v29, a3);
LABEL_12:
  if ( ptr != v33 )
    free(ptr);
  return v10;
}

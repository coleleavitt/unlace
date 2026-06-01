__int64 __fastcall sub_1772A60(__int64 *a1, __int64 a2, __m128 a3)
{
  void **v4; // rsi
  void **v5; // r13
  __int64 v6; // r15
  unsigned __int64 v7; // rdx
  unsigned __int16 **v8; // rsi
  __int64 v9; // rbx
  int v11; // eax
  __int64 v12; // r14
  int v13; // r15d
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // [rsp+0h] [rbp-B8h]
  __int64 v21; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v22; // [rsp+0h] [rbp-B8h]
  unsigned int v23; // [rsp+Ch] [rbp-ACh]
  char v24; // [rsp+1Fh] [rbp-99h] BYREF
  void *v25; // [rsp+20h] [rbp-98h] BYREF
  void **v26; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v28; // [rsp+38h] [rbp-80h]
  _BYTE v29[120]; // [rsp+40h] [rbp-78h] BYREF

  v4 = *(void ***)(a2 + 40);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v4 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v5 = sub_1771FB0(a1, v4, a3);
  else
    v5 = sub_176A140(a1, v4, a3);
  if ( !v5 )
    return 1;
  v6 = sub_17473B0((__int64)a1, *(_QWORD *)(a2 + 16));
  if ( !v6 )
    return 1;
  v7 = *(unsigned int *)(a2 + 32);
  v24 = 0;
  v28 = 0x800000000LL;
  ptr = v29;
  if ( v7 > 8 )
    sub_2237220(&ptr, v29, v7, 8);
  sub_14EE070((__int64)&v25, *a1, 0, (*(_QWORD *)a2 & 0x200000LL) != 0);
  v8 = (unsigned __int16 **)(a2 + 40);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
    v8 = (unsigned __int16 **)(a2 + 48);
  if ( (unsigned __int8)sub_175C6E0(a1, v8, *(_DWORD *)(a2 + 32), 1, (__int64)&ptr, &v24) )
    goto LABEL_10;
  if ( (*(_QWORD *)a2 & 0x200000LL) == 0 || (*(_QWORD *)a2 & 0x400000LL) != 0 )
  {
LABEL_19:
    if ( (_BYTE)v26 )
      sub_190D5E0(v25);
    if ( *(_DWORD *)(*a1 + 12632) || *(void ***)(a2 + 40) != v5 || v6 != *(_QWORD *)(a2 + 16) || v24 )
    {
      v25 = *v5;
      v26 = v5 + 1;
      v11 = sub_F6CE20((__int64 *)&v25);
      v12 = *(_QWORD *)a2;
      v13 = v11;
      v14 = sub_C94DB0((__int16 *)a2);
      v9 = sub_19AB130(*a1, (_DWORD)v5, v13, (_DWORD)ptr, v28, v14, (v12 & 0x200000) != 0);
    }
    else
    {
      v20 = *a1;
      v15 = sub_C94D80(a2);
      sub_1910D40(v20, v15, v6, 1);
      v9 = sub_19A3E40(*a1, a2);
    }
    goto LABEL_12;
  }
  v23 = sub_C94DB0((__int16 *)a2);
  v21 = (unsigned int)v28;
  v16 = sub_C94D80(a2);
  v17 = sub_1909BB0(*a1, v16, ptr, v21, v23);
  if ( v17 != 1 )
  {
    v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
    LODWORD(v28) = 0;
    v19 = 0;
    if ( !HIDWORD(v28) )
    {
      v22 = v18;
      sub_2237220(&ptr, v29, 1, 8);
      v18 = v22;
      v19 = 8LL * (unsigned int)v28;
    }
    *(_QWORD *)((char *)ptr + v19) = v18;
    LODWORD(v28) = v28 + 1;
    goto LABEL_19;
  }
LABEL_10:
  v9 = 1;
  if ( (_BYTE)v26 )
    sub_190D5E0(v25);
LABEL_12:
  if ( ptr != v29 )
    free(ptr);
  return v9;
}

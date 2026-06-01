unsigned __int64 __fastcall sub_6C84F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // r15
  int v7; // eax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r10
  unsigned __int64 v27; // [rsp+8h] [rbp-F0h]
  __int64 v28; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v29; // [rsp+10h] [rbp-E8h]
  __int64 v31; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  int v33; // [rsp+38h] [rbp-C0h]
  int v34; // [rsp+3Ch] [rbp-BCh]
  _QWORD v35[2]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v36; // [rsp+50h] [rbp-A8h]
  int v37; // [rsp+54h] [rbp-A4h]
  unsigned int v38; // [rsp+58h] [rbp-A0h]

  v6 = a1 + 504;
  v7 = a5 - 1;
  v12 = a1 + 504;
  if ( !BYTE4(a5) )
    v7 = 0;
  v36 = a4;
  v35[0] = a2;
  v38 = a6;
  ptr = v35;
  v34 = 32;
  v35[1] = a3;
  v37 = v7;
  v33 = 7;
  v31 = 0;
  v13 = sub_25AC3A0(v12, &ptr, &v31, &off_47D08E0);
  v14 = a6;
  v15 = v13;
  v16 = v13 - 24;
  if ( !v15 )
  {
    v19 = 8LL
        * ((*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL)
                                                                                        + 8LL))
        + 48;
    v20 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += v19;
    v21 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v19 + v21 && v20 )
    {
      *(_QWORD *)(a1 + 2192) = v19 + v21;
      v22 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v22 = sub_6A76A0(a1 + 2192, v19, 4);
      v14 = a6;
      v21 = v22;
    }
    v29 = v21;
    v27 = v22;
    sub_B14F10(v22, a2, a3, a4, a5, v14);
    v23 = *(unsigned int *)(a1 + 16);
    v24 = v27;
    v25 = v29;
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v23 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v23 + 1, 8);
      v23 = *(unsigned int *)(a1 + 16);
      v25 = v29;
      v24 = v27;
    }
    v28 = v24;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v23) = v25;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(v6, v24 + 24, v31, &off_47D08E0);
    v16 = v28;
  }
  v17 = v16 & 0xFFFFFFFFFFFFFFF0LL;
  if ( ptr != v35 )
    free(ptr);
  return v17;
}


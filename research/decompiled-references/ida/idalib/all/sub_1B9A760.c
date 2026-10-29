__int64 __fastcall sub_1B9A760(__int64 *a1, __int64 *a2, __m128 a3, __m128 a4)
{
  void **v6; // rsi
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  void **v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  unsigned __int64 v20; // rbp
  __int64 v21; // rsi
  __int64 v22; // rsi
  void *v23; // r9
  __int64 v24; // rdi
  unsigned int v25; // ecx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r11
  unsigned int v28; // r10d
  __int64 v29; // r8
  __int64 v31; // rax
  int v32; // edx
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // [rsp+0h] [rbp-C8h]
  char v37; // [rsp+8h] [rbp-C0h]
  void *v38; // [rsp+8h] [rbp-C0h]
  __int64 v39; // [rsp+8h] [rbp-C0h]
  __int64 v40; // [rsp+10h] [rbp-B8h]
  int v41; // [rsp+1Ch] [rbp-ACh]
  char v42; // [rsp+2Fh] [rbp-99h] BYREF
  void *v43; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v44; // [rsp+38h] [rbp-90h]
  void *ptr; // [rsp+40h] [rbp-88h] BYREF
  __int64 v46; // [rsp+48h] [rbp-80h]
  _BYTE v47[120]; // [rsp+50h] [rbp-78h] BYREF

  v6 = (void **)a2[4];
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v6 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v10 = sub_1B9A570(a1, v6, a3);
  else
    v10 = (void **)sub_1B90E50(a1, (__int64)v6, a3, a4);
  if ( !v10 )
    return 1;
  v11 = *a2;
  v36 = 0;
  v12 = ((unsigned __int64)*a2 >> 16) & 0x10;
  if ( (((unsigned __int64)*a2 >> 16) & 0x10) != 0 )
  {
    v13 = a2[7];
    if ( !v13 )
    {
LABEL_8:
      v37 = 1;
      LOBYTE(v12) = 1;
      goto LABEL_10;
    }
    v14 = sub_1B7CAD0(a1, (unsigned __int16 *)a2[7], a3, a4, v7, v8, v9);
    if ( v14 != 1 )
    {
      v13 = v14 & 0xFFFFFFFFFFFFFFFELL;
      v11 = *a2;
      goto LABEL_8;
    }
    return 1;
  }
  v37 = 0;
  v13 = 0;
LABEL_10:
  ptr = v47;
  v46 = 0x800000000LL;
  v15 = *((unsigned int *)a2 + 1);
  v42 = 0;
  if ( !(unsigned __int8)sub_1B7D2C0(
                           a1,
                           (unsigned __int16 **)&a2[((v11 >> 20) & 1) + 7 + ((v11 >> 24) & 1)],
                           v15,
                           1u,
                           (__int64)&ptr,
                           &v42,
                           a3,
                           a4) )
  {
    if ( (*a2 & 0x1000000) != 0 && (v19 = a2[(((unsigned __int64)*a2 >> 20) & 1) + 7]) != 0 )
    {
      v40 = sub_1B7D560(a1, v19, 1u, a3, a4, v16, v17, v18);
      if ( v40 == 1 )
        goto LABEL_14;
    }
    else
    {
      v40 = 0;
    }
    v21 = a2[2];
    if ( v21 && !sub_1B04070((__int64)a1, v21) )
      goto LABEL_14;
    v22 = a2[3];
    if ( v22 )
    {
      if ( !sub_1B04070((__int64)a1, v22) )
        goto LABEL_14;
    }
    v23 = *v10;
    v24 = *a1;
    if ( !v37 )
    {
      v38 = *v10;
      v31 = sub_A72040(*(_QWORD **)(v24 + 248), (__int64)v23);
      v23 = v38;
      if ( v31 )
      {
        v24 = *a1;
        v25 = *((_DWORD *)a2 + 10);
        v32 = *(unsigned __int8 *)(v31 + 16);
        if ( (unsigned int)(v32 - 2) > 1 )
        {
          if ( (_BYTE)v32 == 4 && *(_QWORD *)(v31 + 40) )
          {
            v23 = *(void **)(v31 + 32);
            v13 = *(_QWORD *)(v31 + 40);
            LOBYTE(v12) = 1;
          }
        }
        else
        {
          v41 = *((_DWORD *)a2 + 10);
          v39 = v31;
          v33 = sub_A63CE0(*(_QWORD **)(v24 + 248));
          sub_A5DAD0((__int64)&v43, v39);
          v34 = sub_C0C5D0(*(_QWORD **)(*a1 + 248), (__int64)&v43, v33, v41);
          v35 = v39;
          v13 = v34;
          if ( v44 > 0x40 && v43 )
          {
            operator delete[](v43);
            v35 = v39;
          }
          v23 = *(void **)(v35 + 32);
          v24 = *a1;
          LOBYTE(v12) = 1;
          v25 = *((_DWORD *)a2 + 10);
        }
        goto LABEL_24;
      }
      v24 = *a1;
    }
    v25 = *((_DWORD *)a2 + 10);
LABEL_24:
    v26 = *a2;
    v27 = (unsigned __int64)*a2 >> 24;
    if ( (v27 & 8) != 0 )
    {
      v28 = a2[*((_DWORD *)a2 + 1) + 7 + ((v26 & 0x100000) != 0) + (unsigned int)(v27 & 1)];
      v29 = HIDWORD(a2[*((_DWORD *)a2 + 1) + 7 + ((v26 & 0x100000) != 0) + (unsigned int)(v27 & 1)]);
    }
    else
    {
      v29 = 0;
      v28 = 0;
    }
    LOBYTE(v36) = v12;
    v20 = sub_19B7590(
            (__int64 *)v24,
            ((unsigned __int64)v25 << 32) | v25,
            (v26 >> 19) & 1,
            v25,
            (__int64)ptr,
            (unsigned int)v46,
            a3,
            a4,
            v25,
            (v29 << 32) | v28,
            (unsigned __int64)v23,
            v10,
            v13,
            v36,
            a2[6],
            v40 & 0xFFFFFFFFFFFFFFFELL);
    goto LABEL_15;
  }
LABEL_14:
  v20 = 1;
LABEL_15:
  if ( ptr != v47 )
    free(ptr);
  return v20;
}

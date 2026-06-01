__int64 __fastcall sub_19611B0(__int64 *a1, __int64 *a2, __m128 a3, __m128 a4)
{
  void **v6; // rax
  __int64 *v7; // r13
  unsigned __int64 v8; // rax
  __int64 v9; // r12
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // r9
  __int64 v21; // rdi
  int v22; // ecx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r11
  unsigned int v25; // r10d
  __int64 v26; // r8
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // [rsp+0h] [rbp-C8h]
  char v34; // [rsp+8h] [rbp-C0h]
  __int64 v35; // [rsp+8h] [rbp-C0h]
  __int64 v36; // [rsp+8h] [rbp-C0h]
  __int64 v37; // [rsp+10h] [rbp-B8h]
  int v38; // [rsp+1Ch] [rbp-ACh]
  char v39; // [rsp+2Fh] [rbp-99h] BYREF
  void *v40; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v41; // [rsp+38h] [rbp-90h]
  void *ptr[2]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v43[120]; // [rsp+50h] [rbp-78h] BYREF

  v6 = sub_194C930(a1, (void **)a2[4], a3, a4);
  if ( !v6 )
    return 1;
  v7 = (__int64 *)v6;
  v8 = *a2;
  v33 = 0;
  v9 = ((unsigned __int64)*a2 >> 16) & 0x10;
  if ( (((unsigned __int64)*a2 >> 16) & 0x10) != 0 )
  {
    v10 = a2[7];
    if ( !v10 )
    {
LABEL_6:
      v34 = 1;
      LOBYTE(v9) = 1;
      goto LABEL_8;
    }
    v11 = sub_1944E10(a1, (unsigned __int16 *)a2[7], a3, a4);
    if ( v11 != 1 )
    {
      v10 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v8 = *a2;
      goto LABEL_6;
    }
    return 1;
  }
  v34 = 0;
  v10 = 0;
LABEL_8:
  ptr[0] = v43;
  ptr[1] = (void *)0x800000000LL;
  v12 = *((_DWORD *)a2 + 1);
  v39 = 0;
  if ( !(unsigned __int8)sub_195E940(
                           a1,
                           (unsigned __int16 **)&a2[((v8 >> 20) & 1) + 7 + ((v8 >> 24) & 1)],
                           v12,
                           1,
                           (__int64)ptr,
                           &v39,
                           a3,
                           a4) )
  {
    if ( (*a2 & 0x1000000) != 0 && (v16 = a2[(((unsigned __int64)*a2 >> 20) & 1) + 7]) != 0 )
    {
      v37 = sub_195EBE0(a1, v16, 1u, a3, a4, v13, v14, v15);
      if ( v37 == 1 )
        goto LABEL_12;
    }
    else
    {
      v37 = 0;
    }
    v18 = a2[2];
    if ( v18 && !sub_18CBA40((__int64)a1, v18) )
      goto LABEL_12;
    v19 = a2[3];
    if ( v19 )
    {
      if ( !sub_18CBA40((__int64)a1, v19) )
        goto LABEL_12;
    }
    v20 = *v7;
    v21 = *a1;
    if ( !v34 )
    {
      v35 = *v7;
      v28 = sub_A72040(*(_QWORD **)(v21 + 248), v20);
      v20 = v35;
      if ( v28 )
      {
        v21 = *a1;
        v22 = *((_DWORD *)a2 + 10);
        v29 = *(unsigned __int8 *)(v28 + 16);
        if ( (unsigned int)(v29 - 2) > 1 )
        {
          if ( (_BYTE)v29 == 4 && *(_QWORD *)(v28 + 40) )
          {
            v20 = *(_QWORD *)(v28 + 32);
            v10 = *(_QWORD *)(v28 + 40);
            LOBYTE(v9) = 1;
          }
        }
        else
        {
          v38 = *((_DWORD *)a2 + 10);
          v36 = v28;
          v30 = sub_A63CE0(*(_QWORD **)(v21 + 248));
          sub_A5DAD0((__int64)&v40, v36);
          v31 = sub_C0C5D0(*(_QWORD **)(*a1 + 248), (__int64)&v40, v30, v38);
          v32 = v36;
          v10 = v31;
          if ( v41 > 0x40 && v40 )
          {
            operator delete[](v40);
            v32 = v36;
          }
          v20 = *(_QWORD *)(v32 + 32);
          v21 = *a1;
          LOBYTE(v9) = 1;
          v22 = *((_DWORD *)a2 + 10);
        }
        goto LABEL_22;
      }
      v21 = *a1;
    }
    v22 = *((_DWORD *)a2 + 10);
LABEL_22:
    v23 = *a2;
    v24 = (unsigned __int64)*a2 >> 24;
    if ( (v24 & 8) != 0 )
    {
      v25 = a2[*((_DWORD *)a2 + 1) + 7 + ((v23 & 0x100000) != 0) + (unsigned int)(v24 & 1)];
      v26 = HIDWORD(a2[*((_DWORD *)a2 + 1) + 7 + ((v23 & 0x100000) != 0) + (unsigned int)(v24 & 1)]);
    }
    else
    {
      v26 = 0;
      v25 = 0;
    }
    LOBYTE(v33) = v9;
    v17 = sub_19B7590(v21, v22, (v26 << 32) | v25, v20, (__int64)v7, v10, v33, a2[6], v37 & 0xFFFFFFFFFFFFFFFELL);
    goto LABEL_13;
  }
LABEL_12:
  v17 = 1;
LABEL_13:
  if ( ptr[0] != v43 )
    free(ptr[0]);
  return v17;
}

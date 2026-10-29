unsigned __int64 __fastcall sub_1F16890(__int64 **a1)
{
  __int64 v1; // rax
  __int64 v2; // r9
  __int64 *v3; // r13
  __int64 v4; // rcx
  __int64 v5; // rdx
  bool v6; // zf
  __int64 v7; // r15
  int v8; // ebp
  int v9; // r12d
  __int64 v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rsi
  unsigned __int8 v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned __int64 v23; // rbp
  __int64 v25; // [rsp+0h] [rbp-D8h]
  bool v26; // [rsp+8h] [rbp-D0h]
  unsigned __int8 v27; // [rsp+Fh] [rbp-C9h]
  __int64 v28; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v29; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v30; // [rsp+48h] [rbp-90h] BYREF
  void *ptr; // [rsp+50h] [rbp-88h] BYREF
  __int64 v32; // [rsp+58h] [rbp-80h]
  _BYTE v33[120]; // [rsp+60h] [rbp-78h] BYREF

  v25 = **a1;
  v29 = sub_1F16500((_QWORD *)(*a1)[1], (*a1)[2], *a1 + 4, (_DWORD *)*a1 + 6);
  v1 = sub_1F68F80((*a1)[1], (*a1)[2]);
  v3 = *a1;
  v28 = v1;
  v4 = *((unsigned int *)*a1 + 6);
  v5 = (*a1)[4];
  LODWORD(v1) = *((_DWORD *)*a1 + 6);
  v27 = *(_QWORD *)(v5 + 8 * v4) != 0;
  v6 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v4 + 1)) == 0;
  ptr = v33;
  v26 = !v6;
  v7 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v1 + 2));
  v32 = 0x800000000LL;
  *((_DWORD *)v3 + 6) = v1 + 3;
  v8 = v7;
  if ( (unsigned int)v7 <= 8uLL )
  {
    if ( (_DWORD)v7 )
      goto LABEL_3;
LABEL_12:
    v22 = v32;
    goto LABEL_7;
  }
  sub_2237220(&ptr, v33, (unsigned int)v7, 8);
  if ( !(_DWORD)v7 )
    goto LABEL_12;
LABEL_3:
  v9 = 0;
  do
  {
    v10 = *((unsigned int *)v3 + 6);
    v11 = (_QWORD *)v3[1];
    v12 = v3[2];
    *((_DWORD *)v3 + 6) = v10 + 1;
    v13 = *(_QWORD *)(v3[4] + 8 * v10) != 0;
    v14 = sub_1EE13A0((__int64)v11, v12, v3 + 4, (_DWORD *)v3 + 6);
    v19 = sub_1EDB980(v11, v14, v15, v16, v17, v18);
    sub_F5D760(&v30, v19, v13);
    v20 = v30;
    v21 = (unsigned int)v32 + 1LL;
    if ( v21 > HIDWORD(v32) )
    {
      sub_2237220(&ptr, v33, v21, 8);
      *((_QWORD *)ptr + (unsigned int)v32) = v20;
    }
    else
    {
      *((_QWORD *)ptr + (unsigned int)v32) = v30;
    }
    ++v9;
    v22 = v32 + 1;
    LODWORD(v32) = v32 + 1;
  }
  while ( v8 != v9 );
LABEL_7:
  v23 = sub_A76700(v25, v29, v28, v27, v26, v2, (__int64)ptr, v22);
  if ( ptr != v33 )
    free(ptr);
  return v23;
}

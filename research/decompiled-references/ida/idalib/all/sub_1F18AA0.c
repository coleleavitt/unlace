unsigned __int64 __fastcall sub_1F18AA0(__int64 **a1)
{
  unsigned __int64 v2; // rax
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 *v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r14
  int v9; // r13d
  int v10; // r14d
  int v11; // ebx
  _QWORD *v12; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r13
  unsigned __int64 v19; // rdx
  __int64 v20; // r9
  __int64 *v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // r12
  __int64 v25; // [rsp+0h] [rbp-118h]
  unsigned __int64 v26; // [rsp+8h] [rbp-110h]
  _QWORD *v27; // [rsp+10h] [rbp-108h]
  unsigned __int64 v28; // [rsp+18h] [rbp-100h]
  void *v29[2]; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v30[64]; // [rsp+50h] [rbp-C8h] BYREF
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int64 v32; // [rsp+98h] [rbp-80h]
  _BYTE v33[120]; // [rsp+A0h] [rbp-78h] BYREF

  v25 = **a1;
  v2 = sub_1F16500((_QWORD *)(*a1)[1], (*a1)[2], *a1 + 4, (_DWORD *)*a1 + 6);
  v3 = *a1;
  v29[1] = (void *)0x800000000LL;
  v26 = v2;
  v29[0] = v30;
  v4 = sub_1F18050((__int64)v3, (unsigned int *)v29);
  v5 = *a1;
  v32 = 0x800000000LL;
  v27 = (_QWORD *)v4;
  v6 = *((unsigned int *)v5 + 6);
  v28 = v7;
  ptr = v33;
  *((_DWORD *)v5 + 6) = v6 + 1;
  v8 = *(_QWORD *)(v5[4] + 8 * v6);
  v9 = v8;
  if ( (unsigned int)v8 <= 8uLL )
  {
    if ( (_DWORD)v8 )
      goto LABEL_3;
LABEL_13:
    v20 = (unsigned int)v32;
    goto LABEL_7;
  }
  sub_2237220(&ptr, v33, (unsigned int)v8, 8);
  if ( !(_DWORD)v8 )
    goto LABEL_13;
LABEL_3:
  v10 = 0;
  v11 = v9;
  do
  {
    v12 = (_QWORD *)v5[1];
    v13 = sub_1EE13A0((__int64)v12, v5[2], v5 + 4, (_DWORD *)v5 + 6);
    v18 = sub_1EDB980(v12, v13, v14, v15, v16, v17);
    v19 = (unsigned int)v32 + 1LL;
    if ( v19 > HIDWORD(v32) )
      sub_2237220(&ptr, v33, v19, 8);
    *((_QWORD *)ptr + (unsigned int)v32) = v18;
    ++v10;
    v20 = (unsigned int)(v32 + 1);
    LODWORD(v32) = v32 + 1;
  }
  while ( v11 != v10 );
LABEL_7:
  v21 = *a1;
  v22 = *((unsigned int *)*a1 + 6);
  *((_DWORD *)v21 + 6) = v22 + 1;
  v23 = sub_A750A0(v25, v26, v27, v28, ptr, v20, *(_QWORD *)(v21[4] + 8 * v22) != 0);
  if ( ptr != v33 )
    free(ptr);
  if ( v29[0] != v30 )
    free(v29[0]);
  return v23;
}

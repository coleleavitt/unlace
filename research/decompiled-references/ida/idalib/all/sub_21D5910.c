char *__fastcall sub_21D5910(__int64 a1, __int64 *a2, unsigned __int64 **a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  __int64 v7; // r13
  unsigned __int8 v8; // al
  unsigned __int64 *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  void **v12; // r14
  __int64 v13; // rax
  void **v14; // r14
  __int64 v15; // rax
  char *v16; // r13
  __int64 *v17; // rax
  char *v18; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 *v21; // rcx
  unsigned __int64 *v22; // rdi
  unsigned __int8 v23; // r8
  __int64 v24; // rsi
  unsigned __int8 v25; // dl
  char v26; // r9
  char v27; // dl
  unsigned __int64 *v28; // [rsp+8h] [rbp-100h]
  __int64 v29; // [rsp+10h] [rbp-F8h]
  unsigned __int8 v30; // [rsp+1Dh] [rbp-EBh]
  unsigned __int8 v31; // [rsp+1Eh] [rbp-EAh]
  char v32; // [rsp+1Fh] [rbp-E9h]
  void **p_ptr; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-C0h]
  _BYTE v38[184]; // [rsp+50h] [rbp-B8h] BYREF

  v7 = *a2;
  v32 = *(_BYTE *)(a1 + 129);
  v37 = 0x2000000000LL;
  v30 = *a5;
  v8 = *a4;
  ptr = v38;
  v31 = v8;
  v9 = *a3;
  p_ptr = &ptr;
  v28 = v9;
  v29 = (__int64)a3[1];
  sub_9B7040((__int64)&ptr, 63);
  v10 = (unsigned int)v37;
  v11 = (unsigned int)v37 + 1LL;
  if ( v11 > HIDWORD(v37) )
  {
    sub_2237220(&ptr, v38, v11, 4);
    v10 = (unsigned int)v37;
  }
  *((_DWORD *)ptr + v10) = 0;
  LODWORD(v37) = v37 + 1;
  sub_9B7040((__int64)p_ptr, v7);
  sub_9B7040((__int64)p_ptr, SHIDWORD(v7));
  sub_21D0B50(&p_ptr, v28, v29);
  v12 = p_ptr;
  sub_9B7040((__int64)p_ptr, v31);
  v13 = *((unsigned int *)v12 + 2);
  if ( v13 + 1 > (unsigned __int64)*((unsigned int *)v12 + 3) )
  {
    sub_2237220(v12, v12 + 2, v13 + 1, 4);
    v13 = *((unsigned int *)v12 + 2);
  }
  *((_DWORD *)*v12 + v13) = 0;
  ++*((_DWORD *)v12 + 2);
  v14 = p_ptr;
  sub_9B7040((__int64)p_ptr, v30);
  v15 = *((unsigned int *)v14 + 2);
  if ( v15 + 1 > (unsigned __int64)*((unsigned int *)v14 + 3) )
  {
    sub_2237220(v14, v14 + 2, v15 + 1, 4);
    v15 = *((unsigned int *)v14 + 2);
  }
  *((_DWORD *)*v14 + v15) = 0;
  ++*((_DWORD *)v14 + 2);
  v16 = (char *)sub_2223360(a1 + 96, &ptr, &p_ptr, off_2BE9FD0);
  if ( v16 )
  {
    v16 += 8;
    if ( ptr != v38 )
      free(ptr);
    if ( v16 )
    {
      ptr = v16;
      v17 = sub_21D4F30(a1 + 136, (__int64 *)&ptr);
      if ( v17 )
      {
        v18 = (char *)v17[1];
        if ( v18 )
          v16 = v18;
      }
      if ( *(char **)(a1 + 120) == v16 )
        *(_BYTE *)(a1 + 128) = 1;
    }
  }
  else
  {
    if ( v32 )
    {
      v20 = sub_21D40A0((__int64 *)a1, 56, 3u);
      v21 = *a3;
      v22 = a3[1];
      *(_QWORD *)v20 = 0;
      v16 = (char *)(v20 + 8);
      v23 = *a4;
      v24 = *a2;
      v25 = *a5;
      *(_QWORD *)(v20 + 32) = v21;
      *(_QWORD *)(v20 + 24) = v24;
      *(_QWORD *)(v20 + 40) = v22;
      v26 = v25 & 0x3F;
      v27 = *(_BYTE *)(v20 + 17);
      *(_BYTE *)(v20 + 48) = v23;
      *(_BYTE *)(v20 + 17) = v26 | v27 & 0xC0;
      *(_WORD *)(v20 + 16) = *(_WORD *)(v20 + 16) & 0x3F00 | 0x403F;
      *(_BYTE *)(v20 + 18) = *(_BYTE *)(v20 + 18) & 0xF0 | 5;
      *(_QWORD *)(v20 + 8) = off_2BE7E60;
      sub_2223210(a1 + 96, v20, p_ptr, off_2BE9FD0);
    }
    if ( ptr != v38 )
      free(ptr);
    *(_QWORD *)(a1 + 112) = v16;
  }
  return v16;
}

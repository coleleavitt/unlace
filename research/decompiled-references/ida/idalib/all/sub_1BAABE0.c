unsigned __int64 __fastcall sub_1BAABE0(
        __int64 *a1,
        _DWORD *a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 *v9; // r15
  unsigned int v10; // r9d
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  unsigned __int64 v15; // rbp
  int v16; // r15d
  int v17; // r14d
  __int64 v18; // rdi
  _BYTE *v19; // r13
  _QWORD *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v23; // [rsp+8h] [rbp-D0h]
  int v24; // [rsp+8h] [rbp-D0h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+18h] [rbp-C0h]
  _BYTE v27[184]; // [rsp+20h] [rbp-B8h] BYREF

  v7 = (unsigned int)a2[4];
  v26 = 0x1000000000LL;
  ptr = v27;
  if ( v7 > 0x10 )
  {
    sub_2237220(&ptr, v27, v7, 8);
    v7 = (unsigned int)a2[4];
  }
  v8 = (__int64)&a2[2 * v7 + 6];
  v9 = (unsigned __int64 *)(a2 + 6);
  if ( (_DWORD *)v8 == a2 + 6 )
  {
    v10 = v26;
LABEL_11:
    v14 = v10;
    v15 = 0;
    v16 = a2[3];
    v17 = *a2;
    v18 = *(_QWORD *)(*a1 + 760);
    v19 = ptr;
    v24 = a2[1];
    if ( v10 )
    {
      v20 = (_QWORD *)sub_168B6C0(v18);
      v21 = sub_EC0A10(v20, v17, v16, v24, (__int64)v19, v14);
      v19 = ptr;
      v15 = v21;
    }
  }
  else
  {
    while ( 1 )
    {
      v11 = sub_1B73BE0(a1, *v9, v7, a3, a4, a6, a7);
      if ( v11 == 1 )
        break;
      a6 = (unsigned int)v26;
      v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v13 = (unsigned int)v26 + 1LL;
      if ( v13 <= HIDWORD(v26) )
      {
        v7 = (unsigned __int64)ptr;
      }
      else
      {
        v23 = v12;
        sub_2237220(&ptr, v27, v13, 8);
        a6 = (unsigned int)v26;
        v7 = (unsigned __int64)ptr;
        v12 = v23;
      }
      *(_QWORD *)(v7 + 8 * a6) = v12;
      ++v9;
      v10 = v26 + 1;
      LODWORD(v26) = v26 + 1;
      if ( (unsigned __int64 *)v8 == v9 )
        goto LABEL_11;
    }
    v19 = ptr;
    v15 = 0;
  }
  if ( v19 != v27 )
    free(v19);
  return v15;
}

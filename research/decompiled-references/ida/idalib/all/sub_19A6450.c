void __fastcall sub_19A6450(__int64 *a1, __int64 **a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdi
  char v9; // al
  _QWORD *v10; // rcx
  int v11; // ebp
  int v12; // r15d
  __int64 v13; // r13
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  int v28; // [rsp+4h] [rbp-84h]
  __int64 v29; // [rsp+8h] [rbp-80h]
  unsigned __int64 v30; // [rsp+8h] [rbp-80h]
  __int64 v31; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int64 v33; // [rsp+28h] [rbp-60h]
  _QWORD v34[11]; // [rsp+30h] [rbp-58h] BYREF

  v8 = *a1;
  v34[0] = a5;
  ptr = v34;
  v33 = 0x300000001LL;
  v28 = 1;
  v9 = *(_BYTE *)(*(_QWORD *)(v8 + 232) + 97LL);
  if ( (v9 & 0x10) != 0 )
    v28 = (((a3 - 2) & 0xFFFFFFFD) == 0) + 1;
  v10 = v34;
  v11 = 0;
  v12 = ((v9 & 0x20) != 0) + 1;
  v13 = 16LL * a3 + 56;
  v14 = 1;
  while ( 1 )
  {
    sub_19A5ED0(v8, (*(_QWORD *)(v8 + 248) + v13 + 17536) | 6, a4, (__int64)v10, v14, a6);
    if ( v12 != 1 )
    {
      v29 = *(_QWORD *)(*a1 + 248);
      v15 = sub_183D310(*a1);
      v19 = *(_QWORD *)(v15 + 48);
      if ( v19 )
        v20 = v19 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v20 = sub_A7AA70(v29, v15, 0, v16, v17, v18);
      v21 = (unsigned int)v33;
      v22 = (unsigned int)v33 + 1LL;
      if ( v22 > HIDWORD(v33) )
      {
        v30 = v20;
        sub_2237220(&ptr, v34, v22, 8);
        v21 = (unsigned int)v33;
        v20 = v30;
      }
      *((_QWORD *)ptr + v21) = v20;
      v23 = *a1;
      v24 = *(_QWORD *)(*a1 + 248);
      LODWORD(v33) = v33 + 1;
      sub_19A5ED0(v23, (v24 + v13 + 17536) | 6, a4, (__int64)ptr, (unsigned int)v33, v18);
      LODWORD(v33) = v33 - 1;
    }
    if ( v28 == ++v11 )
      break;
    v25 = **a2;
    v26 = (unsigned int)v33;
    v27 = (unsigned int)v33 + 1LL;
    if ( v27 > HIDWORD(v33) )
    {
      v31 = **a2;
      sub_2237220(&ptr, v34, v27, 8);
      v26 = (unsigned int)v33;
      v25 = v31;
    }
    *((_QWORD *)ptr + v26) = v25;
    v10 = ptr;
    v8 = *a1;
    v14 = (unsigned int)(v33 + 1);
    LODWORD(v33) = v33 + 1;
  }
  if ( ptr != v34 )
    free(ptr);
}

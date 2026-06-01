__int64 __fastcall sub_14179D0(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rdx
  char *v10; // r15
  char *v11; // r8
  signed __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  char *v16; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v18; // [rsp+18h] [rbp-60h]
  _BYTE v19[24]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 2984);
  ptr = v19;
  v18 = 0x100000000LL;
  v4 = v3;
  if ( *(_DWORD *)(v3 - 40) )
  {
    sub_14178A0((char ***)&ptr, (char ***)(v3 - 48));
    v4 = *(_QWORD *)(a2 + 2984);
  }
  v20 = *(_QWORD *)(v3 - 8);
  v5 = v4 - 48;
  v6 = (_QWORD *)(v4 - 32);
  *(_QWORD *)(a2 + 2984) = v5;
  v7 = (_QWORD *)*(v6 - 2);
  if ( v7 != v6 )
    free(v7);
  v8 = *(_QWORD *)(a2 + 2984);
  if ( *(_QWORD *)(a2 + 2976) != v8 )
  {
    v9 = 24LL * (unsigned int)v18;
    v10 = (char *)ptr + v9;
    v11 = (char *)ptr + 24 * v20;
    v12 = v9 - 24 * v20;
    v13 = *(unsigned int *)(v8 - 40);
    v14 = 0xAAAAAAAAAAAAAAABLL * (v12 >> 3) + v13;
    if ( v14 > *(unsigned int *)(v8 - 36) )
    {
      v16 = (char *)ptr + 24 * v20;
      sub_2237220(v8 - 48, v8 - 32, v14, 24);
      v11 = v16;
      v13 = *(unsigned int *)(v8 - 40);
      if ( v16 == v10 )
        goto LABEL_9;
    }
    else if ( v11 == v10 )
    {
LABEL_9:
      *(_DWORD *)(v8 - 40) = v13 - 1431655765 * (v12 >> 3);
      goto LABEL_10;
    }
    memcpy((void *)(*(_QWORD *)(v8 - 48) + 24 * v13), v11, v12);
    LODWORD(v13) = *(_DWORD *)(v8 - 40);
    goto LABEL_9;
  }
LABEL_10:
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x100000000LL;
  if ( (_DWORD)v18 )
    sub_14178A0((char ***)a1, (char ***)&ptr);
  if ( ptr != v19 )
    free(ptr);
  return a1;
}

unsigned __int64 __fastcall sub_1EE3130(__int64 a1, unsigned __int16 *a2)
{
  _QWORD *v3; // rdi
  unsigned int v4; // ebp
  _QWORD *v5; // r14
  __int64 v6; // rax
  unsigned __int64 result; // rax
  unsigned __int64 *v8; // rbx
  __int64 v9; // r12
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // [rsp+0h] [rbp-D8h]
  __int64 v14; // [rsp+8h] [rbp-D0h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+18h] [rbp-C0h]
  _QWORD v17[23]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = *(_QWORD **)a1;
  v4 = *a2;
  v5 = *(_QWORD **)(v3[18] + 17512LL);
  v6 = sub_1EE2BD0(v3, *(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 1));
  if ( !v4 )
    return v6 & 0xFFFFFFFFFFFFFFF8LL | 1;
  if ( v4 == 1 )
    return v6 & 0xFFFFFFFFFFFFFFF8LL | 2;
  v17[0] = v6;
  v16 = 0x1000000001LL;
  v8 = (unsigned __int64 *)(a2 + 5);
  v9 = (__int64)&a2[4 * v4 + 1];
  ptr = v17;
  do
  {
    while ( 1 )
    {
      v10 = *v8++;
      v11 = sub_1EE2BD0(*(_QWORD **)a1, *(_QWORD *)(a1 + 8), v10);
      v12 = (unsigned int)v16 + 1LL;
      if ( v12 > HIDWORD(v16) )
        break;
      *((_QWORD *)ptr + (unsigned int)v16) = v11;
      LODWORD(v16) = v16 + 1;
      if ( v8 == (unsigned __int64 *)v9 )
        goto LABEL_10;
    }
    v14 = v11;
    sub_2237220(&ptr, v17, v12, 8);
    *((_QWORD *)ptr + (unsigned int)v16) = v14;
    LODWORD(v16) = v16 + 1;
  }
  while ( v8 != (unsigned __int64 *)v9 );
LABEL_10:
  result = sub_FE3230(v5, v4, (unsigned __int64 *)ptr);
  if ( ptr != v17 )
  {
    v13 = result;
    free(ptr);
    return v13;
  }
  return result;
}

void __fastcall sub_14AD570(__int64 a1, __int64 a2, __m128i a3, __m128 a4)
{
  int *v4; // r13
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 *v10; // rdi
  unsigned __int64 v11; // [rsp+8h] [rbp-90h]
  int v12; // [rsp+1Ch] [rbp-7Ch] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v14; // [rsp+28h] [rbp-70h]
  _BYTE v15[104]; // [rsp+30h] [rbp-68h] BYREF

  v4 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  ptr = v15;
  v14 = 0x800000000LL;
  while ( 1 )
  {
    v6 = sub_14ACF90(a1, a2, a3, a4);
    if ( v6 > 1 )
      break;
    v12 = 1572930;
    sub_15680D0(a1, &v12, 2, 3);
    if ( *(_WORD *)(a1 + 32) != 66 )
      goto LABEL_4;
LABEL_10:
    v10 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v10, v4);
  }
  v7 = (unsigned int)v14;
  v8 = v6 & 0xFFFFFFFFFFFFFFFELL;
  v9 = (unsigned int)v14 + 1LL;
  if ( v9 > HIDWORD(v14) )
  {
    v11 = v8;
    sub_2237220(&ptr, v15, v9, 8);
    v7 = (unsigned int)v14;
    v8 = v11;
  }
  *((_QWORD *)ptr + v7) = v8;
  LODWORD(v14) = v14 + 1;
  if ( *(_WORD *)(a1 + 32) == 66 )
    goto LABEL_10;
LABEL_4:
  sub_1871FF0(*(_QWORD *)(a1 + 96), a2, ptr, (unsigned int)v14);
  if ( ptr != v15 )
    free(ptr);
}

unsigned __int64 __fastcall sub_6C6B30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // r10
  unsigned __int64 v24; // [rsp+8h] [rbp-100h]
  unsigned __int64 v26; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v27; // [rsp+28h] [rbp-E0h]
  __int64 v28; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v30[184]; // [rsp+50h] [rbp-B8h] BYREF

  v6 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7;
  ptr[1] = (void *)0x2000000000LL;
  ptr[0] = v30;
  sub_B07090(ptr, a1, v6, a3, a4);
  v28 = 0;
  v7 = sub_25AC3A0(a1 + 344, ptr, &v28, &off_47D0A60);
  v8 = v7 - 24;
  if ( !v7 )
  {
    v18 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 64LL;
    v19 = (v18 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v19 + 64 && v18 )
    {
      *(_QWORD *)(a1 + 2192) = v19 + 64;
      v20 = (v18 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v20 = sub_6A76A0(a1 + 2192, 64, 4);
      v19 = v20;
    }
    v27 = v19;
    v26 = v20;
    sub_B06FF0(v20, v6, 0, a3, a4, a5);
    sub_25AC200(a1 + 344, v26 + 24, v28, &off_47D0A60);
    v21 = *(unsigned int *)(a1 + 16);
    v8 = v26;
    v22 = v27;
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v21 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v21 + 1, 8);
      v21 = *(unsigned int *)(a1 + 16);
      v22 = v27;
      v8 = v26;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v21) = v22;
    ++*(_DWORD *)(a1 + 16);
  }
  v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  if ( a2 != *(_QWORD *)(v8 + 32) || (v10 = *(_QWORD *)(v8 + 40), a4 != v10) || a3 != v10 )
  {
    v11 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 64LL;
    v12 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v12 + 64 && v11 )
    {
      *(_QWORD *)(a1 + 2192) = v12 + 64;
      v13 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v13 = sub_6A76A0(a1 + 2192, 64, 4);
      v12 = v13;
    }
    v14 = a3;
    v24 = v13;
    sub_B06FF0(v13, a2, v9, v14, a4, a5);
    v15 = *(unsigned int *)(a1 + 16);
    v16 = v24;
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v15 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v15 + 1, 8);
      v15 = *(unsigned int *)(a1 + 16);
      v16 = v24;
    }
    v9 = v16 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v15) = v12;
    ++*(_DWORD *)(a1 + 16);
  }
  if ( ptr[0] != v30 )
    free(ptr[0]);
  return v9;
}


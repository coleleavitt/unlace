unsigned __int64 __fastcall sub_6C6470(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdx
  unsigned __int64 result; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v14; // [rsp+0h] [rbp-E8h]
  __int64 v15; // [rsp+8h] [rbp-E0h]
  __int64 v16; // [rsp+8h] [rbp-E0h]
  __int64 v17; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-B0h]
  __int64 v21; // [rsp+3Ch] [rbp-ACh]

  v19 = a2;
  ptr[1] = (void *)0x2000000005LL;
  v20 = a3;
  ptr[0] = &v19;
  v21 = 57;
  v17 = 0;
  v13 = a1 + 288;
  v4 = sub_25AC3A0(a1 + 288, ptr, &v17, &off_47D0AE0);
  result = (v4 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v4 )
  {
    v6 = 0;
    v7 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
    if ( v7 != *(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
    {
      v15 = sub_6C6470(a1, *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7, a3, v7, 0);
      sub_25AC3A0(v13, ptr, &v17, &off_47D0AE0);
      v6 = v15;
    }
    v8 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 48LL;
    v9 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v9 + 48 && v8 )
    {
      *(_QWORD *)(a1 + 2192) = v9 + 48;
      v10 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v16 = v6;
      v12 = sub_6A76A0(a1 + 2192, 48, 4);
      v6 = v16;
      v10 = v12;
      v9 = v12;
    }
    sub_B071C0(v10, 57, a2, a3, v6, 0);
    sub_25AC200(v13, v10 + 24, v17, &off_47D0AE0);
    v11 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v11 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v11 + 1, 8);
      v11 = *(unsigned int *)(a1 + 16);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v11) = v9;
    ++*(_DWORD *)(a1 + 16);
    result = v10 & 0xFFFFFFFFFFFFFFF0LL;
  }
  if ( ptr[0] != &v19 )
  {
    v14 = result;
    free(ptr[0]);
    return v14;
  }
  return result;
}


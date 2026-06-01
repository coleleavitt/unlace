unsigned __int64 __fastcall sub_6C5F70(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 result; // rax
  __int64 v9; // r10
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v16; // [rsp+8h] [rbp-F0h]
  __int64 v17; // [rsp+8h] [rbp-F0h]
  __int64 v18; // [rsp+8h] [rbp-F0h]
  __int64 v19; // [rsp+10h] [rbp-E8h]
  unsigned int v20; // [rsp+1Ch] [rbp-DCh]
  unsigned int v21; // [rsp+1Ch] [rbp-DCh]
  __int64 v22; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-B0h]
  int v26; // [rsp+4Ch] [rbp-ACh]
  unsigned int v27; // [rsp+50h] [rbp-A8h]

  v27 = a4;
  ptr[1] = (void *)0x2000000005LL;
  v24 = a2;
  v25 = a3;
  ptr[0] = &v24;
  v26 = 56;
  v22 = 0;
  v19 = a1 + 288;
  v5 = sub_25AC3A0(a1 + 288, ptr, &v22, &off_47D0AE0);
  v6 = a4;
  v7 = v5;
  result = (v5 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v7 )
  {
    v9 = 0;
    if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a2
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL) )
    {
      v20 = a4;
      v17 = sub_6C5F70(a1, *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7, a3, a4);
      sub_25AC3A0(v19, ptr, &v22, &off_47D0AE0);
      v6 = v20;
      v9 = v17;
    }
    v10 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 48LL;
    v11 = (v10 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v11 + 48 && v10 )
    {
      *(_QWORD *)(a1 + 2192) = v11 + 48;
      v12 = (v10 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v21 = v6;
      v18 = v9;
      v14 = sub_6A76A0(a1 + 2192, 48, 4);
      v6 = v21;
      v9 = v18;
      v12 = v14;
      v11 = v14;
    }
    sub_B07150(v12, a2, a3, v9, v6);
    sub_25AC200(v19, v12 + 24, v22, &off_47D0AE0);
    v13 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v13 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v13 + 1, 8);
      v13 = *(unsigned int *)(a1 + 16);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v13) = v11;
    ++*(_DWORD *)(a1 + 16);
    result = v12 & 0xFFFFFFFFFFFFFFF0LL;
  }
  if ( ptr[0] != &v24 )
  {
    v16 = result;
    free(ptr[0]);
    return v16;
  }
  return result;
}


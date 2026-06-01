unsigned __int64 __fastcall sub_7187E0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, const __m128i *a5)
{
  unsigned int v5; // r13d
  __int64 v7; // rdx
  unsigned __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+8h] [rbp-120h]
  unsigned __int64 v16; // [rsp+8h] [rbp-120h]
  unsigned int v17; // [rsp+10h] [rbp-118h]
  unsigned __int64 v18; // [rsp+18h] [rbp-110h]
  __int64 v19; // [rsp+20h] [rbp-108h]
  __int64 v20; // [rsp+38h] [rbp-F0h] BYREF
  __m128i v21[2]; // [rsp+40h] [rbp-E8h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v23[184]; // [rsp+70h] [rbp-B8h] BYREF

  v5 = a4;
  v17 = a3;
  ptr[1] = (void *)0x2000000000LL;
  ptr[0] = v23;
  sub_B150F0(ptr, a2, a3, a4);
  v20 = 0;
  v15 = a1 + 520;
  v7 = sub_25AC3A0(a1 + 520, ptr, &v20, &off_47D08C0);
  result = (v7 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v7 )
  {
    v19 = 0;
    sub_717FD0(v21, (_QWORD *)a1, a5);
    if ( a2 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) || !(unsigned __int8)sub_AFDE80(v21, a5) )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
      v19 = sub_7187E0(a1, v9, v17, v5, v21);
      sub_25AC3A0(v15, ptr, &v20, &off_47D08C0);
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
      v11 = sub_6A76A0(a1 + 2192, 48, 4);
      v12 = v11;
    }
    v18 = v11;
    sub_B15020(v12, v19, a2, v17, v5, a5);
    v13 = *(unsigned int *)(a1 + 16);
    v14 = v18;
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v13 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v13 + 1, 8);
      v13 = *(unsigned int *)(a1 + 16);
      v14 = v18;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v13) = v14;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(v15, v12 + 24, v20, &off_47D08C0);
    result = v12 & 0xFFFFFFFFFFFFFFF0LL;
  }
  if ( ptr[0] != v23 )
  {
    v16 = result;
    free(ptr[0]);
    return v16;
  }
  return result;
}


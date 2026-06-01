unsigned __int64 __fastcall sub_7183B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const void *a5, __int64 a6)
{
  int v6; // r14d
  __int64 v9; // rdx
  unsigned __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbp
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-290h]
  __int64 v20; // [rsp+10h] [rbp-288h]
  unsigned __int64 v22; // [rsp+20h] [rbp-278h]
  __int64 v23; // [rsp+20h] [rbp-278h]
  __int64 v24; // [rsp+28h] [rbp-270h]
  __int64 v25; // [rsp+28h] [rbp-270h]
  char v26; // [rsp+37h] [rbp-261h] BYREF
  __int64 v27; // [rsp+38h] [rbp-260h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-258h] BYREF
  _BYTE v29[128]; // [rsp+50h] [rbp-248h] BYREF
  void *v30; // [rsp+D0h] [rbp-1C8h] BYREF
  unsigned int v31; // [rsp+D8h] [rbp-1C0h]
  char v32; // [rsp+E0h] [rbp-1B8h] BYREF

  v6 = a2;
  ptr[1] = (void *)0x2000000000LL;
  ptr[0] = v29;
  sub_B08C60((unsigned int)ptr, a1, a2, a3, a4, a6, (__int64)a5, a6);
  v27 = 0;
  v20 = a1 + 640;
  v9 = sub_25AC3A0(a1 + 640, ptr, &v27, &off_47D0800);
  result = (v9 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v9 )
    goto LABEL_2;
  v26 = 0;
  v24 = sub_6CB180(a1, a3);
  if ( (_DWORD)a2 == 6 )
  {
    sub_718270(&v30, (_QWORD *)a1, a5, a6, &v26);
    a2 = 5;
  }
  else
  {
    sub_718270(&v30, (_QWORD *)a1, a5, a6, &v26);
    v11 = 0;
    if ( !v26 && a3 == v24 )
      goto LABEL_8;
    a2 = (unsigned int)a2;
  }
  v25 = sub_7183B0(a1, a2, v24, a4, v30, v31);
  sub_25AC3A0(v20, ptr, &v27, &off_47D0800);
  v11 = v25;
LABEL_8:
  v12 = *(_QWORD *)(a1 + 2192);
  v13 = 24 * a6 + 48;
  *(_QWORD *)(a1 + 2272) += v13;
  v14 = (v12 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(a1 + 2200) >= v13 + v14 && v12 )
  {
    *(_QWORD *)(a1 + 2192) = v13 + v14;
    v15 = (v12 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v23 = v11;
    v14 = sub_6A76A0(a1 + 2192, v13, 4);
    v11 = v23;
    v15 = v14;
  }
  v22 = v14;
  sub_B08B50(v15, v6, a3, a4, (_DWORD)a5, a6, v11);
  v16 = *(unsigned int *)(a1 + 16);
  v17 = v22;
  if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v16 + 1) )
  {
    sub_25D6060(a1 + 8, a1 + 24, v16 + 1, 8);
    v16 = *(unsigned int *)(a1 + 16);
    v17 = v22;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v16) = v17;
  ++*(_DWORD *)(a1 + 16);
  sub_25AC200(v20, v15 + 24, v27, &off_47D0800);
  result = v15 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v30 != &v32 )
  {
    free(v30);
    result = v15 & 0xFFFFFFFFFFFFFFF0LL;
  }
LABEL_2:
  if ( ptr[0] != v29 )
  {
    v19 = result;
    free(ptr[0]);
    return v19;
  }
  return result;
}


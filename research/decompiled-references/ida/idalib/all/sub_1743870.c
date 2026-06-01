__int64 __fastcall sub_1743870(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4, unsigned __int64 a5)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r13
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned int v12; // ebp
  __int64 v14; // rdx
  void *v16[2]; // [rsp+10h] [rbp-158h] BYREF
  _BYTE v17[128]; // [rsp+20h] [rbp-148h] BYREF
  void *ptr; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-C0h]
  __int64 v20; // [rsp+B0h] [rbp-B8h] BYREF
  int v21; // [rsp+B8h] [rbp-B0h]

  if ( a3 == a5 )
    return 1;
  v6 = a3;
  v7 = a5;
  if ( !a2 )
    goto LABEL_15;
  v8 = (_QWORD *)*a4;
  if ( *a4 )
  {
    if ( a2 == v8 )
      goto LABEL_15;
    v9 = a2[2] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (a2[2] & 4) != 0 )
      v9 = *(_QWORD *)(v9 + 8);
    v10 = v8[2];
    v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v10 & 4) != 0 )
      v11 = *(_QWORD *)(v11 + 8);
  }
  else
  {
    if ( !a4[1] )
      goto LABEL_15;
    v9 = a2[2] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (a2[2] & 4) != 0 )
      v9 = *(_QWORD *)(v9 + 8);
    v11 = a4[2];
  }
  if ( v11 != v9 )
  {
    ptr = a2;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v6 = sub_1743230(a1, (__int64)&ptr, v6);
    if ( !v6 )
      return 0;
    v7 = sub_1743230(a1, (__int64)a4, v7);
    if ( !v7 )
      return 0;
  }
LABEL_15:
  v14 = *(_QWORD *)(a1 + 248);
  v16[0] = v17;
  v16[1] = (void *)0x2000000000LL;
  v19 = 0x2000000000LL;
  ptr = &v20;
  sub_F1A490(v6, (__int64)v16, v14, 1, 0);
  sub_F1A490(v7, (__int64)&ptr, *(_QWORD *)(a1 + 248), 1, 0);
  v12 = sub_2222ED0(v16, &ptr);
  if ( ptr != &v20 )
    free(ptr);
  if ( v16[0] != v17 )
    free(v16[0]);
  return v12;
}

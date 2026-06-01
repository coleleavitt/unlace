__int64 __fastcall sub_14808E0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int16 v9; // ax
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  char *v14; // rax
  __int64 *v15; // rdi
  __int64 v16; // rbp
  __int64 *v17; // rdi
  __int64 v18; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+8h] [rbp-B0h]
  void *v20; // [rsp+18h] [rbp-A0h]
  __int64 v21; // [rsp+20h] [rbp-98h]
  _BYTE v22[24]; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int8 *v23[15]; // [rsp+40h] [rbp-78h] BYREF

  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(unsigned __int16 *)(a1 + 26);
  v9 = *(_WORD *)(v7 + 32);
  if ( (_WORD)v8 == v9 )
  {
    v14 = *(char **)(a1 + 32);
    v15 = (__int64 *)(*(_QWORD *)(a1 + 40) + v7);
    if ( ((unsigned __int8)v14 & 1) == 0 )
      goto LABEL_9;
LABEL_8:
    v8 = *v15;
    v14 = *(char **)&v14[*v15 - 1];
    goto LABEL_9;
  }
  if ( v9 != 63 )
    return sub_15688B0(a1);
  v10 = *(_QWORD *)(v7 + 8);
  v11 = *(_QWORD *)(v10 + 2944);
  if ( v11 >= *(unsigned int *)(v10 + 2912) )
  {
    v12 = sub_14180A0(v10, 1u);
    LOWORD(v8) = *(_WORD *)(a1 + 26);
  }
  else
  {
    v12 = *(_QWORD *)(v10 + 2904) + 24 * v11;
  }
  if ( *(_WORD *)(v12 + 16) != (_WORD)v8 )
    return sub_15688B0(a1);
  v16 = *(_QWORD *)(a1 + 16);
  v17 = *(__int64 **)(v16 + 8);
  *(_DWORD *)(v16 + 40) = *(_DWORD *)(v16 + 16);
  sub_14634E0(v17, (int *)(v16 + 16));
  LODWORD(v16) = *(_DWORD *)(v16 + 40);
  sub_1564820(v23, *(_QWORD *)(a1 + 16), (unsigned int)v16, 1917);
  sub_AE9DF0(v23, *(unsigned __int16 *)(a1 + 26), 4u);
  a2 = &v18;
  BYTE12(v19) = 0;
  v22[0] = 0;
  *(_QWORD *)((char *)&v19 + 4) = 0;
  v20 = v22;
  v21 = 0;
  v22[16] = 0;
  LODWORD(v18) = v16;
  HIDWORD(v18) = v16;
  LOBYTE(v19) = 1;
  if ( (_DWORD)v16 )
  {
    sub_1480470((__int64 *)v23, (unsigned __int64)&v18);
    if ( v20 != v22 )
      operator delete(v20);
  }
  sub_AEA040((__int64)v23);
  v14 = *(char **)(a1 + 32);
  v15 = (__int64 *)(*(_QWORD *)(a1 + 16) + *(_QWORD *)(a1 + 40));
  if ( ((unsigned __int8)v14 & 1) != 0 )
    goto LABEL_8;
LABEL_9:
  *(_DWORD *)(a1 + 52) = ((__int64 (__fastcall *)(__int64 *, __int64 *, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD))v14)(
                           v15,
                           a2,
                           v8,
                           a4,
                           a5,
                           a6,
                           v18,
                           v19,
                           *((_QWORD *)&v19 + 1));
  return 0;
}

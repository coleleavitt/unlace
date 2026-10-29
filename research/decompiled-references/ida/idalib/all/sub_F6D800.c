void __fastcall sub_F6D800(_DWORD **a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v4; // eax
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r13
  _DWORD *v13; // rcx
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+10h] [rbp-38h]

  v4 = 0;
  if ( (unsigned __int8)(*((_WORD *)*a1 + 9) >> 3) != 6 )
    v4 = a3;
  *a1[1] = v4;
  v5 = *((_QWORD *)*a1 + 4) & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v5 )
  {
    v13 = a1[1];
LABEL_10:
    *((_QWORD *)v13 + 1) = 0;
    goto LABEL_8;
  }
  v15 = 0;
  *(_OWORD *)ptr = 0;
  sub_E90890((__int64)ptr, a2, v5, ((unsigned __int64)a3 << 32) | a3);
  v10 = sub_E911A0((__int64 *)ptr, a2, v6, v7, v8, v9);
  v12 = v11;
  if ( HIDWORD(v15) )
    free(ptr[1]);
  v13 = a1[1];
  if ( !v10 )
    goto LABEL_10;
  *((_QWORD *)v13 + 1) = v12;
LABEL_8:
  a1[1][5] = a3;
  a1[1][4] = a3;
  a1[1][6] = a3;
  a1[1][7] = a3;
  sub_F6D630(a2, (__int64)(*a1 + 12), (*a1)[5], (_QWORD *)a1[1] + 4, a3);
}

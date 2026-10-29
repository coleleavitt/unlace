__int64 __fastcall sub_21FD870(_BYTE *a1, char a2)
{
  unsigned int v2; // r14d
  __int64 v3; // r12
  unsigned int v4; // ecx
  unsigned int v6; // edx
  unsigned int v7; // ecx
  __int64 v8; // rsi
  void *v9; // rax
  bool v10; // r12
  void *v12; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v13; // [rsp+8h] [rbp-50h]
  __int64 v14[2]; // [rsp+10h] [rbp-48h] BYREF
  char v15; // [rsp+24h] [rbp-34h]

  v2 = 0;
  v3 = *(_QWORD *)a1;
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  if ( *((_DWORD *)a1 + 4) + 1 >= (int)v4 )
    return v2;
  v6 = (((((((((v4 | ((unsigned __int64)v4 >> 1)) >> 2) | v4 | ((unsigned __int64)v4 >> 1)) >> 4)
          | ((v4 | ((unsigned __int64)v4 >> 1)) >> 2)
          | v4
          | ((unsigned __int64)v4 >> 1)) >> 8)
        | ((((v4 | ((unsigned __int64)v4 >> 1)) >> 2) | v4 | ((unsigned __int64)v4 >> 1)) >> 4)
        | ((v4 | ((unsigned __int64)v4 >> 1)) >> 2)
        | v4
        | ((unsigned __int64)v4 >> 1)) >> 16)
      | ((((((v4 | ((unsigned __int64)v4 >> 1)) >> 2) | v4 | ((unsigned __int64)v4 >> 1)) >> 4)
        | ((v4 | ((unsigned __int64)v4 >> 1)) >> 2)
        | v4
        | ((unsigned __int64)v4 >> 1)) >> 8)
      | ((((v4 | ((unsigned __int64)v4 >> 1)) >> 2) | v4 | ((unsigned __int64)v4 >> 1)) >> 4)
      | ((v4 | ((unsigned __int64)v4 >> 1)) >> 2)
      | v4
      | (v4 >> 1))
     + 1;
  v13 = v6;
  if ( v6 <= 0x40 )
  {
    v12 = &dword_0 + 1;
    v7 = v4 - 1;
LABEL_4:
    v8 = 0;
    if ( v6 != v7 )
      v8 = (_QWORD)v12 << v7;
    v9 = (void *)(v8 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v6));
    if ( !v6 )
      v9 = nullptr;
    v12 = v9;
    goto LABEL_9;
  }
  sub_2205470(&v12, 1, 0);
  v3 = *(_QWORD *)a1;
  v6 = v13;
  v7 = *(_DWORD *)(*(_QWORD *)a1 + 8LL) - 1;
  if ( v13 <= 0x40 )
    goto LABEL_4;
  sub_220A130(&v12, v7);
  v3 = *(_QWORD *)a1;
LABEL_9:
  sub_21F9140(v14, v3);
  if ( *(_BYTE *)(v3 + 24) )
    sub_21FB9A0(v14, 0);
  else
    sub_21FAB90(v14, 0);
  sub_21FB140((__int64)v14, (__int64)&v12, 0, 1);
  v10 = (a1[20] & 8) != 0;
  v15 = (8 * v10) | v15 & 0xF7;
  v2 = sub_21FD790(a1, (__int64)v14, a2, 0);
  sub_21FD790(a1, (__int64)v14, a2, 1);
  if ( v10 != ((a1[20] & 8) != 0) && (*(_DWORD *)(*(_QWORD *)a1 + 20LL) != 2 || (a1[20] & 5) != 1) )
    a1[20] = (8 * ((a1[20] & 8) == 0)) | a1[20] & 0xF7;
  sub_21F9170(v14);
  if ( v13 > 0x40 && v12 )
    operator delete[](v12);
  return v2;
}

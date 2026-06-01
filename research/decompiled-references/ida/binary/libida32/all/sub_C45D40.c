__int64 __fastcall sub_C45D40(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v8; // rsi
  __int64 v9; // rbp
  char v10; // al
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  unsigned int v20; // r12d
  void *v21; // rbp
  bool v22; // cc
  int v23; // edx
  unsigned __int8 v24; // [rsp+Fh] [rbp-59h]
  unsigned __int8 v25; // [rsp+Fh] [rbp-59h]
  unsigned __int8 v26; // [rsp+Fh] [rbp-59h]
  void *v27; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v28; // [rsp+18h] [rbp-50h]
  char v29; // [rsp+1Ch] [rbp-4Ch]
  void *v30; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-40h]
  int v32; // [rsp+30h] [rbp-38h]

  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_BYTE *)(v9 + 16);
  if ( v10 != 13 )
  {
    if ( v10 == 47 )
    {
      v13 = sub_F3D1D0(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
              v8,
              a3,
              a4,
              a5);
      if ( (*(_BYTE *)(v13 + 74) & 1) != 0 || (*(_QWORD *)(v13 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v15 = sub_F3D1D0(v9, v8, v14, a4, a5);
        v8 = *(_QWORD *)(a1 + 8);
        if ( *(char *)(v15 + 76) >= 0 )
          goto LABEL_9;
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 8);
      }
    }
    else if ( v10 == 10 )
    {
      goto LABEL_9;
    }
LABEL_3:
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    result = 0;
    if ( *(_BYTE *)(v11 + 16) == 13 && (((*(_WORD *)(v11 + 18) >> 3) + 56) & 0x1FFu) <= 0x17 )
      return sub_C45C40(a1, a2, a3, a4, a5, a6);
    return result;
  }
  if ( (((*(_WORD *)(v9 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
    goto LABEL_3;
LABEL_9:
  v16 = sub_A8A3C0(*(_QWORD *)(a3 + 16), v8, a3, a4);
  v28 = 1;
  v27 = nullptr;
  v29 = 0;
  result = sub_C23520(a1, (__int64)&v27, a3, v17, v18, v19);
  if ( (_BYTE)result )
  {
    v20 = v28;
    v31 = v28;
    if ( v28 > 0x40 )
    {
      v26 = result;
      sub_21E17D0(&v30);
      v20 = v31;
      v21 = v30;
      result = v26;
    }
    else
    {
      v21 = v27;
    }
    v22 = *(_DWORD *)(a2 + 8) <= 0x40u;
    v32 = v16;
    if ( !v22 && *(_QWORD *)a2 )
    {
      v25 = result;
      operator delete[](*(void **)a2);
      result = v25;
    }
    v23 = v32;
    *(_QWORD *)a2 = v21;
    *(_DWORD *)(a2 + 8) = v20;
    *(_BYTE *)(a2 + 12) = (v16 & 0x20000000) == 0;
    *(_DWORD *)(a2 + 16) = v23;
  }
  if ( v28 > 0x40 && v27 )
  {
    v24 = result;
    operator delete[](v27);
    return v24;
  }
  return result;
}


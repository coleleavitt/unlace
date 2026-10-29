__int64 __fastcall sub_15F500(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  bool v4; // zf
  __int64 v6; // rax
  __int64 v8; // r13
  __int64 v9; // rdi
  void (*v10)(void); // rax
  __int64 v11; // rax
  __int64 v12; // r8
  char v13; // [rsp+Fh] [rbp-59h] BYREF
  __int128 v14; // [rsp+10h] [rbp-58h] BYREF
  __int64 v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+28h] [rbp-40h]
  int v17; // [rsp+30h] [rbp-38h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v3 = a1;
  v4 = *(_BYTE *)(a1 + 992) == 0;
  v18 = __readfsqword(0x28u);
  if ( v4 )
    return 0;
  if ( !*(_QWORD *)(a1 + 480) )
    goto LABEL_23;
  v6 = 0;
  if ( *(_DWORD *)(a1 + 472) == 1 )
    v6 = *(_QWORD *)(a1 + 856);
  if ( !*(_BYTE *)(v6 + 21) )
    return 0;
  v15 = 0;
  v4 = *(_QWORD *)(a1 + 480) == 0;
  v14 = 0;
  v16 = -1;
  v17 = 0;
  if ( v4 )
    goto LABEL_23;
  a1 = 0;
  if ( *(_DWORD *)(v3 + 472) == 1 )
    a1 = *(_QWORD *)(v3 + 856);
  v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, &v14, a3 & 1);
  if ( !v8 )
    return 0;
  if ( !*(_BYTE *)(v3 + 992) )
  {
    v9 = 0;
    goto LABEL_15;
  }
  if ( !*(_QWORD *)(v3 + 480) )
LABEL_23:
    sub_158B30(a1);
  v9 = 0;
  if ( *(_DWORD *)(v3 + 472) == 1 )
    v9 = *(_QWORD *)(v3 + 856);
LABEL_15:
  v10 = *(void (**)(void))(*(_QWORD *)v9 + 232LL);
  if ( (char *)v10 != (char *)sub_8E2D0 )
    v10();
  v11 = sub_90BB0(v8, (__int64)&v13, v3);
  v12 = (unsigned int)SWORD2(v16);
  if ( (int)v12 > *(_DWORD *)(v11 + 144) )
    return 0;
  if ( (_DWORD)v12 == *(_DWORD *)(v11 + 144) )
  {
    --WORD2(v16);
    v12 = (unsigned int)(__int16)(v12 - 1);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v3 + 544LL))(
           v3,
           a2,
           v8,
           v11 + 120,
           v12,
           a3);
}


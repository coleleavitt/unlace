__int64 __fastcall sub_17727A0(__int64 *a1, __int64 a2, __m128 a3)
{
  void **v5; // rsi
  void **v6; // r12
  unsigned __int16 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  int v11; // edx
  __int16 v12; // cx
  int v13; // r9d
  __int16 v14; // cx
  int v15; // r8d
  int v16; // ecx
  unsigned __int64 v18; // [rsp+8h] [rbp-20h] BYREF

  v5 = *(void ***)(a2 + 24);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v6 = sub_1771FB0(a1, v5, a3);
  else
    v6 = sub_176A140(a1, v5, a3);
  if ( !v6 )
    return 1;
  v7 = (unsigned __int16 *)sub_BFA3B0(a2);
  v8 = sub_175B800(a1, v7);
  if ( v8 == 1 )
    return 1;
  v9 = *a1;
  v10 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(*a1 + 12632) && *(void ***)(a2 + 24) == v6 && *(_QWORD *)(a2 + 16) == v10 )
    return a2;
  v11 = *(_DWORD *)(a2 + 32);
  v12 = *(_WORD *)v10;
  v18 = v10;
  v13 = *(_DWORD *)(a2 + 36);
  v14 = v12 & 0x1FF;
  if ( v14 == 19 )
  {
    v15 = *(_DWORD *)(v10 + 4);
    v16 = v10 + 24;
    return sub_19AB130(v9, (_DWORD)v6, v11, v16, v15, v13, v11 == 0);
  }
  if ( v14 == 103 )
  {
    v15 = *(_DWORD *)(v10 + 16);
    v16 = v10 + 48;
    return sub_19AB130(v9, (_DWORD)v6, v11, v16, v15, v13, v11 == 0);
  }
  return sub_19AB130(v9, (_DWORD)v6, v11, (unsigned int)&v18, 1, v13, v11 == 0);
}

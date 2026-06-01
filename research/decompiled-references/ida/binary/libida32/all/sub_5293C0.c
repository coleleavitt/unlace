__int64 __fastcall sub_5293C0(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rsi
  unsigned int v3; // edx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // r12d
  int v9; // eax
  int v10; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v2 = *a2;
  v11 = __readfsqword(0x28u);
  if ( !(_BYTE)v2 )
    return 1;
  v5 = *(_QWORD *)(*a1 + 1632LL);
  v6 = sub_51B750(v5, v2);
  if ( !v6 )
    return 0;
  v7 = *(_QWORD *)(v6 + 16);
  v3 = 0;
  v8 = v7;
  if ( (_DWORD)v7 != -1 )
  {
    *(_WORD *)(v6 + 68) &= ~0x8000u;
    sub_51AFC0((_QWORD *)(v5 + 80), v7);
    clear_tinfo_t(v5 + 216);
    v9 = sub_3B9110(a1, v8);
    v10 = sub_3B90A0(a1, v9);
    if ( v10 != -1 )
      sub_79BB90(&v10, *a1, 1089536, 83);
    return 1;
  }
  return v3;
}


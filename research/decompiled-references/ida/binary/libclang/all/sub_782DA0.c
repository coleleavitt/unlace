__int64 __fastcall sub_782DA0(__int64 a1, __int64 a2, int a3, int a4, const void *a5, size_t a6)
{
  size_t v8; // rcx
  unsigned __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int16 v15; // ax
  char v17; // al
  _QWORD *v18; // rax
  __int64 v19; // [rsp+8h] [rbp-40h]

  v8 = a6 + 1;
  if ( a2 )
  {
    v11 = (a2 + 40) & 0xFFFFFFFFFFFFFFFBLL;
    v12 = sub_79A610(40, a1, a2 + 40, v8);
    *(_QWORD *)v12 = off_49F5208;
    v13 = sub_79A2E0(a2 + 40);
    v14 = *(_QWORD *)(v13 + 8) & 7LL;
    if ( (*(_QWORD *)(v13 + 8) & 7) != 0 && *(char *)(v13 + 29) < 0 )
    {
      v19 = *(_QWORD *)(v13 + 8) & 7LL;
      v17 = sub_7946A0(v13);
      v14 = v19;
      if ( !v17 )
        v14 = 0;
    }
  }
  else
  {
    v11 = 0;
    v18 = (_QWORD *)sub_79A610(40, a1, 0, v8);
    v14 = 0;
    v12 = (__int64)v18;
    *v18 = off_49F5208;
  }
  *(_QWORD *)(v12 + 8) = v14;
  *(_QWORD *)(v12 + 16) = v11;
  *(_DWORD *)(v12 + 24) = a3;
  *(_WORD *)(v12 + 28) = 24587;
  v15 = sub_799DF0(11);
  *(_BYTE *)(v12 + 32) &= 0xF8u;
  *(_WORD *)(v12 + 30) = v15 & 0x3FFF | *(_WORD *)(v12 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(11);
  *(_DWORD *)(v12 + 36) = a4;
  *(_QWORD *)v12 = &off_47DA060;
  memcpy((void *)(v12 + 40), a5, a6);
  *(_BYTE *)(v12 + a6 + 40) = 0;
  return v12;
}


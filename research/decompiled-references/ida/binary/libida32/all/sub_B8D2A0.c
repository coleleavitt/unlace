unsigned __int64 __fastcall sub_B8D2A0(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        const void *a9,
        __int64 a10)
{
  size_t v12; // rbx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int16 v17; // ax
  void *v18; // r8
  char v20; // al
  __int64 v23; // [rsp+18h] [rbp-40h]

  v12 = 8 * a10;
  v13 = sub_B6C590(80, a1, a2, 8 * a10);
  *(_QWORD *)v13 = off_2BD8B30;
  if ( a2
    && (v14 = sub_B68470(a2), v15 = *(_QWORD *)(v14 + 8) & 7LL, (*(_QWORD *)(v14 + 8) & 7) != 0)
    && (*(char *)(v14 + 29) >= 0 || (v23 = *(_QWORD *)(v14 + 8) & 7LL, v20 = sub_B688D0(v14), v15 = v23, v20)) )
  {
    v16 = v15;
  }
  else
  {
    v16 = 0;
  }
  *(_QWORD *)(v13 + 8) = v16;
  *(_DWORD *)(v13 + 24) = a3;
  *(_QWORD *)(v13 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v13 + 28) = 24588;
  v17 = sub_B68380(12);
  *(_BYTE *)(v13 + 32) &= 0xF8u;
  *(_WORD *)(v13 + 30) = v17 & 0x3FFF | *(_WORD *)(v13 + 30) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(12);
  *(_BYTE *)(v13 + 33) = 19;
  v18 = (void *)(v13 + 80);
  *(_DWORD *)(v13 + 36) = a4;
  *(_DWORD *)(v13 + 40) = a8;
  *(_QWORD *)(v13 + 48) = 0;
  *(_QWORD *)(v13 + 56) = 0;
  *(_QWORD *)v13 = &off_2BD9F80;
  *(_QWORD *)(v13 + 64) = a6;
  *(_DWORD *)(v13 + 72) = a5;
  *(_DWORD *)(v13 + 76) = a7;
  if ( v12 )
    v18 = memmove((void *)(v13 + 80), a9, v12);
  *(_QWORD *)(v13 + 48) = v18;
  *(_QWORD *)(v13 + 56) = a10;
  return v13;
}


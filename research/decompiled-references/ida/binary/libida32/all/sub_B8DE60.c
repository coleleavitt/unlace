unsigned __int64 __fastcall sub_B8DE60(
        _QWORD *a1,
        __int64 a2,
        int a3,
        const void *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int16 v15; // ax
  __int64 v16; // rax
  void *v17; // rax
  size_t v18; // rbx
  char v20; // al
  __int64 v22; // [rsp+8h] [rbp-40h]

  v10 = sub_ED1590((unsigned int)a8, 0, (unsigned int)a5);
  v11 = sub_B6C590(48, a1, a2, v10);
  *(_QWORD *)v11 = off_2BD8B30;
  if ( a2
    && (v12 = sub_B68470(a2), v13 = *(_QWORD *)(v12 + 8) & 7LL, (*(_QWORD *)(v12 + 8) & 7) != 0)
    && (*(char *)(v12 + 29) >= 0 || (v22 = *(_QWORD *)(v12 + 8) & 7LL, v20 = sub_B688D0(v12), v13 = v22, v20)) )
  {
    v14 = v13;
  }
  else
  {
    v14 = 0;
  }
  *(_QWORD *)(v11 + 8) = v14;
  *(_QWORD *)(v11 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v11 + 24) = a3;
  *(_WORD *)(v11 + 28) = 24593;
  v15 = sub_B68380(17);
  *(_BYTE *)(v11 + 32) &= 0xF8u;
  *(_WORD *)(v11 + 30) = v15 & 0x3FFF | *(_WORD *)(v11 + 30) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(17);
  *(_QWORD *)(v11 + 40) = 0;
  *(_QWORD *)v11 = &off_2BDA120;
  v16 = sub_ED15F0(v11 + 48, a7, a8, 0, (unsigned int)a5);
  *(_QWORD *)(v11 + 40) = v16;
  sub_ED15C0(v16, a7, a8);
  v17 = (void *)sub_ED15E0(*(_QWORD *)(v11 + 40));
  v18 = 8 * a5;
  if ( v18 )
    memmove(v17, a4, v18);
  return v11;
}


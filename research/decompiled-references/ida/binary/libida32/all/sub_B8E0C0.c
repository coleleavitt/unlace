unsigned __int64 __fastcall sub_B8E0C0(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int16 v13; // ax
  __int64 v14; // rax

  v8 = sub_ED1590((unsigned int)a5, 0, 0);
  v9 = sub_B6C590(48, a1, a2, v8);
  *(_QWORD *)v9 = off_2BD8B30;
  if ( a2
    && (v10 = sub_B68470(a2), v11 = *(_QWORD *)(v10 + 8) & 7LL, (*(_QWORD *)(v10 + 8) & 7) != 0)
    && (*(char *)(v10 + 29) >= 0 || (unsigned __int8)sub_B688D0(v10)) )
  {
    v12 = v11;
  }
  else
  {
    v12 = 0;
  }
  *(_QWORD *)(v9 + 8) = v12;
  *(_QWORD *)(v9 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v9 + 24) = a3;
  *(_WORD *)(v9 + 28) = 24592;
  v13 = sub_B68380(16);
  *(_BYTE *)(v9 + 32) &= 0xF8u;
  *(_WORD *)(v9 + 30) = v13 & 0x3FFF | *(_WORD *)(v9 + 30) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(16);
  *(_QWORD *)(v9 + 40) = 0;
  *(_QWORD *)v9 = &off_2BDA188;
  v14 = sub_ED15F0(v9 + 48, a4, a5, 0, 0);
  *(_QWORD *)(v9 + 40) = v14;
  sub_ED15C0(v14, a4, a5);
  return v9;
}


__int64 __fastcall sub_648520(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  char *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  char v10[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v11; // [rsp+1008h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v2 = operator new(0x60u);
  *(_DWORD *)(v2 + 16) = 0;
  v3 = v2;
  *(_QWORD *)(v2 + 24) = 0;
  *(_BYTE *)(v2 + 36) = 0;
  *(_BYTE *)(v2 + 41) = 0;
  *(_BYTE *)(v2 + 45) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = 0;
  *(_DWORD *)(v2 + 32) = 3;
  v4 = qbasename(a1);
  qstrncpy(v10, v4, 4096);
  v5 = strrchr(v10, 46);
  if ( v5 )
    *v5 = 0;
  *(_QWORD *)v3 = qstrdup(v10);
  *(_QWORD *)(v3 + 8) = qstrdup(a2);
  v6 = operator new(0x50u);
  *(_QWORD *)v6 = v3;
  *(_QWORD *)(v6 + 8) = 1;
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = 0x7FFFFFFF00000000LL;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)(v3 + 56) = v6;
  *(_OWORD *)(v6 + 24) = 0;
  *(_OWORD *)(v6 + 56) = 0;
  v7 = operator new(0x50u);
  *(_QWORD *)v7 = v3;
  *(_QWORD *)(v7 + 8) = 1;
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0x7FFFFFFF00000000LL;
  *(_QWORD *)(v7 + 72) = 0;
  *(_QWORD *)(v3 + 64) = v7;
  *(_OWORD *)(v7 + 24) = 0;
  *(_OWORD *)(v7 + 56) = 0;
  v8 = operator new(0x50u);
  *(_BYTE *)(v3 + 44) = 8;
  *(_QWORD *)v8 = v3;
  *(_QWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0x7FFFFFFF00000000LL;
  *(_QWORD *)(v8 + 72) = 0;
  *(_QWORD *)(v3 + 72) = v8;
  *(_OWORD *)(v8 + 24) = 0;
  *(_OWORD *)(v8 + 56) = 0;
  *(_WORD *)(v3 + 42) = 1026;
  *(_DWORD *)(v3 + 37) = 67175443;
  return v3;
}

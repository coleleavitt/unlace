unsigned __int64 __fastcall sub_1AF87E0(__int64 a1, const void *a2, __int64 a3, int a4, int a5, int a6)
{
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  signed __int64 v15; // rbp
  void *v16; // rax
  __int64 v17; // rdx

  v10 = (_QWORD *)sub_168B6C0(a1);
  v13 = v10[294];
  v10[304] += 80LL;
  v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v10[295] >= v14 + 80 && v13 )
    v10[294] = v14 + 80;
  else
    v14 = sub_986170((__int64)(v10 + 294), 80, 80, 3, v11, v12);
  v15 = 8 * a3;
  *(_DWORD *)(v14 + 12) = a5;
  v16 = (void *)(v14 + 32);
  LODWORD(v17) = 0;
  *(_DWORD *)v14 = a4;
  *(_DWORD *)(v14 + 4) = a6;
  *(_DWORD *)(v14 + 8) = 73;
  *(_QWORD *)(v14 + 16) = v14 + 32;
  *(_QWORD *)(v14 + 24) = 0x600000000LL;
  if ( (unsigned __int64)(v15 >> 3) > 6 )
  {
    sub_2237220(v14 + 16, v14 + 32, v15 >> 3, 8);
    v17 = *(unsigned int *)(v14 + 24);
    v16 = (void *)(*(_QWORD *)(v14 + 16) + 8 * v17);
  }
  if ( v15 )
  {
    memcpy(v16, a2, v15);
    LODWORD(v17) = *(_DWORD *)(v14 + 24);
  }
  *(_DWORD *)(v14 + 24) = (v15 >> 3) + v17;
  return v14;
}

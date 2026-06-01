/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AE6C0
// Address: 0x00000000000AE6C0

//----- (00000000000AE6C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_AE6C0(__int64 a1, char a2, __int16 a3, __int64 a4)
{
  _QWORD *v6; // rax
  _BYTE *v7; // rax
  __int64 v8; // rax
  size_t v9; // r15
  __int64 v10; // rbp
  void *v11; // rax
  char v13[4096]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v14; // [rsp+1000h] [rbp-28h] BYREF

  v14 = __readfsqword(0x28u);
  sub_A82F0(a1, a2);
  *(_QWORD *)a1 = &off_14F7E8;
  *(_OWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_WORD *)(a1 + 176) = 0;
  v6 = operator new(0x10u);
  *v6 = &off_14F988;
  v6[1] = a1;
  *(_QWORD *)(a1 + 168) = v6;
  *(_WORD *)(a1 + 104) = a3;
  sub_BCE20(v13, 0x1000u);
  v7 = qbasename(v13);
  qstrncpy(v7, a4, (char *)&v14 - v7);
  v8 = __strlen_chk(v13, 4096);
  v9 = v8;
  if ( v8 )
  {
    v10 = v8 + 1;
    v11 = *(void **)(a1 + 112);
    if ( *(_QWORD *)(a1 + 128) < v9 + 1 )
    {
      v11 = qvector_reserve(a1 + 112, *(char **)(a1 + 112), v9 + 1, 1u);
      *(_QWORD *)(a1 + 112) = v11;
    }
    *(_QWORD *)(a1 + 120) = v10;
    memmove(v11, v13, v9);
    *(_BYTE *)(*(_QWORD *)(a1 + 112) + v9) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 120) = 0;
  }
  return __readfsqword(0x28u);
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 14F7E8: using guessed type __int64 (__fastcall *off_14F7E8)();
// 14F988: using guessed type __int64 (__fastcall *off_14F988)();

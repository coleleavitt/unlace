__int64 __fastcall sub_6FBC0(__int64 a1, __int64 a2, __int64 *a3, int a4, int a5)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v9; // r15
  __int64 v10; // r14
  __int16 v11; // ax
  unsigned int v12; // ebx
  __int64 v14; // r12
  _QWORD v15[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(a1 + 8);
  v7 = *a3;
  v15[1] = __readfsqword(0x28u);
  v9 = *(_QWORD *)(v6 + 128);
  v10 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 168LL);
  v11 = sub_97BF0(a3);
  v12 = sub_8A0D0(v10, (unsigned int)v15, a4, *(_QWORD *)(v6 + 16), a5, v11 == 5, v9);
  if ( (_BYTE)v12 )
  {
    v14 = v15[0];
    cleanup_argloc(a2);
    *(_DWORD *)a2 = 1;
    *(_QWORD *)(a2 + 8) = v14;
  }
  return v12;
}

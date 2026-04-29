unsigned __int64 __fastcall sub_3D3380(_QWORD *a1, __int64 a2, __int64 *a3)
{
  _QWORD *v5; // rax
  __int64 v6; // r12
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  __int64 *v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  unsigned __int64 result; // rax

  *a1 = 0;
  v5 = (_QWORD *)operator new(0xC0u);
  v6 = *a3;
  *a3 = 0;
  v7 = v5;
  v8 = v5 + 2;
  v5[1] = 0x100000001LL;
  *v5 = off_4E86E0;
  v5[2] = &off_4E82D8;
  v9 = *(__int64 **)(v6 + 8);
  if ( !v9 )
    v9 = *(__int64 **)(v6 + 16);
  v10 = *v9;
  v7[4] = 0;
  v7[7] = 0;
  v7[3] = v10;
  *((_DWORD *)v7 + 16) = -1;
  *(_OWORD *)(v7 + 5) = 0;
  v7[9] = *(unsigned int *)(v6 + 312);
  sub_32F510(v6 + 8, v7 + 4);
  v7[10] = v6;
  v7[2] = &off_4E82F8;
  v11 = dword_4ED708;
  *((_DWORD *)v7 + 22) = dword_4ED708;
  dword_4ED708 = v11 + 1;
  *((_DWORD *)v7 + 23) = (unsigned __int8)getinf();
  *((_DWORD *)v7 + 24) = (unsigned __int8)getinf();
  *((_BYTE *)v7 + 100) = getinf_flag();
  v12 = v7[10];
  v7[13] = 0;
  v7[16] = 0;
  v7[19] = 0;
  v7[22] = 0;
  v7[23] = 0;
  *((_OWORD *)v7 + 7) = 0;
  *(_OWORD *)(v7 + 17) = 0;
  *((_OWORD *)v7 + 10) = 0;
  sub_1376B0(v12, 32, v13, v14, v15, v16);
  sub_3C8370(v8);
  result = sub_3D2F80((__int64)v8);
  a1[1] = v7;
  *a1 = v8;
  return result;
}

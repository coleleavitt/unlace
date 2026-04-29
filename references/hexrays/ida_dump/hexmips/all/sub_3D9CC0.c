unsigned __int64 __fastcall sub_3D9CC0(_QWORD *a1, __int64 a2, __int64 *a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  _QWORD *v11; // rbx
  _QWORD *v12; // r14
  __int64 *v13; // rax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  unsigned __int64 result; // rax

  *a1 = 0;
  v5 = (_QWORD *)operator new(0xC0u);
  v10 = *a3;
  *a3 = 0;
  v11 = v5;
  v12 = v5 + 2;
  v5[1] = 0x100000001LL;
  *v5 = off_4C9D20;
  v5[2] = &off_4C9538;
  v13 = *(__int64 **)(v10 + 8);
  if ( !v13 )
    v13 = *(__int64 **)(v10 + 16);
  v14 = *v13;
  v11[4] = 0;
  v11[7] = 0;
  v11[3] = v14;
  *((_DWORD *)v11 + 16) = -1;
  *(_OWORD *)(v11 + 5) = 0;
  v11[9] = *(unsigned int *)(v10 + 312);
  sub_32D950((_QWORD *)(v10 + 8), (__int64)(v11 + 4), v6, v7, v8, v9);
  v11[10] = v10;
  v11[2] = &off_4C9558;
  v15 = dword_4CE960;
  *((_DWORD *)v11 + 22) = dword_4CE960;
  dword_4CE960 = v15 + 1;
  *((_DWORD *)v11 + 23) = (unsigned __int8)getinf(40);
  *((_DWORD *)v11 + 24) = (unsigned __int8)getinf(41);
  *((_BYTE *)v11 + 100) = getinf_flag(44, 32);
  v16 = v11[10];
  v11[13] = 0;
  v11[16] = 0;
  v11[19] = 0;
  v11[22] = 0;
  v11[23] = 0;
  *((_OWORD *)v11 + 7) = 0;
  *(_OWORD *)(v11 + 17) = 0;
  *((_OWORD *)v11 + 10) = 0;
  sub_135990(v16, 32, v17, v18, v19, v20);
  sub_3CD8D0(v12);
  result = sub_3D9740((__int64)v12, (__m128i)0LL);
  a1[1] = v11;
  *a1 = v12;
  return result;
}

__int64 __fastcall sub_5075C0(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ecx
  int v10; // edx
  _QWORD *v11; // rbp
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 *v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD v19[7]; // [rsp+0h] [rbp-38h] BYREF

  v19[1] = __readfsqword(0x28u);
  netnode_check(v19, a3, 0, 0);
  result = 0;
  if ( v19[0] == -1 )
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      sub_504B40(a1);
      sub_506F90(*(_QWORD *)(a1 + 48), (__int64 *)a1);
    }
    netnode_check(v19, a3, 0, 1);
    v7 = v19[0];
    *(_QWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)a1 = v7;
    *(_WORD *)(a1 + 8) = a4;
    *(_OWORD *)(a1 + 56) = 0;
    v8 = operator new(0xB8u);
    v9 = *(unsigned __int16 *)(a1 + 8);
    v10 = *(_DWORD *)(a1 + 44);
    *(_QWORD *)v8 = 0;
    *(_DWORD *)(v8 + 32) = v9;
    *(_QWORD *)(v8 + 88) = v8 + 136;
    *(_DWORD *)(v8 + 176) = v10;
    *(_BYTE *)(v8 + 36) = 0;
    *(_QWORD *)(v8 + 40) = 0;
    *(_QWORD *)(v8 + 64) = 0;
    *(_QWORD *)(v8 + 96) = 1;
    *(_QWORD *)(v8 + 104) = 0;
    *(_QWORD *)(v8 + 112) = 0;
    *(_DWORD *)(v8 + 120) = 1065353216;
    *(_QWORD *)(v8 + 128) = 0;
    *(_QWORD *)(v8 + 136) = 0;
    *(_QWORD *)(v8 + 144) = -1;
    *(_QWORD *)(v8 + 152) = 0;
    *(_DWORD *)(v8 + 180) = 0;
    *(_QWORD *)(v8 + 24) = 0;
    *(_QWORD *)(a1 + 32) = v8;
    *(_OWORD *)(v8 + 8) = 0;
    *(_OWORD *)(v8 + 48) = 0;
    *(_OWORD *)(v8 + 72) = 0;
    *(_OWORD *)(v8 + 160) = 0;
    sub_504B40(a1);
    v11 = *(_QWORD **)(a1 + 48);
    v12 = (__int64 *)v11[28];
    v13 = v11[29];
    v14 = &v12[v13];
    if ( v12 == v14 )
      goto LABEL_11;
    v15 = (__int64 *)v11[28];
    while ( a1 != *v15 )
    {
      if ( v14 == ++v15 )
        goto LABEL_11;
    }
    if ( v14 == v15 )
    {
LABEL_11:
      v16 = v13 + 1;
      if ( v11[30] < v16 )
      {
        v17 = qvector_reserve(v11 + 28, v12, v16, 8);
        v18 = v11[29];
        v11[28] = v17;
        v14 = (__int64 *)(v17 + 8 * v18);
      }
      *v14 = a1;
      ++v11[29];
    }
    return 1;
  }
  return result;
}

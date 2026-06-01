__int64 __fastcall sub_4EFFD0(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rax
  int v9; // ecx
  int v10; // edx
  _QWORD *v11; // rbp
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  netnode_check(&v19, a3, 0, 0);
  result = 0;
  if ( v19 == -1 )
  {
    if ( *(_QWORD *)(a1 + 24) )
    {
      sub_4ED600((unsigned int *)a1);
      sub_4EF9B0(*(_QWORD *)(a1 + 40), (unsigned int *)a1);
    }
    netnode_check(&v19, a3, 0, 1);
    v7 = v19;
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 64) = 0;
    *(_DWORD *)a1 = v7;
    *(_WORD *)(a1 + 4) = a4;
    *(_OWORD *)(a1 + 48) = 0;
    v8 = operator new(0xB8u);
    v9 = *(unsigned __int16 *)(a1 + 4);
    v10 = *(_DWORD *)(a1 + 36);
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
    *(_QWORD *)(a1 + 24) = v8;
    *(_OWORD *)(v8 + 8) = 0;
    *(_OWORD *)(v8 + 48) = 0;
    *(_OWORD *)(v8 + 72) = 0;
    *(_OWORD *)(v8 + 160) = 0;
    sub_4ED600((unsigned int *)a1);
    v11 = *(_QWORD **)(a1 + 40);
    v12 = (_QWORD *)v11[28];
    v13 = v11[29];
    v14 = &v12[v13];
    if ( v12 == v14 )
      goto LABEL_11;
    v15 = (_QWORD *)v11[28];
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
        v14 = (_QWORD *)(v17 + 8 * v18);
      }
      *v14 = a1;
      ++v11[29];
    }
    return 1;
  }
  return result;
}


__int64 __fastcall sub_507E70(_QWORD *a1, __int64 a2, const char *a3, __int64 a4, int a5)
{
  unsigned int v9; // ebp
  __m128i v10; // xmm0
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // rcx
  __int64 *v16; // rax
  bool v17; // zf
  __int64 v18; // rax
  int v19; // ecx
  unsigned int v20; // edx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __m128i v25; // [rsp+0h] [rbp-88h] BYREF
  __int64 v26; // [rsp+18h] [rbp-70h] BYREF
  _OWORD v27[2]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  netnode_check(&v26, a4, 0, 0);
  v9 = netnode_exist(&v26);
  if ( (_BYTE)v9 )
  {
    v10 = _mm_loadu_si128((const __m128i *)(a2 + 56));
    v11 = *(_QWORD *)(a2 + 72);
    if ( *(_QWORD *)(a2 + 32) )
    {
      v25 = v10;
      sub_504B40(a2);
      sub_506F90(*(_QWORD *)(a2 + 48), (__int64 *)a2);
      v10 = _mm_load_si128(&v25);
    }
    else
    {
      *(_QWORD *)(a2 + 16) = 0;
      *(_WORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 24) = 0;
    }
    v12 = v26;
    *(_QWORD *)(a2 + 72) = v11;
    *(__m128i *)(a2 + 56) = v10;
    *(_QWORD *)a2 = v12;
    v13 = (__int64 *)a1[28];
    v14 = a1[29];
    v15 = &v13[v14];
    if ( v13 == v15 )
      goto LABEL_17;
    v16 = (__int64 *)a1[28];
    while ( a2 != *v16 )
    {
      if ( v15 == ++v16 )
        goto LABEL_17;
    }
    if ( v16 == v15 )
    {
LABEL_17:
      v22 = v14 + 1;
      if ( a1[30] < v22 )
      {
        v23 = qvector_reserve(a1 + 28, v13, v22, 8);
        v24 = a1[29];
        a1[28] = v23;
        v15 = (__int64 *)(v23 + 8 * v24);
      }
      *v15 = a2;
      v12 = v26;
      ++a1[29];
    }
    memset(v27, 0, 28);
    if ( netnode_valobj(v12, v27, 28) <= 0 )
      sub_378C70((__int64)"can't find range '%s'", a3);
    if ( !a5 )
      LOWORD(a5) = WORD4(v27[0]);
    v17 = WORD5(v27[1]) == 0;
    *(_WORD *)(a2 + 8) = a5;
    if ( !v17 )
      sub_507D30((__int64 *)a2, (__int64)a3, 1);
    v18 = operator new(0xB8u);
    v19 = *(unsigned __int16 *)(a2 + 8);
    v20 = *(_DWORD *)(a2 + 44);
    *(_QWORD *)v18 = 0;
    *(_DWORD *)(v18 + 32) = v19;
    *(_BYTE *)(v18 + 36) = 0;
    *(_QWORD *)(v18 + 40) = 0;
    *(_QWORD *)(v18 + 64) = 0;
    *(_QWORD *)(v18 + 88) = v18 + 136;
    *(_QWORD *)(v18 + 96) = 1;
    *(_QWORD *)(v18 + 104) = 0;
    *(_QWORD *)(v18 + 112) = 0;
    *(_DWORD *)(v18 + 120) = 1065353216;
    *(_QWORD *)(v18 + 128) = 0;
    *(_QWORD *)(v18 + 136) = 0;
    *(_QWORD *)(v18 + 144) = -1;
    *(_QWORD *)(v18 + 152) = 0;
    *(_QWORD *)(v18 + 176) = v20;
    *(_QWORD *)(v18 + 24) = 0;
    *(_QWORD *)(a2 + 32) = v18;
    *(_OWORD *)(v18 + 8) = 0;
    *(_OWORD *)(v18 + 48) = 0;
    *(_OWORD *)(v18 + 72) = 0;
    *(_OWORD *)(v18 + 160) = 0;
  }
  return v9;
}

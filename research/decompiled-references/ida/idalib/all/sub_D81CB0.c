__int64 __fastcall sub_D81CB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  unsigned int v7; // ebx
  unsigned int v8; // eax
  char v9; // r14
  unsigned __int64 v10; // rsi
  _DWORD *v11; // rdx
  unsigned int v12; // eax
  void *v13; // rdx
  unsigned int v14; // r13d
  _DWORD *v15; // rbx
  __int64 v17; // rcx
  bool v18; // cc
  void *v21; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-50h]
  void *v23; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-40h]
  char v25; // [rsp+2Ch] [rbp-3Ch]

  v7 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v8 = *(_DWORD *)(a4 + 8);
  v9 = *(_BYTE *)(a4 + 12);
  v10 = v7 - 1;
  v22 = v8;
  if ( v8 <= 0x40 )
  {
    v21 = (void *)(v7 - 1);
    v24 = v8;
    v23 = v21;
    v22 = 0;
    v25 = v9;
LABEL_4:
    *(_QWORD *)a4 &= v10;
    goto LABEL_5;
  }
  sub_2205470(&v21, v10, 0);
  v8 = v22;
  v10 = (unsigned __int64)v21;
  v22 = 0;
  v18 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v25 = v9;
  v24 = v8;
  v23 = v21;
  if ( v18 )
    goto LABEL_4;
  sub_2205B60(a4, &v23);
  v8 = v24;
LABEL_5:
  if ( v8 > 0x40 && v23 )
    operator delete[](v23);
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
LABEL_11:
  if ( !*(_BYTE *)(a4 + 12) && sub_CF0820((__int64 *)a4) )
  {
    v21 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v23 = (void *)sub_E33D20(a1, &v21, 2444, 0);
    if ( v23 )
      sub_CF8A40((unsigned __int8 ***)&v23, a4);
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v14 )
    {
      sub_C16960((__int64)&v23, a4);
      v14 = sub_D819E0(a1, a2, a3, (__int64)&v23, a5);
      if ( v24 > 0x40 )
      {
        if ( v23 )
          operator delete[](v23);
      }
    }
  }
  else
  {
    v11 = *(_DWORD **)a4;
    v24 = *(_DWORD *)(a4 + 8);
    v12 = *(_DWORD *)(a3 + 8);
    v23 = v11;
    v13 = *(void **)a3;
    v22 = v12;
    if ( v12 <= 0x40 )
    {
      v17 = 0;
      if ( v12 )
        v17 = (__int64)((_QWORD)v13 << (64 - (unsigned __int8)v12)) >> (64 - (unsigned __int8)v12);
      v21 = (void *)v17;
    }
    else
    {
      v21 = v13;
    }
    v14 = sub_D73C50(a1, a2, (__int64)&v21, (__int64)&v23, v7);
    if ( (_BYTE)v14 )
    {
      LODWORD(v15) = v7 - 1;
      if ( !sub_9EC640(a4, (unsigned int)v15) )
      {
        v15 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v15) = *v15;
      }
      sub_CF8770((__int64)&v23, a3, (unsigned int)v15);
      sub_D0C590(a5, (__int64)&v23);
      if ( v24 > 0x40 && v23 )
        operator delete[](v23);
      *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128((const __m128i *)a5);
    }
  }
  return v14;
}

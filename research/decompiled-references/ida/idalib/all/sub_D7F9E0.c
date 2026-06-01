__int64 __fastcall sub_D7F9E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  unsigned int v8; // ebp
  unsigned int v9; // eax
  char v10; // r14
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  unsigned int v13; // eax
  void *v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r14d
  _DWORD *v17; // rbp
  char v18; // bl
  __int64 v20; // rdx
  bool v21; // cc
  void *v23; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-50h]
  char v25; // [rsp+2Ch] [rbp-4Ch]
  void *v26; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-40h]
  char v28; // [rsp+3Ch] [rbp-3Ch]

  v8 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v9 = *(_DWORD *)(a4 + 8);
  v10 = *(_BYTE *)(a4 + 12);
  v11 = v8 - 1;
  v24 = v9;
  if ( v9 <= 0x40 )
  {
    v23 = (void *)(v8 - 1);
    v27 = v9;
    v26 = v23;
    v24 = 0;
    v28 = v10;
LABEL_4:
    *(_QWORD *)a4 &= v11;
    goto LABEL_5;
  }
  sub_2205470(&v23, v11, 0);
  v9 = v24;
  v11 = (unsigned __int64)v23;
  v24 = 0;
  v21 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v28 = v10;
  v27 = v9;
  v26 = v23;
  if ( v21 )
    goto LABEL_4;
  sub_2205B60(a4, &v26);
  v9 = v27;
LABEL_5:
  if ( v9 > 0x40 && v26 )
    operator delete[](v26);
  if ( v24 > 0x40 && v23 )
    operator delete[](v23);
LABEL_11:
  if ( *(_BYTE *)(a4 + 12) )
  {
    v12 = *(_QWORD *)a4;
    if ( *(_DWORD *)(a4 + 8) > 0x40u )
      v12 = *(_QWORD *)v12;
LABEL_14:
    LODWORD(v23) = v12;
    v13 = *(_DWORD *)(a3 + 8);
    v14 = *(void **)a3;
    v27 = v13;
    if ( v13 > 0x40 )
    {
      v26 = v14;
    }
    else
    {
      v15 = 0;
      if ( v13 )
        v15 = (__int64)((_QWORD)v14 << (64 - (unsigned __int8)v13)) >> (64 - (unsigned __int8)v13);
      v26 = (void *)v15;
    }
    v16 = sub_D7F7D0(a1, a2, (__int64)&v26, (unsigned int *)&v23, v8);
    if ( (_BYTE)v16 )
    {
      LODWORD(v17) = v8 - 1;
      if ( !sub_9EC640(a4, (unsigned int)v17) )
      {
        v17 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v17) = *v17;
      }
      v18 = *(_BYTE *)(a3 + 12);
      sub_CF8150((__int64)&v26, a3, (unsigned int)v17);
      v25 = v18;
      v24 = v27;
      v23 = v26;
      sub_D0C590(a5, (__int64)&v23);
      if ( v24 > 0x40 && v23 )
        operator delete[](v23);
      *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128((const __m128i *)a5);
    }
    return v16;
  }
  if ( !sub_CF0820((__int64 *)a4) )
  {
    LODWORD(v12) = *(_DWORD *)(a4 + 8);
    v20 = *(_QWORD *)a4;
    if ( (unsigned int)v12 > 0x40 )
    {
      LODWORD(v12) = *(_DWORD *)v20;
    }
    else if ( (_DWORD)v12 )
    {
      v12 = v20 << (64 - (unsigned __int8)v12) >> (64 - (unsigned __int8)v12);
    }
    goto LABEL_14;
  }
  v23 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v26 = (void *)sub_E33D20(a1, &v23, 2444, 0);
  if ( v26 )
    sub_CF8A40((unsigned __int8 ***)&v26, a4);
  v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v16 )
  {
    sub_C16960((__int64)&v26, a4);
    v16 = sub_D7FCF0(a1, a2, a3, &v26, a5);
    if ( v27 > 0x40 )
    {
      if ( v26 )
        operator delete[](v26);
    }
  }
  return v16;
}

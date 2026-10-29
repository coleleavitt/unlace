__int64 __fastcall sub_D7FCF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  unsigned int v8; // ebp
  unsigned int v9; // eax
  char v10; // cl
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  unsigned int v13; // eax
  void *v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r14d
  _DWORD *v17; // rbp
  __int64 v19; // rdx
  bool v20; // cc
  char v22; // [rsp+8h] [rbp-60h]
  void *v23; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-50h]
  void *v25; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-40h]
  char v27; // [rsp+2Ch] [rbp-3Ch]

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
    v26 = v9;
    v25 = v23;
    v24 = 0;
    v27 = v10;
LABEL_4:
    *(_QWORD *)a4 &= v11;
    goto LABEL_5;
  }
  v22 = v10;
  sub_2205470(&v23, v11, 0);
  v9 = v24;
  v11 = (unsigned __int64)v23;
  v24 = 0;
  v20 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v26 = v9;
  v25 = v23;
  v27 = v22;
  if ( v20 )
    goto LABEL_4;
  sub_2205B60(a4, &v25);
  v9 = v26;
LABEL_5:
  if ( v9 > 0x40 && v25 )
    operator delete[](v25);
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
    v26 = v13;
    if ( v13 > 0x40 )
    {
      v25 = v14;
    }
    else
    {
      v15 = 0;
      if ( v13 )
        v15 = (__int64)((_QWORD)v14 << (64 - (unsigned __int8)v13)) >> (64 - (unsigned __int8)v13);
      v25 = (void *)v15;
    }
    v16 = sub_D6E350(a1, a2, (__int64)&v25, (unsigned int *)&v23, v8);
    if ( (_BYTE)v16 )
    {
      LODWORD(v17) = v8 - 1;
      if ( !sub_9EC640(a4, (unsigned int)v17) )
      {
        v17 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v17) = *v17;
      }
      sub_CF8770((__int64)&v25, a3, (unsigned int)v17);
      sub_D0C590(a5, (__int64)&v25);
      if ( v26 > 0x40 && v25 )
        operator delete[](v25);
      *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128((const __m128i *)a5);
    }
    return v16;
  }
  if ( !sub_CF0820((__int64 *)a4) )
  {
    LODWORD(v12) = *(_DWORD *)(a4 + 8);
    v19 = *(_QWORD *)a4;
    if ( (unsigned int)v12 > 0x40 )
    {
      LODWORD(v12) = *(_DWORD *)v19;
    }
    else if ( (_DWORD)v12 )
    {
      v12 = v19 << (64 - (unsigned __int8)v12) >> (64 - (unsigned __int8)v12);
    }
    goto LABEL_14;
  }
  v23 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v25 = (void *)sub_E33D20(a1, &v23, 2444, 0);
  if ( v25 )
    sub_CF8A40((unsigned __int8 ***)&v25, a4);
  v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v16 )
  {
    sub_C16960((__int64)&v25, a4);
    v16 = sub_D7F9E0(a1, a2, a3, (__int64)&v25, a5);
    if ( v26 > 0x40 )
    {
      if ( v25 )
        operator delete[](v25);
    }
  }
  return v16;
}

__int64 __fastcall sub_D6C2E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  unsigned int v8; // ebp
  unsigned int v9; // eax
  char v10; // cl
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  void *v13; // rdx
  unsigned int v14; // r14d
  _DWORD *v15; // rbp
  unsigned int v17; // edx
  __int64 v18; // rsi
  bool v19; // cc
  char v21; // [rsp+8h] [rbp-60h]
  void *v22; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-50h]
  void *v24; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-40h]
  char v26; // [rsp+2Ch] [rbp-3Ch]

  v8 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v9 = *(_DWORD *)(a4 + 8);
  v10 = *(_BYTE *)(a4 + 12);
  v11 = v8 - 1;
  v23 = v9;
  if ( v9 <= 0x40 )
  {
    v22 = (void *)(v8 - 1);
    v25 = v9;
    v24 = v22;
    v23 = 0;
    v26 = v10;
LABEL_4:
    *(_QWORD *)a4 &= v11;
    goto LABEL_5;
  }
  v21 = v10;
  sub_2205470(&v22, v11, 0);
  v9 = v23;
  v11 = (unsigned __int64)v22;
  v23 = 0;
  v19 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v25 = v9;
  v24 = v22;
  v26 = v21;
  if ( v19 )
    goto LABEL_4;
  sub_2205B60(a4, &v24);
  v9 = v25;
LABEL_5:
  if ( v9 > 0x40 && v24 )
    operator delete[](v24);
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
LABEL_11:
  if ( *(_BYTE *)(a4 + 12) )
  {
    v12 = *(_QWORD *)a4;
    if ( *(_DWORD *)(a4 + 8) > 0x40u )
      v12 = *(_QWORD *)v12;
LABEL_14:
    LOWORD(v22) = v12;
    v13 = *(void **)a3;
    v25 = *(_DWORD *)(a3 + 8);
    v24 = v13;
    v14 = sub_D6C160(a1, a2, (__int64)&v24, (__int16 *)&v22, v8);
    if ( (_BYTE)v14 )
    {
      LODWORD(v15) = v8 - 1;
      if ( !sub_9EC640(a4, (unsigned int)v15) )
      {
        v15 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v15) = *v15;
      }
      sub_CF8770((__int64)&v24, a3, (unsigned int)v15);
      sub_CF0850(a5, (__int64)&v24);
      if ( v25 > 0x40 && v24 )
        operator delete[](v24);
      *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128((const __m128i *)a5);
    }
    return v14;
  }
  if ( !sub_CF0820((__int64 *)a4) )
  {
    v17 = *(_DWORD *)(a4 + 8);
    v18 = *(_QWORD *)a4;
    if ( v17 > 0x40 )
    {
      LOWORD(v12) = *(_WORD *)v18;
    }
    else
    {
      LOWORD(v12) = 0;
      if ( v17 )
        v12 = v18 << (64 - (unsigned __int8)v17) >> (64 - (unsigned __int8)v17);
    }
    goto LABEL_14;
  }
  v22 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v24 = (void *)sub_E33D20(a1, &v22, 2444, 0);
  if ( v24 )
    sub_CF8A40((unsigned __int8 ***)&v24, a4);
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v14 )
  {
    sub_C16960((__int64)&v24, a4);
    v14 = sub_D6C590(a1, a2, a3, &v24, a5);
    if ( v25 > 0x40 )
    {
      if ( v24 )
        operator delete[](v24);
    }
  }
  return v14;
}

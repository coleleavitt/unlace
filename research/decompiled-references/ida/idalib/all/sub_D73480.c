__int64 __fastcall sub_D73480(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  unsigned int v8; // ebx
  unsigned int v9; // eax
  char v10; // r13
  unsigned __int64 v11; // rsi
  _DWORD *v12; // rdx
  unsigned int v13; // eax
  void *v14; // rdx
  unsigned int v15; // r13d
  _DWORD *v16; // rbx
  bool v18; // cc
  char v20; // [rsp+10h] [rbp-68h]
  void *v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+28h] [rbp-50h]
  char v23; // [rsp+2Ch] [rbp-4Ch]
  void *v24; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-40h]
  char v26; // [rsp+3Ch] [rbp-3Ch]

  v8 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v9 = *(_DWORD *)(a4 + 8);
  v10 = *(_BYTE *)(a4 + 12);
  v11 = v8 - 1;
  v22 = v9;
  if ( v9 <= 0x40 )
  {
    v21 = (void *)(v8 - 1);
    v25 = v9;
    v24 = v21;
    v22 = 0;
    v26 = v10;
LABEL_4:
    *(_QWORD *)a4 &= v11;
    goto LABEL_5;
  }
  sub_2205470(&v21, v11, 0);
  v9 = v22;
  v11 = (unsigned __int64)v21;
  v22 = 0;
  v18 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v26 = v10;
  v25 = v9;
  v24 = v21;
  if ( v18 )
    goto LABEL_4;
  sub_2205B60(a4, &v24);
  v9 = v25;
LABEL_5:
  if ( v9 > 0x40 && v24 )
    operator delete[](v24);
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
LABEL_11:
  if ( *(_BYTE *)(a4 + 12) || !sub_CF0820((__int64 *)a4) )
  {
    v12 = *(_DWORD **)a4;
    v25 = *(_DWORD *)(a4 + 8);
    v13 = *(_DWORD *)(a3 + 8);
    v24 = v12;
    v14 = *(void **)a3;
    v22 = v13;
    v21 = v14;
    v15 = sub_D73370(a1, a2, (__int64)&v21, (__int64)&v24, v8);
    if ( (_BYTE)v15 )
    {
      LODWORD(v16) = v8 - 1;
      if ( !sub_9EC640(a4, (unsigned int)v16) )
      {
        v16 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v16) = *v16;
      }
      v20 = *(_BYTE *)(a3 + 12);
      sub_CF8150((__int64)&v24, a3, (unsigned int)v16);
      v22 = v25;
      v23 = v20;
      v21 = v24;
      sub_CF0850(a5, (__int64)&v21);
      if ( v22 > 0x40 && v21 )
        operator delete[](v21);
      *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128((const __m128i *)a5);
    }
  }
  else
  {
    v21 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v24 = (void *)sub_E33D20(a1, &v21, 2444, 0);
    if ( v24 )
      sub_CF8A40((unsigned __int8 ***)&v24, a4);
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v15 )
    {
      sub_C16960((__int64)&v24, a4);
      v15 = sub_D73740(a1, a2, a3, &v24, a5);
      if ( v25 > 0x40 )
      {
        if ( v24 )
          operator delete[](v24);
      }
    }
  }
  return v15;
}

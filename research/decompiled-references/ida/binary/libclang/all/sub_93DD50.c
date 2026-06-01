__int64 __fastcall sub_93DD50(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int8 **v13; // r15
  __int64 v14; // rax
  unsigned int v15; // esi
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // r12d
  void *v20; // r14
  unsigned int v21; // r13d
  unsigned __int64 v22; // r14
  unsigned __int8 **v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // [rsp+8h] [rbp-70h]
  unsigned __int8 **v27; // [rsp+18h] [rbp-60h] BYREF
  void *v28; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-50h]
  char v30; // [rsp+2Ch] [rbp-4Ch]
  void *v31; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-40h]
  char v33; // [rsp+3Ch] [rbp-3Ch]

  if ( a5 <= 1 || *a4 < a5 )
    goto LABEL_3;
  v10 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v33 = 1;
  v11 = v10;
  v12 = *a4;
  v32 = 32;
  v31 = (void *)v12;
  v26 = *(_QWORD *)(v11 + 8);
  v28 = (void *)sub_A2E240(a1, v11, 2220, 0);
  v13 = (unsigned __int8 **)v28;
  if ( v28 )
  {
    sub_8DF340((unsigned __int8 ***)&v28, (__int64)&v31);
    sub_8D69A0(v13, v26);
    sub_8D6E40(v13, a5);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v32 > 0x40 && v31 )
      operator delete[](v31);
LABEL_3:
    if ( *(char *)(sub_A2CB40(a1) + 1) < 0 )
      return 1;
    v14 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v15 = *(_DWORD *)(a3 + 8);
    v16 = v14;
    v17 = 1LL << ((unsigned __int8)v15 - 1);
    v18 = *(_QWORD *)a3;
    if ( v15 > 0x40 )
    {
      if ( (*(_QWORD *)(v18 + 8LL * ((v15 - 1) >> 6)) & v17) == 0 )
        goto LABEL_14;
    }
    else if ( (v18 & v17) == 0 )
    {
LABEL_14:
      sub_93CCE0((__int64)&v31, (__int64 *)a3);
      v19 = v32;
      v20 = v31;
      v21 = *a4;
      if ( v32 > 0x40 )
      {
        v19 = sub_2587400(&v31);
        if ( v20 )
          operator delete[](v20);
      }
      else if ( v31 )
      {
        _BitScanReverse64(&v22, (unsigned __int64)v31);
        v19 = v32 + (v22 ^ 0x3F) - 64;
      }
      if ( v19 >= v21 )
        return 1;
      sub_A2E240(a1, v16, 2224, 0);
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v23 = (unsigned __int8 **)sub_A2E240(a1, v16, 2225, 0);
    v24 = *(unsigned int *)(a3 + 8);
    v27 = v23;
    sub_2587BE0(&v31, a3, v24);
    v25 = v32;
    v30 = 0;
    v29 = v32;
    v28 = v31;
    if ( v27 )
    {
      sub_8DF340(&v27, (__int64)&v28);
      v25 = v29;
    }
    if ( v25 > 0x40 && v28 )
      operator delete[](v28);
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  if ( v32 > 0x40 && v31 )
  {
    operator delete[](v31);
    return 0;
  }
  return result;
}


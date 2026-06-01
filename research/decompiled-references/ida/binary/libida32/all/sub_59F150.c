__int64 __fastcall sub_59F150(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v8; // r14d
  __int64 result; // rax
  int v10; // r12d
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // r13d
  unsigned int *v14; // rax
  unsigned int v15; // r13d
  unsigned int *v16; // rax
  unsigned int v17; // edx
  int v18; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( !(unsigned int)sub_5AF010() )
    a5 = (__int16)a5;
  v8 = *(_DWORD *)(a1[2] + 8LL) & 0x8000;
  if ( !a3 || !a4 )
  {
    if ( !v8 )
      return a5 + *(_DWORD *)(a2 + 20);
    goto LABEL_14;
  }
  if ( !(unsigned int)sub_375980(0x2Eu, &v18, a3, a4) )
  {
    if ( v8 )
      goto LABEL_18;
    goto LABEL_25;
  }
  if ( (v18 & 2) != 0 )
    a5 = -a5;
  if ( v8 )
  {
    if ( (v18 & 1) == 0 )
    {
      a5 += *(unsigned __int16 *)(a2 + 24);
LABEL_14:
      v10 = *(_DWORD *)(a2 + 28);
      v11 = sub_375980(0x3Cu, &v18, a2);
      v12 = v18;
      if ( v11 <= 0 )
        v12 = (1 << (get_func_bitness(a2) + 4)) / 8;
      return a5 + v10 + v12;
    }
LABEL_18:
    v13 = *(_DWORD *)(a3 + 8);
    if ( (get_aflags(v13) & 0x8000000) != 0 )
      v13 = sub_3BCF60((__int64)a1, v13);
    v14 = sub_59ED40(a1, a2, v13);
    if ( v14 )
      a5 += v14[1];
    goto LABEL_14;
  }
  if ( (v18 & 1) != 0 )
  {
LABEL_25:
    v15 = *(_DWORD *)(a3 + 8);
    if ( (get_aflags(v15) & 0x8000000) != 0 )
      v15 = sub_3BCF60((__int64)a1, v15);
    v16 = sub_59ED40(a1, a2, v15);
    v17 = 0;
    if ( v16 )
      v17 = v16[1];
    a5 += v17 + *(unsigned __int16 *)(a2 + 24);
    return a5 + *(_DWORD *)(a2 + 20);
  }
  result = a5;
  if ( (*(_BYTE *)(a2 + 9) & 1) == 0 )
    return *(_DWORD *)(a2 + 20) + a5 - *(_DWORD *)(a2 + 32);
  return result;
}


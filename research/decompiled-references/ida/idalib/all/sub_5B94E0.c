__int64 __fastcall sub_5B94E0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  int v9; // r15d
  __int64 v11; // r13
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // r13
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // r13
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rdx
  int v19; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v8 = sub_5C9CB0();
  if ( v8 )
  {
    if ( v8 == 1 )
      a5 = (int)a5;
  }
  else
  {
    a5 = (__int16)a5;
  }
  v9 = *(_DWORD *)(a1[1].m128i_i64[0] + 8) & 0x8000;
  if ( !a3 || !a4 )
  {
    if ( !v9 )
    {
LABEL_6:
      a5 += *(_QWORD *)(a2 + 32);
      goto LABEL_7;
    }
    goto LABEL_19;
  }
  if ( !(unsigned int)sub_3792E0(0x2Eu, &v19, a3, a4) )
  {
    if ( v9 )
      goto LABEL_23;
    goto LABEL_30;
  }
  if ( (v19 & 2) != 0 )
    a5 = -a5;
  if ( v9 )
  {
    if ( (v19 & 1) == 0 )
    {
      a5 += *(unsigned __int16 *)(a2 + 40);
LABEL_19:
      v11 = *(_QWORD *)(a2 + 48);
      v12 = sub_3792E0(0x3Cu, &v19, a2);
      v13 = v19;
      if ( v12 <= 0 )
        v13 = (1 << (get_func_bitness(a2) + 4)) / 8;
      a5 += v11 + v13;
      goto LABEL_7;
    }
LABEL_23:
    v14 = *(_QWORD *)(a3 + 16);
    if ( (get_aflags(v14) & 0x8000000) != 0 )
      v14 = sub_3C1F00(a1, v14);
    v15 = sub_5B9070(a1, a2, v14);
    if ( v15 )
      a5 += v15[1];
    goto LABEL_19;
  }
  if ( (v19 & 1) != 0 )
  {
LABEL_30:
    v16 = *(_QWORD *)(a3 + 16);
    if ( (get_aflags(v16) & 0x8000000) != 0 )
      v16 = sub_3C1F00(a1, v16);
    v17 = sub_5B9070(a1, a2, v16);
    v18 = 0;
    if ( v17 )
      v18 = v17[1];
    a5 += v18 + *(unsigned __int16 *)(a2 + 40);
    goto LABEL_6;
  }
  if ( (*(_BYTE *)(a2 + 17) & 1) == 0 )
    a5 = *(_QWORD *)(a2 + 32) + a5 - *(_QWORD *)(a2 + 56);
LABEL_7:
  if ( *(_DWORD *)(a1[1].m128i_i64[1] + 24) != 8 )
    return (int)a5;
  return a5;
}

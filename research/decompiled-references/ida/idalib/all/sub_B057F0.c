void __fastcall sub_B057F0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  int v5; // eax
  _BYTE *v6; // rdx
  unsigned __int64 v7; // rcx
  void *v8; // rdi
  const char *v9; // rsi
  __int64 v10; // r13
  void *v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+8h] [rbp-40h]
  _BYTE v13[56]; // [rsp+10h] [rbp-38h] BYREF

  v4 = a2;
  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v5 = sub_FA77D0(a1);
  else
    v5 = *(_BYTE *)(a1 + 34) >> 4;
  if ( ((v5 - 2) & 0xFFFFFFFD) == 0 )
    return;
  v6 = *(_BYTE **)(a2 + 32);
  v7 = *(_QWORD *)(a2 + 24);
  if ( (v5 & 0xFFFFFFFD) != 1 )
  {
    if ( (unsigned __int64)v6 >= v7 )
    {
      v4 = sub_227BA10(a2, 32);
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v6 + 1;
      *v6 = 32;
    }
    switch ( *(_DWORD *)(a1 + 40) )
    {
      case 0:
        v9 = "vectorize";
        break;
      case 1:
        v9 = "vectorize_width";
        break;
      case 2:
        v9 = "interleave";
        break;
      case 3:
        v9 = "interleave_count";
        break;
      case 4:
        v9 = "unroll";
        break;
      case 5:
        v9 = "unroll_count";
        break;
      case 6:
        v9 = "unroll_and_jam";
        break;
      case 7:
        v9 = "unroll_and_jam_count";
        break;
      case 8:
        v9 = "pipeline";
        break;
      case 9:
        v9 = "pipeline_initiation_interval";
        break;
      case 0xA:
        v9 = "distribute";
        break;
      case 0xB:
        v9 = "vectorize_predicate";
        break;
    }
    v10 = sub_995540(v4, v9);
    sub_B055D0((__int64)&v11, a1, a3);
    sub_227BF10(v10, v11, v12);
    v8 = v11;
    if ( v11 == v13 )
      return;
LABEL_11:
    operator delete(v8);
    return;
  }
  if ( (unsigned __int64)v6 >= v7 )
  {
    v4 = sub_227BA10(a2, 32);
  }
  else
  {
    *(_QWORD *)(a2 + 32) = v6 + 1;
    *v6 = 32;
  }
  sub_B055D0((__int64)&v11, a1, a3);
  sub_227BF10(v4, v11, v12);
  v8 = v11;
  if ( v11 != v13 )
    goto LABEL_11;
}

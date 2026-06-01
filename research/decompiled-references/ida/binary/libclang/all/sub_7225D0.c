void __fastcall sub_7225D0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  int v8; // eax
  _BYTE *v9; // rdx
  unsigned __int64 v10; // rcx
  const char *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+8h] [rbp-40h]
  __int64 v18; // [rsp+10h] [rbp-38h] BYREF

  v7 = a2;
  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v8 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v8 = sub_C4A760();
  if ( ((v8 - 2) & 0xFFFFFFFD) != 0 )
  {
    v9 = *(_BYTE **)(a2 + 32);
    v10 = *(_QWORD *)(a2 + 24);
    if ( (v8 & 0xFFFFFFFD) == 1 )
    {
      if ( (unsigned __int64)v9 >= v10 )
      {
        v7 = sub_26239D0(a2, 32);
      }
      else
      {
        *(_QWORD *)(a2 + 32) = v9 + 1;
        *v9 = 32;
      }
      sub_7223D0((__int64)&v16, a1, a3, v10, a5, a6);
      sub_26240F0(v7, v16, v17);
      std::string::_M_dispose();
    }
    else
    {
      if ( (unsigned __int64)v9 >= v10 )
      {
        v7 = sub_26239D0(a2, 32);
      }
      else
      {
        *(_QWORD *)(a2 + 32) = v9 + 1;
        *v9 = 32;
      }
      switch ( *(_DWORD *)(a1 + 36) )
      {
        case 0:
          v11 = "vectorize";
          break;
        case 1:
          v11 = "vectorize_width";
          break;
        case 2:
          v11 = "interleave";
          break;
        case 3:
          v11 = "interleave_count";
          break;
        case 4:
          v11 = "unroll";
          break;
        case 5:
          v11 = "unroll_count";
          break;
        case 6:
          v11 = "unroll_and_jam";
          break;
        case 7:
          v11 = "unroll_and_jam_count";
          break;
        case 8:
          v11 = "pipeline";
          break;
        case 9:
          v11 = "pipeline_initiation_interval";
          break;
        case 0xA:
          v11 = "distribute";
          break;
        case 0xB:
          v11 = "vectorize_predicate";
          break;
      }
      v12 = sub_5FF0F0(v7, v11);
      sub_7223D0((__int64)&v16, a1, a3, v13, v14, v15);
      sub_26240F0(v12, v16, v17);
      if ( v16 != &v18 )
        operator delete(v16, v18 + 1);
    }
  }
}


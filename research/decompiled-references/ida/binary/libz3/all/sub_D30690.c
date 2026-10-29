__int64 __fastcall sub_D30690(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // eax
  unsigned __int64 v4; // rdx
  bool v5; // zf
  __int64 v6; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = sub_1859960(a2, "max_memory", 0xFFFFFFFFLL);
  v4 = (unsigned __int64)v3 << 20;
  v5 = v3 == -1;
  v6 = -1;
  if ( !v5 )
    v6 = v4;
  *(_QWORD *)(v2 + 16) = v6;
  result = sub_1859610(a2, "cofactor_equalities", 1);
  *(_BYTE *)(v2 + 24) = result;
  return result;
}


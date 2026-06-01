__int64 __fastcall sub_A2E50(_QWORD *a1, int a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD v12[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = a1[16];
  v4 = a1[17];
  v12[1] = __readfsqword(0x28u);
  LODWORD(v12[0]) = a2;
  v6 = a1[15];
  WORD2(v12[0]) = 0;
  v7 = v3 + 1;
  if ( (unsigned __int64)v12 >= v6 && (unsigned __int64)v12 < v6 + 8 * v4 )
  {
    if ( v4 < v7 )
    {
      v11 = qvector_reserve();
      a1[15] = v11;
      v6 = v11;
      v3 = a1[16];
    }
    v9 = v6 + 8 * v3;
    *(_DWORD *)v9 = a2;
    *(_WORD *)(v9 + 4) = 0;
  }
  else
  {
    if ( v4 < v7 )
    {
      v10 = qvector_reserve();
      a1[15] = v10;
      v6 = v10;
      v3 = a1[16];
    }
    *(_QWORD *)(v6 + 8 * v3) = v12[0];
  }
  ++a1[16];
  return sub_A2DA0((__int64)a1);
}


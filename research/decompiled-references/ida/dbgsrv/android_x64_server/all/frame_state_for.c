/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: frame_state_for
// Address: 0x00000000000E8E6F

//----- (00000000000E8E6F) ----------------------------------------------------
__int64 __fastcall _frame_state_for(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  _DWORD *v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  _BYTE *v7; // rax
  int v8; // ecx
  _QWORD v10[30]; // [rsp+0h] [rbp-288h] BYREF
  _BYTE v11[296]; // [rsp+F0h] [rbp-198h] BYREF
  __int64 v12; // [rsp+218h] [rbp-70h]
  __int64 v13; // [rsp+220h] [rbp-68h]
  int v14; // [rsp+230h] [rbp-58h]
  __int64 v15; // [rsp+258h] [rbp-30h]
  __int64 v16; // [rsp+268h] [rbp-20h]

  v2 = 60;
  v3 = a1 + 1;
  v4 = v10;
  while ( v2 )
  {
    *v4++ = 0;
    --v2;
  }
  v10[24] = 0x4000000000000000LL;
  v10[19] = v3;
  v5 = sub_E891E(v10, (__int64)v11);
  v6 = 0;
  if ( !v5 && v14 != 2 )
  {
    v7 = v11;
    do
    {
      v8 = *((_DWORD *)v7 + 2);
      *(_BYTE *)(a2 + v6 + 180) = v8;
      if ( (_BYTE)v8 == 1 || (_BYTE)v8 == 2 )
        *(_QWORD *)(a2 + 8 * v6 + 32) = *(_QWORD *)v7;
      else
        *(_QWORD *)(a2 + 8 * v6 + 32) = 0;
      ++v6;
      v7 += 16;
    }
    while ( v6 != 18 );
    v6 = a2;
    *(_QWORD *)(a2 + 16) = v12;
    *(_WORD *)(a2 + 176) = v13;
    *(_WORD *)(a2 + 178) = v15;
    *(_QWORD *)(a2 + 24) = v10[26];
    *(_QWORD *)(a2 + 8) = v16;
  }
  return v6;
}

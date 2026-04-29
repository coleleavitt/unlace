bool __fastcall sub_3ED400(__int64 a1, __int64 a2)
{
  char *v2; // rax
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  bool result; // al
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int128 v11; // [rsp+0h] [rbp-178h] BYREF
  __int64 v12; // [rsp+10h] [rbp-168h]
  __int64 v13; // [rsp+18h] [rbp-160h]
  __int64 v14; // [rsp+20h] [rbp-158h]
  char v15; // [rsp+28h] [rbp-150h] BYREF
  __int64 v16; // [rsp+38h] [rbp-140h]
  _QWORD v17[2]; // [rsp+168h] [rbp-10h] BYREF

  v17[0] = __readfsqword(0x28u);
  v2 = &v15;
  v11 = -1;
  v12 = -1;
  v13 = 0;
  v14 = 0;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 40;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *((_QWORD *)v2 - 2) = 0;
  }
  while ( v17 != (_QWORD *)v2 );
  v3 = decode_insn(&v11, a2, v17, 0, 0, 0, 0.0);
  result = 0;
  if ( v3 > 0 && (_WORD)v13 == 4 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    v9 = *(_QWORD *)(v8 + 16);
    v10 = v16 + 16 * v11;
    if ( v10 != v9 )
    {
      v9 &= v10;
      if ( v10 == -1 )
        v9 = -1;
    }
    return sub_CF9B0(0xBBFu, v9, v8, v4, v5, v6, v11, v12) == 1;
  }
  return result;
}

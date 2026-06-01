/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400695A0
// Address: 0x00000001400695A0

//----- (00000001400695A0) ----------------------------------------------------
char __fastcall sub_1400695A0(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned __int8 *v4; // r12
  unsigned int v6; // r14d
  int v7; // r15d
  __int64 v8; // rax
  int v9; // ecx
  char v10; // bp
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r8
  unsigned int v13; // esi

  v3 = a3;
  v4 = a2;
  if ( !a2 || !a1 || a3 < 0 )
    return 0;
  v6 = 0;
  v7 = 0;
  if ( a3 )
  {
    do
    {
      v8 = *v4;
      if ( (_BYTE)v8 == 61 )
        break;
      v9 = *((_DWORD *)qword_1400ACE30 + v8);
      ++v4;
      if ( v9 < 0 )
        return 0;
      v7 += 6;
      v6 = v9 | (v6 << 6);
      if ( v7 >= 8 )
      {
        v10 = v7 - 8;
        v11 = (unsigned __int64)(unsigned int)v7 >> 3;
        v7 -= 8 * ((unsigned int)v7 >> 3);
        do
        {
          v12 = *(_QWORD *)(a1 + 8) + 1LL;
          v13 = v6 >> v10;
          if ( v12 > *(_QWORD *)(a1 + 16) )
            *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v12, 1u);
          v10 -= 8;
          *(_BYTE *)(*(_QWORD *)a1 + (*(_QWORD *)(a1 + 8))++) = v13;
          --v11;
        }
        while ( v11 );
      }
      --v3;
    }
    while ( v3 );
  }
  return 1;
}
// 1400ACE30: using guessed type __int64 qword_1400ACE30[128];

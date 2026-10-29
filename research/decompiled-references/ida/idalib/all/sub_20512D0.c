__int64 __fastcall sub_20512D0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r15
  int v7; // r14d
  int v9; // r13d
  __int64 v10; // r12
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 result; // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx

  v6 = a6 & 0x7FFFFFF;
  v7 = ((a6 >> 27) & 1) << 6;
  v9 = ((a6 & 0x10000000) != 0) << 7;
  v10 = 8 * a5;
  sub_20CA190();
  v11 = v10 >> 3;
  v12 = v6 | *(_DWORD *)(a1 + 4) & 0xF8000000;
  *(_DWORD *)(a1 + 4) = v12;
  result = v9 | v7 | HIBYTE(v12) & 0x3F;
  *(_BYTE *)(a1 + 7) = result;
  if ( v10 > 0 )
  {
    v14 = (_QWORD *)(a1 - 32 * v6);
    do
    {
      v15 = (_QWORD *)v14[2];
      result = *a4;
      if ( v15 )
      {
        v16 = v14[1];
        *v15 = v16;
        if ( v16 )
        {
          *(_QWORD *)(v16 + 16) = v15;
          v14[1] = 0;
        }
        v14[2] = 0;
      }
      *v14 = result;
      if ( result && *(_BYTE *)result > 9u )
      {
        v17 = *(_QWORD *)(result + 16);
        v14[1] = v17;
        if ( v17 )
          *(_QWORD *)(v17 + 16) = v14 + 1;
        v14[2] = result + 16;
        *(_QWORD *)(result + 16) = v14;
      }
      ++a4;
      v14 += 4;
      --v11;
    }
    while ( v11 );
  }
  return result;
}

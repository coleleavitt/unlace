unsigned __int64 __fastcall sub_A92E0(_BYTE *a1, __int64 a2, __int64 *a3)
{
  unsigned __int16 v5; // ax
  __int64 v6; // r15
  int v7; // r14d
  int v8; // r13d
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v17; // [rsp+8h] [rbp-100h]
  int v18; // [rsp+18h] [rbp-F0h]
  int v19; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v20; // [rsp+C8h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  qlread();
  v5 = unpack_dw();
  v17 = v5;
  if ( v5 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    do
    {
      if ( *a1 > 7u )
      {
        qlread();
        v18 = unpack_dd();
        qlread();
        unpack_dd();
        v9 = a2;
        v7 += v18;
        if ( *a1 <= 7u )
          goto LABEL_10;
      }
      else
      {
        qlread();
        v7 += unpack_dd();
        v9 = a2;
        if ( *a1 <= 7u )
        {
LABEL_10:
          v10 = sub_A8550(v9);
          goto LABEL_5;
        }
      }
      v19 = sub_A8550(v9);
      sub_A8550(a2);
      v10 = v19;
LABEL_5:
      v8 += v10;
      v11 = a3[1];
      v12 = *a3;
      if ( a3[2] < (unsigned __int64)(v11 + 1) )
      {
        v14 = qvector_reserve();
        *a3 = v14;
        v12 = v14;
        v11 = a3[1];
      }
      ++v6;
      v13 = (v11 << 6) + v12;
      *(_DWORD *)v13 = v7;
      *(_DWORD *)(v13 + 4) = v8;
      *(_QWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 32) = 0;
      *(_DWORD *)(v13 + 56) = 0;
      *(_WORD *)(v13 + 60) = 0;
      *(_OWORD *)(v13 + 16) = 0;
      *(_OWORD *)(v13 + 40) = 0;
      ++a3[1];
    }
    while ( v17 != v6 );
  }
  return v20 - __readfsqword(0x28u);
}


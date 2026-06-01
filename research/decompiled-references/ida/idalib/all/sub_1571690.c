__int64 __fastcall sub_1571690(const __m128i *a1, __int64 a2, __int64 a3, __m128i a4, double a5)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int16 v10; // ax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int16 v14; // ax
  unsigned __int64 v15; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+8h] [rbp-40h]
  int v17[11]; // [rsp+1Ch] [rbp-2Ch] BYREF

  v6 = sub_15715B0(a1, a2, a4);
  if ( v6 <= 1 )
  {
LABEL_2:
    v17[0] = 29556759;
    sub_15680D0((__int64)a1, v17, (_WORD *)&dword_0 + 1, 2);
    return 1;
  }
  v8 = *(unsigned int *)(a3 + 8);
  v9 = v6 & 0xFFFFFFFFFFFFFFFELL;
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    v16 = v9;
    sub_2237220(a3, a3 + 16, v8 + 1, 8);
    v8 = *(unsigned int *)(a3 + 8);
    v9 = v16;
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v8) = v9;
  v10 = a1[2].m128i_i16[0];
  ++*(_DWORD *)(a3 + 8);
  if ( v10 != 23 )
  {
LABEL_6:
    if ( v10 != 451 )
    {
      while ( 1 )
      {
        sub_1569A00((__int64)a1, 0x42u, 14, &byte_22F0C30, 0, a4, a5);
        v11 = sub_15715B0(a1, (unsigned int)a2, a4);
        if ( v11 <= 1 )
          goto LABEL_2;
        v12 = *(unsigned int *)(a3 + 8);
        v13 = v11 & 0xFFFFFFFFFFFFFFFELL;
        if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          v15 = v13;
          sub_2237220(a3, a3 + 16, v12 + 1, 8);
          *(_QWORD *)(*(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8)) = v15;
          v10 = a1[2].m128i_i16[0];
          ++*(_DWORD *)(a3 + 8);
          if ( v10 != 23 )
            goto LABEL_6;
          return 0;
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v12) = v13;
        v14 = a1[2].m128i_i16[0];
        ++*(_DWORD *)(a3 + 8);
        if ( v14 == 451 || v14 == 23 )
          return 0;
      }
    }
  }
  return 0;
}

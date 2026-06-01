__int64 __fastcall sub_A91C10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 *v6; // r15
  __int64 result; // rax
  __int64 v8; // r12
  __int64 v9; // rbx
  char v10; // al
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  unsigned __int64 v13; // r14
  __int64 *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rbx
  __int64 v18; // [rsp+8h] [rbp-40h]

  sub_993300(a1, *(_DWORD *)(a3 + 64) & 0xFFFFF);
  sub_993300(a1, *(_WORD *)(a3 + 66) >> 4);
  sub_993300(a1, (*(_BYTE *)(a3 + 80) & 2) != 0);
  v5 = *(_QWORD *)(a3 + 56);
  v6 = (__int64 *)(v5 + 24);
  sub_993300(a1, *(_DWORD *)(v5 + 20) & 0x1FFFFFFF);
  result = *(_DWORD *)(v5 + 20) & 0x1FFFFFFF;
  v8 = v5 + 8 * result + 24;
  if ( v5 + 24 != v8 )
  {
    do
    {
      v9 = *v6;
      v10 = *(_BYTE *)(*v6 + 28) & 0x7F;
      if ( v10 == 67 )
      {
        sub_993300(a1, 0);
        v11 = sub_B9A890(v9);
        sub_993300(a1, v11);
        result = sub_993300(a1, *(_DWORD *)(v9 + 64));
      }
      else if ( v10 == 47 )
      {
        sub_993300(a1, 1);
        sub_993300(a1, *(unsigned __int8 *)(v9 + 80));
        v12 = *(_QWORD *)&byte_8[*(_QWORD *)(v9 + 48) & 0xFFFFFFFFFFFFFFF0LL];
        v13 = sub_A91B20(a2, v12 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v12 | *(_BYTE *)(v9 + 48)) & 7);
        sub_993300(a1, v13);
        sub_993300(a1, SHIDWORD(v13));
        if ( *(_BYTE *)(v9 + 81) )
        {
          sub_993300(a1, 1);
          sub_993300(a1, *(_DWORD *)(v9 + 84));
          result = *(unsigned int *)(v9 + 84);
          if ( (_DWORD)result )
          {
            v14 = (__int64 *)(v9 + 88);
            v18 = v9 + 16LL * (unsigned int)(result - 1) + 104;
            do
            {
              v15 = *v14;
              v14 += 2;
              v16 = *(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL];
              LOBYTE(v15) = v16 | v15;
              v17 = (v16 & 0xFFFFFFFFFFFFFFF8LL | v15 & 7) >> 32;
              sub_993300(a1, v16 & 0xFFFFFFF8 | v15 & 7);
              result = sub_993300(a1, v17);
            }
            while ( (__int64 *)v18 != v14 );
          }
        }
        else
        {
          result = sub_993300(a1, 0);
        }
      }
      else
      {
        sub_993300(a1, 2);
        result = sub_A91C10(a1, a2, v9);
      }
      ++v6;
    }
    while ( (__int64 *)v8 != v6 );
  }
  return result;
}


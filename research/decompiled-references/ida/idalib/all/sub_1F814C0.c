__int64 __fastcall sub_1F814C0(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rax
  __int16 v9; // di
  int v10; // esi
  __int64 result; // rax
  unsigned int *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // r13
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rax

  while ( 1 )
  {
    sub_1F6F570(a1, *a2, a3);
    v16 = *(unsigned int *)(a3 + 8);
    v17 = *((unsigned __int16 *)a2 + 8);
    if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v16 + 1, 8);
      v16 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v16) = v17;
    v6 = *(unsigned int *)(a3 + 12);
    v7 = *((unsigned __int16 *)a2 + 9);
    v8 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v8;
    if ( v8 + 1 > v6 )
    {
      sub_2237220(a3, a3 + 16, v8 + 1, 8);
      v8 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v8) = v7;
    v9 = *((_WORD *)a2 + 8);
    ++*(_DWORD *)(a3 + 8);
    if ( !sub_10CCDE0(v9) )
      break;
    v10 = a2[1];
    if ( !v10 )
      v10 = *a2;
    sub_1F6F570(a1, v10, a3);
    result = 1LL << ((unsigned __int8)*((_WORD *)a2 + 8) + 86);
    if ( (result & 0x403C00001LL) != 0 )
      return result;
    v12 = *((unsigned int **)a2 + 1);
    if ( (result & 4) == 0 )
    {
      sub_1F814C0(a1, v12, a3);
      sub_1F814C0(a1, v12 + 6, a3);
      sub_9B9C90(a3, *((_QWORD *)v12 + 7));
      result = *((_QWORD *)v12 + 6);
      v18 = result + 24LL * *((_QWORD *)v12 + 7);
      if ( result != v18 )
      {
        v19 = *((_QWORD *)v12 + 6);
        do
        {
          v20 = v19;
          v19 += 24;
          result = sub_1F814C0(a1, v20, a3);
        }
        while ( v18 != v19 );
      }
      return result;
    }
    v13 = *(unsigned int *)(a3 + 8);
    v14 = *v12;
    if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v13 + 1, 8);
      v13 = *(unsigned int *)(a3 + 8);
    }
    a2 = v12 + 6;
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v13) = v14;
    v15 = *((_QWORD *)a2 - 2);
    ++*(_DWORD *)(a3 + 8);
    sub_1F740F0(v15, *((_QWORD *)a2 - 1), a3);
  }
  sub_9B9C90(a3, a2[1]);
  v24 = *((unsigned __int16 *)a2 + 8);
  v25 = 0;
  if ( (unsigned __int16)(v24 - 7) > 0xCu && (_WORD)v24 != 1 )
    v25 = *((_QWORD *)a2 + 1);
  v26 = sub_1F80CA0((__int64)a1, v25, (unsigned int)(v24 - 7), v21, v22, v23);
  return sub_9B9C90(a3, v26);
}

__int64 __fastcall sub_BD5830(__int64 a1, __int64 a2, int **a3, __m128 a4, __m128 a5, __m128 a6)
{
  unsigned int v8; // r15d
  unsigned int v9; // ecx
  int *v10; // rax
  __int64 *v11; // rbx
  unsigned int v12; // ecx
  __int64 v13; // rsi
  int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  _DWORD *v19; // rbx
  _DWORD *v20; // r12
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 result; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-E8h]
  int v27; // [rsp+8h] [rbp-E0h]
  int v28; // [rsp+Ch] [rbp-DCh]
  unsigned __int8 v29; // [rsp+Ch] [rbp-DCh]
  __int64 v30; // [rsp+10h] [rbp-D8h]
  void *v31; // [rsp+18h] [rbp-D0h]
  __int64 *v32; // [rsp+20h] [rbp-C8h]
  void *v33; // [rsp+20h] [rbp-C8h]
  __int64 v34; // [rsp+28h] [rbp-C0h]
  __int64 v35[23]; // [rsp+30h] [rbp-B8h] BYREF

  if ( (*(_BYTE *)(a2 + 44) & 8) != 0 )
  {
    v9 = -1;
    v8 = 0;
  }
  else
  {
    v8 = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
    v9 = v8 - 1;
  }
  if ( !sub_B70A50((__int64 *)(*(_QWORD *)(a1 + 16) + 8440LL), (__int64)a3, **a3, v9, (_QWORD **)(a2 + 120), 0) )
    return 0;
  v10 = *a3;
  v11 = v35;
  ++*(_DWORD *)(a1 + 300);
  v35[0] = (__int64)v10;
  v32 = v35;
  v34 = 0x1000000001LL;
  if ( v8 <= 1 )
  {
    v13 = 1;
  }
  else
  {
    v12 = 16;
    LODWORD(v13) = 1;
    v14 = 1;
    v15 = 1;
    do
    {
      v17 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v15 + 32);
      if ( (unsigned int)v13 >= v12 )
      {
        v30 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v15 + 32);
        v28 = 2 * v12;
        LODWORD(v13) = v34;
        v11 = (__int64 *)sub_186B270(16LL * v12);
        v12 = v28;
        v17 = v30;
        if ( (_DWORD)v34 )
        {
          if ( (unsigned int)(v34 - 1) <= 2 || v11 == v32 + 1 )
          {
            v25 = 0;
            do
            {
              v11[v25] = v32[v25];
              ++v25;
            }
            while ( (unsigned int)v34 != v25 );
          }
          else
          {
            v18 = 0;
            do
            {
              a4 = (__m128)_mm_loadu_si128((const __m128i *)&v32[v18]);
              *(__m128 *)&v11[v18] = a4;
              v18 += 2;
            }
            while ( 2LL * ((unsigned int)v34 >> 1) != v18 );
            if ( (v34 & 1) != 0 )
              v11[(unsigned int)v34 & 0xFFFFFFFE] = v32[(unsigned int)v34 & 0xFFFFFFFE];
          }
        }
        if ( v32 != v35 && v32 )
        {
          sub_186B220(v32);
          LODWORD(v13) = v34;
          v17 = v30;
          v12 = v28;
        }
        v32 = v11;
        HIDWORD(v34) = v12;
      }
      v16 = (unsigned int)v13;
      ++v14;
      v13 = (unsigned int)(v13 + 1);
      v11[v16] = v17;
      v15 = (unsigned __int16)v14;
      LODWORD(v34) = v13;
    }
    while ( (unsigned __int16)v14 < v8 );
  }
  v19 = (_DWORD *)sub_BDD3C0(a1, v13, v11);
  v20 = *((_DWORD **)*a3 + 4);
  sub_B6F780(
    *(_QWORD **)(a1 + 16),
    (__int64)v19,
    0,
    a4,
    a5,
    a6,
    v21,
    v22,
    v23,
    v26,
    v27,
    v30,
    (__int64)v35,
    (__int64)v32,
    v34,
    v35[0]);
  result = sub_BD4E90(a1, v19, v20);
  if ( v33 != v31 )
  {
    if ( v33 )
    {
      v29 = result;
      sub_186B220(v33);
      return v29;
    }
  }
  return result;
}


/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140042E00
// Address: 0x0000000140042E00

//----- (0000000140042E00) ----------------------------------------------------
__int64 __fastcall sub_140042E00(__int64 a1, int *a2, __int64 a3, int a4)
{
  int v6; // r14d
  __int64 *v7; // r15
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 i; // rdi
  __int64 *v16; // rdi
  __int64 v17; // rax
  size_t v18; // r8
  _OWORD *v19; // rcx
  _OWORD *v20; // rax
  __int64 v21; // rdx
  __int128 v23; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v24; // [rsp+40h] [rbp-58h]
  __int64 *v25; // [rsp+48h] [rbp-50h]
  __int128 v26; // [rsp+50h] [rbp-48h]

  v6 = 0;
  if ( a4 > 0 )
  {
    v7 = (__int64 *)(a1 + 312);
    v8 = a3 + 8;
    do
    {
      v9 = *(_QWORD *)(v8 - 8);
      v10 = *v7;
      v11 = *(_QWORD *)(*v7 + 8);
      if ( *(_QWORD *)(v8 + 8) > 1u )
      {
        *(_QWORD *)&v26 = *(_QWORD *)(*v7 + 8);
        DWORD2(v26) = 0;
        for ( i = v10; !*(_BYTE *)(v11 + 25); v11 = *(_QWORD *)v11 )
        {
          *(_QWORD *)&v26 = v11;
          if ( *(_QWORD *)(v11 + 32) >= v9 )
          {
            DWORD2(v26) = 1;
            i = v11;
          }
          else
          {
            DWORD2(v26) = 0;
            v11 += 16;
          }
        }
        if ( *(_BYTE *)(i + 25) || v9 < *(_QWORD *)(i + 32) )
        {
          if ( v7[1] == 0x8AD8F2FBA93868LL )
            unknown_libname_1(0x8AD8F2FBA93868LL, 0);
          v24 = v7;
          v25 = nullptr;
          v16 = (__int64 *)operator new(0x1D8u);
          v25 = v16;
          v16[4] = v9;
          v16[5] = 0;
          v16[9] = 0;
          memset(v16 + 13, 0, 0x170u);
          *(_QWORD *)&v23 = v16 + 5;
          v16[6] = 0;
          v16[7] = 0;
          v16[8] = 0;
          v16[10] = 0;
          v16[11] = 0;
          v16[12] = 0;
          sub_140009FA0((__int64)(v16 + 13));
          *v16 = v10;
          v16[1] = v10;
          v16[2] = v10;
          *((_WORD *)v16 + 12) = 0;
          v25 = nullptr;
          v23 = v26;
          i = sub_140003FC0(v7, (__int64)&v23, (__int64)v16);
        }
        *(_QWORD *)(i + 40) = *(_QWORD *)(v8 - 8);
        if ( i + 48 != v8 )
        {
          v17 = *(_QWORD *)(v8 + 8);
          v18 = v17 - 1;
          if ( !v17 )
            v18 = 0;
          if ( v18 )
            sub_140001810(i + 48, *(const void **)v8, v18);
          else
            *(_QWORD *)(i + 56) = 0;
        }
        *(_DWORD *)(i + 72) = *(_DWORD *)(v8 + 24);
        sub_140040C10(i + 80, v8 + 32);
        v19 = (_OWORD *)(i + 104);
        v20 = (_OWORD *)(v8 + 56);
        v21 = 2;
        do
        {
          *v19 = *v20;
          v19[1] = v20[1];
          v19[2] = v20[2];
          v19[3] = v20[3];
          v19[4] = v20[4];
          v19[5] = v20[5];
          v19[6] = v20[6];
          v19 += 8;
          *(v19 - 1) = v20[7];
          v20 += 8;
          --v21;
        }
        while ( v21 );
        *v19 = *v20;
        v19[1] = v20[1];
        v19[2] = v20[2];
        v19[3] = v20[3];
        v19[4] = v20[4];
        v19[5] = v20[5];
        *((_QWORD *)v19 + 12) = *((_QWORD *)v20 + 12);
        *(_BYTE *)(i + 464) = *(_BYTE *)(v8 + 416);
        *(_DWORD *)(i + 468) = *(_DWORD *)(v8 + 420);
      }
      else
      {
        v12 = *(_QWORD *)(*v7 + 8);
        v13 = *v7;
        if ( !*(_BYTE *)(v11 + 25) )
        {
          do
          {
            v14 = *(_QWORD *)(v12 + 32);
            if ( v14 >= v9 )
            {
              if ( *(_BYTE *)(v13 + 25) && v9 < v14 )
                v13 = v12;
              v10 = v12;
            }
            else
            {
              v12 += 16;
            }
            v12 = *(_QWORD *)v12;
          }
          while ( !*(_BYTE *)(v12 + 25) );
        }
        if ( !*(_BYTE *)(v13 + 25) )
          v11 = *(_QWORD *)v13;
        while ( !*(_BYTE *)(v11 + 25) )
        {
          if ( v9 >= *(_QWORD *)(v11 + 32) )
          {
            v11 = *(_QWORD *)(v11 + 16);
          }
          else
          {
            v13 = v11;
            v11 = *(_QWORD *)v11;
          }
        }
        sub_140040D60(v7, v10, v13);
      }
      ++v6;
      v8 += 432;
    }
    while ( v6 < a4 );
  }
  if ( a2 )
    *a2 = a4;
  return 1;
}
// 140004240: using guessed type void __fastcall __noreturn unknown_libname_1(_QWORD, _QWORD);

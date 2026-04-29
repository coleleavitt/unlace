__int64 __fastcall sub_32A8C0(__int64 a1, __int16 a2, char a3, __int64 a4, unsigned __int8 a5)
{
  _QWORD *v5; // r12
  _QWORD *v6; // rsi
  unsigned int v7; // r12d
  _QWORD *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v13; // [rsp+8h] [rbp-60h] BYREF
  __int128 v14; // [rsp+10h] [rbp-58h]
  __int64 v15; // [rsp+28h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  __int16 v17; // [rsp+38h] [rbp-30h]
  char v18; // [rsp+3Ah] [rbp-2Eh]
  unsigned __int64 v19; // [rsp+40h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  v17 = a2;
  v18 = a3;
  v13 = nullptr;
  v15 = 0;
  v16 = 0;
  v14 = 0;
  if ( sub_CF9B0(0x7D5u, &v13, &v15, a4, a5, 0, 0) <= 0 )
  {
    v7 = 0;
  }
  else
  {
    if ( a1 )
    {
      v5 = v13;
      v6 = v13 + 1;
      *(_QWORD *)a1 = *v13;
      copy_tinfo_t(a1 + 8, v6);
      *(_WORD *)(a1 + 16) = *((_WORD *)v5 + 8);
      *(_BYTE *)(a1 + 18) = *((_BYTE *)v5 + 18);
    }
    v7 = 1;
  }
  clear_tinfo_t(&v16);
  v8 = v13;
  if ( v13 )
  {
    v9 = v14;
    if ( (_QWORD)v14 )
    {
      v10 = 0;
      do
      {
        v11 = 3 * v10++;
        clear_tinfo_t(&v8[v11 + 1]);
        v8 = v13;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v14 = 0;
    qfree(v8);
  }
  return v7;
}

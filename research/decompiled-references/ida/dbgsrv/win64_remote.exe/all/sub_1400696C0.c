/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400696C0
// Address: 0x00000001400696C0

//----- (00000001400696C0) ----------------------------------------------------
char __fastcall sub_1400696C0(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v3; // r9
  int v5; // r13d
  unsigned int v6; // r15d
  int v7; // eax
  char v8; // si
  unsigned __int64 v9; // r8
  __int64 v10; // rbp
  char v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int8 *v18; // [rsp+78h] [rbp+10h]
  __int64 v19; // [rsp+80h] [rbp+18h]
  int v20; // [rsp+88h] [rbp+20h]

  v19 = a3;
  v3 = a2;
  if ( !a2 || !a1 || a3 < 0 )
    return 0;
  v5 = 0;
  v6 = 0;
  if ( a3 % 3uLL )
    v20 = 3 - a3 % 3uLL;
  else
    v20 = 0;
  if ( a3 )
  {
    do
    {
      v7 = *v3;
      v5 += 8;
      ++v3;
      v6 = v7 | (v6 << 8);
      v18 = v3;
      if ( v5 > 6 )
      {
        v8 = v5 - 6;
        v9 = v6;
        v10 = (v5 - 7) / 6u + 1;
        do
        {
          v11 = aAbcdefghijklmn[(v9 >> v8) & 0x3F];
          v12 = *(_QWORD *)(a1 + 8);
          v13 = v12 - 1;
          if ( !v12 )
            v13 = 0;
          if ( (unsigned __int64)(v13 + 2) > *(_QWORD *)(a1 + 16) )
          {
            *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v13 + 2, 1u);
            v9 = v6;
          }
          *(_QWORD *)(a1 + 8) = v13 + 2;
          v8 -= 6;
          *(_BYTE *)(v13 + *(_QWORD *)a1) = v11;
          *(_BYTE *)(*(_QWORD *)a1 + v13 + 1) = 0;
          --v10;
        }
        while ( v10 );
        v5 += -6 * ((v5 - 7) / 6u + 1);
        a3 = v19;
        v3 = v18;
      }
      v19 = --a3;
    }
    while ( a3 );
    if ( v5 )
      sub_140004830(a1, aAbcdefghijklmn[(v6 << (6 - v5)) & 0x3F]);
  }
  if ( v20 > 0 )
  {
    v14 = (unsigned int)v20;
    do
    {
      v15 = *(_QWORD *)(a1 + 8);
      v16 = v15 - 1;
      if ( !v15 )
        v16 = 0;
      if ( (unsigned __int64)(v16 + 2) > *(_QWORD *)(a1 + 16) )
        *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v16 + 2, 1u);
      *(_QWORD *)(a1 + 8) = v16 + 2;
      *(_BYTE *)(v16 + *(_QWORD *)a1) = 61;
      *(_BYTE *)(*(_QWORD *)a1 + v16 + 1) = 0;
      --v14;
    }
    while ( v14 );
  }
  return 1;
}

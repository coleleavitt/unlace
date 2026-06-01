/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C0B0
// Address: 0x000000000006C0B0

//----- (000000000006C0B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_6C0B0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  char *v4; // rax
  size_t v5; // r15
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rbp
  char *v8; // rdi
  unsigned __int64 v9; // rbp
  int v10; // r15d
  int v11; // eax
  int v12; // r13d
  _BYTE *v13; // rax
  _BYTE *v14; // rax
  _BYTE *v15; // rax
  char *v16; // rax
  size_t v17; // rbp
  __int64 v18; // r13
  __int64 v19; // rbx
  int *v22; // [rsp+20h] [rbp-68h]
  char v23; // [rsp+2Fh] [rbp-59h] BYREF
  _WORD src[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v25[15]; // [rsp+35h] [rbp-53h] BYREF
  _BYTE v26[12]; // [rsp+44h] [rbp-44h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 8);
  v2 = a2[1];
  if ( v2 )
  {
    v3 = a2;
    v4 = pack_dd(src, (unsigned __int64)v25, v2);
    v5 = v4 - (char *)src;
    if ( v4 != (char *)src )
    {
      v6 = *(_QWORD *)(a1 + 8);
      v7 = 0x7FFFFFFFFFFFFFFFLL;
      if ( !__CFADD__(v5, v6) )
        v7 = v5 + v6;
      if ( v6 >= v7 )
      {
        if ( v6 != v7 )
        {
          v23 = 0;
          sub_5E330(a1, v7, &v23);
        }
      }
      else
      {
        if ( *(_QWORD *)(a1 + 16) >= v7 )
        {
          v8 = *(char **)a1;
        }
        else
        {
          v8 = (char *)qvector_reserve(a1, *(char **)a1, v7, 1u);
          *(_QWORD *)a1 = v8;
        }
        memset(&v8[*(_QWORD *)(a1 + 8)], 0, v7 - *(_QWORD *)(a1 + 8));
        *(_QWORD *)(a1 + 8) = v7;
      }
      memcpy((void *)(*(_QWORD *)a1 + v6), src, v5);
    }
    if ( a2[1] )
    {
      v9 = 0;
      v10 = 1;
      v11 = 0;
      v12 = 0;
      do
      {
        v22 = (int *)(*v3 + 16 * v9);
        v13 = pack_dd(src, (unsigned __int64)v26, *v22 - v11);
        v14 = pack_dd(v13, (unsigned __int64)v26, v22[1] - v12);
        v15 = pack_dd(v14, (unsigned __int64)v26, v22[2]);
        v16 = pack_dd(v15, (unsigned __int64)v26, v22[3]);
        v17 = v16 - (char *)src;
        if ( v16 != (char *)src )
        {
          v18 = *(_QWORD *)(a1 + 8);
          v23 = 0;
          sub_5E330(a1, v17 + v18, &v23);
          memcpy((void *)(*(_QWORD *)a1 + v18), src, v17);
        }
        v11 = *v22;
        v12 = v22[1];
        v9 = v10++;
        v3 = a2;
      }
      while ( a2[1] > v9 );
    }
  }
  v19 = *(_QWORD *)(a1 + 8);
  src[0] = v19 - *(_DWORD *)(a1 + 24);
  v23 = 0;
  sub_5E330(a1, v19 + 2, &v23);
  *(_WORD *)(*(_QWORD *)a1 + v19) = src[0];
  return __readfsqword(0x28u);
}

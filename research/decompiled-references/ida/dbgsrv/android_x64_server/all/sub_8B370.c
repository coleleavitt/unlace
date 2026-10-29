/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B370
// Address: 0x000000000008B370

//----- (000000000008B370) ----------------------------------------------------
__int64 __fastcall sub_8B370(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbp
  _BYTE *v8; // rax
  __int64 v9; // r12
  size_t v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r13
  size_t v13; // rcx
  unsigned __int64 v14; // r12
  _BYTE *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  char *v18; // rax

  v2 = *(unsigned __int16 *)(a2 + 24);
  LODWORD(v3) = 0;
  if ( v2 <= 0x3E )
  {
    v4 = 0x5400C00000000000LL;
    if ( _bittest64(&v4, v2) )
    {
      LODWORD(v3) = *(unsigned __int16 *)(a2 + 24);
LABEL_21:
      v16 = *(_QWORD *)(a1 + 8);
      v17 = v16 - 1;
      if ( !v16 )
        v17 = 0;
      if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v17 + 2) )
      {
        v18 = *(char **)a1;
      }
      else
      {
        v18 = (char *)qvector_reserve(a1, *(char **)a1, v17 + 2, 1u);
        *(_QWORD *)a1 = v18;
      }
      *(_QWORD *)(a1 + 8) = v17 + 2;
      v18[v17] = v3;
      *(_BYTE *)(*(_QWORD *)a1 + v17 + 1) = 0;
LABEL_27:
      LOBYTE(v3) = 1;
      return (unsigned int)v3;
    }
    v5 = 68;
    if ( _bittest64(&v5, v2) )
    {
LABEL_12:
      v9 = *(_QWORD *)(a2 + 8);
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v9 != 1 )
        {
          v11 = *(_QWORD *)(a1 + 8);
          v12 = v11 - 1;
          if ( !v11 )
            v12 = 0;
          v13 = v10 + v12;
          v14 = v12 + v9;
          if ( *(_QWORD *)(a1 + 16) >= v14 )
          {
            v15 = *(_BYTE **)a1;
          }
          else
          {
            v15 = qvector_reserve(a1, *(char **)a1, v14, 1u);
            v13 = v10 + v12;
            *(_QWORD *)a1 = v15;
          }
          *(_QWORD *)(a1 + 8) = v14;
          v15[v13] = 0;
          memcpy((void *)(*(_QWORD *)a1 + v12), *(const void **)a2, v10);
        }
      }
      if ( !(_BYTE)v3 )
        goto LABEL_27;
      goto LABEL_21;
    }
    if ( v2 == 4 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      v7 = v6 - 1;
      if ( !v6 )
        v7 = 0;
      v3 = v7 + 2;
      if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v7 + 2) )
      {
        v8 = *(_BYTE **)a1;
      }
      else
      {
        v8 = qvector_reserve(a1, *(char **)a1, v7 + 2, 1u);
        *(_QWORD *)a1 = v8;
      }
      *(_QWORD *)(a1 + 8) = v3;
      v8[v7] = 34;
      *(_BYTE *)(*(_QWORD *)a1 + v7 + 1) = 0;
      LOBYTE(v3) = 34;
      goto LABEL_12;
    }
  }
  return (unsigned int)v3;
}

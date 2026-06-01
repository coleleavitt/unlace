/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9BC80
// Address: 0x000000000009BC80

//----- (000000000009BC80) ----------------------------------------------------
__int64 __fastcall sub_9BC80(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  void *v6; // rbx
  unsigned __int32 v7; // eax
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  void *v11; // rax
  size_t v12; // rax
  void *v13; // rdi
  __int64 v14; // rax
  unsigned int v15; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( !a3 || (LODWORD(v6) = 0, qlseek(a2, a3, 0) == a3) )
  {
    if ( qlread(a2, &v15, 4) != 4 )
    {
LABEL_11:
      LODWORD(v6) = 0;
      return (unsigned int)v6;
    }
    v7 = v15;
    if ( a4 )
    {
      v7 = _byteswap_ulong(v15);
      v15 = v7;
    }
    LODWORD(v6) = 0;
    if ( v7 >= 5 )
    {
      qlseek(a2, -4, 1);
      v8 = qlseek(a2, 0, 1);
      v9 = qlsize(a2) - v8;
      if ( ((v9 | v8) & 0x8000000000000000LL) != 0LL )
      {
LABEL_10:
        v15 = (unsigned int)v6;
        goto LABEL_11;
      }
      if ( v9 < v15 )
      {
        LODWORD(v6) = v9;
        goto LABEL_10;
      }
      v11 = qalloc(v15 + 1);
      if ( !v11 )
        goto LABEL_11;
      v6 = v11;
      v12 = qlread(a2, v11, v15);
      if ( v12 != v15 )
      {
        qfree(v6);
        goto LABEL_11;
      }
      *((_BYTE *)v6 + v12) = 0;
      v13 = *(void **)a1;
      if ( *(_QWORD *)a1 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        qfree(v13);
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 16) = 0;
      }
      v14 = v15 + 1;
      *(_QWORD *)a1 = v6;
      *(_QWORD *)(a1 + 16) = v14;
      *(_QWORD *)(a1 + 8) = v14;
      LOBYTE(v6) = 1;
    }
  }
  return (unsigned int)v6;
}

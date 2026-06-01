/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53CA0
// Address: 0x0000000000053CA0

//----- (0000000000053CA0) ----------------------------------------------------
__int64 __fastcall sub_53CA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  char *v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  size_t v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rbx
  _BYTE *v14; // rax
  unsigned __int64 v15; // r14
  size_t v16; // r12
  __int64 v17; // rax
  _BYTE *v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v21; // [rsp+8h] [rbp-B0h]
  _BYTE src[112]; // [rsp+10h] [rbp-A8h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  v6 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
  v7 = *(_QWORD *)(a1 + 480);
  v21 = v6 - v7;
  if ( qlseek(*(_QWORD *)(a1 + 472), a3 + v7, 0) == -1 )
  {
    LODWORD(v11) = 0;
    sub_3BBA0(a2, "bad offset %08x", a3);
  }
  else
  {
    v8 = *(char **)a2;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      qfree(v8);
      *(_QWORD *)a2 = 0;
      *(_QWORD *)(a2 + 16) = 0;
    }
    while ( 1 )
    {
      v9 = qlread(*(_QWORD *)(a1 + 472), src, 100);
      if ( v9 < 0 )
        break;
      v10 = 0;
      if ( v9 )
      {
        do
        {
          if ( !src[v10] )
            break;
          ++v10;
        }
        while ( (int)v10 < v9 );
      }
      v11 = (int)v10;
      v12 = *(_QWORD *)(a2 + 8);
      v13 = v12 - 1;
      if ( !v12 )
        v13 = 0;
      v14 = *(_BYTE **)a2;
      v15 = v13 + (int)v10 + 1;
      if ( *(_QWORD *)(a2 + 16) < v15 )
      {
        v14 = qvector_reserve(a2, *(char **)a2, v13 + (int)v10 + 1, 1u);
        *(_QWORD *)a2 = v14;
      }
      *(_QWORD *)(a2 + 8) = v15;
      v14[v13 + v11] = 0;
      memmove((void *)(*(_QWORD *)a2 + v13), src, v11);
      if ( (unsigned int)v11 < 0x64 )
      {
        LOBYTE(v11) = 1;
        goto LABEL_20;
      }
    }
    v16 = __strlen_chk("{truncated name}", 17);
    v17 = *(_QWORD *)(a2 + 8);
    v11 = v17 - 1;
    if ( !v17 )
      v11 = 0;
    v18 = *(_BYTE **)a2;
    v19 = v16 + v11 + 1;
    if ( *(_QWORD *)(a2 + 16) < v19 )
    {
      v18 = qvector_reserve(a2, *(char **)a2, v16 + v11 + 1, 1u);
      *(_QWORD *)a2 = v18;
    }
    *(_QWORD *)(a2 + 8) = v19;
    v18[v11 + v16] = 0;
    memmove((void *)(*(_QWORD *)a2 + v11), "{truncated name}", v16);
    LODWORD(v11) = 0;
  }
LABEL_20:
  qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v21, 0);
  return (unsigned int)v11;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);

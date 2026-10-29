/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A50B0
// Address: 0x00000000000A50B0

//----- (00000000000A50B0) ----------------------------------------------------
__int64 __fastcall sub_A50B0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  char *v6; // rax
  char *v7; // rbx
  __int64 v8; // rcx
  char *v9; // r15
  char *v10; // rax
  size_t v12; // rax
  size_t v13; // r12
  size_t v14; // r13
  char *v15; // rdi
  char *s; // [rsp+0h] [rbp-48h] BYREF
  char *v18; // [rsp+8h] [rbp-40h]
  unsigned __int64 v19; // [rsp+10h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  v6 = (char *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 16LL))(
                 a1,
                 *(unsigned __int8 *)(*(_QWORD *)a2 + 4LL),
                 a2);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(unsigned int *)v6;
    s = v6 + 5;
    v18 = &v6[v8 + 5];
    a3 = unpack_dd((unsigned __int64 *)&s, (unsigned __int64)v18);
    if ( a4 && a3 < 0 )
    {
      v9 = s;
      v10 = s;
      do
      {
        if ( v10 >= v18 )
          goto LABEL_11;
      }
      while ( *v10++ != 0 );
      s = v10;
      if ( !v9 || (v12 = strlen(v9)) == 0 )
      {
LABEL_11:
        *(_QWORD *)(a4 + 8) = 0;
        goto LABEL_12;
      }
      v13 = v12;
      v14 = v12 + 1;
      if ( *(_QWORD *)(a4 + 16) >= v12 + 1 )
      {
        v15 = *(char **)a4;
      }
      else
      {
        v15 = (char *)qvector_reserve(a4, *(char **)a4, v12 + 1, 1u);
        *(_QWORD *)a4 = v15;
      }
      *(_QWORD *)(a4 + 8) = v14;
      memmove(v15, v9, v13);
      *(_BYTE *)(*(_QWORD *)a4 + v13) = 0;
    }
LABEL_12:
    qfree(v7);
  }
  return (unsigned int)a3;
}

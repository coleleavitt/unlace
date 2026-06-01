/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479F30
// Address: 0x0000000000479F30

//----- (0000000000479F30) ----------------------------------------------------
unsigned __int64 __fastcall sub_479F30(signed int a1, const char *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbp
  _BYTE *v4; // r13
  char *v5; // rax
  unsigned __int64 result; // rax
  size_t v7; // rax
  size_t v8; // r14
  size_t v9; // r15
  _BYTE *v10; // rax
  _BYTE *v11; // rax

  if ( (unsigned int)a1 > 3 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(481);
    BUG();
  }
  v2 = __readfsqword(0);
  v3 = 24LL * a1 + 32 + v2 - 256;
  v4 = *(_BYTE **)v3;
  if ( a2 )
  {
    if ( *a2 )
    {
      v7 = strlen(a2);
      v8 = v7;
      if ( v7 )
      {
        v9 = v7 + 1;
        if ( *(_QWORD *)(v3 + 16) < v7 + 1 )
        {
          v11 = sub_481540(v3, v4, v7 + 1, 1u);
          *(_QWORD *)v3 = v11;
          v4 = v11;
        }
        *(_QWORD *)(v3 + 8) = v9;
        memmove(v4, a2, v8);
        *(_BYTE *)(*(_QWORD *)v3 + v8) = 0;
        v4 = *(_BYTE **)v3;
      }
      else
      {
        *(_QWORD *)(v3 + 8) = 0;
      }
    }
    else
    {
      if ( *(_QWORD *)(v3 + 16) <= 1u )
      {
        v10 = sub_481540(24LL * a1 + 32 + v2 - 256, *(void **)v3, 2u, 1u);
        *(_QWORD *)v3 = v10;
        v4 = v10;
      }
      *(_QWORD *)(v3 + 8) = 2;
      *v4 = 32;
      *(_BYTE *)(*(_QWORD *)v3 + 1LL) = 0;
      v5 = &byte_4C8075;
      if ( *(_QWORD *)(v3 + 8) )
        v5 = *(char **)v3;
      *v5 = 0;
      v4 = *(_BYTE **)v3;
    }
  }
  else
  {
    if ( v4 )
    {
      *(_QWORD *)(v3 + 8) = 0;
      j__free(v4);
      *(_QWORD *)v3 = 0;
      *(_QWORD *)(v3 + 16) = 0;
    }
    v4 = nullptr;
  }
  result = __readfsqword(0);
  *(_QWORD *)(result + 8LL * a1 - 256) = v4;
  return result;
}
// 4C8075: using guessed type char byte_4C8075;
// 4C94E1: using guessed type char byte_4C94E1;

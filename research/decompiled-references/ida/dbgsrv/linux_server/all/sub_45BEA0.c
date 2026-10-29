/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45BEA0
// Address: 0x000000000045BEA0

//----- (000000000045BEA0) ----------------------------------------------------
unsigned __int64 __fastcall sub_45BEA0(char **a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax
  unsigned __int64 v3; // rbp
  size_t v4; // rbx
  unsigned __int64 v5; // r14
  char *v7; // rsi
  char *v8; // rax
  char *v9; // rax
  _BYTE src[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  unsigned __int64 v11[6]; // [rsp+18h] [rbp-30h] BYREF

  v11[0] = __readfsqword(0x28u);
  v2 = sub_47FC90(src, (unsigned __int64)v11, a2) - src;
  if ( v2 )
  {
    v3 = (unsigned __int64)a1[1];
    v4 = v2;
    v5 = v3 + v2;
    if ( __CFADD__(v3, v2) )
    {
      if ( v3 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v3 != 0x7FFFFFFFFFFFFFFFLL )
          a1[1] = (char *)0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy(&(*a1)[v3], src, v4);
        return v11[0] - __readfsqword(0x28u);
      }
      v5 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v7 = *a1;
    v8 = a1[1];
    if ( (unsigned __int64)a1[2] < v5 )
    {
      v9 = (char *)sub_481540((__int64)a1, v7, v5, 1u);
      *a1 = v9;
      v7 = v9;
      v8 = a1[1];
    }
    memset(&v8[(_QWORD)v7], 0, v5 - (_QWORD)v8);
    a1[1] = (char *)v5;
    goto LABEL_6;
  }
  return v11[0] - __readfsqword(0x28u);
}

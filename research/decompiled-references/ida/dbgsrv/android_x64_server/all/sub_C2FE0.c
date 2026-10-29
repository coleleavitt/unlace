/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C2FE0
// Address: 0x00000000000C2FE0

//----- (00000000000C2FE0) ----------------------------------------------------
unsigned __int64 __fastcall sub_C2FE0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rax
  char *v5; // rdi
  char *v6; // rdi
  char v8; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a2 )
  {
    v3 = a2 + 1;
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 >= a2 + 1 )
    {
      if ( v4 != a2 + 1 )
      {
        v8 = 0;
        sub_5F0D0(a1, a2 + 1, &v8);
      }
    }
    else
    {
      if ( *(_QWORD *)(a1 + 16) >= v3 )
      {
        v5 = *(char **)a1;
      }
      else
      {
        v5 = (char *)qvector_reserve(a1, *(char **)a1, v3, 1u);
        *(_QWORD *)a1 = v5;
        v4 = *(_QWORD *)(a1 + 8);
      }
      memset(&v5[v4], 0, v3 - v4);
      *(_QWORD *)(a1 + 8) = v3;
    }
    *(_BYTE *)(*(_QWORD *)a1 + a2) = 0;
  }
  else
  {
    v6 = *(char **)a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v6);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
  }
  return __readfsqword(0x28u);
}

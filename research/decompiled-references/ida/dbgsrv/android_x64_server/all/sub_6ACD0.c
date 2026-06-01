/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6ACD0
// Address: 0x000000000006ACD0

//----- (000000000006ACD0) ----------------------------------------------------
bool __fastcall sub_6ACD0(char *a1, __int64 a2, const char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r15
  const void *v7; // r13
  char *v8; // rdi
  unsigned __int64 v9; // rbx
  void *v11; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-40h]
  __int64 v13; // [rsp+10h] [rbp-38h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  sub_6AE00((__int64)&v11, a1, a3, a4, a5, a6);
  if ( a2 && &v11 != (void **)a2 )
  {
    v6 = v12;
    if ( v12 < 2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
    }
    else
    {
      v7 = v11;
      if ( *(_QWORD *)(a2 + 16) >= v12 )
      {
        v8 = *(char **)a2;
      }
      else
      {
        v8 = (char *)qvector_reserve(a2, *(char **)a2, v12, 1u);
        *(_QWORD *)a2 = v8;
      }
      *(_QWORD *)(a2 + 8) = v6;
      memmove(v8, v7, v6 - 1);
      *(_BYTE *)(*(_QWORD *)a2 + v6 - 1) = 0;
    }
  }
  v9 = v12;
  if ( v11 )
  {
    v12 = 0;
    qfree(v11);
    v11 = nullptr;
    v13 = 0;
  }
  return v9 < 2;
}

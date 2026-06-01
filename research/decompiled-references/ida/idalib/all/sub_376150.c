__int64 __fastcall sub_376150(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  size_t v3; // rbp
  size_t v5; // r13
  void *v6; // rax
  char v7[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v8; // [rsp+408h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  if ( get_root_filename(v7) <= 0 )
  {
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
  }
  else
  {
    v2 = strlen(v7);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v3 = v2;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v2 )
    {
      v5 = v2 + 1;
      v6 = (void *)qvector_reserve(a2 + 8, 0, v2 + 1, 1);
      *(_QWORD *)(a2 + 8) = v6;
      *(_QWORD *)(a2 + 16) = v5;
      memmove(v6, v7, v3);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v3) = 0;
    }
  }
  return 0;
}

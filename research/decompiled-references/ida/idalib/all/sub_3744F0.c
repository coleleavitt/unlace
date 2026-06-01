__int64 __fastcall sub_3744F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  size_t v3; // rax
  size_t v5; // r13
  size_t v6; // rbp
  void *v7; // rax
  char v8[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v9; // [rsp+408h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 8);
  v9 = __readfsqword(0x28u);
  ea2str(v8, 1024, v2);
  v3 = strlen(v8);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  if ( v3 )
  {
    v5 = v3 + 1;
    v6 = v3;
    v7 = (void *)qvector_reserve(a2 + 8, 0, v3 + 1, 1);
    *(_QWORD *)(a2 + 8) = v7;
    *(_QWORD *)(a2 + 16) = v5;
    memmove(v7, v8, v6);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v6) = 0;
  }
  return 0;
}

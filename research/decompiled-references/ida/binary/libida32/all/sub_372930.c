__int64 __fastcall sub_372930(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  size_t v3; // rax
  size_t v4; // r12
  size_t v6; // r13
  void *v7; // rax
  char v8[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v9; // [rsp+408h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v2 = idadir(0);
  if ( qstpncpy(v8, v2, 1024) - (__int64)v8 <= 0 )
  {
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
  }
  else
  {
    v3 = strlen(v8);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v4 = v3;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v3 )
    {
      v6 = v3 + 1;
      v7 = (void *)qvector_reserve(a2 + 8, 0, v3 + 1, 1);
      *(_QWORD *)(a2 + 8) = v7;
      *(_QWORD *)(a2 + 16) = v6;
      memmove(v7, v8, v4);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v4) = 0;
    }
  }
  return 0;
}


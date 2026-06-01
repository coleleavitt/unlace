unsigned __int64 __fastcall sub_179560(__int64 a1, const char *a2, const char *a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rax
  char *v9; // [rsp+0h] [rbp-38h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  v9 = nullptr;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  if ( (unsigned __int64)a2 | (unsigned __int64)a3 )
  {
    sub_178DA0(a1, a3);
    if ( a2 && !(unsigned __int8)qisdir() )
      sub_178DA0(a1, a2);
  }
  else
  {
    v9 = (char *)qvector_reserve();
    strcpy(v9, "All files|*");
    sub_178DA0(a1, v9);
  }
  if ( !sub_1779E0((__int64 *)a1, "*") && !sub_1779E0((__int64 *)a1, "*.*") )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v5 + 1) )
    {
      v8 = qvector_reserve();
      *(_QWORD *)a1 = v8;
      v6 = v8;
      v5 = *(_QWORD *)(a1 + 8);
    }
    v7 = v6 + 48 * v5;
    *(_QWORD *)v7 = 0;
    *(_QWORD *)(v7 + 24) = 0;
    *(_OWORD *)(v7 + 8) = 0;
    *(_OWORD *)(v7 + 32) = 0;
    ++*(_QWORD *)(a1 + 8);
    sub_1773F0((__int64 *)v7, "All files|*", nullptr);
  }
  if ( v9 )
    qfree();
  return v10 - __readfsqword(0x28u);
}


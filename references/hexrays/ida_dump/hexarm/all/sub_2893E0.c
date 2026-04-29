__int64 __fastcall sub_2893E0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebp
  int v5; // eax
  __int64 v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 12) == -1
    && (v2 = *(_QWORD *)(a2 + 24), *(_DWORD *)(v2 + 12) == -1)
    && ((v5 = *(_DWORD *)(v2 + 8), v5 == 65) || v5 == 49 && *(_DWORD *)(*(_QWORD *)(v2 + 24) + 8LL) == 65)
    && (sub_283FC0(&v8, a1, a2), *v8 != v9)
    && (v6 = *(_QWORD *)(v9 + 8) + 16LL, v3 = sub_289250(a1[8], v2, v6), (_BYTE)v3) )
  {
    sub_255410(v6);
    v7 = sub_241C70(*(_QWORD *)(a2 + 24));
    if ( v7 != -1 )
      *(_QWORD *)a2 = v7;
  }
  else
  {
    return 0;
  }
  return v3;
}

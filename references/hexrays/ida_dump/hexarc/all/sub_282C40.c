__int64 __fastcall sub_282C40(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  _QWORD *v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 24);
  if ( (unsigned int)(*(_DWORD *)(v2 + 8) - 17) <= 1
    && (v5 = *(_QWORD **)(v2 + 24),
        sub_27C880(&v8, a1, a2),
        v3 = sub_282A60((__int64)a1, &v8, *(_QWORD *)(v2 + 24)),
        (_BYTE)v3) )
  {
    v6 = v9;
    **(_QWORD **)(v9 + 40) = *v5;
    v7 = sub_23A530(*(_QWORD *)(v6 + 40));
    if ( v7 != -1 )
      *(_QWORD *)(v6 + 16) = v7;
  }
  else
  {
    return 0;
  }
  return v3;
}

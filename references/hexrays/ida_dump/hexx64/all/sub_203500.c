__int64 __fastcall sub_203500(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rdi
  int *v9; // rbx
  int *i; // r12
  _QWORD *v11; // rax
  unsigned int v12; // ebx
  _QWORD v14[9]; // [rsp+0h] [rbp-48h] BYREF

  v14[3] = __readfsqword(0x28u);
  v14[0] = 0;
  v14[1] = 0;
  sub_32F770(a2 + 24, v14);
  sub_1EFA10(
    *(_DWORD **)(*(_QWORD *)(a1 + 56) + 1504LL),
    (__int64 *)(*(_QWORD *)(a1 + 56) + 496LL),
    a3,
    *(_DWORD *)(a3 + 88),
    v14,
    *(_DWORD *)(a2 + 40));
  v8 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(*(_QWORD *)(v8 + 1496) + 604LL) & 0x10) != 0 )
  {
    sub_1F08B0(v8, -1, 20, v5, v6, v7);
    sub_106EE0(*(_QWORD *)(a1 + 56), a2, *(_QWORD *)(a1 + 72), *(_QWORD **)(a1 + 80));
    v9 = *(int **)(a1 + 16);
    for ( i = &v9[*(_QWORD *)(a1 + 24)]; i != v9; ++v9 )
    {
      while ( 1 )
      {
        v11 = sub_104DF0((unsigned __int64 *)(**(_QWORD **)(a1 + 72) + 24LL * *v9), a2);
        if ( v11 )
        {
          if ( (v11[6] & 4) == 0 )
            break;
        }
        if ( i == ++v9 )
          goto LABEL_8;
      }
      sub_106EE0(*(_QWORD *)(a1 + 56), (unsigned __int64)v11, *(_QWORD *)(a1 + 72), *(_QWORD **)(a1 + 80));
    }
LABEL_8:
    v12 = 0;
  }
  else
  {
    v12 = -20;
  }
  cleanup_argloc(v14);
  return v12;
}

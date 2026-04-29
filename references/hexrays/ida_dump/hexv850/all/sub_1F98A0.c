void __fastcall sub_1F98A0(__int64 a1, int a2, int a3)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v6; // rdx
  __int64 v8; // r15
  int *v9; // rax
  int *v10; // rdx
  int *v11; // rdi
  int v12; // [rsp+Ch] [rbp-5Ch]
  __int64 v13; // [rsp+10h] [rbp-58h] BYREF
  __int64 v14; // [rsp+18h] [rbp-50h]
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v3 = a1 + 56;
  v15 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v4 + 808) != a1 + 56 )
  {
    if ( !under_debugger )
      sub_37CFE0(51777);
LABEL_30:
    BUG();
  }
  v6 = *(_QWORD *)(v4 + 432);
  if ( (*(_BYTE *)(v6 + 104LL * a2 + 25) & 1) == 0 )
    goto LABEL_14;
  if ( *(_BYTE *)(v4 + 320)
    || (v13 = -1,
        v14 = 0,
        v8 = v6 + 104LL * a3,
        v12 = *(_DWORD *)(v8 + 88),
        !(unsigned __int8)sub_1BE390(v8, (__int64)&v13, v12))
    || (HIDWORD(v14) = v12, !sub_1EB530(v4, (__int64)&v13, *(_QWORD *)(v8 + 16))) )
  {
    if ( !under_debugger )
      sub_37CFE0(51661);
    goto LABEL_30;
  }
  v4 = *(_QWORD *)(a1 + 8);
  v9 = *(int **)(v4 + 456);
  v10 = &v9[*(_QWORD *)(v4 + 464)];
  v11 = v9;
  if ( v9 != v10 )
  {
    while ( *v11 != a2 )
    {
      if ( v10 == ++v11 )
        goto LABEL_9;
    }
    if ( v10 != v11 )
    {
      while ( *v9 != a3 )
      {
        if ( v10 == ++v9 )
          goto LABEL_7;
      }
      if ( v10 == v9 )
      {
LABEL_7:
        *v11 = a3;
        goto LABEL_8;
      }
      memmove(v11, v11 + 1, (char *)v10 - (char *)v11 - 4);
      --*(_QWORD *)(v4 + 464);
LABEL_8:
      *(_DWORD *)(v8 + 24) |= 0x100u;
      v4 = *(_QWORD *)(a1 + 8);
      v9 = *(int **)(v4 + 456);
      v10 = &v9[*(_QWORD *)(v4 + 464)];
    }
LABEL_9:
    if ( v9 != v10 )
    {
      do
      {
        if ( *v9 > a2 )
          --*v9;
        ++v9;
      }
      while ( v9 != v10 );
      v4 = *(_QWORD *)(a1 + 8);
    }
  }
LABEL_14:
  if ( *(_DWORD *)(a1 + 104) > a2 )
  {
    sub_1F9700(*(_QWORD *)(v4 + 800), v4, a2, a2);
    v4 = *(_QWORD *)(a1 + 8);
  }
  sub_1F9700(v3, v4, a2, a2);
  sub_1EFEB0(*(_QWORD *)(a1 + 8), a2);
}

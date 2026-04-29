__int64 __fastcall sub_3EBAE0(__int64 a1, __int64 a2)
{
  const char *v3; // rbp
  __int64 v4; // r14
  unsigned int v5; // ebp
  __int64 v6; // rdi
  int v7; // eax
  unsigned __int64 v8; // r13
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // r13d
  __int64 v13; // r12
  unsigned __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  char v15[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v3 = *(const char **)(a2 + 40);
  v16 = __readfsqword(0x28u);
  if ( (!strcmp(v3, "__bextr_u32") || !strcmp(v3, "__bextr_u64"))
    && (v4 = *(_QWORD *)(a2 + 72), v5 = sub_11D940((char *)(*(_QWORD *)(v4 + 24) + 160LL), &v14, 0), (_BYTE)v5) )
  {
    v6 = *(_QWORD *)(v4 + 24);
    v7 = *(_DWORD *)(v6 + 4);
    v8 = 8 * v7;
    if ( v8 < v14 )
      v14 = 8 * v7;
    sub_124EA0(v6 + 80, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), *(_QWORD *)(a2 + 24), 1);
    sub_123B10(
      *(char **)(v4 + 24),
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL),
      23,
      *(_QWORD *)(a2 + 24),
      (unsigned __int8 *)(*(_QWORD *)(v4 + 24) + 80LL));
    if ( v14 < v8 )
    {
      v9 = -1;
      if ( (unsigned __int64)(int)v14 <= 0x3F )
        v9 = (1LL << v14) - 1;
      sub_123D40(
        *(char **)(v4 + 24),
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL),
        20,
        *(_QWORD *)(a2 + 24),
        v9,
        *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4LL));
    }
    v10 = *(_QWORD *)(v4 + 24);
    if ( *(_BYTE *)v10 == 4 )
    {
      v13 = *(_QWORD *)(v10 + 8);
      *(_DWORD *)a2 = *(_DWORD *)v13;
      sub_11A5D0((char *)(a2 + 32), (char *)(v13 + 32));
      sub_11A5D0((char *)(a2 + 48), (char *)(v13 + 48));
      LODWORD(v13) = *(_DWORD *)(a2 + 68);
      sub_11A960(a2 + 64);
      *(_DWORD *)(a2 + 68) = v13;
    }
    else
    {
      *(_DWORD *)a2 = 4;
      sub_121540((__int64)v15, *(unsigned __int8 **)(v4 + 24));
      sub_11A5D0((char *)(a2 + 32), v15);
      v11 = *(_DWORD *)(a2 + 68);
      sub_11A960(a2 + 64);
      *(_DWORD *)(a2 + 68) = v11;
      sub_11A960((__int64)v15);
    }
  }
  else
  {
    return 0;
  }
  return v5;
}

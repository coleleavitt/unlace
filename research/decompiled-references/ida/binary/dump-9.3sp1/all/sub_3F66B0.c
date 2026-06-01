__int64 __fastcall sub_3F66B0(__int64 a1, __int64 a2)
{
  const char *v3; // rbp
  __int64 v4; // r14
  unsigned int v5; // ebp
  __int64 v6; // rdi
  int v7; // eax
  unsigned __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // r13d
  __int64 v15; // r12
  unsigned __int64 v16; // [rsp+8h] [rbp-50h] BYREF
  char v17[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v3 = *(const char **)(a2 + 40);
  v18 = __readfsqword(0x28u);
  if ( (!strcmp(v3, "__bextr_u32") || !strcmp(v3, "__bextr_u64"))
    && (v4 = *(_QWORD *)(a2 + 72), v5 = sub_11FD80((char *)(*(_QWORD *)(v4 + 24) + 160LL), &v16, 0), (_BYTE)v5) )
  {
    v6 = *(_QWORD *)(v4 + 24);
    v7 = *(_DWORD *)(v6 + 4);
    v8 = 8 * v7;
    if ( v8 < v16 )
      v16 = 8 * v7;
    sub_1273B0(v6 + 80, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), *(_QWORD *)(a2 + 24), 1);
    sub_126010(
      *(char **)(v4 + 24),
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL),
      23,
      *(_QWORD *)(a2 + 24),
      (unsigned __int8 *)(*(_QWORD *)(v4 + 24) + 80LL));
    v10 = v16;
    if ( v16 < v8 )
    {
      v11 = -1;
      if ( (unsigned __int64)(int)v16 <= 0x3F )
        v11 = (1LL << v16) - 1;
      sub_126240(
        *(char **)(v4 + 24),
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL),
        0x14u,
        *(_QWORD *)(a2 + 24),
        v11,
        *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4LL));
    }
    v12 = *(_QWORD *)(v4 + 24);
    if ( *(_BYTE *)v12 == 4 )
    {
      v15 = *(_QWORD *)(v12 + 8);
      *(_DWORD *)a2 = *(_DWORD *)v15;
      sub_11CA10((char *)(a2 + 32), (char *)(v15 + 32));
      sub_11CA10((char *)(a2 + 48), (char *)(v15 + 48));
      LODWORD(v15) = *(_DWORD *)(a2 + 68);
      sub_11CDA0(a2 + 64);
      *(_DWORD *)(a2 + 68) = v15;
    }
    else
    {
      *(_DWORD *)a2 = 4;
      sub_123A40((__int64)v17, *(unsigned __int8 **)(v4 + 24), v9, v10);
      sub_11CA10((char *)(a2 + 32), v17);
      v13 = *(_DWORD *)(a2 + 68);
      sub_11CDA0(a2 + 64);
      *(_DWORD *)(a2 + 68) = v13;
      sub_11CDA0((__int64)v17);
    }
  }
  else
  {
    return 0;
  }
  return v5;
}

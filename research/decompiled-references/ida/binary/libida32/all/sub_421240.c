unsigned __int64 __fastcall sub_421240(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbp
  char *v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 1480LL) + 601LL) != 1 || !a2 )
    return 0;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v2 - 8);
    *(_QWORD *)(a1 + 16) = v2 - 1;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v3 + 1;
  }
  v7[0] = v3;
  v4 = sub_420FD0((char **)(a1 + 40), v7);
  v5 = *(_QWORD *)v4;
  *(_QWORD *)v4 = a2;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return v3;
}


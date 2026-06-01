__int64 __fastcall sub_867C50(_QWORD *a1, int a2, __int64 a3)
{
  _QWORD *v4; // rax
  bool v5; // dl

  v4 = sub_867B60((__int64)a1, 11);
  if ( !v4 )
    return *(unsigned int *)a1;
  *(_BYTE *)v4 = 10;
  a1[15] += 10LL;
  v5 = *((_BYTE *)&unk_23C2F30 + a2) > 7u;
  *(_QWORD *)((char *)v4 + 3) = a3;
  *((_BYTE *)v4 + 1) = v5 + 72;
  *((_BYTE *)v4 + 2) = byte_23C2F10[a2] | 0xB8;
  return 0;
}

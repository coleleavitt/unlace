__int64 __fastcall sub_1F991F0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r13
  _BYTE *v5; // r14
  char v6; // al
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  _BYTE *v9; // rax
  __int64 v10; // rdi
  unsigned int *v11; // rax

  v3 = sub_B73640(a2);
  if ( !v3 )
    return sub_1F6B920(a1[2]);
  v4 = v3;
  v5 = (_BYTE *)sub_B738B0(a2);
  if ( v5 )
  {
    v6 = sub_B7C390(a2);
    v7 = (-(__int64)(v6 == 0) & 0xFFFFFFFFFFFFFFF0LL) + 19;
    v8 = (-(__int64)(v6 == 0) & 0xFFFFFFFFFFFFFFF0LL) + 17;
    if ( (*v5 & 4) == 0 )
      v7 = v8;
    if ( (*v5 & 8) != 0 )
      v7 |= 4uLL;
    v9 = sub_B738D0(a2);
    v10 = a1[2];
    if ( v9 && (unsigned int)(*(_DWORD *)v9 - 2) <= 1 )
    {
      sub_9B9C90(v10, v7 | 8);
      v11 = (unsigned int *)sub_B738D0(a2);
      sub_1F986C0(a1, v11);
    }
    else
    {
      sub_9B9C90(v10, v7);
    }
  }
  else
  {
    sub_9B9C90(a1[2], 1);
  }
  return sub_183F100((__int64)(a1 + 3), v4);
}

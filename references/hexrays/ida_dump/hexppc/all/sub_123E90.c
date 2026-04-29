__int64 __fastcall sub_123E90(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  char v6; // al
  _BYTE *v7; // rdx
  _BYTE vars0[4]; // [rsp+0h] [rbp+0h] BYREF
  int vars4; // [rsp+4h] [rbp+4h]
  __int64 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  sub_120000((__int64)vars0, (unsigned __int8 *)a1);
  v4 = sub_123E10((unsigned __int64)vars0, a2, *(_DWORD *)(a1 + 4) - a3, 0);
  if ( (_BYTE)v4 )
  {
    v6 = vars0[0];
    v7 = vars0;
    if ( (unsigned __int64)vars4 > 8 && vars0[0] == 4 )
    {
      v4 = 0;
      if ( *(_DWORD *)vars8 != 8 )
        goto LABEL_2;
      v7 = (_BYTE *)(vars8 + 32);
      v6 = *(_BYTE *)(vars8 + 32);
    }
    if ( v6 == 2 )
      LOBYTE(v4) = sub_326890(*(_QWORD *)(*((_QWORD *)v7 + 1) + 16LL), *((unsigned int *)v7 + 1), 0) == 0;
    else
      v4 = 0;
  }
LABEL_2:
  sub_119360((__int64)vars0);
  return v4;
}

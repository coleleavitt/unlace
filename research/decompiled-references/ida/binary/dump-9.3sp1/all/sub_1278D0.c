__int64 __fastcall sub_1278D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  unsigned int v5; // ebx
  char v7; // al
  _BYTE *v8; // rdx
  _BYTE vars0[4]; // [rsp+0h] [rbp+0h] BYREF
  int vars4; // [rsp+4h] [rbp+4h]
  __int64 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  v4 = a3;
  sub_123A40((__int64)vars0, (unsigned __int8 *)a1, a3, a4);
  v5 = sub_127850((unsigned __int64)vars0, a2, *(_DWORD *)(a1 + 4) - v4, 0);
  if ( (_BYTE)v5 )
  {
    v7 = vars0[0];
    v8 = vars0;
    if ( (unsigned __int64)vars4 > 8 && vars0[0] == 4 )
    {
      v5 = 0;
      if ( *(_DWORD *)vars8 != 8 )
        goto LABEL_2;
      v8 = (_BYTE *)(vars8 + 32);
      v7 = *(_BYTE *)(vars8 + 32);
    }
    if ( v7 == 2 )
      LOBYTE(v5) = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v8 + 1) + 16LL), *((unsigned int *)v8 + 1), 0) == 0;
    else
      v5 = 0;
  }
LABEL_2:
  sub_11CDA0((__int64)vars0);
  return v5;
}

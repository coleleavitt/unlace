__int64 __fastcall sub_75A2F0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // ebx
  char *v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int8 v8; // al
  char v9; // r14

  v2 = 1;
  v3 = 0;
  v4 = qword_2CD44C0;
  v5 = (unsigned int)((_DWORD)qword_2CD44C0 - qword_2CCCD68);
  do
  {
    v6 = v2++;
    v7 = (unsigned __int8)qword_2CD44C0[v6];
    v8 = (qword_2CD44C0[v6] | 0x20) - 97;
    if ( v8 > 0x19u )
      goto LABEL_17;
    v3 = (char)v8 + 26 * v3;
    if ( (unsigned int)v5 < v3 )
      goto LABEL_17;
    v7 &= 0x20u;
  }
  while ( !(_DWORD)v7 );
  if ( !v3 )
    goto LABEL_17;
  v9 = qword_2CD44C0[-v3];
  if ( !(_BYTE)a1 )
  {
    if ( (unsigned __int8)(v9 - 48) <= 9u )
      goto LABEL_8;
    goto LABEL_15;
  }
  if ( v9 != 95 )
  {
    if ( (unsigned int)v9 > 0x7F
      || (v7 = (unsigned __int64)*__ctype_b_loc(), (*(_BYTE *)(v7 + 2LL * v9 + 1) & 4) == 0)
      || v9 == 81 )
    {
LABEL_15:
      if ( !a2 )
        return 0;
LABEL_17:
      sub_76E6C0(a1, a2, v7, v5);
    }
  }
LABEL_8:
  if ( a2 )
    *a2 = &v4[v2];
  return v3;
}

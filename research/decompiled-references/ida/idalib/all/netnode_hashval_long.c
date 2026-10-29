__int64 __fastcall netnode_hashval_long(__int64 a1, const char *a2, char a3)
{
  __int64 v3; // rbp
  unsigned __int16 *v4; // rax
  __int64 v5; // rax
  __int64 v10; // rdi

  v10 = *(_QWORD *)(qword_2CCB598 + 1736);
  if ( a1 == -1 || !a2 )
    JUMPOUT(0x7AD6F0);
  sub_7AD400(v10, a1, a3, a2, 1);
  v3 = *(_QWORD *)(v10 + 8);
  if ( !v3 )
    JUMPOUT(0x7AD718);
  v4 = (unsigned __int16 *)sub_7443D0(*(_QWORD *)(v10 + 8), (unsigned __int16 *)(v10 + 53));
  if ( !v4 )
    JUMPOUT(0x7AD6F8);
  v5 = (__int64)v4 + *v4 + 2;
  if ( (*(_BYTE *)(v3 + 6016) & 2) == 0 )
    JUMPOUT(0x7AD708);
  return *(unsigned int *)(v5 + 2);
}

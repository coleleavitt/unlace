__int64 __fastcall netnode_qhashfirst(__int64 a1, __int64 a2, char a3)
{
  char v3; // r13
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  void *v8; // rdi
  __int64 v13; // rdi

  v13 = *(_QWORD *)(qword_2CCB598 + 1736);
  if ( a1 == -1 )
    JUMPOUT(0x7ADD10);
  v3 = a3;
  v4 = a2;
  v5 = *(_QWORD *)(qword_2CCB598 + 1736);
  if ( *(_QWORD *)(v13 + 8) )
    JUMPOUT(0x7ADCF0);
  *(_WORD *)(v13 + 53) = 10;
  v6 = swap64(a1);
  v7 = *(_QWORD *)(v13 + 8);
  *(_BYTE *)(v5 + 64) = v3;
  *(_QWORD *)(v5 + 56) = v6;
  if ( !v7 )
    JUMPOUT(0x7ADCE8);
  if ( (unsigned __int64)sub_7443D0(v7, (unsigned __int16 *)(v5 + 53)) < 2 )
    JUMPOUT(0x7ADCB8);
  if ( v4 )
  {
    v8 = *(void **)v4;
    if ( *(_QWORD *)v4 )
    {
      *(_QWORD *)(v4 + 8) = 0;
      qfree(v8);
      *(_QWORD *)v4 = 0;
      *(_QWORD *)(v4 + 16) = 0;
    }
  }
  return 0;
}

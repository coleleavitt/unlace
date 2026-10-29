void __fastcall sub_6B1A00(void (*a1)(const char *, ...), __int64 a2)
{
  __int64 v2; // r13
  _BYTE *i; // rax
  int v4[2]; // [rsp+8h] [rbp-30h] BYREF

  *(_QWORD *)v4 = a2;
  if ( a2 )
  {
    v2 = *(_QWORD *)(qword_2CCB598 + 1672);
    for ( i = (_BYTE *)a2; *i && (unsigned __int8)sub_6B0720(v2, a1, a2, (void **)v4, 1); i = *(_BYTE **)v4 )
      ;
  }
}

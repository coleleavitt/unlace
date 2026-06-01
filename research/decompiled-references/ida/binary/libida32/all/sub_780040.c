__int64 __fastcall sub_780040(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  unsigned int v10; // ebp
  __int64 v11; // rbx
  int v12; // r15d
  __int64 v13; // rbp
  __int64 v14; // rdx
  const char *v15; // rbx
  __int64 *v16; // rax
  unsigned int v18; // [rsp+8h] [rbp-1050h]
  _BYTE dest[4104]; // [rsp+10h] [rbp-1048h] BYREF
  unsigned __int64 v20; // [rsp+1018h] [rbp-40h]

  v10 = *(_DWORD *)(a1 + 356) & 4;
  v20 = __readfsqword(0x28u);
  if ( (unsigned __int8)qisabspath(a4) )
  {
    v11 = qstrncpy(a2, a4, a3);
    if ( v10 && !(unsigned __int8)sub_77E5A0(a2, a3) )
      return 0;
    return v11;
  }
  v18 = v10 >> 2;
  if ( a6 == 1 || a5 != 34 )
  {
    if ( a6 )
    {
      v15 = dest;
      if ( (unsigned __int8)qdirname(dest) )
        goto LABEL_10;
    }
    goto LABEL_9;
  }
  v11 = sub_77E7F0(a2, a3, *(_QWORD *)(a1 + 296), a4, v18);
  v12 = *(_DWORD *)(a1 + 272) - 1;
  if ( v11 )
    return v11;
  if ( v12 < 0 )
  {
LABEL_9:
    v15 = nullptr;
LABEL_10:
    v16 = off_2C57DA0();
    return sub_77FE00(v16, a2, a3, a4, v15, v18);
  }
  v13 = 40LL * (unsigned int)v12;
  while ( 1 )
  {
    --v12;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + v13);
    v13 -= 40;
    v11 = sub_77E7F0(a2, a3, v14, a4, v18);
    if ( v11 )
      return v11;
    if ( v12 == -1 )
      goto LABEL_9;
  }
}


__int64 __fastcall sub_1AE7B80(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rcx
  unsigned __int8 v4; // al
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v14; // rax

  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_BYTE *)(v3 + 28) & 0x7F;
  if ( (unsigned int)v4 - 40 > 6 && v4 != 52 )
    return 1;
  v6 = a2;
  v7 = (_QWORD *)sub_B9ACA0(v3);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7[6] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 43 <= 1 )
  {
    a2 = sub_B8C330((__int64)v7);
    v8 = sub_B7D8D0((__int64)v7, a2);
    if ( sub_B735C0(v8) )
    {
      v14 = sub_B73640(v8);
      if ( (*(_WORD *)v14 & 0x1FF) != 0x47 )
        return 1;
      v7 = (_QWORD *)sub_B9ACA0(*(_QWORD *)(v14 + 16));
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 32LL))(v7);
  v10 = a1[2];
  if ( *(_BYTE *)(v10 + 20) )
  {
    v11 = *(_QWORD **)v10;
    v12 = *(_QWORD *)v10 + 8LL * *(unsigned int *)(v10 + 12);
    if ( *(_QWORD *)v10 == v12 )
      return 1;
    while ( v9 != *v11 )
    {
      if ( (_QWORD *)v12 == ++v11 )
        return 1;
    }
LABEL_10:
    a1[3] = v7;
    a1[4] = sub_EEC8C0(v6, a2, a3);
    return 0;
  }
  a2 = v9;
  if ( sub_2236570(v10, v9) )
    goto LABEL_10;
  return 1;
}

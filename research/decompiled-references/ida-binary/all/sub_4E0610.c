__int64 __fastcall vault_files_dirtree_widget_t__::vfunc_41(
        __int64 a1,
        const char *a2,
        unsigned int a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  unsigned __int64 v7; // r13
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 *v13; // rax
  unsigned int v14; // [rsp+Ch] [rbp-7Ch]
  _OWORD v15[3]; // [rsp+10h] [rbp-78h] BYREF
  int v16; // [rsp+40h] [rbp-48h]
  unsigned __int64 v17; // [rsp+48h] [rbp-40h]

  v7 = (unsigned __int64)a2;
  v17 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_4DADD0(a1 + 1848) )
    return a3;
  v10 = *(_QWORD *)(a1 + 1856);
  v11 = *(_QWORD *)(a1 + 1848);
  v16 = -1;
  memset(v15, 0, sizeof(v15));
  v12 = v11 + 80 * v10;
  if ( v12 == v11 )
    return a3;
  while ( 1 )
  {
    if ( (*(_DWORD *)v11 & 0xC40) == 0x800 && ((*(_DWORD *)v11 & 3u) - 1 > 1 || *(_QWORD *)(v11 + 72)) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1) && (*(_BYTE *)(a1 + 1680) & 2) == 0 )
        sub_4DFA70((char *)a1);
      a2 = (const char *)v7;
      v13 = (__int64 *)sub_4D8990((_QWORD *)(a1 + 1128), v7);
      if ( v13 )
      {
        a2 = (const char *)v15;
        if ( (unsigned __int8)sub_4E0070(a1, (const char *)v15, v13, v11, 0.0, a5, a6, a7) )
          break;
      }
    }
    v11 += 80;
    if ( v12 == v11 )
    {
      if ( *(_QWORD *)&v15[0] )
      {
        *((_QWORD *)&v15[0] + 1) = 0;
        qfree(*(_QWORD *)&v15[0], a2);
      }
      return a3;
    }
  }
  result = *(unsigned int *)(v11 + 32);
  if ( *(_QWORD *)&v15[0] )
  {
    v14 = *(_DWORD *)(v11 + 32);
    *((_QWORD *)&v15[0] + 1) = 0;
    qfree(*(_QWORD *)&v15[0], (const char *)v15);
    return v14;
  }
  return result;
}

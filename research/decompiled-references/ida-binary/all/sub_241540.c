__int64 __fastcall sub_241540(unsigned int *a1, double a2)
{
  __int64 v2; // rdx
  char *v3; // rcx
  __int64 result; // rax
  _DWORD *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  char *v10; // rcx
  int v11; // esi
  _DWORD *v12; // rdi
  int v13; // edx

  v2 = *a1;
  if ( !(_DWORD)v2 )
    return -1;
  v3 = (char *)a1[1];
  if ( ((unsigned __int8)v3 & 1) != 0 )
    return *((_QWORD *)a1 + 1);
  if ( ((unsigned __int8)v3 & 0x40) != 0 )
  {
    v6 = *((_DWORD **)a1 + 48);
  }
  else
  {
    v6 = (_DWORD *)qword_8CC430;
    v3 = (char *)((unsigned int)v3 | 0x40);
    v7 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
    if ( qword_8CC430 == v7 )
    {
      *((_QWORD *)a1 + 48) = 0;
      a1[1] = (unsigned int)v3;
      return -1;
    }
    while ( (_DWORD)v2 != *v6 )
    {
      v6 += 64;
      if ( (_DWORD *)v7 == v6 )
      {
        v6 = nullptr;
        break;
      }
    }
    *((_QWORD *)a1 + 48) = v6;
    a1[1] = (unsigned int)v3;
  }
  if ( !v6 )
    return -1;
  v8 = sub_23F1C0(*((_QWORD *)a1 + 48), -1, a2, v2, v3);
  v9 = v8;
  if ( !v8 )
    return -1;
  v10 = (char *)dbg;
  v11 = dword_8BA594;
  result = *(_QWORD *)(v8 + 32LL * dword_8BA594 + 8);
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37) & 0x40) != 0 )
    {
      v12 = qword_8CC600;
      if ( qword_8CC600 )
      {
        *((_QWORD *)qword_8CC600 + 1) = v9;
        v12[4] = v11;
        *(_QWORD *)v12 = result;
        v13 = sub_23D480((__int64)v12, 11, v9, v10, a2);
        result = -1;
        if ( v13 == 1 )
          result = *(_QWORD *)qword_8CC600;
      }
    }
  }
  a1[1] |= 1u;
  *((_QWORD *)a1 + 1) = result;
  return result;
}

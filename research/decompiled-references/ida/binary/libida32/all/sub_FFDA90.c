__int64 __fastcall sub_FFDA90(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned int v6; // eax
  int v7; // edx
  int v8; // r12d
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // eax

  LODWORD(v4) = a3;
  do
  {
    while ( 1 )
    {
      v7 = a2[2];
      if ( !v7 )
        v7 = a2[3];
      v8 = v7 + v4;
      v9 = (v7 + v4) & 0x7FFFFFFF;
      if ( v9 >= *(_DWORD *)(a1 + 476) && v9 < *(_DWORD *)(a1 + 480) )
      {
        v5 = *(unsigned int *)(a1 + 472);
        v6 = v5 + 1;
      }
      else
      {
        if ( !v9 )
          goto LABEL_15;
        if ( v9 < *(_DWORD *)(a1 + 312) )
        {
          v14 = sub_FF9690(a1, v9);
          v5 = v14;
          v6 = v14 + 1;
        }
        else
        {
          if ( v9 < *(_DWORD *)(a1 + 316) )
          {
LABEL_15:
            v5 = 0;
            goto LABEL_16;
          }
          v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 464) + 24LL))(*(_QWORD *)(a1 + 464), v9);
          v5 = v10;
          v6 = v10 + 1;
        }
      }
      if ( v6 > 1 )
        break;
LABEL_16:
      a2 = *(_DWORD **)(a1 + 184);
      v4 = v9 - (*a2 & 0x7FFFFFFF);
      if ( v8 >= 0 )
        return (v4 << 32) | v5;
    }
    if ( (int)v5 < 0 )
    {
      v12 = (unsigned int)(-2 - v5);
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8LL * ((unsigned int)(-2 - v5) >> 6));
      if ( _bittest64(&v13, v12) )
        a2 = (_DWORD *)sub_FFBB60(a1 + 264, (int)v12);
      else
        a2 = (_DWORD *)sub_FFBBF0(a1, v12, nullptr);
    }
    else
    {
      a2 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL * (unsigned int)v5);
    }
    v4 = v9 - (*a2 & 0x7FFFFFFF);
  }
  while ( v8 < 0 );
  return (v4 << 32) | v5;
}


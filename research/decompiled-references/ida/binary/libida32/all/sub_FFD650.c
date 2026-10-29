unsigned __int64 __fastcall sub_FFD650(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // r12d
  unsigned int v4; // eax
  int v5; // r13d
  unsigned int v6; // ebx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax

  do
  {
    while ( 1 )
    {
      v5 = a2[3];
      v6 = v5 & 0x7FFFFFFF;
      if ( (v5 & 0x7FFFFFFFu) >= *(_DWORD *)(a1 + 476) && v6 < *(_DWORD *)(a1 + 480) )
      {
        v3 = *(_DWORD *)(a1 + 472);
        v4 = v3 + 1;
      }
      else
      {
        if ( !v6 )
          goto LABEL_13;
        if ( v6 < *(_DWORD *)(a1 + 312) )
        {
          v3 = sub_FF9690(a1, v6);
          v4 = v3 + 1;
        }
        else
        {
          if ( v6 < *(_DWORD *)(a1 + 316) )
          {
LABEL_13:
            v3 = 0;
            goto LABEL_14;
          }
          v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 464) + 24LL))(*(_QWORD *)(a1 + 464), v6);
          v4 = v3 + 1;
        }
      }
      if ( v4 > 1 )
        break;
LABEL_14:
      a2 = *(_DWORD **)(a1 + 184);
      if ( v5 >= 0 )
        return ((unsigned __int64)(v6 - (*a2 & 0x7FFFFFFF)) << 32) | v3;
    }
    if ( (v3 & 0x80000000) != 0 )
    {
      v8 = -2 - v3;
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8LL * ((-2 - v3) >> 6));
      if ( _bittest64(&v9, v8) )
        a2 = (_DWORD *)sub_FFBB60(a1 + 264, (int)v8);
      else
        a2 = (_DWORD *)sub_FFBBF0(a1, v8, nullptr);
    }
    else
    {
      a2 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL * v3);
    }
  }
  while ( v5 < 0 );
  return ((unsigned __int64)(v6 - (*a2 & 0x7FFFFFFF)) << 32) | v3;
}


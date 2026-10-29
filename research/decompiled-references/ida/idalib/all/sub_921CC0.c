signed __int64 __fastcall sub_921CC0(_QWORD *a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8
  _QWORD *v4; // rax
  _QWORD *v5; // r9
  __int64 v6; // rsi
  __int64 v7; // rcx

  v3 = a3 - 7;
  if ( (unsigned __int64)a1 >= a3 - 7 )
  {
    v4 = a1;
  }
  else
  {
    if ( *a2 != *a1 )
    {
      _RAX = *a1 ^ *a2;
      __asm { tzcnt   rax, rax }
      return (unsigned int)_RAX >> 3;
    }
    v4 = a1 + 1;
    v5 = a2 + 1;
    if ( v3 > (unsigned __int64)(a1 + 1) )
    {
      v6 = a2[1];
      v7 = a1[1];
      if ( v7 != v6 )
      {
LABEL_5:
        _RCX = v6 ^ v7;
        __asm { tzcnt   rdx, rcx }
        return (char *)v4 + ((unsigned int)_RDX >> 3) - (char *)a1;
      }
      while ( 1 )
      {
        ++v4;
        ++v5;
        if ( v3 <= (unsigned __int64)v4 )
          break;
        v7 = *v5;
        v6 = *v4;
        if ( *v5 != *v4 )
          goto LABEL_5;
      }
    }
    a2 = v5;
  }
  if ( (unsigned __int64)v4 < a3 - 3 && *(_DWORD *)v4 == *(_DWORD *)a2 )
  {
    v4 = (_QWORD *)((char *)v4 + 4);
    a2 = (_QWORD *)((char *)a2 + 4);
  }
  if ( (unsigned __int64)v4 < a3 - 1 && *(_WORD *)v4 == *(_WORD *)a2 )
  {
    v4 = (_QWORD *)((char *)v4 + 2);
    a2 = (_QWORD *)((char *)a2 + 2);
  }
  if ( (unsigned __int64)v4 < a3 )
    v4 = (_QWORD *)((char *)v4 + (*(_BYTE *)a2 == *(_BYTE *)v4));
  return (char *)v4 - (char *)a1;
}

size_t __fastcall sub_B8EC30(__int64 a1, __int64 a2)
{
  const char *v2; // r12
  _QWORD *v3; // rbx
  size_t result; // rax
  _DWORD *v5; // rdi
  unsigned __int64 v6; // r8
  char *v7; // rdi
  const char *v8; // r12
  unsigned int v9; // ecx
  unsigned int v10; // edx
  __int64 v11; // rdi

  v2 = "class ";
  v3 = (_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  if ( !(unsigned __int8)sub_F3D570(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v2 = "struct ";
    if ( !(unsigned __int8)sub_F3D5B0(*v3) )
    {
      result = sub_F3D6E0(*v3);
      if ( !(_BYTE)result )
        return result;
      v2 = "union ";
    }
  }
  result = strlen(v2);
  v5 = *(_DWORD **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v5 < result )
    return sub_22581D0(a2, v2, result);
  if ( (unsigned int)result < 8 )
  {
    if ( (result & 4) != 0 )
    {
      *v5 = *(_DWORD *)v2;
      *(_DWORD *)((char *)v5 + (unsigned int)result - 4) = *(_DWORD *)&v2[(unsigned int)result - 4];
    }
    else if ( (_DWORD)result )
    {
      *(_BYTE *)v5 = *v2;
      if ( (result & 2) != 0 )
        *(_WORD *)((char *)v5 + (unsigned int)result - 2) = *(_WORD *)&v2[(unsigned int)result - 2];
    }
  }
  else
  {
    v6 = (unsigned __int64)(v5 + 2) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)v5 = *(_QWORD *)v2;
    *(_QWORD *)((char *)v5 + (unsigned int)result - 8) = *(_QWORD *)&v2[(unsigned int)result - 8];
    v7 = (char *)v5 - v6;
    v8 = (const char *)(v2 - v7);
    if ( (((_DWORD)result + (_DWORD)v7) & 0xFFFFFFF8) >= 8 )
    {
      v9 = (result + (_DWORD)v7) & 0xFFFFFFF8;
      v10 = 0;
      do
      {
        v11 = v10;
        v10 += 8;
        *(_QWORD *)(v6 + v11) = *(_QWORD *)&v8[v11];
      }
      while ( v10 < v9 );
    }
  }
  *(_QWORD *)(a2 + 32) += result;
  return result;
}


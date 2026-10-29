__int64 __fastcall sub_C70220(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 result; // rax

  v4 = *(unsigned __int16 **)(a1 + 24);
  v5 = *v4;
  for ( LOWORD(v5) = v5 & 0x1FF; (_WORD)v5 == 79; LOWORD(v5) = v5 & 0x1FF )
  {
    v5 = (v4[1] >> 3) & 0x7F;
    a4 = (unsigned int)(v5 - 7);
    if ( (unsigned int)a4 > 1 && (_DWORD)v5 != 5 )
      break;
    v4 = *((unsigned __int16 **)v4 + 2);
    v5 = *v4;
  }
  v6 = *((_QWORD *)v4 + 1) & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)v6;
  if ( (*(_BYTE *)(*(_QWORD *)v6 + 17LL) & 4) == 0
    || (v5 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL), result = 0, *(_BYTE *)(v5 + 16) == 42) )
  {
    if ( *(_BYTE *)(v7 + 16) == 42 )
      return *(_QWORD *)(v7 + 32);
    else
      return *(_QWORD *)(sub_F3F310(v7, a2, v5, a4) + 32);
  }
  return result;
}


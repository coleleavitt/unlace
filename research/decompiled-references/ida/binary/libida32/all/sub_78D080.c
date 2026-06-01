size_t __fastcall sub_78D080(__int64 a1, unsigned int a2, char a3, const char *a4)
{
  size_t result; // rax
  __int16 v6; // dx
  __int64 v7; // rcx
  __int64 v8; // rdx

  *(_BYTE *)(a1 + 52) = a3;
  *(_WORD *)(a1 + 45) = 6;
  *(_DWORD *)(a1 + 48) = _byteswap_ulong(a2);
  result = strlen(a4);
  v6 = result + 6;
  if ( result + 6 > 0x204 )
  {
    v6 = 516;
    result = 510;
  }
  *(_WORD *)(a1 + 45) = v6;
  v7 = (unsigned int)result;
  v8 = a1 + 53;
  if ( (unsigned int)result >= 8 )
  {
    *(_QWORD *)(a1 + 53) = *(_QWORD *)a4;
    *(_QWORD *)(v8 + (unsigned int)result - 8) = *(_QWORD *)&a4[(unsigned int)result - 8];
    qmemcpy(
      (void *)((a1 + 61) & 0xFFFFFFFFFFFFFFF8LL),
      &a4[-(v8 - ((a1 + 61) & 0xFFFFFFFFFFFFFFF8LL))],
      8LL * (((unsigned int)result + (_DWORD)v8 - (((_DWORD)a1 + 61) & 0xFFFFFFF8)) >> 3));
  }
  else if ( (result & 4) != 0 )
  {
    *(_DWORD *)(a1 + 53) = *(_DWORD *)a4;
    result = *(unsigned int *)&a4[(unsigned int)result - 4];
    *(_DWORD *)(v8 + v7 - 4) = result;
  }
  else if ( (_DWORD)result )
  {
    *(_BYTE *)(a1 + 53) = *a4;
    if ( (result & 2) != 0 )
    {
      result = (unsigned int)result;
      *(_WORD *)(v8 + (unsigned int)result - 2) = *(_WORD *)&a4[(unsigned int)result - 2];
    }
  }
  return result;
}


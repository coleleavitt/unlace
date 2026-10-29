unsigned __int64 __fastcall sub_77DA00(__int64 a1, char a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi

  result = (unsigned __int8)(a2 & 1) << 6;
  *(_BYTE *)(a1 + 82) = ((a2 & 1) << 6) | *(_BYTE *)(a1 + 82) & 0xBF;
  if ( a3 )
  {
    if ( (*(_BYTE *)(a1 + 83) & 8) != 0 )
    {
      result = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(result + 8LL * *(unsigned int *)result + 8) = a3;
    }
    else
    {
      v6 = sub_798D40(a1);
      v7 = *(_QWORD *)(v6 + 2192);
      *(_QWORD *)(v6 + 2272) += 16LL;
      v8 = v6;
      result = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v8 + 2200) >= result + 16 && v7 )
        *(_QWORD *)(v8 + 2192) = result + 16;
      else
        result = sub_779030(v8 + 2192, 16, 3);
      *(_DWORD *)result = 0;
      *(_BYTE *)(result + 4) = 1;
      *(_QWORD *)(result + 8) = a3;
      *(_QWORD *)(a1 + 128) = result;
      *(_BYTE *)(a1 + 83) |= 8u;
    }
  }
  return result;
}


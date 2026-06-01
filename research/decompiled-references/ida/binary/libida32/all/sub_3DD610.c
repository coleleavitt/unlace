__int64 __fastcall sub_3DD610(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  int v5; // eax
  unsigned int v6; // [rsp+Ch] [rbp-1Ch]

  v3 = *(_DWORD *)a2;
  if ( (unsigned int)a3 < *(_DWORD *)a2
    && v3 - (unsigned int)a3 <= 0x3F
    && *(_BYTE *)(a2 + 4) == 21
    && (v6 = a3, v5 = sub_3BCF60((__int64)a1, a3), a3 = v6, v3 == v5) )
  {
    return sub_3DC190(a1, a2, v6);
  }
  else
  {
    return sub_3DC350(a1, (unsigned int *)a2, a3);
  }
}


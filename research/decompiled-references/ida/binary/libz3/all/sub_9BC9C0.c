__int64 *__fastcall sub_9BC9C0(__int64 a1, __int64 a2, int a3, __int64 *a4, __int64 *a5, _BYTE *a6)
{
  __int64 *v6; // rbx
  __int64 v9; // rbp
  unsigned int v10; // eax
  void *v12; // rdi
  bool v13; // al
  __int64 v14; // [rsp+8h] [rbp-50h]

  v6 = a4;
  *a6 = 0;
  if ( a4 != a5 )
  {
    v14 = a2 + 88;
    do
    {
      v9 = *v6;
      if ( a2 == *v6 || (*(_BYTE *)(v9 + 152) & 3) != a3 )
        goto LABEL_3;
      *a6 = 1;
      if ( (*(_BYTE *)(a2 + 108) & 1) != 0
        || *(_DWORD *)(a2 + 104) != 1
        || (*(_BYTE *)(v9 + 108) & 1) != 0
        || *(_DWORD *)(v9 + 104) != 1 )
      {
        LOBYTE(v10) = sub_1848D40(qword_1C7F2C0, v14, v9 + 88);
      }
      else if ( (*(_BYTE *)(a2 + 92) & 1) != 0 || (*(_BYTE *)(v9 + 92) & 1) != 0 )
      {
        v10 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v14, v9 + 88) >> 31;
      }
      else
      {
        LOBYTE(v10) = *(_DWORD *)(a2 + 88) < *(_DWORD *)(v9 + 88);
      }
      if ( (_BYTE)v10 )
        return v6;
      v12 = qword_1C7F2C0;
      if ( (*(_BYTE *)(a2 + 92) & 1) != 0 || (*(_BYTE *)(v9 + 92) & 1) != 0 )
      {
        v12 = qword_1C7F2C0;
        if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v14, v9 + 88) )
          goto LABEL_3;
      }
      else if ( *(_DWORD *)(a2 + 88) != *(_DWORD *)(v9 + 88) )
      {
        goto LABEL_3;
      }
      if ( (*(_BYTE *)(a2 + 108) & 1) != 0 || (*(_BYTE *)(v9 + 108) & 1) != 0 )
        v13 = (unsigned int)sub_182C7B0(v12, a2 + 104, v9 + 104) == 0;
      else
        v13 = *(_DWORD *)(a2 + 104) == *(_DWORD *)(v9 + 104);
      if ( v13 && sub_3ED700((__int64)qword_1C7F2C0, a2 + 120, v9 + 120) )
        return v6;
LABEL_3:
      ++v6;
    }
    while ( a5 != v6 );
  }
  return v6;
}


__int64 __fastcall sub_7165E0(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rdx
  unsigned __int16 **v4; // rax
  unsigned __int16 *v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int64 result; // rax
  unsigned __int64 v11; // rdi
  char v12; // al
  int v13; // eax
  unsigned __int16 *v14; // r12
  int v15; // r13d
  __int64 v16; // rsi

  v16 = 1;
  if ( *(_BYTE *)(a1 + 5800) )
  {
    v2 = *(_QWORD *)(a1 + 8) == 0;
    *(_BYTE *)(a1 + 5800) = 0;
    if ( v2 || !*(_WORD *)(a1 + 24) || *(__int16 *)(a1 + 1634) <= 0 )
      goto LABEL_16;
    v3 = *(_QWORD *)(a1 + 2664);
    v4 = *(unsigned __int16 ***)(v3 + 8);
    if ( !v4 )
    {
      v14 = (unsigned __int16 *)(a1 + 1640);
      v15 = 0;
      do
      {
        v16 = (__int64)v14;
        sub_717850(a1, v14, *v14);
        ++v15;
        v14 += 16;
      }
      while ( v15 < *(__int16 *)(a1 + 1634) );
      v3 = *(_QWORD *)(a1 + 2664);
      v4 = *(unsigned __int16 ***)(v3 + 8);
    }
    v5 = *v4;
    if ( **v4 && (v6 = *(_DWORD *)(v3 + 24), v11 = (__int16)v5[1], (_DWORD)v11 != v6) )
    {
      v13 = v6 + 1;
      if ( v13 < 0 || v13 >= v11 && (_DWORD)v11 != v13 )
        sub_715D30(v11, v16, v3, v5);
      *(_DWORD *)(v3 + 24) = v13;
      *(_WORD *)(v3 + 28) = 0;
      if ( v13 )
        v7 = v5[2 * v13];
      else
        v7 = *v5;
      if ( !(_WORD)v7 )
        sub_7172E0(v11, 0, v7);
      v8 = *(__int16 *)(a1 + 1634);
      if ( v8 > 0x1E )
        sub_7172B0(24, 0);
      v9 = a1 + 32 * v8 + 1640;
      ++*(_WORD *)(a1 + 1634);
      *(_QWORD *)(a1 + 2664) = v9;
      sub_717850(a1, v9, v7);
      sub_715D50(a1, 0xFFFFFFFFLL);
      *(_BYTE *)(a1 + 4220) = 1;
    }
    else
    {
      v12 = sub_715FD0(a1, 1);
      *(_BYTE *)(a1 + 4220) = 1;
      if ( !v12 )
      {
LABEL_16:
        result = 0;
        goto LABEL_17;
      }
    }
    result = a1 + 2672;
LABEL_17:
    *(_BYTE *)(a1 + 5800) = 1;
    return result;
  }
  return 0;
}


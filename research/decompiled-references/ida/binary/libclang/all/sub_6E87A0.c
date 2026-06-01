unsigned __int64 __fastcall sub_6E87A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // rax

  v3 = *(_QWORD *)(a2 + 48);
  if ( v3 )
    return v3 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)(a2 + 96);
  if ( (v6 & 1) != 0 || (v6 & 2) != 0 || (v7 = sub_6E77B0((unsigned __int64 *)(a2 + 96), a2)) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 48LL;
    v10 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v10 + 48 && v9 )
    {
      *(_QWORD *)(a1 + 2192) = v10 + 48;
      v11 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v11 = sub_6A76A0(a1 + 2192, 48, 4);
      v10 = v11;
    }
    *(_BYTE *)(v11 + 18) &= 0xF8u;
    *(_QWORD *)v11 = v11;
    *(_QWORD *)(v11 + 8) = v11 & 0xFFFFFFFFFFFFFFF0LL;
    *(_WORD *)(v11 + 16) = 1564;
    *(_QWORD *)(v11 + 24) = a2;
    *(_QWORD *)(v11 + 32) = a3;
    *(_QWORD *)(a2 + 48) = v11;
    v12 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v12 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v12 + 1, 8);
      v12 = *(unsigned int *)(a1 + 16);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v12) = v10;
    ++*(_DWORD *)(a1 + 16);
    v8 = *(_QWORD *)(a2 + 48);
  }
  else
  {
    v8 = *(_QWORD *)(v7 + 48);
    *(_QWORD *)(a2 + 48) = v8;
  }
  return v8 & 0xFFFFFFFFFFFFFFF0LL;
}


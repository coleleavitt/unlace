__int64 __fastcall sub_843D80(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  int v5; // r10d
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // edi
  __int64 v11; // rax

  if ( !a1[7] )
    return 0;
  v4 = a1[2];
  v5 = *(_DWORD *)(a2 + 8);
  v6 = (_QWORD *)(a3 + 16);
  *(_DWORD *)a2 = 2;
  v7 = (_QWORD *)(a2 + 128);
  *(_DWORD *)(a2 + 104) = 0;
  *(_QWORD *)(a2 + 40) = a1[3] - a1[2];
  v8 = *(v6 - 2);
  *(_QWORD *)(a2 + 32) = v4;
  *(_DWORD *)(a2 + 8) = 1;
  *(_QWORD *)(a2 + 48) = v8 - v4;
  v9 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(a2 + 112) = -1;
  *(_QWORD *)(a2 + 56) = v9 - v4;
  *(_QWORD *)(a2 + 16) = a2 + 112;
  if ( v5 != 1 )
  {
    v10 = 1;
    do
    {
      ++v10;
      v11 = *v6 - v4;
      *v7 = v11;
      v7[1] = v6[1] - v4;
      if ( v11 != -1 )
        *(_DWORD *)(a2 + 8) = v10;
      v7 += 2;
      v6 += 2;
    }
    while ( v5 != v10 );
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD *, _QWORD *))a1[7])(a2, a1[8], v6, v7);
}


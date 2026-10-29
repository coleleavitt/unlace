/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AC510
// Address: 0x000AC510

//----- (000AC510) --------------------------------------------------------
int __cdecl sub_AC510(int a1, unsigned __int64 a2, void *dest, size_t n)
{
  int v4; // ecx
  __int64 v5; // rax
  int result; // eax
  __int64 v7; // rax
  int v8; // edi
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  bool v12; // zf
  int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // [esp+4h] [ebp-18h]
  __int64 v17; // [esp+4h] [ebp-18h]

  v4 = a1;
  if ( (a2 & 0x8000000000000000LL) != 0LL || a2 >= *(_QWORD *)(a1 + 4) )
  {
    set_qerrno(3);
    return -(__PAIR64__(a2, HIDWORD(a2)) != __PAIR64__(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8)));
  }
  HIDWORD(v5) = *(_DWORD *)(a1 + 24);
  v16 = *(_DWORD *)(a1 + 20);
  if ( (HIDWORD(v5) & v16) == 0xFFFFFFFF )
    goto LABEL_15;
  if ( *(_QWORD *)(a1 + 28) < __SPAIR64__(HIDWORD(v5), v16) )
  {
    set_qerrno(4);
    return -1;
  }
  LODWORD(v5) = *(_DWORD *)(a1 + 20);
  v7 = a2 + v5;
  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
  {
    v17 = v7;
    v9 = -1;
    v10 = -1;
    goto LABEL_14;
  }
  if ( *(int *)v8 < 2 )
  {
    v17 = v7;
    v11 = qfseek(*(FILE **)(v8 + 4), v7, SHIDWORD(v7), 0);
    v9 = -1;
    v12 = v11 == 0;
    v4 = a1;
    v10 = -1;
    if ( v12 )
    {
      v9 = qftell(*(FILE **)(v8 + 4));
      v4 = a1;
    }
LABEL_14:
    v13 = v17 ^ v9 | HIDWORD(v17) ^ v10;
    result = -1;
    if ( v13 )
      return result;
    goto LABEL_15;
  }
  *(_QWORD *)(v8 + 16) = v7;
LABEL_15:
  v14 = *(_DWORD *)(v4 + 16);
  v15 = *(_DWORD *)(v4 + 4) - a2;
  if ( v15 >= n )
    v15 = n;
  if ( !v14 )
    return -1;
  if ( *(int *)v14 < 2 )
    return qfread(*(FILE **)(v14 + 4), dest, v15);
  return sub_AB320(__SPAIR64__((unsigned int)dest, v14), v15);
}
// AC612: variable 'v10' is possibly undefined

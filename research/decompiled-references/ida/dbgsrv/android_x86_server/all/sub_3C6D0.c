/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C6D0
// Address: 0x0003C6D0

//----- (0003C6D0) --------------------------------------------------------
int __cdecl sub_3C6D0(int a1, __int64 *a2)
{
  int v2; // ecx
  char *v3; // eax
  int v4; // ecx
  int result; // eax
  __int64 v6; // [esp+8h] [ebp-50h]
  __int64 v7; // [esp+10h] [ebp-48h]
  __int64 v8; // [esp+18h] [ebp-40h]
  __int64 v9; // [esp+20h] [ebp-38h]
  __int64 v10; // [esp+28h] [ebp-30h]
  __int64 v11; // [esp+30h] [ebp-28h]
  __int64 v12; // [esp+38h] [ebp-20h]
  __int64 v13; // [esp+40h] [ebp-18h]

  v13 = a2[7];
  v12 = a2[6];
  v11 = a2[5];
  v10 = a2[4];
  v9 = a2[3];
  v8 = a2[2];
  v7 = a2[1];
  v6 = *a2;
  v2 = *(_DWORD *)(a1 + 20);
  if ( *(_DWORD *)(a1 + 24) >= (unsigned int)(v2 + 1) )
  {
    v3 = *(char **)(a1 + 16);
  }
  else
  {
    v3 = (char *)qvector_reserve(a1 + 16, *(void **)(a1 + 16), v2 + 1, 0x40u);
    *(_DWORD *)(a1 + 16) = v3;
    v2 = *(_DWORD *)(a1 + 20);
  }
  v4 = v2 << 6;
  *(_QWORD *)&v3[v4 + 56] = v13;
  *(_QWORD *)&v3[v4 + 48] = v12;
  *(_QWORD *)&v3[v4 + 40] = v11;
  *(_QWORD *)&v3[v4 + 32] = v10;
  *(_QWORD *)&v3[v4 + 24] = v9;
  *(_QWORD *)&v3[v4 + 16] = v8;
  *(_QWORD *)&v3[v4 + 8] = v7;
  *(_QWORD *)&v3[v4] = v6;
  result = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = result + 1;
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C170
// Address: 0x0008C170

//----- (0008C170) --------------------------------------------------------
_BYTE *__cdecl sub_8C170(_DWORD *a1)
{
  _DWORD *v1; // edi
  int v2; // eax
  unsigned int v3; // esi
  _BYTE *v4; // eax
  _BYTE *v5; // edi
  int v6; // esi
  _DWORD *v7; // esi
  _BYTE *v8; // edx
  _BYTE *result; // eax
  _BYTE *v10; // [esp+0h] [ebp-1Ch]
  int v11; // [esp+4h] [ebp-18h]
  int v12; // [esp+8h] [ebp-14h]

  v1 = a1;
  v2 = a1[1];
  v3 = a1[2];
  if ( v3 >= v2 + 1 )
  {
    v8 = (_BYTE *)*a1;
  }
  else
  {
    v4 = qvector_reserve((int)a1, nullptr, v2 + 1, 0x18u);
    v11 = a1[2];
    a1[2] = v3;
    v5 = (_BYTE *)*a1;
    v10 = v4;
    if ( a1[1] - 1 < 0 )
    {
      v7 = a1;
    }
    else
    {
      v12 = a1[1] - 1;
      v6 = 0;
      do
      {
        *(_DWORD *)&v4[v6] = *(_DWORD *)&v5[v6];
        *(_DWORD *)&v5[v6] = 0;
        *(_DWORD *)&v4[v6 + 4] = *(_DWORD *)&v5[v6 + 4];
        *(_DWORD *)&v5[v6 + 4] = 0;
        *(_DWORD *)&v4[v6 + 8] = *(_DWORD *)&v5[v6 + 8];
        *(_DWORD *)&v5[v6 + 8] = 0;
        v4[v6 + 20] = v5[v6 + 20];
        *(_QWORD *)&v4[v6 + 12] = *(_QWORD *)&v5[v6 + 12];
        sub_84B00((int)&v5[v6]);
        v4 = v10;
        v6 += 24;
        --v12;
      }
      while ( v12 >= 0 );
      v7 = a1;
      v5 = (_BYTE *)*a1;
    }
    qfree(v5);
    v8 = v10;
    *v7 = v10;
    v7[2] = v11;
    v2 = v7[1];
    v1 = v7;
  }
  result = &v8[24 * v2];
  *(_DWORD *)result = 0;
  *(_OWORD *)(result + 4) = xmmword_EFCA0;
  result[20] = 0;
  ++v1[1];
  return result;
}
// EFCA0: using guessed type __int128 xmmword_EFCA0;

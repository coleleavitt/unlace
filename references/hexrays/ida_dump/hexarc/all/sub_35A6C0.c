_DWORD *__fastcall sub_35A6C0(_QWORD *a1, int *a2)
{
  _DWORD *result; // rax
  _DWORD *v3; // r10
  int v4; // r9d
  int v5; // r8d
  int v6; // edi
  int v7; // ecx
  int v8; // edx

  result = *(_DWORD **)(*a1 + 112LL);
  if ( !result[4] && result[21] == 8 )
  {
    result = (_DWORD *)a1[23];
    v3 = &result[30 * a1[24]];
    if ( result != v3 )
    {
      v4 = *a2;
      v5 = a2[1];
      v6 = a2[2];
      v7 = a2[3];
      v8 = a2[4];
      do
      {
        v4 += result[20];
        result += 30;
        *a2 = v4;
        v5 += *(result - 9);
        a2[1] = v5;
        v6 += *(result - 8);
        a2[2] = v6;
        v7 += *(result - 7);
        a2[3] = v7;
        v8 += *(result - 6);
        a2[4] = v8;
      }
      while ( v3 != result );
    }
  }
  return result;
}

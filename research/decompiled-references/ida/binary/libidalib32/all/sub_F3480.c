__int64 __fastcall sub_F3480(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  __int64 v5; // rcx
  int v6; // r11d
  int *v7; // rdx
  int v8; // r8d
  int *v9; // r10
  int v10; // ecx
  unsigned int v11; // edi
  int v12; // esi
  __int64 result; // rax

  if ( !(unsigned __int8)sub_13BCE0() )
    return sub_157C60(a1, a2, a3);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 128LL))(a2);
  v5 = *(_QWORD *)(a1 + 1168);
  v6 = *(_DWORD *)(a3 + 100);
  if ( !v5 )
    goto LABEL_15;
  v7 = *(int **)(a1 + 1160);
  v8 = 0;
  v9 = &v7[2 * v5];
  v10 = 0;
  do
  {
    v11 = v7[1];
    v12 = *v7;
    if ( !v8 && v11 >= v4 )
      v8 = v4 + v10 - v12;
    v7 += 2;
    v10 = v11 + v10 - v12;
  }
  while ( v7 != v9 );
  if ( v6 && v10 )
  {
    result = (unsigned int)(int)(float)((float)((float)v8 / (float)v10) * (float)v6);
    if ( (int)result < 0 )
      result = 0;
    if ( (int)result > v6 )
      return (unsigned int)v6;
  }
  else
  {
LABEL_15:
    result = 0;
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  return result;
}


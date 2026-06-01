__int64 __fastcall sub_40FE80(_DWORD *a1, int a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // esi
  int v6; // edx
  int v7; // ecx
  int v8; // esi
  int v9; // edx
  int v10; // ecx
  int v11; // esi
  int v12; // edx
  int v13; // ecx
  int v14; // esi
  __int64 result; // rax

  v2 = a1[8];
  if ( v2 < a2 )
  {
    a1[10] = 0;
    v8 = 1;
    v9 = (v2 - 1721424) / 1461;
    v10 = (v2 - 1721424) % 1461;
    if ( v10 < 0 )
    {
LABEL_7:
      v10 += 1461;
      --v9;
    }
  }
  else
  {
    a1[10] = 1;
    v3 = (v2 - 1721426) / 146097;
    v4 = (v2 - 1721426) % 146097;
    if ( v4 < 0 )
    {
      v4 += 146097;
      --v3;
    }
    v5 = 400 * v3 + 1;
    v6 = v4 / 36524;
    v7 = v4 % 36524;
    if ( v6 > 3 )
    {
      v6 = 3;
      v7 += 36524;
    }
    v8 = 100 * v6 + v5;
    v9 = v7 / 1461;
    v10 = v7 % 1461;
    if ( v10 < 0 )
      goto LABEL_7;
  }
  v11 = v8 + 4 * v9;
  v12 = v10 / 365;
  v13 = v10 % 365;
  if ( v12 > 3 )
  {
    v12 = 3;
    v13 += 365;
  }
  v14 = v12 + v11;
  if ( v14 <= 0 )
  {
    a1[9] = 1;
    a1[11] = 1 - v14;
    result = (unsigned int)(v13 + 1);
  }
  else
  {
    result = (unsigned int)(v13 + 1);
    a1[9] = 0;
    a1[11] = v14;
  }
  a1[12] = result;
  return result;
}


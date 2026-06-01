double __fastcall sub_2B6210(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  int v5; // edx
  int v6; // eax
  __int64 v7; // r10
  __int64 v8; // rdi
  int v9; // esi
  int v10; // r8d
  int v11; // r11d
  int v12; // esi
  int v14; // ebx
  int v15; // ebx

  v3 = a1;
  v5 = a1;
  v6 = a2;
  if ( (int)a2 <= (int)a1 )
    v5 = a2;
  v7 = a1 >> 32;
  v8 = a2 >> 32;
  v9 = v7;
  v10 = v7;
  if ( (int)v8 <= (int)v7 )
    v9 = v8;
  v11 = v9;
  v12 = v3;
  if ( v6 >= v3 )
    v12 = v6;
  if ( (int)v8 >= (int)v7 )
    v10 = v8;
  if ( v5 > v12 )
  {
    v15 = v5;
    v5 = v12;
    v12 = v15;
  }
  if ( v11 > v10 )
  {
    v14 = v11;
    v11 = v10;
    v10 = v14;
  }
  if ( v5 - 4 > (int)a3 || v12 + 4 <= (int)a3 || v10 + 4 <= SHIDWORD(a3) || v11 - 4 > SHIDWORD(a3) )
    return 10000.0;
  if ( v3 == v6 || (_DWORD)v7 == (_DWORD)v8 )
    return 0.0;
  return fabs((double)((int)v7 - HIDWORD(a3)) * (double)(v6 - v3) - (double)(v3 - (int)a3) * (double)((int)v8 - (int)v7))
       / sqrt((double)(v6 - v3) * (double)(v6 - v3) + (double)((int)v8 - (int)v7) * (double)((int)v8 - (int)v7));
}

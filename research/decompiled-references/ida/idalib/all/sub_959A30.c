__int64 __fastcall sub_959A30(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  __int64 v3; // r8
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // r11
  _DWORD *v9; // rdi
  unsigned int v10; // edx

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *a2;
  v5 = 32 - *(_DWORD *)(a1 + 48);
  v6 = (_DWORD)a3 - v3;
  v7 = *(_QWORD *)(a1 + 120);
  v8 = (unsigned int)(900185344 * *a3) >> (32 - *(_BYTE *)(a1 + 48));
  if ( *a2 < (int)a3 - (int)v3 )
  {
    v9 = (_DWORD *)(v3 + v4);
    do
    {
      v10 = 900185344 * *v9;
      v9 = (_DWORD *)((char *)v9 + 1);
      *(_DWORD *)(v7 + 4LL * (v10 >> v5)) = v4++;
    }
    while ( v6 != v4 );
  }
  *a2 = v6;
  return *(unsigned int *)(v7 + 4 * v8);
}

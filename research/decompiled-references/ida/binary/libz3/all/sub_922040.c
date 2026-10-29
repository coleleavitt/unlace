__int64 __fastcall sub_922040(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rax
  int v5; // ebx
  unsigned int v6; // ebx
  __int64 v7; // r8
  unsigned int *v8; // r9
  unsigned int v9; // r10d
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned __int16 *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r11
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // esi
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax

  v4 = a1[28];
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  v6 = v5 - a2;
  v7 = a1[27];
  v8 = (unsigned int *)(v4 + 12LL * v6);
  if ( v7 )
  {
    v9 = v8[2];
    v10 = *(_DWORD *)(v7 - 4);
    if ( v9 < v10 )
    {
      v11 = a1[25];
      v12 = v10 - 1 - v9;
      v13 = (unsigned __int16 *)(v7 + 16LL * (v10 - 1));
      v14 = (__int64)&v13[-8 * v12 - 8];
      do
      {
        v15 = v13[1];
        v16 = *v13;
        v13 -= 8;
        v17 = *(_QWORD *)(v11 + 8 * v16) + 24 * v15;
        *(_QWORD *)v17 = *(_QWORD *)(v13 + 10);
        *(_DWORD *)(v17 + 8) = *((_DWORD *)v13 + 7);
      }
      while ( (unsigned __int16 *)v14 != v13 );
    }
    *(_DWORD *)(v7 - 4) = v9;
  }
  v18 = a1[24];
  if ( v18 )
    *(_DWORD *)(v18 - 4) = v8[1];
  sub_921F40(a1, *v8);
  v19 = a1[5];
  if ( v19 )
  {
    v20 = *(_DWORD *)(v19 + 4LL * (*(_DWORD *)(v19 - 4) - a2));
    v21 = a1[4];
    if ( v21 )
    {
LABEL_12:
      v22 = *(_DWORD *)(v21 - 4);
      goto LABEL_13;
    }
  }
  else
  {
    v20 = *(_DWORD *)(4LL * -a2);
    v21 = a1[4];
    if ( v21 )
      goto LABEL_12;
  }
  v22 = 0;
LABEL_13:
  if ( v22 != v20 )
    sub_91CED0(a1, v20);
  v23 = a1[28];
  if ( v23 )
    *(_DWORD *)(v23 - 4) = v6;
  return sub_965AE0(a1, a2);
}


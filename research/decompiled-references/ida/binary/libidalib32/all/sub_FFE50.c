__int64 __fastcall sub_FFE50(_DWORD *a1, unsigned int a2, int a3, int *a4, int *a5, _DWORD *a6)
{
  int *v6; // r14
  int *v7; // r12
  _DWORD *v9; // r15
  _DWORD *v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // ebp
  int v16; // ebx
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v21; // ebx
  int v22; // eax
  int v23; // edx
  int v24; // ebx
  int v25; // eax
  _DWORD v26[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v6 = a5;
  v7 = a4;
  if ( !a4 )
    v7 = (int *)&unk_251770;
  if ( !a5 )
    v6 = (int *)&unk_25176C;
  v27 = __readfsqword(0x28u);
  v9 = a6;
  *v7 = -1;
  *v6 = 0;
  if ( !a6 )
    v9 = &unk_251768;
  *v9 = 0;
  sub_FFDA0((__int64)a1, v26, a2, (int)a4, (int)a5, (int)a6);
  v10 = v26;
  v11 = 0;
  while ( 1 )
  {
    v12 = v11++;
    if ( *v10 <= a3 && v10[1] > a3 )
      break;
    ++v10;
    if ( v11 == 3 )
      return 0;
  }
  *v7 = v12;
  v13 = v26[v12];
  v14 = v26[v12 + 1];
  if ( v13 > a3 || v14 <= a3 )
    return 0;
  v15 = a3 - v13;
  if ( v12 == 1 )
  {
    v21 = v15;
    if ( a1[2] == 1 )
      v21 = v15 - (v15 >= (v14 - v13) / 2);
    v22 = v21 / (int)(sub_FF570(a1) + 1);
    v23 = a1[3];
    v24 = v23 - 1;
    if ( v22 < v23 )
      v24 = v22;
    v25 = v24 * (sub_FF570(a1) + 1);
    if ( a1[2] == 1 )
      v25 += a1[3] / 2 <= v24;
    *v9 = v15 - v25;
    *v6 = v24;
  }
  else
  {
    v16 = 0;
    if ( v12 == 2 )
    {
      v17 = a1[2];
      v18 = a1[3];
      *v9 = 0;
      v19 = v17 * v18 - 1;
      if ( v19 > v15 )
        v19 = v15;
      v16 = v19 / v17;
    }
    *v6 = v16;
  }
  return (unsigned int)v15;
}


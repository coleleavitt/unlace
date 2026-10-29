__int64 __fastcall sub_2CA480(_DWORD *a1, __int64 a2, int a3, int *a4, int *a5, _DWORD *a6, double a7)
{
  int *v7; // r14
  int *v8; // r12
  _DWORD *v10; // r15
  _DWORD *v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ebp
  int v17; // ebx
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v22; // ebx
  int v23; // eax
  int v24; // edx
  int v25; // ebx
  int v26; // eax
  _DWORD v27[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v7 = a5;
  v8 = a4;
  if ( !a4 )
    v8 = (int *)&unk_8CCBB8;
  if ( !a5 )
    v7 = (int *)&unk_8CCBB4;
  v28 = __readfsqword(0x28u);
  v10 = a6;
  *v8 = -1;
  *v7 = 0;
  if ( !a6 )
    v10 = &unk_8CCBB0;
  *v10 = 0;
  sub_2CA3D0((__int64)a1, v27, a2, a7);
  v11 = v27;
  v12 = 0;
  while ( 1 )
  {
    v13 = v12++;
    if ( *v11 <= a3 && v11[1] > a3 )
      break;
    ++v11;
    if ( v12 == 3 )
      return 0;
  }
  *v8 = v13;
  v14 = v27[v13];
  v15 = v27[v13 + 1];
  if ( v14 > a3 || v15 <= a3 )
    return 0;
  v16 = a3 - v14;
  if ( v13 == 1 )
  {
    v22 = v16;
    if ( a1[2] == 1 )
      v22 = v16 - (v16 >= (v15 - v14) / 2);
    v23 = v22 / (int)(sub_2C9780(a1, a2) + 1);
    v24 = a1[3];
    v25 = v24 - 1;
    if ( v23 < v24 )
      v25 = v23;
    v26 = v25 * (sub_2C9780(a1, a2) + 1);
    if ( a1[2] == 1 )
      v26 += a1[3] / 2 <= v25;
    *v10 = v16 - v26;
    *v7 = v25;
  }
  else
  {
    v17 = 0;
    if ( v13 == 2 )
    {
      v18 = a1[2];
      v19 = a1[3];
      *v10 = 0;
      v20 = v18 * v19 - 1;
      if ( v20 > v16 )
        v20 = v16;
      v17 = v20 / v18;
    }
    *v7 = v17;
  }
  return (unsigned int)v16;
}

__int64 __fastcall sub_2CA720(
        _DWORD *a1,
        unsigned int *a2,
        unsigned int *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        double a7,
        char a8)
{
  unsigned int *v8; // r14
  unsigned int *v9; // r12
  unsigned __int64 v10; // r13
  int v11; // eax
  int v12; // ebp
  bool v13; // cf
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r8
  unsigned int v16; // ebp
  unsigned int v17; // eax
  unsigned __int64 v19; // rbx
  int v20; // edx
  int v21; // ebp
  int v22; // eax
  __int64 v24; // [rsp+0h] [rbp-68h]
  int v26; // [rsp+Ch] [rbp-5Ch]
  _DWORD v27[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v8 = a2;
  v9 = a3;
  v28 = __readfsqword(0x28u);
  if ( !a2 )
    v8 = (unsigned int *)&unk_8CCBAC;
  if ( !a3 )
    v9 = (unsigned int *)&unk_8CCBA8;
  *v8 = -1;
  *v9 = -1;
  v10 = *(_QWORD *)(a4 + 24);
  v11 = nbits(v10);
  v12 = a1[3];
  if ( (unsigned int)(v11 - 1) <= 7 )
    v12 *= a1[2];
  v13 = __CFADD__(v10, v12);
  v14 = v10 + v12;
  if ( !v13 && a5 >= v10 && a5 < v14 )
  {
    if ( a1[5] > 1u && a6 == -1 )
    {
      sub_2CA3D0((__int64)a1, v27, a5, a7);
      a6 = 1;
      v15 = a5;
    }
    else
    {
      sub_2CA3D0((__int64)a1, v27, a5, a7);
      v15 = a5;
      if ( a6 > 1 )
      {
        v16 = v27[2] + a5 - v10;
        v17 = v16;
LABEL_14:
        *v8 = v16;
        *v9 = v17;
        return 1;
      }
    }
    v19 = v10;
    v20 = 0;
    while ( v19 < v15 || v19 >= v15 + (int)a1[2] )
    {
      if ( v19 >= v14 )
        return 0;
      ++v20;
      v19 += (int)a1[2];
    }
    v26 = v20;
    v21 = v27[1];
    v24 = v15;
    v22 = v20 * (sub_2C9780(a1, v15) + 1);
    if ( a1[2] == 1 )
      v22 += v26 >= a1[3] / 2;
    v16 = v22 + v21;
    if ( a1[5] == 1 )
      v16 += 2 * (v24 - v19);
    v17 = v16 + sub_2C9780(a1, v24) + 1;
    if ( v24 == v10 )
    {
      if ( a6 == 1 )
      {
        if ( (a8 & 1) == 0 )
          v16 = 0;
      }
      else
      {
        v16 = a6;
      }
    }
    goto LABEL_14;
  }
  return 0;
}

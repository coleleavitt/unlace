__int64 __fastcall sub_100310(
        _DWORD *a1,
        unsigned int *a2,
        unsigned int *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7)
{
  unsigned int *v7; // r14
  unsigned int *v8; // r12
  unsigned __int64 v9; // r13
  int v10; // eax
  int v11; // ecx
  int v12; // r9d
  int v13; // ebp
  bool v14; // cf
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // r8
  unsigned int v17; // ebp
  unsigned int v18; // eax
  unsigned __int64 v20; // rbx
  int v21; // edx
  int v22; // ebp
  int v23; // eax
  unsigned __int64 v25; // [rsp+0h] [rbp-68h]
  int v27; // [rsp+Ch] [rbp-5Ch]
  _DWORD v28[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v7 = a2;
  v8 = a3;
  v29 = __readfsqword(0x28u);
  if ( !a2 )
    v7 = (unsigned int *)&unk_25290C;
  if ( !a3 )
    v8 = (unsigned int *)&unk_252908;
  *v7 = -1;
  *v8 = -1;
  v9 = *(_QWORD *)(a4 + 24);
  v10 = nbits();
  v13 = a1[3];
  if ( (unsigned int)(v10 - 1) <= 7 )
    v13 *= a1[2];
  v14 = __CFADD__(v9, v13);
  v15 = v9 + v13;
  if ( !v14 && a5 >= v9 && a5 < v15 )
  {
    if ( a1[5] > 1u && a6 == -1 )
    {
      sub_FFFC0((__int64)a1, v28, a5, v11, a5, v12);
      a6 = 1;
      v16 = a5;
    }
    else
    {
      sub_FFFC0((__int64)a1, v28, a5, v11, a5, v12);
      v16 = a5;
      if ( a6 > 1 )
      {
        v17 = v28[2] + a5 - v9;
        v18 = v17;
LABEL_14:
        *v7 = v17;
        *v8 = v18;
        return 1;
      }
    }
    v20 = v9;
    v21 = 0;
    while ( v20 < v16 || v20 >= v16 + (int)a1[2] )
    {
      if ( v20 >= v15 )
        return 0;
      ++v21;
      v20 += (int)a1[2];
    }
    v27 = v21;
    v22 = v28[1];
    v25 = v16;
    v23 = v21 * (sub_FF780(a1) + 1);
    if ( a1[2] == 1 )
      v23 += v27 >= a1[3] / 2;
    v17 = v23 + v22;
    if ( a1[5] == 1 )
      v17 += 2 * (v25 - v20);
    v18 = v17 + sub_FF780(a1) + 1;
    if ( v25 == v9 )
    {
      if ( a6 == 1 )
      {
        if ( (a7 & 1) == 0 )
          v17 = 0;
      }
      else
      {
        v17 = a6;
      }
    }
    goto LABEL_14;
  }
  return 0;
}


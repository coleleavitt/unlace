__int64 __fastcall sub_1000F0(
        _DWORD *a1,
        unsigned int *a2,
        unsigned int *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  unsigned int *v7; // r14
  unsigned int *v8; // r13
  int v10; // eax
  int v11; // r8d
  int v12; // r9d
  int v13; // edx
  bool v14; // cf
  unsigned int v15; // edx
  unsigned int v16; // r15d
  unsigned int v17; // ecx
  unsigned int v18; // r15d
  unsigned int v19; // eax
  unsigned int v21; // ebx
  int v22; // edx
  int v23; // r15d
  int v24; // eax
  unsigned int v25; // [rsp+4h] [rbp-64h]
  int v26; // [rsp+4h] [rbp-64h]
  unsigned int v28; // [rsp+Ch] [rbp-5Ch]
  _DWORD v29[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v7 = a2;
  v8 = a3;
  v30 = __readfsqword(0x28u);
  if ( !a2 )
    v7 = (unsigned int *)&unk_251764;
  if ( !a3 )
    v8 = (unsigned int *)&unk_251760;
  *v7 = -1;
  *v8 = -1;
  v25 = *(_DWORD *)(a4 + 16);
  v10 = nbits();
  v13 = a1[3];
  if ( (unsigned int)(v10 - 1) <= 7 )
    v13 *= a1[2];
  v14 = __CFADD__(v25, v13);
  v15 = v25 + v13;
  v16 = v15;
  if ( !v14 && a5 >= v25 && a5 < v15 )
  {
    if ( a1[5] > 1u && a6 == -1 )
    {
      sub_FFDA0((__int64)a1, v29, a5, v25, v11, v12);
      a6 = 1;
      v17 = v25;
    }
    else
    {
      sub_FFDA0((__int64)a1, v29, a5, v25, v11, v12);
      v17 = v25;
      if ( a6 > 1 )
      {
        v18 = v29[2] + a5 - v25;
        v19 = v18;
LABEL_14:
        *v7 = v18;
        *v8 = v19;
        return 1;
      }
    }
    v21 = v17;
    v22 = 0;
    while ( v21 < a5 || v21 >= a5 + a1[2] )
    {
      if ( v21 >= v16 )
        return 0;
      v21 += a1[2];
      ++v22;
    }
    v28 = v17;
    v23 = v29[1];
    v26 = v22;
    v24 = v22 * (sub_FF570(a1) + 1);
    if ( a1[2] == 1 )
      v24 += v26 >= a1[3] / 2;
    v18 = v24 + v23;
    if ( a1[5] == 1 )
      v18 += 2 * (a5 - v21);
    v19 = v18 + sub_FF570(a1) + 1;
    if ( a5 == v28 )
    {
      if ( a6 == 1 )
      {
        if ( (a7 & 1) == 0 )
          v18 = 0;
      }
      else
      {
        v18 = a6;
      }
    }
    goto LABEL_14;
  }
  return 0;
}


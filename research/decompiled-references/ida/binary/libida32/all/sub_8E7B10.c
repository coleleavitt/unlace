__int64 __fastcall sub_8E7B10(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        _DWORD *a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        void *a9,
        _QWORD *a10,
        unsigned __int64 a11)
{
  unsigned __int8 *v14; // r15
  int v15; // eax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // r15
  int v19; // eax
  unsigned int v20; // edx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r11
  __int64 v23; // r15
  int v24; // eax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r11
  unsigned int v28; // [rsp+8h] [rbp-90h]
  unsigned __int8 *v30; // [rsp+20h] [rbp-78h]
  unsigned int v31; // [rsp+30h] [rbp-68h]
  unsigned int v32; // [rsp+38h] [rbp-60h]
  int v33; // [rsp+3Ch] [rbp-5Ch]
  unsigned __int8 *v34; // [rsp+40h] [rbp-58h]
  unsigned __int64 v35; // [rsp+48h] [rbp-50h]
  unsigned __int64 v36; // [rsp+48h] [rbp-50h]
  unsigned int v37; // [rsp+54h] [rbp-44h] BYREF
  unsigned __int64 v38; // [rsp+58h] [rbp-40h]

  v14 = (unsigned __int8 *)a2[4];
  v38 = __readfsqword(0x28u);
  v30 = (unsigned __int8 *)a2[6];
  v34 = (unsigned __int8 *)a2[5];
  v33 = sub_8E79E0(a2);
  v37 = 35;
  v15 = sub_8E1060(a9, &v37, v14, a3, a10, a11);
  a5[887] = a4[887];
  v32 = sub_8F08E0((int)a5 + 3548, (_DWORD)a9, v37, v15, a3, 9, (__int64)(a4 + 556), (__int64)&unk_23B3320, 6, 1, a8);
  v16 = sub_8F0AF0(a6, a7 - a6, a5 + 556, 9, v32, a9, v37, v14, a3, &unk_23B3320, 6, 35, a4 + 556, 1316, a10, a11);
  if ( v16 > 0xFFFFFFFFFFFFFF88LL )
  {
    *(_QWORD *)(a1 + 16) = v16;
    *(_QWORD *)a1 = v32;
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 32) = v33;
  }
  else
  {
    v17 = 0;
    if ( v32 == 2 )
      v17 = v16;
    v37 = 31;
    v18 = a6 + v16;
    v35 = v17;
    v19 = sub_8E1060(a9, &v37, v30, a3, a10, a11);
    v20 = v37;
    a5[885] = a4[885];
    v31 = sub_8F08E0(
            (int)a5 + 3540,
            (_DWORD)a9,
            v20,
            v19,
            a3,
            8,
            (__int64)a4,
            (__int64)&unk_23B3220,
            5,
            v20 <= 0x1C,
            a8);
    v21 = sub_8F0AF0(v18, a7 - v18, a5, 8, v31, a9, v37, v30, a3, &unk_23B3220, 5, 28, a4, 772, a10, a11);
    v22 = v35;
    if ( v21 > 0xFFFFFFFFFFFFFF88LL )
    {
      *(_QWORD *)(a1 + 16) = v21;
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)a1 = v32;
      *(_QWORD *)(a1 + 24) = v35;
      *(_DWORD *)(a1 + 4) = v31;
      *(_DWORD *)(a1 + 32) = v33;
    }
    else
    {
      if ( v31 == 2 )
        v22 = v21;
      v37 = 52;
      v23 = v21 + v18;
      v36 = v22;
      v24 = sub_8E1060(a9, &v37, v34, a3, a10, a11);
      a5[886] = a4[886];
      v28 = sub_8F08E0(
              (int)a5 + 3544,
              (_DWORD)a9,
              v37,
              v24,
              a3,
              9,
              (__int64)(a4 + 193),
              (__int64)&unk_23B3260,
              6,
              1,
              a8);
      v25 = sub_8F0AF0(v23, a7 - v23, a5 + 193, 9, v28, a9, v37, v34, a3, &unk_23B3260, 6, 52, a4 + 193, 1452, a10, a11);
      v26 = v36;
      if ( v25 > 0xFFFFFFFFFFFFFF88LL )
      {
        *(_QWORD *)(a1 + 16) = v25;
        *(_DWORD *)(a1 + 8) = v28;
        *(_DWORD *)a1 = v32;
        *(_QWORD *)(a1 + 24) = v36;
        *(_DWORD *)(a1 + 4) = v31;
        *(_DWORD *)(a1 + 32) = v33;
      }
      else
      {
        *(_DWORD *)(a1 + 8) = v28;
        if ( v28 == 2 )
          v26 = v25;
        *(_DWORD *)a1 = v32;
        *(_QWORD *)(a1 + 16) = v25 + v23 - a6;
        *(_DWORD *)(a1 + 4) = v31;
        *(_QWORD *)(a1 + 24) = v26;
        *(_DWORD *)(a1 + 32) = v33;
      }
    }
  }
  return a1;
}


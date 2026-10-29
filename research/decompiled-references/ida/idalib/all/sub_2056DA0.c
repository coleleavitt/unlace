__int64 __fastcall sub_2056DA0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 *v9; // rbp
  __int64 v10; // r8
  unsigned int v11; // edx
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  __int64 *v14; // rbx
  __int64 result; // rax
  int v16; // r10d
  _QWORD *v17; // r11
  int v18; // ecx
  bool v19; // zf
  __int64 v20; // rbp
  __int64 v21; // [rsp+0h] [rbp-38h]
  _QWORD *v22; // [rsp+8h] [rbp-30h] BYREF
  _QWORD *v23; // [rsp+18h] [rbp-20h] BYREF

  v6 = (__int64 *)*a1;
  v22 = a1;
  v7 = *v6;
  v8 = *(_DWORD *)(*v6 + 1408);
  v9 = (__int64 *)(*v6 + 1392);
  if ( !v8 )
  {
    v23 = nullptr;
LABEL_14:
    v8 *= 2;
    goto LABEL_15;
  }
  a6 = v8 - 1;
  v10 = *(_QWORD *)(v7 + 1392);
  v11 = a6 & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
  v12 = (_QWORD *)(v10 + 16LL * v11);
  v13 = (_QWORD *)*v12;
  if ( a1 == (_QWORD *)*v12 )
    goto LABEL_3;
  v16 = 1;
  v17 = nullptr;
  if ( v13 != (_QWORD *)-4096LL )
  {
    while ( 1 )
    {
      if ( !v17 && v13 == (_QWORD *)-8192LL )
        v17 = v12;
      v11 = a6 & (v16 + v11);
      v12 = (_QWORD *)(v10 + 16LL * v11);
      v13 = (_QWORD *)*v12;
      if ( a1 == (_QWORD *)*v12 )
        break;
      if ( v13 == (_QWORD *)-4096LL )
      {
        if ( v17 )
          v12 = v17;
        goto LABEL_6;
      }
      ++v16;
    }
LABEL_3:
    v14 = v12 + 1;
    result = v12[1];
    if ( result )
      return result;
    goto LABEL_11;
  }
LABEL_6:
  v18 = *(_DWORD *)(v7 + 1400);
  v23 = v12;
  a3 = (unsigned int)(v18 + 1);
  a4 = 3 * v8;
  a5 = (unsigned int)(4 * a3);
  if ( (unsigned int)a5 >= (unsigned int)a4 )
    goto LABEL_14;
  a4 = v8 - *(_DWORD *)(v7 + 1404) - (unsigned int)a3;
  a5 = v8 >> 3;
  if ( (unsigned int)a4 <= (unsigned int)a5 )
  {
LABEL_15:
    sub_2056B70((__int64)v9, v8, a3, a4, a5, a6);
    sub_2052FD0(v9, (__int64 *)&v22, &v23);
    a1 = v22;
    LODWORD(a3) = *(_DWORD *)(v7 + 1400) + 1;
    v12 = v23;
  }
  v19 = *v12 == -4096;
  *(_DWORD *)(v7 + 1400) = a3;
  if ( !v19 )
    --*(_DWORD *)(v7 + 1404);
  *v12 = a1;
  v14 = v12 + 1;
  v12[1] = 0;
LABEL_11:
  v21 = sub_20C9AC0(24, unk_2673580);
  sub_20CA190(v21, v22, 2);
  result = v21;
  v20 = *v14;
  *(_DWORD *)(v21 + 4) &= 0x38000000u;
  *v14 = v21;
  if ( v20 )
  {
    sub_20CC0C0(v20);
    sub_20C9BF0(v20);
    return *v14;
  }
  return result;
}

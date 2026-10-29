__int64 __fastcall sub_FFEBC0(__int64 a1, __int64 *a2, int a3, char a4)
{
  unsigned __int64 v7; // rax
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 *v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  int v15; // eax
  int v16; // r13d
  __int64 v17; // r10
  int v18; // r8d
  int *v19; // rax
  int *v20; // r14
  __int64 v21; // rax
  _DWORD *v22; // rax
  int v23; // eax
  unsigned __int64 v24; // [rsp+0h] [rbp-98h]
  int v25; // [rsp+0h] [rbp-98h]
  __int64 v26; // [rsp+8h] [rbp-90h]
  int v27; // [rsp+8h] [rbp-90h]
  __int64 v28; // [rsp+8h] [rbp-90h]
  int v29; // [rsp+8h] [rbp-90h]
  int v30; // [rsp+14h] [rbp-84h]
  __int64 v31; // [rsp+18h] [rbp-80h]
  int v32; // [rsp+18h] [rbp-80h]
  char v33; // [rsp+2Fh] [rbp-69h] BYREF
  __m128i v34; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35; // [rsp+40h] [rbp-58h]
  char v36; // [rsp+50h] [rbp-48h]

  if ( !a3 )
    goto LABEL_2;
  v7 = sub_FFD780((__int64)a2, a3);
  v33 = 0;
  v8 = v7;
  v24 = HIDWORD(v7);
  v9 = sub_FFBD10((__int64)a2, v7, &v33);
  v10 = v9;
  if ( v33 || *(char *)(v9 + 3) < 0 )
    goto LABEL_2;
  v30 = v8;
  v11 = (__int64 *)(*(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  v12 = v11[1];
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v12 + 8);
      if ( !v13 )
        break;
      if ( (v13 & 4) == 0 )
        break;
      v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v14 )
        break;
      v12 = v14;
    }
    v12 += 32;
  }
  else
  {
    v28 = v9;
    sub_FF9C60(&v34, v11, a2[1], a2[2], 0);
    v10 = v28;
    if ( v36 )
      v12 = v35;
  }
  v26 = v10;
  v15 = sub_FFE8F0((__int64)a2, v8, v24, &v33);
  if ( v33 || (v31 = v26, v27 = v15, v16 = sub_FFC3D0((__int64)a2, v8, v24, &v33), v33) )
  {
LABEL_2:
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  else
  {
    v17 = v31;
    v18 = v27;
    v32 = *(_DWORD *)(v31 + 8);
    if ( a4 )
    {
      if ( *(char *)(v17 + 15) < 0 )
      {
        v19 = sub_FFB800(a2[61], v8, v24);
        v18 = v27;
        v20 = v19;
        if ( v19 )
        {
          v21 = (unsigned int)v19[2];
          v25 = v8;
          if ( (_DWORD)v21 != -1 )
          {
            v25 = 0;
            v12 = *(_QWORD *)(*(_QWORD *)(a2[61] + 120) + 8 * v21) + 16LL;
          }
          v18 = v27 + v20[1] - 1 - sub_FFE8F0((__int64)a2, v8, *v20, nullptr);
          v30 = v25;
          if ( v20[4] )
          {
            v29 = v18;
            v22 = (_DWORD *)sub_FFC290((__int64)a2, v8);
            v18 = v29;
            if ( v22 )
              v23 = *v22 & 0x7FFFFFFF;
            else
              v23 = 0;
            v32 = v20[4] + v23;
            v30 = v25;
          }
        }
      }
    }
    *(_QWORD *)a1 = v12;
    *(_DWORD *)(a1 + 12) = v18;
    *(_DWORD *)(a1 + 8) = v30;
    *(_DWORD *)(a1 + 16) = v16;
    *(_DWORD *)(a1 + 20) = v32;
  }
  return a1;
}


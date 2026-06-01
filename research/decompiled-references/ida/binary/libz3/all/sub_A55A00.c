__int64 __fastcall sub_A55A00(__int64 a1, unsigned int a2, unsigned int a3, int *a4, __int64 a5)
{
  __int64 v8; // r15
  void *v9; // rdi
  int v10; // eax
  __int64 v11; // rax
  signed int v12; // edx
  __int64 v14; // rbp
  int *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r15
  int v18; // ebp
  __int64 v19; // rsi
  __int64 v20; // r9
  int v21; // edx
  _DWORD *v22; // rcx
  __int64 v23; // r8
  _DWORD *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbp
  int *v27; // rax
  void *v30; // [rsp+18h] [rbp-B0h]
  void *v31; // [rsp+18h] [rbp-B0h]
  unsigned int v32; // [rsp+2Ch] [rbp-9Ch] BYREF
  _QWORD v33[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v34[2]; // [rsp+40h] [rbp-88h] BYREF
  int v35[8]; // [rsp+50h] [rbp-78h] BYREF
  int v36[22]; // [rsp+70h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(a1 + 728) + 96LL * a2;
  v9 = qword_1C7F2C0;
  v33[0] = 0;
  v33[1] = 0;
  v34[0] = 1;
  v34[1] = 0;
  if ( (*(_BYTE *)(v8 + 4) & 1) != 0 )
  {
    v30 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v33, v8);
    v9 = v30;
  }
  else
  {
    LODWORD(v33[0]) = *(_DWORD *)v8;
  }
  if ( (*(_BYTE *)(v8 + 20) & 1) != 0 )
  {
    sub_182C690(v9, v34, v8 + 16);
  }
  else
  {
    v10 = *(_DWORD *)(v8 + 16);
    BYTE4(v34[0]) &= ~1u;
    LODWORD(v34[0]) = v10;
  }
  sub_91F480((__int64)v35, v8 + 32);
  if ( (v34[0] & 0x100000000LL) != 0
    || LODWORD(v34[0]) != 1
    || (*(_BYTE *)(a5 + 20) & 1) != 0
    || *(_DWORD *)(a5 + 16) != 1 )
  {
    sub_1852000(qword_1C7F2C0, v33, a5);
  }
  else
  {
    v31 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, v33, a5);
    sub_182CBA0(v31, v34);
    BYTE4(v34[0]) &= ~1u;
    LODWORD(v34[0]) = 1;
  }
  sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v35, a5 + 32, (__int64)v35);
  sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v36, a5 + 64, (__int64)v36);
  sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v33, (__int64)a4, (__int64)v33);
  sub_3ED4D0((__int64)qword_1C7F2C0, v35, (__int64)a4, (__int64)v35);
  sub_3ED4D0((__int64)qword_1C7F2C0, v36, (__int64)a4, (__int64)v36);
  sub_9F40B0((_QWORD *)a1, a3, (__int64)v33);
  v11 = *(_QWORD *)(a1 + 936);
  if ( v11 )
    v12 = *(_DWORD *)(v11 - 4);
  else
    v12 = 0;
  if ( (int)a3 >= v12 || !*(_DWORD *)(v11 + 4LL * a3) )
  {
    if ( (v14 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8LL * a3)) != 0
      && (v15 = sub_9AD4F0(a1, a3), sub_33D280((__int64)v15, v14 + 16))
      || (v26 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8LL * a3)) != 0
      && (v27 = sub_9AD4F0(a1, a3), sub_33D280(v26 + 16, (__int64)v27)) )
    {
      v16 = *(_QWORD *)(a1 + 928);
      v32 = a3;
      if ( v16 )
      {
        v17 = *(unsigned int *)(v16 - 4);
        v18 = *(_DWORD *)(v16 - 4);
      }
      else
      {
        v18 = 0;
        v17 = 0;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 936) + 4LL * a3) = v18;
      sub_98D100((_QWORD *)(a1 + 928), &v32);
      v19 = *(_QWORD *)(a1 + 928);
      v20 = *(_QWORD *)(a1 + 936);
      v21 = v18 >> 1;
      v22 = (_DWORD *)(v19 + 4 * v17);
      v23 = (unsigned int)*v22;
      if ( v18 >> 1 )
      {
        while ( 1 )
        {
          v24 = (_DWORD *)(v19 + 4LL * (unsigned int)v21);
          v22 = (_DWORD *)(v19 + 4LL * (unsigned int)v18);
          v25 = (unsigned int)*v24;
          if ( (int)v23 >= (int)v25 )
            break;
          *v22 = v25;
          *(_DWORD *)(v20 + 4 * v25) = v18;
          v18 = v21;
          v21 >>= 1;
          if ( !v21 )
          {
            *v24 = v23;
            *(_DWORD *)(v20 + 4 * v23) = 1;
            goto LABEL_12;
          }
        }
      }
      *v22 = v23;
      *(_DWORD *)(v20 + 4 * v23) = v18;
    }
  }
LABEL_12:
  sub_A55750(a1, a2, a3, a4, *(_BYTE *)(a1 + 1124));
  return sub_2A6060((__int64)v33);
}


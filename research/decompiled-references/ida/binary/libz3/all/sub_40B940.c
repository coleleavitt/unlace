_QWORD *__fastcall sub_40B940(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        char a6,
        _QWORD *a7)
{
  unsigned __int64 v7; // r15
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 *v21; // rbx
  __int64 v22; // rsi
  _QWORD *v24; // r14
  __int64 v25; // rbx
  __int64 v27; // rbx
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rax
  unsigned __int8 v33; // [rsp+17h] [rbp-81h]
  int v34[2]; // [rsp+18h] [rbp-80h]
  __int64 v35; // [rsp+28h] [rbp-70h]
  int v36[2]; // [rsp+30h] [rbp-68h] BYREF
  int v37[2]; // [rsp+38h] [rbp-60h] BYREF
  int v38[2]; // [rsp+40h] [rbp-58h] BYREF
  int v39[2]; // [rsp+48h] [rbp-50h]
  __int64 v40[9]; // [rsp+50h] [rbp-48h] BYREF

  v7 = a3 + 128;
  *(_QWORD *)v34 = a3 + 128;
  v33 = sub_13608A0(a3 + 128);
  sub_1360B80(v7, 0);
  v16 = a2[1];
  *(_QWORD *)v37 = 0;
  *(_QWORD *)v38 = 0;
  *(_QWORD *)v36 = v16;
  *(_QWORD *)v39 = v16;
  if ( !a6 )
  {
    sub_40B100((__int64)v40, (__int64)a2, a4, v13, v14, v15);
    v17 = v40[0];
    sub_23A6F0((unsigned int **)v37);
    v29 = *(_QWORD **)v37;
    v30 = *(_DWORD *)(*(_QWORD *)v37 - 4LL);
    *(_QWORD *)(*(_QWORD *)v37 + 8LL * v30) = v17;
    *((_DWORD *)v29 - 1) = v30 + 1;
    *a7 = 0;
LABEL_3:
    v18 = 0;
    do
    {
      if ( v18 >= *((_DWORD *)v29 - 1) )
        break;
      sub_43D1D0(*a2 + 8LL, v29[v18], 0, (unsigned int)(a5 + 1), v38, 1);
      v29 = *(_QWORD **)v37;
      v19 = *(_QWORD *)v38;
      v20 = *(_QWORD *)v36;
      v21 = (__int64 *)(*(_QWORD *)v37 + 8LL * v18);
      if ( *(_QWORD *)v38 )
        ++*(_DWORD *)(*(_QWORD *)v38 + 8LL);
      v22 = *v21;
      if ( *v21 )
      {
        if ( (*(_DWORD *)(v22 + 8))-- == 1 )
        {
          v35 = v19;
          sub_15D7BC0(v20, v22);
          v29 = *(_QWORD **)v37;
          v19 = v35;
        }
      }
      *v21 = v19;
      ++v18;
    }
    while ( v29 );
    goto LABEL_11;
  }
  v27 = sub_3FEFF0(a2, a3, a5);
  v28 = *(_QWORD *)(v27 + 8);
  v40[0] = v28;
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  sub_407600((unsigned int **)v37, v40);
  *a7 = v27 + 24;
  v29 = *(_QWORD **)v37;
  if ( *(_QWORD *)v37 )
    goto LABEL_3;
LABEL_11:
  sub_15EE300(v36);
  v24 = *(_QWORD **)v37;
  if ( !*(_QWORD *)v37 || (v25 = *(_QWORD *)v37 + 8LL * *(unsigned int *)(*(_QWORD *)v37 - 4LL), v25 == *(_QWORD *)v37) )
  {
LABEL_16:
    sub_3D6CD0(v40, a3, (__int64 *)v36);
    sub_41C800(a1, v40);
    sub_2334C0(v40);
  }
  else
  {
    while ( *(_WORD *)(*v24 + 4LL) == 2 || (unsigned __int8)sub_1374270(a3, *v24) )
    {
      if ( (_QWORD *)v25 == ++v24 )
        goto LABEL_16;
    }
    v31 = a2[1];
    *a1 = 0;
    a1[1] = v31;
  }
  sub_3FCDF0(*(__int64 *)v38, *(__int64 *)v39);
  sub_2334C0((__int64 *)v36);
  sub_1360B80(*(_QWORD *)v34, v33);
  return a1;
}


__int64 __fastcall sub_A15E60(__int64 a1, unsigned int a2, unsigned int a3, int *a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  signed int v10; // edx
  __int64 v11; // rcx
  void *v12; // rbx
  void *v13; // rbx
  __int64 v15; // rax
  int *v16; // rax
  char v17; // al
  __int64 v18; // rax
  int v19; // eax
  int v20; // edx
  unsigned int v21; // edx
  __int64 v22; // rdi
  __int64 v23; // r10
  _DWORD *v24; // rsi
  int v25; // ecx
  __int64 v26; // r9
  _DWORD *v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  int *v30; // rax
  char v31; // al
  __int64 v33; // [rsp+8h] [rbp-A0h]
  int v34; // [rsp+8h] [rbp-A0h]
  __int64 v35; // [rsp+8h] [rbp-A0h]
  void *v36; // [rsp+8h] [rbp-A0h]
  unsigned int v38; // [rsp+18h] [rbp-90h]
  __int64 v39; // [rsp+18h] [rbp-90h]
  unsigned int v40; // [rsp+2Ch] [rbp-7Ch] BYREF
  int v41[4]; // [rsp+30h] [rbp-78h] BYREF
  char v42[16]; // [rsp+40h] [rbp-68h] BYREF
  int v43[4]; // [rsp+50h] [rbp-58h] BYREF
  int v44; // [rsp+60h] [rbp-48h] BYREF
  char v45; // [rsp+64h] [rbp-44h]

  sub_91F480((__int64)v41, *(_QWORD *)(a1 + 664) + ((unsigned __int64)a2 << 6));
  sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v41, a5, (__int64)v41);
  v8 = a5 + 32;
  if ( (v45 & 1) != 0 || v44 != 1 || (*(_BYTE *)(a5 + 52) & 1) != 0 || *(_DWORD *)(a5 + 48) != 1 )
  {
    sub_1852000(qword_1C7F2C0, v43, v8);
  }
  else
  {
    v36 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, v43, v8);
    sub_182CBA0(v36, &v44);
    v45 &= ~1u;
    v44 = 1;
  }
  sub_3ED4D0((__int64)qword_1C7F2C0, v41, (__int64)a4, (__int64)v41);
  sub_3ED4D0((__int64)qword_1C7F2C0, v43, (__int64)a4, (__int64)v43);
  sub_9D7F30((_QWORD *)a1, a3, (__int64)v41);
  v9 = *(_QWORD *)(a1 + 872);
  if ( v9 )
    v10 = *(_DWORD *)(v9 - 4);
  else
    v10 = 0;
  v11 = a3;
  if ( (int)a3 < v10 && *(_DWORD *)(v9 + 4LL * a3) )
    goto LABEL_8;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8LL * a3);
  if ( !v15 || (v33 = v15 + 16, v16 = sub_9AA900(a1, a3), v17 = sub_927C80((__int64)v16, v33), v11 = a3, !v17) )
  {
    v29 = *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8 * v11);
    if ( !v29 )
      goto LABEL_8;
    v39 = v11;
    v35 = v29 + 16;
    v30 = sub_9AA900(a1, a3);
    v31 = sub_927C80(v35, (__int64)v30);
    v11 = v39;
    if ( !v31 )
      goto LABEL_8;
    v18 = *(_QWORD *)(a1 + 864);
    v40 = a3;
    if ( v18 )
      goto LABEL_12;
LABEL_21:
    v20 = 0;
    v19 = 0;
    goto LABEL_13;
  }
  v18 = *(_QWORD *)(a1 + 864);
  v40 = a3;
  if ( !v18 )
    goto LABEL_21;
LABEL_12:
  v19 = *(_DWORD *)(v18 - 4);
  v20 = v19;
LABEL_13:
  v38 = v19;
  v34 = v20;
  *(_DWORD *)(*(_QWORD *)(a1 + 872) + 4 * v11) = v20;
  sub_98D100((_QWORD *)(a1 + 864), &v40);
  v21 = v34;
  v22 = *(_QWORD *)(a1 + 864);
  v23 = *(_QWORD *)(a1 + 872);
  v24 = (_DWORD *)(v22 + 4LL * v38);
  v25 = v34 >> 1;
  v26 = (unsigned int)*v24;
  if ( v34 >> 1 )
  {
    while ( 1 )
    {
      v27 = (_DWORD *)(v22 + 4LL * (unsigned int)v25);
      v24 = (_DWORD *)(v22 + 4LL * v21);
      v28 = (unsigned int)*v27;
      if ( (int)v26 >= (int)v28 )
        break;
      *v24 = v28;
      *(_DWORD *)(v23 + 4 * v28) = v21;
      v21 = v25;
      v25 >>= 1;
      if ( !v25 )
      {
        *v27 = v26;
        *(_DWORD *)(v23 + 4 * v26) = 1;
        goto LABEL_8;
      }
    }
  }
  *v24 = v26;
  *(_DWORD *)(v23 + 4 * v26) = v21;
LABEL_8:
  sub_A15BB0(a1, a2, a3, a4, *(_BYTE *)(a1 + 1028));
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v43);
  sub_182CBA0(v12, &v44);
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v41);
  return sub_182CBA0(v13, v42);
}


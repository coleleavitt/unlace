__int64 __fastcall sub_9D40(
        __int64 a1,
        char a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // r13d
  unsigned int v13; // r12d
  const char *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rsi
  int v17; // eax
  int *v18; // rdx
  unsigned __int64 v19; // rax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rdi
  __int64 v25; // rdi
  unsigned __int64 v26; // r12
  _BYTE *v27; // rax
  __int64 v28; // r13
  void *v29; // rdi
  unsigned __int64 v30; // rdx
  char *v31; // r12
  char *v32; // rbp
  double v33; // xmm4_8
  double v34; // xmm5_8
  char *v35; // rax
  int v36; // eax
  int v37; // ecx
  const char *v38; // rdx
  int v39; // [rsp+0h] [rbp-C8h]
  int *v41; // [rsp+8h] [rbp-C0h]
  void *ptr; // [rsp+10h] [rbp-B8h] BYREF
  int v43[4]; // [rsp+18h] [rbp-B0h]
  int v44[4]; // [rsp+30h] [rbp-98h]
  int v45[4]; // [rsp+40h] [rbp-88h]
  int v46[4]; // [rsp+50h] [rbp-78h]
  __int64 v47[2]; // [rsp+60h] [rbp-68h]
  int v48[4]; // [rsp+70h] [rbp-58h]
  int v49[2]; // [rsp+88h] [rbp-40h]

  *(_QWORD *)v49 = __readfsqword(0x28u);
  v10 = *(_DWORD *)(a1 + 5712);
  if ( v10 != -1 )
  {
    if ( !byte_1D3C0 )
      sub_11780(2718);
    BUG();
  }
  v13 = 2;
  *(_OWORD *)v44 = 0;
  v14 = (const char *)(a1 + 1032);
  *(_OWORD *)v45 = 0;
  *(_OWORD *)v46 = 0;
  *(_OWORD *)v47 = 0;
  *(_OWORD *)v48 = 0;
  if ( !a2 )
  {
    v10 = 0;
    v13 = sub_10DB0((char *)(a1 + 1032));
    if ( v13 )
    {
      v13 = 0;
    }
    else if ( *(_QWORD *)&v46[2] == *(_QWORD *)(a1 + 5696) && *(_QWORD *)v48 == *(_QWORD *)(a1 + 5704) )
    {
      return 1;
    }
  }
  v15 = 2066;
  v39 = time(nullptr) + 15;
  while ( 1 )
  {
    v16 = v13;
    v17 = sub_10C70(v14, v13, v10);
    *(_DWORD *)(a1 + 5712) = v17;
    if ( v17 != -1 )
      break;
    v18 = __errno_location();
    v19 = (unsigned int)*v18;
    if ( (_DWORD)v19 == 2 )
    {
      v41 = v18;
      if ( !a2 )
        return 1;
      v16 = 420;
      v21 = sub_10D70(v14, 420);
      *(_DWORD *)(a1 + 5712) = v21;
      if ( v21 != -1 )
      {
        *(_BYTE *)(a1 + 5640) = 1;
        return 1;
      }
      v18 = v41;
      v19 = (unsigned int)*v41;
    }
    if ( (unsigned int)v19 <= 0xB )
    {
      if ( _bittest64(&v15, v19) )
      {
        sub_11960(1, v16, v18);
        if ( time(nullptr) <= v39 )
          continue;
      }
    }
    if ( *(_DWORD *)(a1 + 5712) == -1 )
    {
      v38 = (const char *)sub_11C60(0xFFFFFFFFLL);
      sub_6130((__int64)"%s: %s", v14, v38);
    }
    return 1;
  }
  if ( a2 )
  {
    v36 = sub_10FA0(v17);
    v23 = *(_QWORD *)v48;
    v37 = v36;
    v22 = *(_QWORD *)&v46[2];
    if ( !v37 && *(_QWORD *)(a1 + 5696) == *(_QWORD *)&v46[2] && *(_QWORD *)(a1 + 5704) == *(_QWORD *)v48 )
      return 1;
  }
  else
  {
    v22 = *(_QWORD *)&v46[2];
    v23 = *(_QWORD *)v48;
  }
  *(_QWORD *)(a1 + 5696) = v22;
  v24 = *(_QWORD **)(a1 + 5664);
  *(_QWORD *)(a1 + 5704) = v23;
  sub_5470(v24);
  *(_QWORD *)(a1 + 5664) = 0;
  v25 = *(unsigned int *)(a1 + 5712);
  *(_QWORD *)(a1 + 5672) = a1 + 5656;
  *(_QWORD *)(a1 + 5680) = a1 + 5656;
  *(_QWORD *)(a1 + 5688) = 0;
  v26 = sub_110F0(v25);
  if ( v26 <= 7 )
  {
    sub_10C40(*(unsigned int *)(a1 + 5712));
    *(_DWORD *)(a1 + 5712) = -1;
    goto LABEL_42;
  }
  v27 = nullptr;
  ptr = nullptr;
  *(_OWORD *)v43 = 0;
  if ( v26 != -1 )
  {
    ptr = (void *)sub_11430(&ptr, 0, v26 + 1, 1);
    memset((char *)ptr + *(_QWORD *)v43, 0, v26 + 1 - *(_QWORD *)v43);
    *(_QWORD *)v43 = v26 + 1;
    v27 = ptr;
  }
  v27[v26] = 0;
  v28 = (int)sub_10B10(*(unsigned int *)(a1 + 5712), ptr, v26);
  if ( !a2 )
  {
    sub_10C40(*(unsigned int *)(a1 + 5712));
    *(_DWORD *)(a1 + 5712) = -1;
  }
  v29 = ptr;
  if ( *(_DWORD *)ptr != 929121385 || v26 != v28 )
    goto LABEL_44;
  v30 = v26 - 8;
  v31 = (char *)ptr + 4;
  v32 = (char *)ptr + v30 + 4;
  if ( (unsigned int)sub_EA60(929121385, (char *)ptr + 4, v30) != *(_DWORD *)v32 )
  {
    v29 = ptr;
    goto LABEL_44;
  }
  v35 = sub_9610((_QWORD *)(a1 + 5648), v31, v32, 0.0, a4, a5, a6, v33, v34, a9, a10);
  v29 = ptr;
  if ( !v35 || v32 != v35 )
  {
LABEL_44:
    if ( v29 )
    {
      *(_QWORD *)v43 = 0;
      j__free(v29);
    }
LABEL_42:
    sub_6130((__int64)"%s: corrupted registry file, please delete it", v14);
  }
  if ( ptr )
  {
    *(_QWORD *)v43 = 0;
    j__free(ptr);
  }
  return 1;
}


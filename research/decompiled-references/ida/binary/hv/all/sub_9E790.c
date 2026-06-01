__int64 __fastcall sub_9E790(
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
  int v10; // r13d
  char v12; // r12
  const char *v13; // r14
  __int64 v14; // r15
  int v15; // eax
  int *v16; // rdx
  unsigned __int64 v17; // rax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rdi
  unsigned __int64 v24; // r12
  _BYTE *v25; // rax
  __int64 v26; // r13
  void *v27; // rdi
  unsigned __int64 v28; // rdx
  char *v29; // r12
  char *v30; // rbp
  double v31; // xmm4_8
  double v32; // xmm5_8
  char *v33; // rax
  int v34; // eax
  int v35; // ecx
  const char *v36; // rdx
  int v37; // [rsp+0h] [rbp-C8h]
  int *v38; // [rsp+8h] [rbp-C0h]
  void *ptr; // [rsp+10h] [rbp-B8h] BYREF
  int v40[4]; // [rsp+18h] [rbp-B0h]
  int v41[4]; // [rsp+30h] [rbp-98h] BYREF
  int v42[4]; // [rsp+40h] [rbp-88h]
  int v43[4]; // [rsp+50h] [rbp-78h]
  __int64 v44[2]; // [rsp+60h] [rbp-68h]
  int v45[4]; // [rsp+70h] [rbp-58h]
  int v46[2]; // [rsp+88h] [rbp-40h]

  *(_QWORD *)v46 = __readfsqword(0x28u);
  v10 = *(_DWORD *)(a1 + 5712);
  if ( v10 != -1 )
  {
    if ( !byte_1671A1 )
      sub_96F80(2718);
    BUG();
  }
  v12 = 2;
  *(_OWORD *)v41 = 0;
  v13 = (const char *)(a1 + 1032);
  *(_OWORD *)v42 = 0;
  *(_OWORD *)v43 = 0;
  *(_OWORD *)v44 = 0;
  *(_OWORD *)v45 = 0;
  if ( !a2 )
  {
    v10 = 0;
    v20 = sub_95460((char *)(a1 + 1032), (__int64)v41);
    v12 = v20;
    if ( v20 )
    {
      v12 = 0;
    }
    else if ( *(_QWORD *)&v43[2] == *(_QWORD *)(a1 + 5696) && *(_QWORD *)v45 == *(_QWORD *)(a1 + 5704) )
    {
      return 1;
    }
  }
  v14 = 2066;
  v37 = time(nullptr) + 15;
  while ( 1 )
  {
    v15 = sub_95320((__int64)v13, v12, v10);
    *(_DWORD *)(a1 + 5712) = v15;
    if ( v15 != -1 )
      break;
    v16 = __errno_location();
    v17 = (unsigned int)*v16;
    if ( (_DWORD)v17 == 2 )
    {
      v38 = v16;
      if ( !a2 )
        return 1;
      v19 = sub_95420(v13, 0x1A4u);
      *(_DWORD *)(a1 + 5712) = v19;
      if ( v19 != -1 )
      {
        *(_BYTE *)(a1 + 5640) = 1;
        return 1;
      }
      v17 = (unsigned int)*v38;
    }
    if ( (unsigned int)v17 <= 0xB )
    {
      if ( _bittest64(&v14, v17) )
      {
        sub_97160(1);
        if ( time(nullptr) <= v37 )
          continue;
      }
    }
    if ( *(_DWORD *)(a1 + 5712) == -1 )
    {
      v36 = sub_978C0(-1);
      sub_16AB0((__int64)"%s: %s", v13, v36);
    }
    return 1;
  }
  if ( a2 )
  {
    v34 = sub_95650(v15, (__int64)v41);
    v22 = *(_QWORD *)v45;
    v35 = v34;
    v21 = *(_QWORD *)&v43[2];
    if ( !v35 && *(_QWORD *)(a1 + 5696) == *(_QWORD *)&v43[2] && *(_QWORD *)(a1 + 5704) == *(_QWORD *)v45 )
      return 1;
  }
  else
  {
    v21 = *(_QWORD *)&v43[2];
    v22 = *(_QWORD *)v45;
  }
  *(_QWORD *)(a1 + 5696) = v21;
  v23 = *(_QWORD **)(a1 + 5664);
  *(_QWORD *)(a1 + 5704) = v22;
  sub_9B700(v23);
  *(_QWORD *)(a1 + 5664) = 0;
  LODWORD(v23) = *(_DWORD *)(a1 + 5712);
  *(_QWORD *)(a1 + 5672) = a1 + 5656;
  *(_QWORD *)(a1 + 5680) = a1 + 5656;
  *(_QWORD *)(a1 + 5688) = 0;
  v24 = sub_957A0((int)v23);
  if ( v24 <= 7 )
  {
    sub_952F0(*(_DWORD *)(a1 + 5712));
    *(_DWORD *)(a1 + 5712) = -1;
    goto LABEL_42;
  }
  v25 = nullptr;
  ptr = nullptr;
  *(_OWORD *)v40 = 0;
  if ( v24 != -1 )
  {
    ptr = sub_96080((__int64)&ptr, nullptr, v24 + 1, 1u);
    memset((char *)ptr + *(_QWORD *)v40, 0, v24 + 1 - *(_QWORD *)v40);
    *(_QWORD *)v40 = v24 + 1;
    v25 = ptr;
  }
  v25[v24] = 0;
  v26 = (int)sub_951C0(*(_DWORD *)(a1 + 5712), ptr, v24);
  if ( !a2 )
  {
    sub_952F0(*(_DWORD *)(a1 + 5712));
    *(_DWORD *)(a1 + 5712) = -1;
  }
  v27 = ptr;
  if ( *(_DWORD *)ptr != 929121385 || v24 != v26 )
    goto LABEL_44;
  v28 = v24 - 8;
  v29 = (char *)ptr + 4;
  v30 = (char *)ptr + v28 + 4;
  if ( (unsigned int)sub_8E7C0(0x37614469u) != *(_DWORD *)v30 )
  {
    v27 = ptr;
    goto LABEL_44;
  }
  v33 = sub_9E060((_QWORD *)(a1 + 5648), v29, v30, 0.0, a4, a5, a6, v31, v32, a9, a10);
  v27 = ptr;
  if ( !v33 || v30 != v33 )
  {
LABEL_44:
    if ( v27 )
    {
      *(_QWORD *)v40 = 0;
      j__free(v27);
    }
LABEL_42:
    sub_16AB0((__int64)"%s: corrupted registry file, please delete it", v13);
  }
  if ( ptr )
  {
    *(_QWORD *)v40 = 0;
    j__free(ptr);
  }
  return 1;
}


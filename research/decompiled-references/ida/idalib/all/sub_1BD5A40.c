__int64 __fastcall sub_1BD5A40(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned int v9; // r13d
  __int64 *v12; // r12
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // rbp
  __int64 *v19; // rax
  __int64 v20; // r14
  int v22; // eax
  char v23; // dl
  bool v24; // zf
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  bool v28; // al
  __int64 *i; // rax
  _DWORD *v30; // rdi
  unsigned int v31; // r15d
  __int64 *v32; // rax
  __int64 v33; // rdx
  __int64 *v34; // r10
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // [rsp+18h] [rbp-120h] BYREF
  __int64 v38; // [rsp+20h] [rbp-118h] BYREF
  int v39; // [rsp+28h] [rbp-110h]
  char v40; // [rsp+2Ch] [rbp-10Ch]
  char v41; // [rsp+2Dh] [rbp-10Bh]
  bool v42; // [rsp+2Eh] [rbp-10Ah]
  unsigned int v43; // [rsp+30h] [rbp-108h] BYREF
  char v44; // [rsp+34h] [rbp-104h]
  __int64 v45; // [rsp+38h] [rbp-100h] BYREF
  unsigned int v46; // [rsp+40h] [rbp-F8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+78h] [rbp-C0h]
  _BYTE v49[184]; // [rsp+80h] [rbp-B8h] BYREF

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return 0;
  v9 = a3;
  v12 = nullptr;
  v13 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v17 = *((unsigned int *)v13 + 2);
  v18 = *v13 + 8 * v17;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    v12 = (__int64 *)*sub_B8C3D0(a2, a2, v17, v14, v15, v16);
  v19 = v12;
  if ( (unsigned __int64)v12 < v18 )
  {
    while ( *(_WORD *)(*v19 + 36) != 206 )
    {
      if ( (__int64 *)v18 == ++v19 )
        return 0;
    }
    goto LABEL_9;
  }
  if ( v12 == (__int64 *)v18 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 206 )
  {
    v35 = (__int64 *)(v18 + 8);
    while ( v12 != v35 )
    {
      v36 = *v35++;
      if ( *(_WORD *)(v36 + 36) == 206 )
        goto LABEL_9;
    }
    return 0;
  }
LABEL_9:
  v22 = *(_DWORD *)(a1 + 11200);
  v38 = a1;
  v39 = v22;
  v40 = *(_BYTE *)(a1 + 12592);
  v41 = *(_BYTE *)(a1 + 11248);
  v42 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL) == 0;
  sub_1DBADC0(a1);
  if ( !v23 )
    *(_BYTE *)(a1 + 12592) = 1;
  ptr = v49;
  v48 = 0x1000000000LL;
  *(_BYTE *)(a1 + 11248) = 0;
  if ( sub_1BCB5C0(a1, a2, v9, a4, a5, &v38, a7, a8, &v37, (__int64)&ptr) )
  {
    v24 = v12 == (__int64 *)v18;
    if ( (unsigned __int64)v12 >= v18 )
      goto LABEL_30;
LABEL_13:
    v25 = v12;
    while ( *(_WORD *)(*v25 + 36) != 206 )
    {
      if ( (__int64 *)v18 == ++v25 )
      {
LABEL_16:
        v20 = 0;
        goto LABEL_17;
      }
    }
    while ( 1 )
    {
LABEL_22:
      v20 = *v12;
      for ( i = v12 + 1; *(_WORD *)(v20 + 36) != 206; ++i )
      {
        v20 = *i;
        v12 = i;
      }
      v30 = *(_DWORD **)(v20 + 40);
      v43 = 0;
      v44 &= ~1u;
      if ( (*v30 & 0x20000) != 0 )
        break;
      if ( !(unsigned __int8)sub_C61F40(
                               (unsigned __int64)v30,
                               (__int64)&v43,
                               *(_QWORD *)(a1 + 248),
                               a2,
                               (__int64 *)ptr,
                               (unsigned int)v48,
                               nullptr)
        || v43 != 2 )
      {
        if ( v43 > 1 )
        {
LABEL_37:
          sub_A4F8E0((int *)&v43);
          break;
        }
        break;
      }
      v31 = v46;
      if ( v46 <= 0x40 )
      {
        if ( !v45 )
          goto LABEL_37;
      }
      else if ( v31 == (unsigned int)sub_2206780(&v45) )
      {
        goto LABEL_37;
      }
      ++v12;
      sub_A4F8E0((int *)&v43);
      v24 = v12 == (__int64 *)v18;
      if ( (unsigned __int64)v12 < v18 )
        goto LABEL_13;
LABEL_30:
      if ( v24 )
        goto LABEL_16;
      if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 206 )
      {
        v32 = (__int64 *)(v18 + 8);
        while ( v32 != v12 )
        {
          v33 = *v32++;
          if ( *(_WORD *)(v33 + 36) == 206 )
            goto LABEL_22;
        }
        goto LABEL_16;
      }
    }
  }
  else
  {
    v20 = *v12;
    if ( *(_WORD *)(*v12 + 36) != 206 )
    {
      v34 = v12 + 1;
      do
        v20 = *v34++;
      while ( *(_WORD *)(v20 + 36) != 206 );
    }
  }
LABEL_17:
  if ( ptr != v49 )
    free(ptr);
  v26 = v38;
  *(_DWORD *)(v38 + 11200) = v39;
  *(_BYTE *)(v26 + 12592) = v40;
  *(_BYTE *)(v26 + 11248) = v41;
  v27 = *(_QWORD *)(v26 + 264);
  v28 = v42;
  if ( *(_DWORD *)(v27 + 204) == 5 )
    *(_BYTE *)(v27 + 194) = 1;
  *(_DWORD *)(v27 + 204) = !v28 ? 3 : 0;
  return v20;
}

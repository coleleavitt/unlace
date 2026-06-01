bool __fastcall sub_9EBEA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7,
        __int64 a8,
        _DWORD *a9)
{
  __int64 v11; // r14
  int v12; // ebp
  int v13; // r13d
  __int64 v14; // r15
  __int64 v15; // rsi
  char *v16; // rax
  char *v17; // rcx
  int v18; // r10d
  void *v20; // rbp
  int v21; // edx
  int v22; // edx
  void *v23; // rbp
  int v24; // edx
  int v25; // edx
  void *v29; // [rsp+20h] [rbp-198h]
  int v30; // [rsp+20h] [rbp-198h]
  int v31; // [rsp+20h] [rbp-198h]
  int v32; // [rsp+20h] [rbp-198h]
  int v33; // [rsp+20h] [rbp-198h]
  char *v34; // [rsp+40h] [rbp-178h]
  char *v35; // [rsp+40h] [rbp-178h]
  char *v36; // [rsp+40h] [rbp-178h]
  char *v37; // [rsp+40h] [rbp-178h]
  char *v38; // [rsp+48h] [rbp-170h]
  char *v39; // [rsp+48h] [rbp-170h]
  char *v40; // [rsp+48h] [rbp-170h]
  char *v41; // [rsp+48h] [rbp-170h]
  _BYTE v42[16]; // [rsp+50h] [rbp-168h] BYREF
  _BYTE v43[16]; // [rsp+60h] [rbp-158h] BYREF
  void *ptr; // [rsp+70h] [rbp-148h] BYREF
  __int64 v45; // [rsp+78h] [rbp-140h]
  _BYTE v46[312]; // [rsp+80h] [rbp-138h] BYREF

  if ( !*(_DWORD *)(a2 + 8) )
    return 0;
  v11 = 0;
  v12 = 0;
  while ( 1 )
  {
    v13 = v11;
    if ( v12 == 3 )
      return 0;
    while ( 1 )
    {
      v14 = *(_QWORD *)a2 + 40 * v11;
      v15 = *(_QWORD *)(v14 + 32);
      if ( (unsigned __int8)sub_98AD60(v15) )
        break;
      if ( v15 != a3 )
        goto LABEL_4;
      if ( v12 )
      {
        if ( v12 != 1 )
        {
          v12 = 3;
          if ( (unsigned int)(v11 + 1) < *(_DWORD *)(a2 + 8) )
            return 0;
          return v12 == 2;
        }
        ++v11;
        v12 = 2;
        sub_27B950((__int64)qword_1C7F2C0, a8, (int *)v14);
        *a9 = 1;
        *a7 = v13;
        v13 = v11;
        if ( (unsigned int)v11 >= *(_DWORD *)(a2 + 8) )
          return v12 == 2;
      }
      else
      {
        ++v11;
        v12 = 1;
        sub_27B950((__int64)qword_1C7F2C0, a5, (int *)v14);
        *a6 = 1;
        *a4 = v13;
        v13 = v11;
        if ( (unsigned int)v11 >= *(_DWORD *)(a2 + 8) )
          return v12 == 2;
      }
    }
    ptr = v46;
    v45 = 0x1000000000LL;
    sub_9EB220((__int64)v42, a1, v15, (__int64)&ptr);
    v29 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v42);
    sub_182CBA0(v29, v43);
    v16 = (char *)ptr;
    v17 = (char *)ptr + 16 * (unsigned int)v45;
    if ( v17 != ptr )
      break;
LABEL_16:
    if ( !v16 || v16 == v46 )
    {
LABEL_4:
      if ( (unsigned int)++v11 >= *(_DWORD *)(a2 + 8) )
        return v12 == 2;
    }
    else
    {
      ++v11;
      sub_186B220(v16);
      if ( (unsigned int)v11 >= *(_DWORD *)(a2 + 8) )
        return v12 == 2;
    }
  }
  while ( 1 )
  {
    while ( *(_QWORD *)v16 != a3 )
    {
LABEL_9:
      v16 += 16;
      if ( v17 == v16 )
        goto LABEL_15;
    }
    if ( (unsigned int)v45 > 1 )
      break;
    v18 = *((_DWORD *)v16 + 2);
    if ( !v12 )
    {
      v20 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v14 + 4) & 1) != 0 )
      {
        v39 = v16;
        v35 = v17;
        v31 = *((_DWORD *)v16 + 2);
        sub_182C690(qword_1C7F2C0, a5, v14);
        v16 = v39;
        v17 = v35;
        v18 = v31;
      }
      else
      {
        v21 = *(_DWORD *)v14;
        *(_BYTE *)(a5 + 4) &= ~1u;
        *(_DWORD *)a5 = v21;
      }
      if ( (*(_BYTE *)(v14 + 20) & 1) != 0 )
      {
        v38 = v16;
        v34 = v17;
        v30 = v18;
        sub_182C690(v20, a5 + 16, v14 + 16);
        v16 = v38;
        v17 = v34;
        v18 = v30;
      }
      else
      {
        v22 = *(_DWORD *)(v14 + 16);
        *(_BYTE *)(a5 + 20) &= ~1u;
        *(_DWORD *)(a5 + 16) = v22;
      }
      v12 = 1;
      *a6 = v18;
      *a4 = v13;
      goto LABEL_9;
    }
    if ( v12 == 1 )
    {
      v23 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v14 + 4) & 1) != 0 )
      {
        v40 = v16;
        v36 = v17;
        v32 = *((_DWORD *)v16 + 2);
        sub_182C690(qword_1C7F2C0, a8, v14);
        v16 = v40;
        v17 = v36;
        v18 = v32;
        if ( (*(_BYTE *)(v14 + 20) & 1) != 0 )
          goto LABEL_36;
LABEL_31:
        v25 = *(_DWORD *)(v14 + 16);
        *(_BYTE *)(a8 + 20) &= ~1u;
        *(_DWORD *)(a8 + 16) = v25;
      }
      else
      {
        v24 = *(_DWORD *)v14;
        *(_BYTE *)(a8 + 4) &= ~1u;
        *(_DWORD *)a8 = v24;
        if ( (*(_BYTE *)(v14 + 20) & 1) == 0 )
          goto LABEL_31;
LABEL_36:
        v41 = v16;
        v37 = v17;
        v33 = v18;
        sub_182C690(v23, a8 + 16, v14 + 16);
        v16 = v41;
        v17 = v37;
        v18 = v33;
      }
      v12 = 2;
      *a9 = v18;
      *a7 = v13;
      goto LABEL_9;
    }
    v16 += 16;
    v12 = 3;
    if ( v17 == v16 )
    {
LABEL_15:
      v16 = (char *)ptr;
      goto LABEL_16;
    }
  }
  if ( ptr != v46 && ptr )
    sub_186B220(ptr);
  return 0;
}


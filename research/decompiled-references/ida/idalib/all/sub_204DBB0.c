__int64 __fastcall sub_204DBB0(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 v2; // bp
  __int64 v3; // r12
  __int64 result; // rax
  unsigned int v5; // r13d
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rax
  __int16 v8; // ax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 i; // r14
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned int v18; // ebp
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbp
  unsigned int v22; // eax
  void *v23; // rdx
  __int64 v24; // rdx
  void *v25; // rcx
  int v26; // ebp
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // [rsp+0h] [rbp-E8h]
  __int64 v30; // [rsp+8h] [rbp-E0h]
  __int64 v31; // [rsp+8h] [rbp-E0h]
  void *v32; // [rsp+10h] [rbp-D8h] BYREF
  unsigned int v33; // [rsp+18h] [rbp-D0h]
  void *v34; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v35; // [rsp+28h] [rbp-C0h]
  char v36; // [rsp+2Ch] [rbp-BCh]
  void *v37; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v38; // [rsp+38h] [rbp-B0h]
  void *v39; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v40; // [rsp+48h] [rbp-A0h]
  char v41; // [rsp+4Ch] [rbp-9Ch]
  void *v42; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v43; // [rsp+58h] [rbp-90h]
  char v44; // [rsp+5Ch] [rbp-8Ch]
  void *ptr; // [rsp+60h] [rbp-88h] BYREF
  __int64 v46; // [rsp+68h] [rbp-80h]
  _BYTE v47[120]; // [rsp+70h] [rbp-78h] BYREF

  v2 = *a1;
  v3 = *((_QWORD *)a1 + 1);
  if ( *a1 == 1 || *(_BYTE *)a2 <= 1u )
    return sub_2058290(*(_QWORD *)(v3 + 24));
  if ( v2 <= 1u )
    return sub_2057E60(*(_QWORD *)(v3 + 24));
  if ( *(_BYTE *)a2 != 5 )
    return 0;
  if ( *(_BYTE *)(v3 + 8) == 17 )
  {
    v5 = *(_DWORD *)(a2 + 32);
    v6 = *(unsigned int *)(v3 + 32);
    if ( v5 > 0x40 )
    {
      if ( v5 - (unsigned int)sub_2206780(a2 + 24) > 0x40 )
        return sub_2058290(*(_QWORD *)(v3 + 24));
      v7 = **(_QWORD **)(a2 + 24);
    }
    else
    {
      v7 = *(_QWORD *)(a2 + 24);
    }
    if ( v6 > v7 )
      goto LABEL_12;
    return sub_2058290(*(_QWORD *)(v3 + 24));
  }
LABEL_12:
  if ( v2 != 18 )
  {
LABEL_29:
    result = sub_2060330(a1, a2);
    if ( result )
      return result;
    v18 = *(_DWORD *)(a2 + 32);
    if ( v18 > 0x40 )
    {
      if ( v18 - (unsigned int)sub_2206780(a2 + 24) > 0x40 )
        return 0;
      v19 = **(_QWORD **)(a2 + 24);
    }
    else
    {
      v19 = *(_QWORD *)(a2 + 24);
    }
    if ( *(unsigned int *)(v3 + 32) > v19 )
      return sub_205FD90(a1, 0);
    return 0;
  }
  v8 = *((_WORD *)a1 + 1);
  if ( v8 != 34 )
  {
    if ( v8 == 62 )
    {
      v21 = *(_QWORD *)&a1[32 * (2LL - (*((_DWORD *)a1 + 1) & 0x7FFFFFF))];
      if ( *(_BYTE *)v21 == 5 )
      {
        v22 = *(_DWORD *)(a2 + 32);
        v38 = v22;
        if ( v22 > 0x40 )
        {
          sub_2205510(&v37);
          v22 = v38;
          v23 = v37;
        }
        else
        {
          v23 = *(void **)(a2 + 24);
          v37 = v23;
        }
        v39 = v23;
        v24 = *(unsigned int *)(v21 + 32);
        v40 = v22;
        v38 = 0;
        v41 = 1;
        v33 = v24;
        if ( (unsigned int)v24 > 0x40 )
        {
          sub_2205510(&v32);
          v24 = v33;
          v25 = v32;
          v22 = v40;
        }
        else
        {
          v25 = *(void **)(v21 + 24);
          v32 = v25;
        }
        v35 = v24;
        v34 = v25;
        v33 = 0;
        v36 = 1;
        if ( (_DWORD)v24 != v22 )
        {
          if ( (unsigned int)v24 > v22 )
          {
            if ( v41 )
            {
              sub_2206CD0(&ptr, &v39, v24);
              v44 = 1;
            }
            else
            {
              sub_2206B70(&ptr, &v39, v24);
              v44 = 0;
            }
            v43 = v46;
            v42 = ptr;
            v26 = sub_98E2D0((__int64 *)&v34, (__int64 *)&v42);
            if ( v43 > 0x40 )
            {
LABEL_49:
              if ( v42 )
                operator delete[](v42);
            }
LABEL_51:
            if ( v35 > 0x40 && v34 )
              operator delete[](v34);
            if ( v33 > 0x40 && v32 )
              operator delete[](v32);
            if ( v40 > 0x40 && v39 )
              operator delete[](v39);
            if ( v38 > 0x40 && v37 )
              operator delete[](v37);
            v27 = *((_DWORD *)a1 + 1) & 0x7FFFFFF;
            if ( v26 )
              return sub_205EAD0(*(_QWORD *)&a1[-32 * v27], a2, 0);
            else
              return *(_QWORD *)&a1[32 * (1 - v27)];
          }
          if ( (unsigned int)v24 < v22 )
          {
            sub_2206CD0(&ptr, &v34, v22);
            v44 = 1;
            v43 = v46;
            v42 = ptr;
            v26 = sub_98E2D0((__int64 *)&v42, (__int64 *)&v39);
            if ( v43 > 0x40 )
              goto LABEL_49;
            goto LABEL_51;
          }
        }
        if ( v41 )
          goto LABEL_73;
        v28 = (unsigned __int64)v39;
        if ( v22 > 0x40 )
          v28 = *((_QWORD *)v39 + ((v22 - 1) >> 6));
        if ( (v28 & (1LL << ((unsigned __int8)v22 - 1))) == 0 )
LABEL_73:
          v26 = sub_2205DB0(&v34, &v39);
        else
          v26 = 1;
        goto LABEL_51;
      }
    }
    goto LABEL_29;
  }
  v46 = 0x800000000LL;
  v9 = *((_DWORD *)a1 + 1);
  ptr = v47;
  v10 = v9 & 0x7FFFFFF;
  if ( (unsigned int)v10 > 8uLL )
  {
    sub_2237220(&ptr, v47, (unsigned int)v10, 8);
    v10 = *((_DWORD *)a1 + 1) & 0x7FFFFFF;
  }
  if ( (_DWORD)v10 )
  {
    v11 = (unsigned int)(v10 - 1);
    for ( i = 0; ; ++i )
    {
      v15 = *(_QWORD *)&a1[32 * (i - v10)];
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v15 + 8) + 8LL) - 17 <= 1 )
      {
        result = sub_205EAD0(v15, a2, 0);
        if ( !result )
          goto LABEL_37;
        v13 = (unsigned int)v46;
        v14 = (unsigned int)v46 + 1LL;
        if ( v14 > HIDWORD(v46) )
        {
          v30 = result;
          sub_2237220(&ptr, v47, v14, 8);
          v13 = (unsigned int)v46;
          result = v30;
        }
        *((_QWORD *)ptr + v13) = result;
        LODWORD(v46) = v46 + 1;
      }
      else
      {
        v16 = (unsigned int)v46;
        v17 = (unsigned int)v46 + 1LL;
        if ( v17 > HIDWORD(v46) )
        {
          v31 = v15;
          sub_2237220(&ptr, v47, v17, 8);
          v16 = (unsigned int)v46;
          v15 = v31;
        }
        *((_QWORD *)ptr + v16) = v15;
        LODWORD(v46) = v46 + 1;
      }
      if ( i == v11 )
        break;
      v10 = *((_DWORD *)a1 + 1) & 0x7FFFFFF;
    }
  }
  v20 = sub_20BEEB0(a1);
  result = sub_2060B50(a1, ptr, (unsigned int)v46, *(_QWORD *)(v3 + 24), 0, v20);
LABEL_37:
  if ( ptr != v47 )
  {
    v29 = result;
    free(ptr);
    return v29;
  }
  return result;
}

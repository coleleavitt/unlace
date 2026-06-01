__int64 __fastcall sub_A986A0(__int64 a1, unsigned int *a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // rax
  int v6; // ecx
  __int64 *v7; // rbx
  _QWORD *v8; // r12
  _QWORD *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v13; // r14
  __int64 v14; // rax
  void *v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  _QWORD *v22; // rsi
  void *v23; // rdi
  void *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // r14d
  _DWORD *v29; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  unsigned __int8 v33; // al
  unsigned int v34; // ebx
  __int64 v35; // rax
  _QWORD *v36; // rbx
  __int64 v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  _QWORD *v41; // rcx
  unsigned int v42; // r12d
  unsigned int v43; // ecx
  unsigned int *v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rdx
  char **exception; // rbx
  __int64 v48; // [rsp+8h] [rbp-80h]
  _QWORD v49[3]; // [rsp+18h] [rbp-70h] BYREF
  char *v50; // [rsp+30h] [rbp-58h] BYREF
  __int64 v51; // [rsp+38h] [rbp-50h]
  __int64 v52; // [rsp+40h] [rbp-48h] BYREF
  __int64 v53; // [rsp+48h] [rbp-40h]

  v4 = *(_QWORD **)(a1 + 104);
  v5 = *(unsigned int *)(a1 + 112);
  v49[1] = a1;
  if ( v4 )
    v6 = *((_DWORD *)v4 - 1);
  else
    v6 = 0;
  if ( (_DWORD)v5 == v6 )
  {
    v35 = sub_186B270(0x30u);
    v4 = *(_QWORD **)(a1 + 104);
    v36 = (_QWORD *)v35;
    v37 = *(_QWORD *)(a1 + 8);
    v36[1] = 0;
    *v36 = v37;
    v36[2] = 0;
    v36[3] = 0;
    v36[4] = 0;
    v36[5] = 0;
    if ( v4 )
    {
      v38 = *((_DWORD *)v4 - 1);
      if ( v38 == *((_DWORD *)v4 - 2) )
      {
        v42 = (3 * v38 + 1) >> 1;
        v43 = 8 * v42 + 8;
        if ( 8 * v38 + 8 >= v43 || v38 >= v42 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_137C7A(&v50);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v50);
          sub_233E40((__int64)&v50);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v44 = (unsigned int *)sub_186B300(v4 - 1, v43);
        v45 = v44[1];
        v4 = v44 + 2;
        *v44 = v42;
        *(_QWORD *)(a1 + 104) = v44 + 2;
        LODWORD(v44) = v45;
        v41 = &v4[v45];
        v40 = (_DWORD)v44 + 1;
      }
      else
      {
        v39 = v38;
        v40 = v38 + 1;
        v41 = &v4[v39];
      }
    }
    else
    {
      v46 = (_QWORD *)sub_186B270(0x18u);
      *v46 = 2;
      v40 = 1;
      v4 = v46 + 1;
      *(_QWORD *)(a1 + 104) = v4;
      v41 = v4;
    }
    *v41 = v36;
    *((_DWORD *)v4 - 1) = v40;
    v5 = *(unsigned int *)(a1 + 112);
  }
  v7 = (__int64 *)v4[v5];
  *(_DWORD *)(a1 + 112) = v5 + 1;
  v8 = (_QWORD *)v7[1];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = *v7;
          if ( (*(_DWORD *)(v10 + 8))-- == 1 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_11;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_11:
    v8 = (_QWORD *)v7[1];
    if ( v8 )
LABEL_12:
      *((_DWORD *)v8 - 1) = 0;
  }
  v13 = v7[2];
  if ( v13 )
  {
    v14 = *(unsigned int *)(v13 - 4);
    if ( (_DWORD)v14 )
    {
      v48 = v13 + 32 * v14;
      do
      {
        v15 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v13);
        v16 = v13 + 16;
        v13 += 32;
        sub_182CBA0(v15, v16);
      }
      while ( v13 != v48 );
      v13 = v7[2];
    }
    *(_DWORD *)(v13 - 4) = 0;
  }
  v17 = v7[3];
  if ( v17 )
    *(_DWORD *)(v17 - 4) = 0;
  v18 = v7[4];
  if ( v18 )
    *(_DWORD *)(v18 - 4) = 0;
  v19 = v7[5];
  if ( v19 )
    *(_DWORD *)(v19 - 4) = 0;
  v49[2] = v7;
  v50 = nullptr;
  v51 = 0;
  v52 = 1;
  v53 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v50, &qword_1C7F280);
  v49[0] = a2;
  if ( a2 )
    ++a2[2];
  sub_A74DF0(v7 + 1, v49);
  v20 = v7[2];
  if ( !v20 || (v21 = *(unsigned int *)(v20 - 4), (_DWORD)v21 == *(_DWORD *)(v20 - 8)) )
  {
    sub_53D790(v7 + 2);
    v20 = v7[2];
    v21 = *(unsigned int *)(v20 - 4);
  }
  v22 = (_QWORD *)(32 * v21 + v20);
  *v22 = 0;
  v23 = qword_1C7F2C0;
  v22[1] = 0;
  v22[2] = 1;
  v22[3] = 0;
  sub_27B950((__int64)v23, (__int64)v22, (int *)&v50);
  v24 = qword_1C7F2C0;
  ++*(_DWORD *)(v7[2] - 4);
  sub_182CBA0(v24, &v50);
  sub_182CBA0(v24, &v52);
  sub_A993C0(a1);
  v28 = sub_A83040((__int64 *)a1, a2);
  v29 = (_DWORD *)v7[3];
  if ( !v29
    || *(v29 - 1) != 1
    || (v25 = v7[2], (*(_BYTE *)(v25 + 4) & 1) != 0)
    || *(_DWORD *)v25 != 1
    || (*(_BYTE *)(v25 + 20) & 1) != 0
    || *(_DWORD *)(v25 + 16) != 1
    || v28 != *v29 )
  {
    sub_A74580(a1, (__int64)v7, v25, v26, v27);
    if ( v28 == -1 || (unsigned int)sub_FF9FB0(*(_QWORD *)(a1 + 504), v28) == -1 )
    {
      v31 = *(_QWORD *)(a1 + 120);
      v32 = *(_QWORD *)(a1 + 504);
      if ( v31 && *(_DWORD *)(v31 - 4) )
      {
        sub_100FF90(*(_QWORD *)(a1 + 504));
      }
      else
      {
        v33 = sub_A72E00((__int64)a2);
        v34 = sub_1006C00(v32, v28, v33);
        v50 = nullptr;
        v51 = 0;
        v52 = 1;
        v53 = 0;
        sub_182CBA0(qword_1C7F2C0, &v52);
        BYTE4(v52) &= ~1u;
        LODWORD(v52) = 1;
        sub_A97E60((_QWORD *)a1, v34);
        sub_25A130((char *)&v50);
        v50 = nullptr;
        v51 = 0;
        v52 = 1;
        v53 = 0;
        sub_182CBA0(qword_1C7F2C0, &v52);
        BYTE4(v52) &= ~1u;
        LODWORD(v52) = 1;
        sub_A97E60((_QWORD *)a1, v34);
        sub_25A130((char *)&v50);
      }
    }
  }
  --*(_DWORD *)(a1 + 112);
  return v28;
}


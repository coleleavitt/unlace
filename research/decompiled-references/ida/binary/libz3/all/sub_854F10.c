__int64 __fastcall sub_854F10(__int64 a1, unsigned int a2, unsigned int *a3, unsigned __int8 a4)
{
  char **exception; // rbx
  __int64 result; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // r13
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned int *v23; // r13
  unsigned int v24; // eax
  unsigned int v25; // eax
  void *v26; // rdi
  unsigned int v27; // esi
  __int64 v28; // rdi
  unsigned int v29; // eax
  unsigned int v30; // r12d
  __int64 v31; // rdi
  unsigned int v32; // eax
  void *v33; // rbx
  unsigned int v35; // ecx
  size_t v36; // rsi
  unsigned int *v37; // rax
  _QWORD *v38; // rax
  unsigned int v39; // [rsp+0h] [rbp-88h]
  unsigned int v40; // [rsp+0h] [rbp-88h]
  void *ptr; // [rsp+8h] [rbp-80h]
  void *v42; // [rsp+10h] [rbp-78h]
  __int64 v43; // [rsp+18h] [rbp-70h]
  unsigned int v44; // [rsp+2Ch] [rbp-5Ch]
  __int64 v45; // [rsp+30h] [rbp-58h] BYREF
  __int64 v46; // [rsp+38h] [rbp-50h]
  __int64 v47; // [rsp+40h] [rbp-48h] BYREF
  __int64 v48; // [rsp+48h] [rbp-40h]

  result = *a3;
  if ( (_DWORD)result == -1 )
  {
    v10 = *(_QWORD *)(a1 + 80);
    v11 = sub_180C100(v10 + 2144, 24);
    v12 = *(_QWORD **)(v10 + 2128);
    v13 = v11;
    *(_QWORD *)v11 = &off_1C4C070;
    *(_QWORD *)(v11 + 8) = a3;
    *(_DWORD *)(v11 + 16) = -1;
    if ( v12 )
    {
      v14 = *((_DWORD *)v12 - 1);
      if ( v14 == *((_DWORD *)v12 - 2) )
      {
        v35 = (3 * v14 + 1) >> 1;
        v36 = 8 * v35 + 8;
        if ( 8 * v14 + 8 >= (unsigned int)v36 || v14 >= v35 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v45, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v45);
          sub_233E40((__int64)&v45);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v39 = (3 * v14 + 1) >> 1;
        v37 = (unsigned int *)sub_186B300(v12 - 1, v36);
        v12 = v37 + 2;
        *(_QWORD *)(v10 + 2128) = v37 + 2;
        *v37 = v39;
        LODWORD(v37) = v37[1];
        v17 = &v12[(unsigned int)v37];
        v16 = (_DWORD)v37 + 1;
      }
      else
      {
        v15 = v14;
        v16 = v14 + 1;
        v17 = &v12[v15];
      }
    }
    else
    {
      v38 = (_QWORD *)sub_186B270(0x18u);
      v12 = v38 + 1;
      *v38 = 2;
      v16 = 1;
      *(_QWORD *)(v10 + 2128) = v12;
      v17 = v12;
    }
    *v17 = v13;
    *((_DWORD *)v12 - 1) = v16;
    v43 = *(_QWORD *)(a1 + 72);
    v45 = a2;
    v46 = 0;
    v47 = 1;
    v48 = 0;
    sub_182CBA0(qword_1C7F2C0, &v47);
    v21 = *(_QWORD *)(a1 + 840);
    BYTE4(v47) &= ~1u;
    LODWORD(v47) = 1;
    if ( !v21 )
    {
      sub_16669E0(a1 + 832);
      v21 = *(_QWORD *)(a1 + 840);
    }
    v22 = sub_166A700(v21, (unsigned int)&v45, a4, v18, v19, v20);
    v23 = (unsigned int *)v22;
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    v42 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v45);
    sub_182CBA0(v42, &v47);
    sub_852970(a1, v23);
    v24 = sub_852C00(a1, v23);
    v25 = sub_1006C00(*(_QWORD *)(a1 + 496), v24, a4);
    v26 = qword_1C7F2C0;
    *a3 = v25;
    v46 = 0;
    v47 = 1;
    v48 = 0;
    v45 = a2;
    sub_182CBA0(v26, &v47);
    v27 = *a3;
    v28 = *(_QWORD *)(a1 + 496);
    BYTE4(v47) &= ~1u;
    LODWORD(v47) = 1;
    v29 = sub_1016000(v28);
    sub_853D30(a1, v29);
    if ( v44 != -1 )
      sub_833030(a1, v27, v44);
    *(_BYTE *)(a1 + 152) = 1;
    ptr = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v45);
    sub_182CBA0(ptr, &v47);
    v46 = 0;
    v47 = 1;
    v48 = 0;
    v45 = a2;
    sub_182CBA0(qword_1C7F2C0, &v47);
    v30 = *a3;
    v31 = *(_QWORD *)(a1 + 496);
    BYTE4(v47) &= ~1u;
    LODWORD(v47) = 1;
    v32 = sub_1016000(v31);
    sub_853D30(a1, v32);
    if ( v44 != -1 )
      sub_833030(a1, v30, v44);
    *(_BYTE *)(a1 + 152) = 1;
    v33 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v45);
    sub_182CBA0(v33, &v47);
    result = *a3;
    if ( v23 )
    {
      if ( v23[2]-- == 1 )
      {
        v40 = result;
        sub_15D7BC0(v43, v23);
        return v40;
      }
    }
  }
  return result;
}


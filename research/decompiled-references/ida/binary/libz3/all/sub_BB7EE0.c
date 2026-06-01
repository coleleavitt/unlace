__int64 __fastcall sub_BB7EE0(__int64 a1, _QWORD *a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v7; // r12
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r12d
  _DWORD *v12; // rax
  int v14; // eax
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // eax
  _QWORD *v20; // r14
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  _QWORD *v25; // rcx
  _QWORD *v26; // rdi
  __int64 v27; // rbx
  unsigned int v28; // ecx
  size_t v29; // rsi
  unsigned int *v30; // rax
  unsigned int v31; // r13d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  unsigned int v37; // [rsp+Ch] [rbp-6Ch]
  unsigned int v38; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 v39[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = *a2;
  v8 = *(_DWORD **)(sub_15D1F10(*a2) + 24);
  if ( !v8 || *(_DWORD *)(a1 + 1720) != *v8 || v8[1] )
  {
    v9 = *(_DWORD **)(sub_15D1F10(v7) + 24);
    if ( !v9 || *(_DWORD *)(a1 + 1720) != *v9 || v9[1] != 1 )
    {
      if ( *(_WORD *)(v7 + 4) )
        return (unsigned int)-1;
      v10 = *(_QWORD *)(v7 + 16);
      v11 = -1;
      v12 = *(_DWORD **)(v10 + 24);
      if ( !v12 || *(_DWORD *)(a1 + 1744) != *v12 || v12[1] != 11 )
        return v11;
    }
  }
  v14 = sub_B39350((__int64)a2, *(_DWORD *)(a1 + 8));
  v15 = *(_QWORD **)(a1 + 32);
  if ( v14 == -1 || a2 != (_QWORD *)v15[v14] )
  {
    if ( v15 )
    {
      v11 = *((_DWORD *)v15 - 1);
      if ( v11 == *((_DWORD *)v15 - 2) )
      {
        v31 = (3 * v11 + 1) >> 1;
        v32 = 8 * v31 + 8;
        if ( 8 * v11 + 8 >= (unsigned int)v32 || v11 >= v31 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_154526(v39, "Overflow encountered when expanding vector", v3);
          goto LABEL_37;
        }
        v33 = (unsigned int *)sub_186B300(v15 - 1, v32);
        v34 = v33[1];
        v15 = v33 + 2;
        *v33 = v31;
        *(_QWORD *)(a1 + 32) = v33 + 2;
        LODWORD(v33) = v34;
        v16 = &v15[v34];
        v17 = (_DWORD)v33 + 1;
      }
      else
      {
        v16 = &v15[v11];
        v17 = v11 + 1;
      }
    }
    else
    {
      v11 = 0;
      v35 = (_QWORD *)sub_186B270(0x18u);
      v15 = v35 + 1;
      *v35 = 2;
      v17 = 1;
      *(_QWORD *)(a1 + 32) = v15;
      v16 = v15;
    }
    *v16 = a2;
    *((_DWORD *)v15 - 1) = v17;
    v18 = *(_QWORD *)(a1 + 584);
    if ( v18 )
      v19 = *(_DWORD *)(v18 - 4);
    else
      v19 = 0;
    v38 = v19;
    sub_BB7E40((_QWORD *)(a1 + 584), &v38);
    LODWORD(v39[0]) = 1;
    sub_BB7DA0((_QWORD *)(a1 + 592), (unsigned int *)v39);
    sub_BB7E40((_QWORD *)(a1 + 600), &v38);
    v20 = *(_QWORD **)(a1 + 576);
    v21 = (_QWORD *)*v20;
    if ( !*v20 )
    {
      v36 = (_QWORD *)sub_186B270(0x18u);
      v21 = v36 + 1;
      *v36 = 2;
      v24 = 1;
      *v20 = v21;
      v25 = v21;
      goto LABEL_20;
    }
    v22 = *((_DWORD *)v21 - 1);
    if ( v22 != *((_DWORD *)v21 - 2) )
    {
      v23 = v22;
      v24 = v22 + 1;
      v25 = &v21[v23];
LABEL_20:
      *v25 = a1 + 608;
      v26 = *(_QWORD **)(a1 + 16);
      *((_DWORD *)v21 - 1) = v24;
      sub_B66EF0(v26, (__int64)a2, (unsigned int *)a1, v11);
      v27 = *(_QWORD *)(a1 + 16);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v27 + 7488) + 48LL))(*(_QWORD *)(v27 + 7488), *a2);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v27 + 7488) + 64LL))(*(_QWORD *)(v27 + 7488));
      return v11;
    }
    v28 = (3 * v22 + 1) >> 1;
    v29 = 8 * v28 + 8;
    if ( 8 * v22 + 8 < (unsigned int)v29 && v22 < v28 )
    {
      v37 = (3 * v22 + 1) >> 1;
      v30 = (unsigned int *)sub_186B300(v21 - 1, v29);
      v21 = v30 + 2;
      *v20 = v30 + 2;
      *v30 = v37;
      LODWORD(v30) = v30[1];
      v25 = &v21[(unsigned int)v30];
      v24 = (_DWORD)v30 + 1;
      goto LABEL_20;
    }
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_154526(v39, "Overflow encountered when expanding vector", v4);
LABEL_37:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v39);
    sub_233E40((__int64)v39);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  return sub_B39350((__int64)a2, *(_DWORD *)(a1 + 8));
}


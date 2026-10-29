void __fastcall sub_329D10(__int64 a1, unsigned int a2, __int64 *a3, _QWORD *a4, int a5, int a6)
{
  unsigned int v8; // ebx
  unsigned int v9; // r15d
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // ecx
  unsigned int v13; // esi
  int v14; // r8d
  int v15; // r9d
  __int64 *v16; // r13
  int v17; // eax
  _QWORD *v18; // rdx
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rax
  int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // esi
  unsigned int v26; // r12d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  int v33; // edx
  char **exception; // rbx
  __int64 *v35; // [rsp+8h] [rbp-70h] BYREF
  __int64 *v36; // [rsp+10h] [rbp-68h] BYREF
  __int64 *v37; // [rsp+18h] [rbp-60h] BYREF
  __int64 *v38[11]; // [rsp+20h] [rbp-58h] BYREF

  v8 = a2;
  if ( a2 == 1 )
  {
    v18 = (_QWORD *)*a4;
    if ( *a4 )
    {
      v19 = *((_DWORD *)v18 - 1);
      if ( v19 == *((_DWORD *)v18 - 2) )
      {
        v26 = (3 * v19 + 1) >> 1;
        v27 = 8 * v26 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v27 || v19 >= v26 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v38, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v38);
          sub_233E40((__int64)v38);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v28 = (unsigned int *)sub_186B300(v18 - 1, v27);
        v18 = v28 + 2;
        *v28 = v26;
        v29 = v28[1];
        *a4 = v18;
        v21 = &v18[v29];
        v8 = v29 + 1;
      }
      else
      {
        v20 = v19;
        v8 = v19 + 1;
        v21 = &v18[v20];
      }
    }
    else
    {
      v30 = (_QWORD *)sub_186B270(0x18u);
      v18 = v30 + 1;
      *v30 = 2;
      *a4 = v30 + 1;
      v21 = v30 + 1;
    }
    *v21 = *a3;
    *((_DWORD *)v18 - 1) = v8;
  }
  else
  {
    if ( a2 == 2 )
    {
      sub_326720(a1, 1u, a3, 1u, a3 + 1, a4);
      return;
    }
    if ( a2 )
    {
      if ( a2 <= 9 )
      {
        v22 = sub_329440(a1, a2);
        v23 = 1 << (a2 - 1);
        if ( *(_DWORD *)(a1 + 16) >= 2u )
          v23 = 2 << (a2 - 1);
        if ( v23 + 5 * a2 < 5 * (int)v22 + HIDWORD(v22) )
        {
          sub_323400(a1, a2, a2, a3, (_QWORD **)a4);
          return;
        }
        v36 = nullptr;
        v9 = a2 >> 1;
        if ( a2 >> 1 == 1 )
        {
          v31 = (_QWORD *)sub_186B270(0x18u);
          v16 = v31 + 1;
          v31[1] = *a3;
          *v31 = 0x100000002LL;
          v17 = 8;
          goto LABEL_27;
        }
        if ( v9 == 2 )
        {
          v35 = nullptr;
          sub_326720(a1, 1u, a3, 1u, a3 + 1, &v35);
          v16 = v35;
          v17 = 16;
          goto LABEL_27;
        }
      }
      else
      {
        v36 = nullptr;
        v9 = a2 >> 1;
        if ( a2 > 0x13 )
        {
LABEL_6:
          v37 = nullptr;
          v38[0] = nullptr;
          sub_329D10(a1, a2 >> 2, (_DWORD)a3, (unsigned int)&v37, a5, a6);
          sub_329D10(a1, v9 - (a2 >> 2), (_DWORD)a3 + 8 * (a2 >> 2), (unsigned int)v38, v10, v11);
          if ( v38[0] )
            v12 = *((_DWORD *)v38[0] - 1);
          else
            v12 = 0;
          if ( v37 )
            v13 = *((_DWORD *)v37 - 1);
          else
            v13 = 0;
          v35 = nullptr;
          sub_326720(a1, v13, v37, v12, v38[0], &v35);
          v16 = v35;
          if ( v38[0] )
            sub_186B220(v38[0] - 1);
          if ( v37 )
            sub_186B220(v37 - 1);
          v17 = 8 * v9;
          goto LABEL_27;
        }
      }
      v32 = sub_329440(a1, v9);
      v33 = 1 << (v9 - 1);
      if ( *(_DWORD *)(a1 + 16) >= 2u )
        v33 = 2 << (v9 - 1);
      if ( v33 + 5 * v9 >= 5 * (int)v32 + HIDWORD(v32) )
        goto LABEL_6;
      v35 = nullptr;
      sub_323400(a1, v9, v9, a3, &v35);
      v16 = v35;
      v17 = 8 * v9;
LABEL_27:
      sub_329D10(a1, v8 - v9, (_DWORD)a3 + v17, (unsigned int)&v36, v14, v15);
      if ( v36 )
        v24 = *((_DWORD *)v36 - 1);
      else
        v24 = 0;
      if ( v16 )
        v25 = *((_DWORD *)v16 - 1);
      else
        v25 = 0;
      sub_326720(a1, v25, v16, v24, v36, a4);
      if ( v36 )
        sub_186B220(v36 - 1);
      if ( v16 )
        sub_186B220(v16 - 1);
    }
  }
}


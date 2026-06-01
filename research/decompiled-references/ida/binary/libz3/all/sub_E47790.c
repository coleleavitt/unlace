void __fastcall sub_E47790(__int64 a1, __int64 *a2)
{
  char **exception; // r14
  __int64 v4; // rdi
  char v6; // r12
  char v7; // r13
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // r15
  __int64 v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // r14
  __int64 v14; // rsi
  bool v15; // zf
  _QWORD *v16; // rbx
  _QWORD *v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdi
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // ebx
  size_t v25; // rsi
  unsigned int *v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rcx
  unsigned int v30; // r8d
  _QWORD *v31; // rsi
  int v32; // eax
  _QWORD *v33; // rax
  _QWORD *v34; // [rsp+0h] [rbp-88h]
  __int64 v35; // [rsp+0h] [rbp-88h]
  __int64 v36; // [rsp+0h] [rbp-88h]
  unsigned int v37; // [rsp+Ch] [rbp-7Ch]
  unsigned int v38; // [rsp+Ch] [rbp-7Ch]
  _QWORD *v39; // [rsp+18h] [rbp-70h] BYREF
  __int64 v40; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v41; // [rsp+28h] [rbp-60h]
  __int64 v42; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v43[80]; // [rsp+38h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a1 + 168);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    if ( !*(_BYTE *)(a1 + 224) )
    {
      v42 = a1 + 80;
      sub_17F9A60(v43, "smt");
      v6 = sub_1859630(a1 + 80, "core.minimize", v43, 0);
      sub_18572D0(v43);
      if ( v6 )
      {
        v7 = *(_BYTE *)(a1 + 224);
        *(_BYTE *)(a1 + 224) = 1;
        sub_E1FF20((__int64 *)&v39, a1);
        v8 = (__int64 *)a2[1];
        if ( v8 )
        {
          v9 = *((unsigned int *)v8 - 1);
          if ( (_DWORD)v9 )
          {
            v10 = &v8[v9];
            do
              sub_E20700((__int64 *)&v39, *v8++);
            while ( v8 != v10 );
          }
        }
        v11 = *(_QWORD *)(a1 + 8);
        v41 = nullptr;
        v40 = v11;
        if ( (unsigned int)sub_E20AD0((__int64 *)&v39, &v40) == 1 )
        {
          v16 = (_QWORD *)a2[1];
          if ( v16 )
          {
            v17 = &v16[*((unsigned int *)v16 - 1)];
            if ( v16 >= v17 )
              goto LABEL_28;
            do
            {
              v18 = *v16;
              if ( *v16 )
              {
                v19 = *a2;
                v15 = (*(_DWORD *)(v18 + 8))-- == 1;
                if ( v15 )
                {
                  v34 = v17;
                  sub_15D7BC0(v19, v18);
                  v17 = v34;
                }
              }
              ++v16;
            }
            while ( v16 < v17 );
            v16 = (_QWORD *)a2[1];
            if ( v16 )
LABEL_28:
              *((_DWORD *)v16 - 1) = 0;
          }
          v12 = v41;
          v20 = 0;
          if ( v41 )
          {
            while ( v20 < *((_DWORD *)v12 - 1) )
            {
              while ( 1 )
              {
                v21 = v12[v20];
                if ( v21 )
                  ++*(_DWORD *)(v21 + 8);
                v22 = a2[1];
                if ( !v22 )
                {
                  v38 = v20;
                  v36 = v21;
                  v33 = (_QWORD *)sub_186B270(0x18u);
                  v27 = v33 + 1;
                  *v33 = 2;
                  v12 = v41;
                  v32 = 1;
                  v29 = v36;
                  v30 = v38;
                  a2[1] = (__int64)v27;
                  v31 = v27;
                  goto LABEL_40;
                }
                v23 = *(_DWORD *)(v22 - 4);
                if ( v23 == *(_DWORD *)(v22 - 8) )
                  break;
                ++v20;
                *(_QWORD *)(v22 + 8LL * v23) = v21;
                *(_DWORD *)(v22 - 4) = v23 + 1;
                if ( v20 >= *((_DWORD *)v12 - 1) )
                  goto LABEL_11;
              }
              v24 = (3 * v23 + 1) >> 1;
              v25 = 8 * v24 + 8;
              if ( 8 * v23 + 8 >= (unsigned int)v25 || v23 >= v24 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v42, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v42);
                sub_233E40((__int64)&v42);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v37 = v20;
              v35 = v21;
              v26 = (unsigned int *)sub_186B300((void *)(v22 - 8), v25);
              v27 = v26 + 2;
              v28 = v26[1];
              v29 = v35;
              *v26 = v24;
              v30 = v37;
              v12 = v41;
              a2[1] = (__int64)(v26 + 2);
              LODWORD(v26) = v28;
              v31 = &v27[v28];
              v32 = (_DWORD)v26 + 1;
LABEL_40:
              *v31 = v29;
              *((_DWORD *)v27 - 1) = v32;
              if ( !v12 )
                goto LABEL_19;
              v20 = v30 + 1;
            }
            goto LABEL_11;
          }
        }
        else
        {
          v12 = v41;
          if ( v41 )
          {
LABEL_11:
            v13 = &v12[*((unsigned int *)v12 - 1)];
            if ( v12 >= v13 )
              goto LABEL_18;
            do
            {
              while ( 1 )
              {
                v14 = *v12;
                if ( *v12 )
                {
                  v15 = (*(_DWORD *)(v14 + 8))-- == 1;
                  if ( v15 )
                    break;
                }
                if ( ++v12 >= v13 )
                  goto LABEL_17;
              }
              sub_15D7BC0(v40, v14);
              ++v12;
            }
            while ( v12 < v13 );
LABEL_17:
            v12 = v41;
            if ( v41 )
LABEL_18:
              sub_186B220(v12 - 1);
          }
        }
LABEL_19:
        sub_E1FA60(&v39);
        *(_BYTE *)(a1 + 224) = v7;
      }
    }
  }
}


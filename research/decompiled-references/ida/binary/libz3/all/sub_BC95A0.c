void __fastcall sub_BC95A0(_QWORD *a1, __int64 a2)
{
  char **exception; // rbp
  __int64 v3; // rdx
  __int64 *v4; // r14
  __int64 v6; // rax
  __int64 v7; // r15
  _QWORD *v8; // rdx
  __int64 v9; // r13
  unsigned int v10; // ebp
  _QWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // rbp
  __int64 (__fastcall *v18)(__int64, __int64); // r12
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbp
  unsigned int *v22; // rsi
  __int64 v23; // rdi
  unsigned int v24; // r12d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 *v29; // [rsp+0h] [rbp-88h]
  __int64 v30; // [rsp+8h] [rbp-80h]
  int v31[2]; // [rsp+18h] [rbp-70h] BYREF
  int v32[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v33; // [rsp+28h] [rbp-60h]
  __int64 v34[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(__int64 **)(a2 + 8);
  v30 = a1[3];
  if ( v4 )
  {
    v29 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 != v29 )
    {
      v6 = a1[3];
      v7 = 0;
      while ( 1 )
      {
        v8 = (_QWORD *)a1[536];
        v9 = *v4;
        *(_QWORD *)v31 = 0;
        *(_QWORD *)v32 = 0;
        v33 = v6;
        if ( v8 )
        {
          v10 = *((_DWORD *)v8 - 1);
          if ( v10 == *((_DWORD *)v8 - 2) )
          {
            v24 = (3 * v10 + 1) >> 1;
            v25 = 8 * v24 + 8;
            if ( 8 * v10 + 8 >= (unsigned int)v25 || v10 >= v24 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_154526(v34, "Overflow encountered when expanding vector", v3);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v34);
              sub_233E40((__int64)v34);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v26 = (unsigned int *)sub_186B300(v8 - 1, v25);
            v27 = v26[1];
            v8 = v26 + 2;
            *v26 = v24;
            a1[536] = v26 + 2;
            LODWORD(v26) = v27;
            v11 = &v8[v27];
            v12 = (_DWORD)v26 + 1;
          }
          else
          {
            v11 = &v8[v10];
            v12 = v10 + 1;
          }
        }
        else
        {
          v28 = (_QWORD *)sub_186B270(0x18u);
          v8 = v28 + 1;
          v10 = 0;
          a1[536] = v28 + 1;
          *v28 = 2;
          v11 = v28 + 1;
          v12 = 1;
        }
        *v11 = v9;
        *((_DWORD *)v8 - 1) = v12;
        while ( 1 )
        {
          if ( v8 )
          {
            v13 = *((_DWORD *)v8 - 1);
            if ( v13 == v10 )
              goto LABEL_14;
          }
          else
          {
            v13 = 0;
            if ( !v10 )
            {
LABEL_14:
              sub_14B9B80(a1 + 149, v32);
              goto LABEL_21;
            }
          }
          if ( !(unsigned __int8)sub_BC7E60((__int64)a1, (unsigned int *)v8[v13 - 1], (__int64 *)v31, (__int64 *)v32) )
            break;
          v8 = (_QWORD *)a1[536];
          if ( *(_QWORD *)v32 )
            --*((_DWORD *)v8 - 1);
        }
        if ( v9 )
          ++*(_DWORD *)(v9 + 8);
        v14 = *(_QWORD *)v32;
        if ( *(_QWORD *)v32 )
        {
          v15 = v33;
          v16 = (*(_DWORD *)(*(_QWORD *)v32 + 8LL))-- == 1;
          if ( v16 )
            sub_15D7BC0(v15, v14);
        }
        *(_QWORD *)v32 = v9;
LABEL_21:
        if ( (unsigned __int8)sub_1461420(a1 + 428) )
        {
          v17 = a1[114];
          v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL);
          v19 = sub_15D1F10(*(_QWORD *)v32);
          v20 = v18(v17, v19);
          v21 = v20;
          if ( v20 )
            ++*(_DWORD *)(v20 + 8);
          if ( v7 )
          {
            v16 = (*(_DWORD *)(v7 + 8))-- == 1;
            if ( v16 )
              sub_15D7BC0(v30, v7);
          }
          sub_BB77A0(a1 + 17, *(unsigned int **)v32, v21, *(__int64 *)v31);
          v7 = v21;
        }
        v22 = *(unsigned int **)v32;
        if ( !*(_QWORD *)v32 )
          break;
        v23 = v33;
        v16 = (*(_DWORD *)(*(_QWORD *)v32 + 8LL))-- == 1;
        if ( !v16 )
          break;
        sub_15D7BC0(v23, v22);
        if ( v29 == ++v4 )
          goto LABEL_36;
LABEL_31:
        v6 = a1[3];
      }
      if ( v29 != ++v4 )
        goto LABEL_31;
LABEL_36:
      if ( v7 )
      {
        v16 = (*(_DWORD *)(v7 + 8))-- == 1;
        if ( v16 )
          sub_15D7BC0(v30, v7);
      }
    }
  }
}


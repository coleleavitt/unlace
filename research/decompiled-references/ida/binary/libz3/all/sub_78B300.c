__int64 __fastcall sub_78B300(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  bool v5; // zf
  __int64 v6; // rax
  _QWORD *v7; // rdi
  int v8; // r13d
  __int64 v9; // rax
  unsigned int v10; // r12d
  size_t v11; // rsi
  unsigned int *v12; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // esi
  _QWORD *v18; // rdi
  unsigned int v19; // r10d
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r10
  _QWORD *v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 (__fastcall *v28)(__int64, unsigned __int8); // rax
  unsigned int v29; // r12d
  _QWORD *v30; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  char **exception; // rbx
  __int64 v35[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 296) )
  {
    while ( 1 )
    {
      sub_1623DD0(*(_QWORD *)(a1 + 200));
      v6 = *(_QWORD *)(a1 + 160);
      if ( v6 )
      {
        v7 = *(_QWORD **)(a1 + 144);
        v8 = *(_DWORD *)(v6 - 4);
        if ( !v7 )
          goto LABEL_28;
      }
      else
      {
        v7 = *(_QWORD **)(a1 + 144);
        v8 = 0;
        if ( !v7 )
        {
LABEL_28:
          v30 = (_QWORD *)sub_186B270(0x10u);
          v7 = v30 + 1;
          *v30 = 2;
          *(_QWORD *)(a1 + 144) = v30 + 1;
          v4 = v30 + 1;
          goto LABEL_4;
        }
      }
      v9 = *((unsigned int *)v7 - 1);
      if ( (_DWORD)v9 == *((_DWORD *)v7 - 2) )
      {
        v10 = (unsigned int)(3 * v9 + 1) >> 1;
        v11 = 4 * v10 + 8;
        if ( 4 * (int)v9 + 8 >= (unsigned int)v11 || (unsigned int)v9 >= v10 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v35, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v35);
          sub_233E40((__int64)v35);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v12 = (unsigned int *)sub_186B300(v7 - 1, v11);
        v13 = v12 + 2;
        *v12 = v10;
        v14 = v12[1];
        *(_QWORD *)(a1 + 144) = v13;
        v13[v14] = v8;
        ++*(v13 - 1);
        v5 = (*(_DWORD *)(a1 + 296))-- == 1;
        if ( v5 )
          break;
      }
      else
      {
        v4 = (_DWORD *)v7 + v9;
LABEL_4:
        *v4 = v8;
        ++*((_DWORD *)v7 - 1);
        v5 = (*(_DWORD *)(a1 + 296))-- == 1;
        if ( v5 )
          break;
      }
    }
  }
  v15 = *(_QWORD *)(a1 + 216);
  if ( !v15 )
    goto LABEL_25;
  v16 = *(unsigned int *)(v15 + 8);
  v17 = *(_DWORD *)(a2 + 12);
  v18 = *(_QWORD **)v15;
  v19 = v16 - 1;
  v20 = 16 * v16;
  v21 = *(_QWORD *)v15 + v20;
  v22 = 16LL * (v17 & v19);
  v23 = (_QWORD *)(*(_QWORD *)v15 + v22);
  if ( v22 != v20 )
  {
    v24 = (_QWORD *)(*(_QWORD *)v15 + v22);
    while ( 1 )
    {
      v25 = *v24;
      if ( *v24 > 1u )
      {
        if ( *(_DWORD *)(v25 + 12) == v17 && a2 == v25 )
        {
LABEL_30:
          v29 = *((_DWORD *)v24 + 2);
          goto LABEL_31;
        }
      }
      else if ( !v25 )
      {
        v24 = v23;
        goto LABEL_23;
      }
      v24 += 2;
      if ( (_QWORD *)v21 == v24 )
      {
        v24 = v18;
        if ( v18 == v23 )
        {
          while ( 1 )
          {
LABEL_23:
            v26 = *v24;
            if ( *v24 > 1u )
            {
              if ( *(_DWORD *)(v26 + 12) == v17 && a2 == v26 )
                goto LABEL_30;
            }
            else if ( !v26 )
            {
              goto LABEL_25;
            }
            v24 += 2;
            if ( (_QWORD *)v21 == v24 )
              goto LABEL_40;
          }
        }
        while ( 1 )
        {
LABEL_37:
          v32 = *v24;
          if ( *v24 > 1u )
          {
            if ( *(_DWORD *)(v32 + 12) == v17 && a2 == v32 )
              goto LABEL_30;
          }
          else if ( !v32 )
          {
LABEL_39:
            v24 = v23;
            if ( v22 != v20 )
              goto LABEL_23;
LABEL_40:
            if ( v18 != v23 )
            {
              while ( 1 )
              {
                v33 = *v18;
                if ( *v18 > 1u )
                {
                  if ( *(_DWORD *)(v33 + 12) == v17 && a2 == v33 )
                  {
                    v24 = v18;
                    goto LABEL_30;
                  }
                }
                else if ( !v33 )
                {
                  goto LABEL_25;
                }
                v18 += 2;
                if ( v23 == v18 )
                  goto LABEL_25;
              }
            }
            goto LABEL_25;
          }
          v24 += 2;
          if ( v23 == v24 )
            goto LABEL_39;
        }
      }
    }
  }
  if ( v18 != v23 )
  {
    v24 = *(_QWORD **)v15;
    goto LABEL_37;
  }
LABEL_25:
  v27 = *(_QWORD *)(a1 + 192);
  v28 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v27 + 24LL);
  if ( v28 == sub_788600 )
    v29 = sub_11CA540(v27, 1, 1);
  else
    v29 = v28(v27, 1u);
LABEL_31:
  sub_16238E0(*(_QWORD *)(a1 + 200), a2, v29);
  return v29;
}


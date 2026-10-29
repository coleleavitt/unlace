__int64 __fastcall sub_67A360(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 *v6; // rbx
  unsigned __int64 v7; // r12
  __int64 v8; // rsi
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r12
  _QWORD *v13; // r13
  _QWORD *v14; // r15
  __int64 v15; // r14
  unsigned int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 *v19; // rdx
  unsigned int v20; // ebx
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r15
  _DWORD *v30; // rax
  bool (__fastcall *v32)(__int64, __int64); // r14
  __int64 v33; // rsi
  _DWORD *v34; // rax
  __int64 v35; // r14
  char **exception; // r13
  __int64 v37; // rdx
  __int64 *v38; // [rsp+8h] [rbp-170h]
  __int64 v39; // [rsp+8h] [rbp-170h]
  __int64 *v40; // [rsp+18h] [rbp-160h]
  __int64 v41; // [rsp+28h] [rbp-150h]
  __int64 v42; // [rsp+28h] [rbp-150h]
  __int64 v43; // [rsp+30h] [rbp-148h]
  __int64 v44; // [rsp+38h] [rbp-140h]
  __int64 v45; // [rsp+40h] [rbp-138h]
  __int64 v46; // [rsp+48h] [rbp-130h]
  unsigned __int64 v47; // [rsp+50h] [rbp-128h]
  unsigned __int64 v49; // [rsp+60h] [rbp-118h]
  __int64 v51[2]; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v52[2]; // [rsp+80h] [rbp-F8h] BYREF
  _BYTE v53[48]; // [rsp+90h] [rbp-E8h] BYREF
  _BYTE v54[64]; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v55[15]; // [rsp+100h] [rbp-78h] BYREF

  v3 = *(_QWORD *)(a1 + 112);
  v44 = *(_QWORD *)(a1 + 8);
  v51[0] = v44;
  if ( v3 )
  {
    v49 = v3 + 8LL * *(unsigned int *)(v3 - 4);
    if ( v49 == v3 )
    {
      v3 = 0;
    }
    else
    {
      v47 = v3;
      v3 = 0;
      do
      {
        v41 = *(_QWORD *)(*(_QWORD *)v47 + 16LL);
        v43 = v41 + 40LL * *(unsigned int *)(*(_QWORD *)v47 + 24LL);
        if ( v43 == v41 )
          goto LABEL_46;
        v4 = *(_QWORD *)(*(_QWORD *)v47 + 16LL);
        while ( *(_DWORD *)(v4 + 4) != 2 )
        {
          v4 += 40;
          if ( v41 + 40LL * *(unsigned int *)(*(_QWORD *)v47 + 24LL) == v4 )
            goto LABEL_46;
        }
        v42 = v4;
        if ( v43 == v4 )
        {
LABEL_46:
          v46 = 0;
          v45 = 0;
        }
        else
        {
          v46 = *(_QWORD *)(v4 + 8);
          v5 = *(_DWORD *)(v46 + 32);
          v45 = sub_186B270(0x38u);
          sub_13478B0(v45, *(_QWORD *)(a1 + 8), v5);
          while ( 1 )
          {
            if ( v3 )
            {
              v6 = (__int64 *)v3;
              v7 = v3 + 8LL * *(unsigned int *)(v3 - 4);
              if ( v3 < v7 )
              {
                do
                {
                  while ( 1 )
                  {
                    v8 = *v6;
                    if ( *v6 )
                    {
                      v9 = (*(_DWORD *)(v8 + 8))-- == 1;
                      if ( v9 )
                        break;
                    }
                    if ( (unsigned __int64)++v6 >= v7 )
                      goto LABEL_17;
                  }
                  sub_15D7BC0(v44, v8);
                  ++v6;
                }
                while ( (unsigned __int64)v6 < v7 );
              }
LABEL_17:
              *(_DWORD *)(v3 - 4) = 0;
            }
            v10 = *(_QWORD *)(v42 + 16);
            v11 = 8LL * *(unsigned int *)(v10 + 24);
            v40 = (__int64 *)(v10 + 32 + v11);
            if ( v11 )
            {
              v38 = (__int64 *)(v10 + 32);
              v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
              if ( !v12 || (v13 = (_QWORD *)(v12 + 8LL * *(unsigned int *)(v12 - 4)), (_QWORD *)v12 == v13) )
              {
LABEL_34:
                v12 = 0;
                if ( v3 )
                  goto LABEL_25;
              }
              else
              {
LABEL_21:
                v14 = (_QWORD *)v12;
                v15 = *v38;
                while ( 1 )
                {
                  (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*(_QWORD *)*v14 + 32LL))(v55, *v14, v15);
                  v12 = v55[0];
                  if ( v55[0] )
                    break;
                  if ( v13 == ++v14 )
                    goto LABEL_34;
                }
                if ( v3 )
                {
LABEL_25:
                  v16 = *(_DWORD *)(v3 - 4);
                  if ( v16 == *(_DWORD *)(v3 - 8) )
                    goto LABEL_31;
LABEL_26:
                  v17 = v16;
                  v18 = v16 + 1;
                  v19 = (__int64 *)(v3 + 8 * v17);
                  goto LABEL_27;
                }
              }
              v24 = (_QWORD *)sub_186B270(0x18u);
              v3 = (unsigned __int64)(v24 + 1);
              v19 = v24 + 1;
              *v24 = 2;
              v18 = 1;
LABEL_27:
              while ( 1 )
              {
                ++v38;
                *v19 = v12;
                *(_DWORD *)(v3 - 4) = v18;
                if ( v40 == v38 )
                  break;
                v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
                if ( !v12 )
                  goto LABEL_25;
                v13 = (_QWORD *)(v12 + 8LL * *(unsigned int *)(v12 - 4));
                if ( (_QWORD *)v12 != v13 )
                  goto LABEL_21;
                v16 = *(_DWORD *)(v3 - 4);
                v12 = 0;
                if ( v16 != *(_DWORD *)(v3 - 8) )
                  goto LABEL_26;
LABEL_31:
                v20 = (3 * v16 + 1) >> 1;
                v21 = 8 * v20 + 8;
                if ( 8 * v16 + 8 >= (unsigned int)v21 || v16 >= v20 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_107EF6(v55, "Overflow encountered when expanding vector", v37);
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v55);
                  sub_233E40((__int64)v55);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v22 = (unsigned int *)sub_186B300((void *)(v3 - 8), v21);
                v23 = v22[1];
                v3 = (unsigned __int64)(v22 + 2);
                *v22 = v20;
                LODWORD(v22) = v23;
                v19 = (__int64 *)(v3 + 8 * v23);
                v18 = (_DWORD)v22 + 1;
              }
              v10 = *(_QWORD *)(v42 + 16);
            }
            sub_675770(v55, *(__int64 **)(a1 + 24), v10);
            v25 = v55[0];
            v26 = v55[1];
            sub_1348F50(v45, v3, v55[0]);
            if ( v25 )
            {
              v9 = (*(_DWORD *)(v25 + 8))-- == 1;
              if ( v9 )
                sub_15D7BC0(v26, v25);
            }
            v27 = v42 + 40;
            if ( v43 == v42 + 40 )
              break;
            while ( *(_DWORD *)(v27 + 4) != 2 )
            {
              v27 += 40;
              if ( v43 == v27 )
                goto LABEL_47;
            }
            v42 = v27;
            if ( v43 == v27 )
              break;
            v46 = *(_QWORD *)(v27 + 8);
          }
        }
LABEL_47:
        sub_135F980(*a2, v46, v45);
        v47 += 8LL;
      }
      while ( v49 != v47 );
    }
  }
  sub_167E970(v53, a3, 0, 0, 0);
  sub_167F5F0(v54, v53);
  sub_167F5B0(v55, v53);
  while ( (unsigned __int8)sub_167E490(v54, v55) )
  {
    v28 = sub_167E460(v54);
    v29 = v28;
    if ( !*(_WORD *)(v28 + 4) && !*(_DWORD *)(v28 + 24) )
    {
      v30 = *(_DWORD **)(*(_QWORD *)(v28 + 16) + 24LL);
      if ( !v30 || *v30 == -1 )
      {
        v32 = *(bool (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL);
        v33 = sub_15D1F10(v29);
        if ( v32 == sub_676470 )
        {
          v34 = *(_DWORD **)(v33 + 24);
          if ( v34 && *v34 == 4 )
          {
LABEL_59:
            sub_675770(v52, *(__int64 **)(a1 + 24), v29);
            v35 = v52[0];
            v39 = v52[1];
            sub_135F9B0(*a2, *(_QWORD *)(v29 + 16), v52[0]);
            sub_675460(v35, v39);
          }
        }
        else if ( v32(a1, v33) )
        {
          goto LABEL_59;
        }
      }
    }
    sub_167EA90(v54);
  }
  sub_6642B0((__int64)v55);
  sub_6642B0((__int64)v54);
  sub_677270((__int64)v53);
  v51[1] = v3;
  return sub_2334C0(v51);
}


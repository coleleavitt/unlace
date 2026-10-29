__int64 __fastcall sub_77F5C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdx
  char v6; // al
  char v7; // si
  __int64 *v8; // rdi
  __int64 v9; // rax
  int v10; // edx
  __int64 *v11; // rax
  __int64 v12; // rdx
  bool v13; // zf
  _DWORD *v14; // rax
  __int64 *v15; // r8
  __int64 v16; // rax
  unsigned int **v17; // r14
  unsigned int **v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rax
  unsigned int v21; // r15d
  int v22; // eax
  int v23; // r15d
  _BYTE *v24; // rsi
  unsigned int *v25; // rsi
  unsigned __int8 v26; // bl
  _QWORD *v27; // rax
  unsigned int *v28; // rax
  int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rax
  char *v32; // rdi
  __int64 v33; // r10
  int v34; // eax
  char **v35; // rbp
  __int64 v36; // rax
  int v37; // edx
  __int64 *v38; // rax
  _DWORD *v39; // rax
  char **exception; // rbx
  char **v41; // rbp
  char **v42; // rbp
  char **v43; // rbp
  __int64 v44; // [rsp+10h] [rbp-D8h]
  __int64 v45; // [rsp+18h] [rbp-D0h]
  unsigned int v47; // [rsp+28h] [rbp-C0h]
  unsigned int v48; // [rsp+2Ch] [rbp-BCh]
  __int64 v49; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v50[4]; // [rsp+40h] [rbp-A8h] BYREF
  void *ptr; // [rsp+60h] [rbp-88h] BYREF
  __int64 v52; // [rsp+68h] [rbp-80h]
  _BYTE v53[120]; // [rsp+70h] [rbp-78h] BYREF

  if ( (unsigned __int8)sub_EE0F80(a2) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0((__int64 *)&ptr, "eliminate term-ite before applying nlsat");
    *exception = (char *)off_1C63670;
    sub_2333C0(exception + 1, &ptr);
    sub_233E40((__int64)&ptr);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  result = a2;
  v5 = *(_QWORD *)(a2 + 72);
  if ( !v5 )
    return result;
  v6 = *(_BYTE *)(v5 + 3) >> 6;
  if ( v6 )
  {
    if ( v6 != 1 )
    {
LABEL_5:
      if ( v6 == 2 )
      {
        result = (unsigned int)(*(_DWORD *)(v5 + 4) - 1);
        v48 = *(_DWORD *)(v5 + 4) - 1;
      }
      else
      {
        result = *(unsigned int *)(v5 + 4);
        v48 = *(_DWORD *)(v5 + 4);
      }
      goto LABEL_7;
    }
  }
  else
  {
    do
    {
      v5 = *(_QWORD *)(v5 + 16);
      v6 = *(_BYTE *)(v5 + 3) >> 6;
    }
    while ( !v6 );
    if ( v6 != 1 )
      goto LABEL_5;
  }
  result = (unsigned int)(*(_DWORD *)(v5 + 4) + 1);
  v48 = *(_DWORD *)(v5 + 4) + 1;
LABEL_7:
  if ( !v48 )
    return result;
  v45 = 0;
  v47 = 0;
  do
  {
    while ( 2 )
    {
      v44 = 0;
      v7 = *(_BYTE *)(a2 + 123);
      v8 = *(__int64 **)a2;
      if ( (v7 & 0x10) == 0 )
        goto LABEL_15;
      v9 = *(_QWORD *)(a2 + 104);
      v10 = 17;
      while ( 1 )
      {
        if ( *(char *)(v9 + 3) < 0 )
        {
          if ( *(_BYTE *)(v9 + 3) >> 6 != 2 )
          {
            v3 = *(_QWORD *)(v9 + 16) + v45;
            v11 = (__int64 *)v3;
            goto LABEL_14;
          }
          goto LABEL_63;
        }
        v3 = v47;
        if ( v47 == *(_DWORD *)(v9 + 4) )
          break;
LABEL_63:
        v9 = *(_QWORD *)(v9 + 16);
        if ( !--v10 )
        {
          sub_236900(v8 + 84, (__int64 *)(a2 + 104));
          v3 = a2;
          v7 = *(_BYTE *)(a2 + 123);
          v8 = *(__int64 **)a2;
          v11 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 104) + 16LL) + v45);
          goto LABEL_14;
        }
      }
      v11 = (__int64 *)(v9 + 8);
LABEL_14:
      v44 = *v11;
LABEL_15:
      if ( (v7 & 0x20) != 0 )
      {
        v12 = v8[108];
        goto LABEL_17;
      }
      v36 = *(_QWORD *)(a2 + 72);
      v37 = 17;
      while ( 2 )
      {
        if ( *(char *)(v36 + 3) < 0 )
        {
          if ( *(_BYTE *)(v36 + 3) >> 6 != 2 )
          {
            v3 = *(_QWORD *)(v36 + 16) + v45;
            v38 = (__int64 *)v3;
            goto LABEL_73;
          }
LABEL_75:
          v36 = *(_QWORD *)(v36 + 16);
          if ( !--v37 )
          {
            sub_233F80(v8 + 77, (_DWORD *)(a2 + 72));
            v3 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 16LL) + v45;
            v38 = (__int64 *)v3;
            goto LABEL_73;
          }
          continue;
        }
        break;
      }
      v3 = v47;
      if ( v47 != *(_DWORD *)(v36 + 4) )
        goto LABEL_75;
      v38 = (__int64 *)(v36 + 8);
LABEL_73:
      v12 = *v38;
LABEL_17:
      v13 = *(_WORD *)(v12 + 4) == 0;
      v49 = v12;
      if ( !v13 || (v14 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL)) == nullptr || *v14 || v14[1] != 6 )
      {
        ptr = v53;
        v15 = &v49;
        v52 = 0x1000000000LL;
        v16 = 1;
        goto LABEL_21;
      }
      v16 = *(unsigned int *)(v12 + 24);
      v3 = 0x1000000000LL;
      ptr = v53;
      v24 = v53;
      v52 = 0x1000000000LL;
      if ( (_DWORD)v16 )
      {
        v15 = (__int64 *)(v12 + 32);
LABEL_21:
        v17 = (unsigned int **)v15;
        v18 = (unsigned int **)&v15[v16];
        while ( 2 )
        {
          v25 = *v17;
          v26 = 0;
          if ( !*((_WORD *)*v17 + 2) )
          {
            while ( 1 )
            {
              v12 = *((_QWORD *)v25 + 2);
              v27 = *(_QWORD **)(v12 + 24);
              if ( !v27 )
                break;
              v3 = *(unsigned int *)v27;
              if ( *v27 != 0x800000000LL || v25[6] != 1 )
                break;
              v25 = *((unsigned int **)v25 + 4);
              v26 ^= 1u;
              if ( *((_WORD *)v25 + 2) )
              {
                v19 = *(_QWORD *)(a1 + 48);
                v20 = *(_QWORD *)(v19 + 8);
                if ( v20 )
                  goto LABEL_23;
                goto LABEL_49;
              }
            }
            v28 = *(unsigned int **)(v12 + 24);
            if ( !v28 )
              goto LABEL_22;
            v12 = *v28;
            if ( (_DWORD)v12 )
            {
              if ( (_DWORD)v12 != 5 )
                goto LABEL_22;
              if ( v28[1] == 2 )
              {
                v29 = sub_77D120(a1, *((_QWORD *)v25 + 4), *((_QWORD *)v25 + 5), 2u);
              }
              else
              {
                if ( v28[1] != 3 )
                {
                  v42 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v50, "apply purify-arith before applying nlsat");
                  *v42 = (char *)off_1C63670;
                  sub_2333C0(v42 + 1, v50);
                  sub_233E40((__int64)v50);
                  __cxa_throw(v42, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
                }
                v29 = sub_77D120(a1, *((_QWORD *)v25 + 4), *((_QWORD *)v25 + 5), 1u);
              }
              v22 = v29 ^ 1;
              goto LABEL_27;
            }
            if ( v28[1] != 2 )
            {
              v34 = v28[1];
              if ( v34 <= 9 )
              {
                if ( v34 > 3 )
                {
                  v43 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v50, "convert goal into cnf before applying nlsat");
                  *v43 = (char *)off_1C63670;
                  sub_2333C0(v43 + 1, v50);
                  sub_233E40((__int64)v50);
                  __cxa_throw(v43, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
                }
                if ( v34 > 1 )
                {
                  if ( v34 == 3 )
                  {
                    v35 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(
                      v50,
                      "eliminate distinct operator (use tactic '(using-params simplify :blast-distinct true)') before applying nlsat");
                    *v35 = (char *)off_1C63670;
                    sub_2333C0(v35 + 1, v50);
                    sub_233E40((__int64)v50);
                    __cxa_throw(v35, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
                  }
                }
                else if ( v34 >= 0 )
                {
                  v41 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v50, "apply simplify before applying nlsat");
                  *v41 = (char *)off_1C63670;
                  sub_2333C0(v41 + 1, v50);
                  sub_233E40((__int64)v50);
                  __cxa_throw(v41, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
                }
              }
              sub_1872CE0("");
              sub_1873130(114, 209);
            }
            v39 = *(_DWORD **)(sub_15D1F10(*((_QWORD *)v25 + 4)) + 24);
            if ( v39 && *v39 == 5 )
            {
              v22 = sub_77D120(a1, *((_QWORD *)v25 + 4), *((_QWORD *)v25 + 5), 0);
              goto LABEL_27;
            }
          }
LABEL_22:
          v19 = *(_QWORD *)(a1 + 48);
          v20 = *(_QWORD *)(v19 + 8);
          if ( v20 )
          {
LABEL_23:
            v12 = *v25;
            if ( (unsigned int)v12 < *(_DWORD *)(v20 - 4) && *(_DWORD *)(v20 + 4 * v12) != -1 )
            {
              v21 = sub_16235A0(v19, v25);
LABEL_26:
              v22 = 2 * v21;
LABEL_27:
              v3 = (unsigned int)v52;
              v23 = v22 ^ v26;
              if ( (unsigned int)v52 >= HIDWORD(v52) )
              {
                v30 = (unsigned int)(2 * HIDWORD(v52));
                v31 = sub_186B270(4 * v30);
                v32 = (char *)ptr;
                v24 = (_BYTE *)v31;
                v12 = 0;
                v3 = (unsigned int)v52;
                v33 = 4LL * (unsigned int)v52;
                if ( (_DWORD)v52 )
                {
                  do
                  {
                    *(_DWORD *)(v31 + v12) = *(_DWORD *)&v32[v12];
                    v12 += 4;
                  }
                  while ( v33 != v12 );
                }
                if ( v32 != v53 && v32 )
                {
                  sub_186B220(v32);
                  v3 = (unsigned int)v52;
                }
                ptr = v24;
                HIDWORD(v52) = v30;
              }
              else
              {
                v24 = ptr;
              }
              *(_DWORD *)&v24[4 * v3] = v23;
              ++v17;
              LODWORD(v16) = v52 + 1;
              LODWORD(v52) = v52 + 1;
              if ( v18 == v17 )
                goto LABEL_52;
              continue;
            }
          }
          break;
        }
LABEL_49:
        v21 = sub_1144F00(*(_QWORD *)(a1 + 8), v25, v12, v3);
        sub_16238E0(*(_QWORD *)(a1 + 48), v25, v21);
        goto LABEL_26;
      }
LABEL_52:
      sub_11458B0(*(_QWORD *)(a1 + 8), (unsigned int)v16, v24, v44);
      if ( ptr && ptr != v53 )
      {
        sub_186B220(ptr);
        result = ++v47;
        v45 += 8;
        if ( v48 == v47 )
          return result;
        continue;
      }
      break;
    }
    ++v47;
    v3 = v48;
    result = v47;
    v45 += 8;
  }
  while ( v47 != v48 );
  return result;
}


__int64 __fastcall sub_4C8AE0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  __int64 v6; // rax
  int v7; // esi
  __int64 (__fastcall *v8)(); // rax
  __int64 *v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 *v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 result; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // ebp
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // r13
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 *v28; // rax
  __int64 *v29; // rsi
  __int64 *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // rax
  __int64 *v37; // rax
  __int64 *v38; // rsi
  __int64 *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // [rsp+8h] [rbp-60h]
  __int64 v43; // [rsp+10h] [rbp-58h] BYREF
  __int64 v44; // [rsp+18h] [rbp-50h]

  v6 = *(_QWORD *)a2;
  v7 = *(_DWORD *)(a1 + 168);
  v8 = *(__int64 (__fastcall **)())(v6 + 16);
  *(_DWORD *)(a1 + 168) = v7 + 1;
  if ( v8 == sub_4C9AA0 )
  {
    v9 = *(__int64 **)(a1 + 16);
    *(_DWORD *)(a2 + 8) = v7;
    if ( v9 )
      goto LABEL_3;
LABEL_25:
    v24 = (_QWORD *)sub_186B270(0x18u);
    v9 = v24 + 1;
    *v24 = 2;
    v12 = 1;
    *(_QWORD *)(a1 + 16) = v9;
    v13 = v9;
    goto LABEL_5;
  }
  ((void (__fastcall *)(__int64))v8)(a2);
  v9 = *(__int64 **)(a1 + 16);
  if ( !v9 )
    goto LABEL_25;
LABEL_3:
  v10 = *((_DWORD *)v9 - 1);
  if ( v10 == *((_DWORD *)v9 - 2) )
  {
    v20 = (3 * v10 + 1) >> 1;
    v21 = 8 * v20 + 8;
    if ( 8 * v10 + 8 >= (unsigned int)v21 || v10 >= v20 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_DFB18(&v43, "Overflow encountered when expanding vector", v3);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v43);
      sub_233E40((__int64)&v43);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v22 = (unsigned int *)sub_186B300(v9 - 1, v21);
    v23 = v22[1];
    v9 = (__int64 *)(v22 + 2);
    *v22 = v20;
    *(_QWORD *)(a1 + 16) = v22 + 2;
    LODWORD(v22) = v23;
    v13 = &v9[v23];
    v12 = (_DWORD)v22 + 1;
  }
  else
  {
    v11 = v10;
    v12 = v10 + 1;
    v13 = &v9[v11];
  }
LABEL_5:
  *v13 = a2;
  *((_DWORD *)v9 - 1) = v12;
  if ( *(_QWORD *)(a2 + 16) == sub_64AFC0(*(_QWORD *)(a1 + 8)) )
    *(_QWORD *)(a1 + 104) = a2;
  v14 = sub_186B270(0x30u);
  v15 = sub_4FCA30(a2);
  *(_QWORD *)(v14 + 24) = a1;
  *(_QWORD *)(v14 + 16) = v15;
  *(_DWORD *)(v14 + 8) = -1;
  *(_DWORD *)(v14 + 32) = 1;
  *(_QWORD *)v14 = off_1C4FFD0;
  *(_QWORD *)(v14 + 40) = a2;
  sub_4C8680(a1, v14);
  v43 = a2;
  v44 = v14;
  sub_4CF7E0(a1 + 32, &v43);
  if ( *(_QWORD *)(a2 + 16) == sub_64AFC0(*(_QWORD *)(a1 + 8)) )
  {
    *(_QWORD *)(a1 + 104) = a2;
    *(_QWORD *)(a1 + 112) = v14;
  }
  v16 = sub_64B0D0(*(_QWORD *)(a1 + 8));
  result = sub_64B120(*(_QWORD *)(a1 + 8));
  if ( (_BYTE)result )
  {
    result = *(_QWORD *)(a1 + 16);
    if ( result )
    {
      v18 = result + 8LL * *(unsigned int *)(result - 4);
      if ( v18 != result )
      {
        while ( *(_QWORD *)(*(_QWORD *)result + 16LL) != v16 )
        {
          result += 8;
          if ( v18 == result )
            return result;
        }
        v19 = *(_QWORD *)(a1 + 104);
        if ( v19 && (v19 == a2 || *(_QWORD *)(a2 + 16) == v16) )
        {
          v42 = sub_64AFC0(*(_QWORD *)(a1 + 8));
          v35 = sub_186B270(0x38u);
          sub_180C5A0(&v43, "check");
          v36 = v43;
          *(_QWORD *)(v35 + 24) = a1;
          *(_DWORD *)(v35 + 8) = -1;
          *(_QWORD *)(v35 + 16) = v36;
          *(_QWORD *)v35 = off_1C50FA8;
          v37 = *(__int64 **)(a1 + 16);
          if ( !v37 || (v38 = &v37[*((unsigned int *)v37 - 1)], v37 == v38) )
          {
            *(_QWORD *)(v35 + 32) = 0;
LABEL_48:
            v41 = 0;
          }
          else
          {
            v39 = *(__int64 **)(a1 + 16);
            while ( 1 )
            {
              v40 = *v39;
              if ( *(_QWORD *)(*v39 + 16) == v16 )
                break;
              if ( v38 == ++v39 )
              {
                v40 = 0;
                break;
              }
            }
            *(_QWORD *)(v35 + 32) = v40;
            while ( 1 )
            {
              v41 = *v37;
              if ( *(_QWORD *)(*v37 + 16) == v42 )
                break;
              if ( v38 == ++v37 )
                goto LABEL_48;
            }
          }
          *(_QWORD *)(v35 + 40) = v41;
          *(_DWORD *)(v35 + 48) = 0;
          sub_4C8AE0(a1, v35);
          *(_QWORD *)(a1 + 104) = v35;
        }
        result = *(_QWORD *)(a1 + 112);
        if ( result )
        {
          if ( *(_DWORD *)(result + 32) == 1 )
          {
            result = *(_QWORD *)(result + 40);
            if ( result == a2 || *(_QWORD *)(a2 + 16) == v16 )
            {
              v25 = *(_QWORD *)(result + 16);
              v26 = sub_186B270(0x38u);
              sub_180C5A0(&v43, "check");
              v27 = v43;
              *(_DWORD *)(v26 + 8) = -1;
              *(_QWORD *)(v26 + 24) = a1;
              *(_QWORD *)(v26 + 16) = v27;
              *(_QWORD *)v26 = off_1C50FA8;
              v28 = *(__int64 **)(a1 + 16);
              if ( !v28 || (v29 = &v28[*((unsigned int *)v28 - 1)], v28 == v29) )
              {
                *(_QWORD *)(v26 + 32) = 0;
LABEL_51:
                v32 = 0;
              }
              else
              {
                v30 = *(__int64 **)(a1 + 16);
                while ( 1 )
                {
                  v31 = *v30;
                  if ( *(_QWORD *)(*v30 + 16) == v16 )
                    break;
                  if ( v29 == ++v30 )
                  {
                    v31 = 0;
                    break;
                  }
                }
                *(_QWORD *)(v26 + 32) = v31;
                while ( 1 )
                {
                  v32 = *v28;
                  if ( v25 == *(_QWORD *)(*v28 + 16) )
                    break;
                  if ( v29 == ++v28 )
                    goto LABEL_51;
                }
              }
              *(_QWORD *)(v26 + 40) = v32;
              *(_DWORD *)(v26 + 48) = 0;
              sub_4C8AE0(a1, v26);
              v33 = sub_186B270(0x30u);
              v34 = sub_4FCA30(v26);
              *(_QWORD *)(v33 + 24) = a1;
              *(_QWORD *)(v33 + 16) = v34;
              *(_DWORD *)(v33 + 8) = -1;
              *(_DWORD *)(v33 + 32) = 1;
              *(_QWORD *)v33 = off_1C4FFD0;
              *(_QWORD *)(v33 + 40) = v26;
              sub_4C8680(a1, v33);
              v43 = v26;
              v44 = v33;
              result = sub_4CF7E0(a1 + 32, &v43);
              *(_QWORD *)(a1 + 112) = v33;
            }
          }
        }
      }
    }
  }
  return result;
}


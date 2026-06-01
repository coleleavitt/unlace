__int64 __fastcall sub_5A3680(__int64 a1, char a2, __m128i a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v8; // r14
  void *v9; // rdi
  _QWORD *v10; // rax
  int v11; // r8d
  _QWORD *v12; // rdi
  int v13; // ecx
  void (*v14)(void); // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  void (***v17)(void); // rdi
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rsi
  char *v22; // rax
  char *v23; // rbx
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 i; // rbx
  void *v28; // r14
  __int64 (__fastcall *v29)(void (__fastcall ***)(_QWORD)); // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  void *ptr; // [rsp+8h] [rbp-80h]
  void *v33; // [rsp+10h] [rbp-78h]
  int v35; // [rsp+2Ch] [rbp-5Ch] BYREF
  int v36[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v37; // [rsp+38h] [rbp-50h] BYREF
  __int64 v38; // [rsp+40h] [rbp-48h] BYREF
  int v39; // [rsp+48h] [rbp-40h]

  *(_QWORD *)v36 = 0;
  result = sub_5A2CD0(a1, (__int64 *)v36, a3);
  v5 = *(_QWORD *)(a1 + 112);
  v6 = *(_QWORD *)v36;
  v37 = nullptr;
  if ( v5 )
  {
    v7 = *(unsigned int *)(v5 - 4);
    if ( (_DWORD)v7 )
    {
      if ( *(_QWORD *)v36 )
      {
        v33 = nullptr;
        v8 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v9 = *(void **)(v5 + 8 * v8);
            if ( v9 )
            {
              if ( (unsigned int)v8 >> 5 >= *(_DWORD *)(v6 - 4)
                || (*(_DWORD *)(v6 + 4LL * ((unsigned int)v8 >> 5)) & (1 << v8)) == 0 )
              {
                goto LABEL_15;
              }
              if ( a2 )
                break;
            }
LABEL_22:
            if ( ++v8 == v7 )
              goto LABEL_23;
          }
          if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v9 + 24LL))(v9) )
          {
            if ( !v33 )
            {
              v39 = 0;
              v38 = 0;
              sub_5A7FF0(&v38);
              v24 = v38;
              v25 = *(_DWORD *)(v38 - 4);
              *(_QWORD *)(v38 + 8LL * v25) = 0x7FFFFFFF;
              *(_DWORD *)(v24 - 4) = v25 + 1;
              v26 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*(_QWORD *)(a1 + 104) + 8LL) + 40LL))(
                      *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL),
                      &v38);
              if ( v38 )
              {
                ptr = (void *)v26;
                sub_186B220((void *)(v38 - 8));
                v26 = (__int64)ptr;
              }
              v33 = (void *)v26;
            }
            v10 = v37;
            if ( v37 && (v11 = *((_DWORD *)v37 - 2), *((_DWORD *)v37 - 1) = 0, v11) )
            {
              v12 = v10;
              v13 = 1;
            }
            else
            {
              sub_5A7FF0(&v37);
              v10 = v37;
              v12 = &v37[*((unsigned int *)v37 - 1)];
              v13 = *((_DWORD *)v37 - 1) + 1;
            }
            *v12 = v8;
            *((_DWORD *)v10 - 1) = v13;
            (*(void (__fastcall **)(void *, _QWORD **))(*(_QWORD *)v33 + 40LL))(v33, &v37);
            v9 = *(void **)(*(_QWORD *)(a1 + 112) + 8 * v8);
LABEL_15:
            v14 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
            if ( (char *)v14 == (char *)sub_4C9C10 )
            {
              (**(void (***)(void))v9)();
              sub_186B220(v9);
            }
            else
            {
              v14();
            }
            v5 = *(_QWORD *)(a1 + 112);
            *(_QWORD *)(v5 + 8 * v8) = 0;
            if ( *(_DWORD *)(a1 + 128) == (_DWORD)v8 )
              *(_DWORD *)(a1 + 128) = -1;
            v15 = *(_QWORD *)(a1 + 120);
            if ( !v15 || (v16 = *(unsigned int *)(v15 - 4), *(_DWORD *)(v15 - 8) == (_DWORD)v16) )
            {
              sub_2FD3F0((unsigned int **)(a1 + 120));
              v15 = *(_QWORD *)(a1 + 120);
              v5 = *(_QWORD *)(a1 + 112);
              v16 = *(unsigned int *)(v15 - 4);
            }
            *(_DWORD *)(v15 + 4 * v16) = v8;
            ++*(_DWORD *)(v15 - 4);
            goto LABEL_22;
          }
          ++v8;
          v5 = *(_QWORD *)(a1 + 112);
          if ( v8 == v7 )
          {
LABEL_23:
            result = *(_QWORD *)(a1 + 120);
            if ( result )
              goto LABEL_24;
LABEL_65:
            if ( v5 && !*(_DWORD *)(v5 - 4) )
LABEL_48:
              *(_DWORD *)(v5 - 4) = 0;
            goto LABEL_26;
          }
        }
      }
      for ( i = 0; i != v7; ++i )
      {
        v28 = *(void **)(v5 + 8 * i);
        if ( v28 )
        {
          v29 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v28 + 16LL);
          if ( v29 == sub_4C9C10 )
          {
            (**(void (__fastcall ***)(void *))v28)(v28);
            sub_186B220(v28);
          }
          else
          {
            v29((void (__fastcall ***)(_QWORD))v28);
          }
          v5 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(v5 + 8 * i) = 0;
          if ( *(_DWORD *)(a1 + 128) == (_DWORD)i )
            *(_DWORD *)(a1 + 128) = -1;
          v30 = *(_QWORD *)(a1 + 120);
          if ( !v30 || (v31 = *(unsigned int *)(v30 - 4), (_DWORD)v31 == *(_DWORD *)(v30 - 8)) )
          {
            sub_2FD3F0((unsigned int **)(a1 + 120));
            v30 = *(_QWORD *)(a1 + 120);
            v5 = *(_QWORD *)(a1 + 112);
            v31 = *(unsigned int *)(v30 - 4);
          }
          *(_DWORD *)(v30 + 4 * v31) = i;
          ++*(_DWORD *)(v30 - 4);
        }
      }
      v33 = nullptr;
      result = *(_QWORD *)(a1 + 120);
      if ( !result )
        goto LABEL_65;
LABEL_24:
      if ( v5 && *(_DWORD *)(result - 4) == *(_DWORD *)(v5 - 4) )
      {
        *(_DWORD *)(result - 4) = 0;
        goto LABEL_48;
      }
LABEL_26:
      if ( v33 )
      {
        v17 = *(void (****)(void))(a1 + 152);
        if ( !v17 )
        {
          v18 = *(_QWORD *)(a1 + 32);
          v19 = v18 ? *(_DWORD *)(v18 - 4) - 1 : -1;
          v35 = v19;
          v20 = *(_QWORD *)(a1 + 8);
          v21 = *(_QWORD *)(a1 + 104);
          LODWORD(v38) = 0;
          v22 = sub_4C67E0(*(_QWORD *)(v20 + 24), v21, (__int64)v33, 1u, (unsigned int *)&v35, (unsigned int *)&v38);
          v17 = *(void (****)(void))(a1 + 152);
          v23 = v22;
          if ( v22 != (char *)v17 )
          {
            sub_5681A0(v17);
            *(_QWORD *)(a1 + 152) = v23;
            v17 = (void (***)(void))v23;
          }
        }
        ((void (__fastcall *)(void (***)(void), _QWORD, void *))(*v17)[2])(v17, *(_QWORD *)(a1 + 104), v33);
        if ( v37 )
          sub_186B220(v37 - 1);
        result = sub_4D63E0(v33);
        goto LABEL_31;
      }
    }
    else
    {
      result = *(_QWORD *)(a1 + 120);
      if ( !result )
        goto LABEL_31;
      result = *(unsigned int *)(result - 4);
      if ( (_DWORD)result )
        goto LABEL_31;
    }
  }
  if ( v37 )
    result = sub_186B220(v37 - 1);
LABEL_31:
  if ( v6 )
    return sub_186B220((void *)(v6 - 8));
  return result;
}


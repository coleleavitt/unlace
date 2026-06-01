__int64 __fastcall sub_BF0D70(_QWORD *a1, unsigned int a2, double a3)
{
  char **exception; // rbp
  char **v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int *v7; // rbx
  unsigned int *v8; // r14
  int v9; // r15d
  __int64 v10; // r12
  char v11; // al
  unsigned int v12; // ebx
  unsigned int *v14; // rdx
  __int64 v15; // rax
  unsigned int *v16; // rax
  int v17; // edx
  unsigned int v18; // ecx
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  unsigned int *v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // rax
  unsigned int *v26; // rdx
  int v27; // ebx
  int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // [rsp+Ch] [rbp-7Ch]
  unsigned int *v31; // [rsp+20h] [rbp-68h] BYREF
  unsigned int *v32; // [rsp+28h] [rbp-60h] BYREF
  __int64 v33[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = a1[40] + 56LL * *(unsigned int *)(a1[42] + 4LL * a2);
  v6 = *(_QWORD *)(v5 + 32);
  if ( v6 && *(_DWORD *)(v6 - 4) )
  {
    return 0;
  }
  else
  {
    v31 = nullptr;
    v7 = *(unsigned int **)(v5 + 40);
    if ( !v7 || (v8 = &v7[*(v7 - 1)], v7 == v8) )
    {
LABEL_29:
      v21 = *(_QWORD *)(v5 + 16);
      v22 = *(_QWORD *)v5;
      v23 = *(unsigned int **)(v5 + 48);
      v32 = nullptr;
      if ( (unsigned __int8)sub_BB40C0((__int64)a1, v22, v21, &v32) )
      {
        v24 = sub_966380((__int64)a1, *(_DWORD **)v5, *(_DWORD **)(v5 + 16));
        if ( *(_BYTE *)(*(_QWORD *)(a1[2] + 8848LL) + v24) == 0xFF )
        {
          v26 = v31;
          v27 = v24 ^ 1;
          if ( v31 )
          {
            v28 = *(v31 - 2);
            *(v31 - 1) = 0;
            if ( !v28 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v33, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v33);
              sub_233E40((__int64)v33);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
          }
          else
          {
            v29 = sub_186B270(0x10u);
            *(_QWORD *)v29 = 2;
            v26 = (unsigned int *)(v29 + 8);
            v31 = (unsigned int *)(v29 + 8);
          }
          *v26 = v27;
          v23 = v32;
          ++*(v26 - 1);
        }
      }
      sub_BC3460((__int64)a1, (__int64)v23, &v31, a3);
    }
    else
    {
      v9 = -2;
      do
      {
        while ( 1 )
        {
          v10 = *v7;
          v11 = *(_BYTE *)(*(_QWORD *)(a1[2] + 8848LL) + v10);
          if ( !v11 )
            break;
          if ( v11 == 1 )
          {
            v14 = v31;
            if ( v31 )
            {
              v15 = *(v31 - 1);
              if ( (_DWORD)v15 == *(v31 - 2) )
              {
                v18 = (unsigned int)(3 * v15 + 1) >> 1;
                v19 = 4 * v18 + 8;
                if ( 4 * (int)v15 + 8 >= (unsigned int)v19 || (unsigned int)v15 >= v18 )
                {
                  v4 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v33, "Overflow encountered when expanding vector");
                  *v4 = (char *)off_1C63128;
                  sub_2333C0(v4 + 1, v33);
                  sub_233E40((__int64)v33);
                  __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v30 = (unsigned int)(3 * v15 + 1) >> 1;
                v20 = (unsigned int *)sub_186B300(v31 - 2, v19);
                v14 = v20 + 2;
                v31 = v20 + 2;
                *v20 = v30;
                v16 = &v20[v20[1] + 2];
              }
              else
              {
                v16 = &v31[v15];
              }
            }
            else
            {
              v25 = sub_186B270(0x10u);
              v14 = (unsigned int *)(v25 + 8);
              *(_QWORD *)v25 = 2;
              v31 = (unsigned int *)(v25 + 8);
              v16 = (unsigned int *)(v25 + 8);
            }
            *v16 = v10;
            ++*(v14 - 1);
          }
          else if ( v11 == -1 )
          {
            goto LABEL_9;
          }
          if ( v8 == ++v7 )
            goto LABEL_18;
        }
        if ( v9 != -2 )
        {
          v12 = 0;
          goto LABEL_10;
        }
        ++v7;
        v9 = v10;
      }
      while ( v8 != v7 );
LABEL_18:
      if ( v9 == -2 )
        goto LABEL_29;
      if ( v31 )
        v17 = *(v31 - 1);
      else
        v17 = 0;
      sub_BC37F0((__int64)a1, *(_QWORD *)(v5 + 48), v17, v31, v9 ^ 1, a3);
    }
LABEL_9:
    v12 = 1;
LABEL_10:
    if ( v31 )
      sub_186B220(v31 - 2);
  }
  return v12;
}


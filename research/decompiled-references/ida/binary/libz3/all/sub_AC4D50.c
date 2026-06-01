__int64 __fastcall sub_AC4D50(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // r13
  __int64 result; // rax
  unsigned int *v6; // rbx
  unsigned int *v7; // r15
  unsigned int v8; // ebp
  __int64 v9; // rax
  unsigned int *v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // rdx
  unsigned int v13; // r8d
  size_t v14; // rsi
  unsigned int *v15; // rax
  unsigned int *v16; // rbx
  unsigned int *v17; // r15
  int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // ebp
  _QWORD *v21; // r14
  _QWORD *v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // ebp
  size_t v25; // rsi
  unsigned int *v26; // rax
  unsigned int v27; // ecx
  size_t v28; // rsi
  unsigned int *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  char **exception; // rbp
  __int64 v34; // rdx
  unsigned int v35; // [rsp+0h] [rbp-68h]
  int v36; // [rsp+0h] [rbp-68h]
  unsigned int v37; // [rsp+0h] [rbp-68h]
  __int64 v38; // [rsp+0h] [rbp-68h]
  __int64 v39; // [rsp+8h] [rbp-60h]
  __int64 v40[11]; // [rsp+10h] [rbp-58h] BYREF

  v2 = a1;
  v4 = *(_QWORD *)(a2 + 24);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 504LL);
  v6 = *(unsigned int **)(result + 8LL * *(unsigned int *)(a1 + 24));
  if ( v6 )
  {
    v7 = &v6[*(v6 - 1)];
    if ( v6 != v7 )
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( !(*v6 >> 1) )
          goto LABEL_8;
        v11 = *(_QWORD **)(a2 + 176);
        v12 = (_QWORD *)*v11;
        if ( *(_BYTE *)(*(_QWORD *)(v4 + 8848) + v8) == 1 )
        {
          if ( !v12 )
          {
LABEL_41:
            v38 = v2;
            v30 = (_QWORD *)sub_186B270(0x10u);
            v2 = v38;
            v12 = v30 + 1;
            *v30 = 2;
            *v11 = v30 + 1;
            v10 = (unsigned int *)(v30 + 1);
            goto LABEL_7;
          }
          v9 = *((unsigned int *)v12 - 1);
          if ( (_DWORD)v9 == *((_DWORD *)v12 - 2) )
          {
            v13 = (unsigned int)(3 * v9 + 1) >> 1;
            v14 = 4 * v13 + 8;
            if ( 4 * (int)v9 + 8 >= (unsigned int)v14 || (unsigned int)v9 >= v13 )
              goto LABEL_44;
LABEL_15:
            v39 = v2;
            v35 = v13;
            v15 = (unsigned int *)sub_186B300(v12 - 1, v14);
            v2 = v39;
            v12 = v15 + 2;
            *v11 = v15 + 2;
            *v15 = v35;
            v10 = &v15[v15[1] + 2];
            goto LABEL_7;
          }
        }
        else
        {
          v8 ^= 1u;
          if ( !v12 )
            goto LABEL_41;
          v9 = *((unsigned int *)v12 - 1);
          if ( (_DWORD)v9 == *((_DWORD *)v12 - 2) )
          {
            v13 = (unsigned int)(3 * v9 + 1) >> 1;
            v14 = 4 * v13 + 8;
            if ( 4 * (int)v9 + 8 >= (unsigned int)v14 || (unsigned int)v9 >= v13 )
            {
LABEL_44:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_139F3A(v40, "Overflow encountered when expanding vector", v34);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v40);
              sub_233E40((__int64)v40);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            goto LABEL_15;
          }
        }
        v10 = (unsigned int *)v12 + v9;
LABEL_7:
        *v10 = v8;
        ++*((_DWORD *)v12 - 1);
LABEL_8:
        if ( v7 == ++v6 )
        {
          v4 = *(_QWORD *)(a2 + 24);
          result = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 504LL);
          break;
        }
      }
    }
  }
  v16 = *(unsigned int **)(result + 8LL * *(unsigned int *)(v2 + 28));
  if ( v16 )
  {
    result = *(v16 - 1);
    v17 = &v16[result];
    if ( v16 != v17 )
    {
      while ( 1 )
      {
        v20 = *v16;
        result = *v16 >> 1;
        if ( !(*v16 >> 1) )
          goto LABEL_27;
        v21 = *(_QWORD **)(a2 + 176);
        v22 = (_QWORD *)*v21;
        if ( *(_BYTE *)(*(_QWORD *)(v4 + 8848) + v20) == 1 )
        {
          if ( v22 )
          {
            v23 = *((unsigned int *)v22 - 1);
            if ( (_DWORD)v23 == *((_DWORD *)v22 - 2) )
            {
              v27 = (unsigned int)(3 * v23 + 1) >> 1;
              v28 = 4 * v27 + 8;
              if ( 4 * (int)v23 + 8 >= (unsigned int)v28 || (unsigned int)v23 >= v27 )
                goto LABEL_44;
              v37 = (unsigned int)(3 * v23 + 1) >> 1;
              v29 = (unsigned int *)sub_186B300(v22 - 1, v28);
              v22 = v29 + 2;
              *v21 = v29 + 2;
              *v29 = v37;
              result = (__int64)&v29[v29[1] + 2];
            }
            else
            {
              result = (__int64)v22 + 4 * v23;
            }
          }
          else
          {
            v32 = (_QWORD *)sub_186B270(0x10u);
            v22 = v32 + 1;
            *v32 = 2;
            *v21 = v32 + 1;
            result = (__int64)(v32 + 1);
          }
          ++v16;
          *(_DWORD *)result = v20;
          ++*((_DWORD *)v22 - 1);
          if ( v17 == v16 )
            return result;
        }
        else
        {
          v18 = v20 ^ 1;
          if ( v22 )
          {
            v19 = *((unsigned int *)v22 - 1);
            if ( (_DWORD)v19 == *((_DWORD *)v22 - 2) )
            {
              v24 = (unsigned int)(3 * v19 + 1) >> 1;
              v25 = 4 * v24 + 8;
              if ( 4 * (int)v19 + 8 >= (unsigned int)v25 || (unsigned int)v19 >= v24 )
                goto LABEL_44;
              v36 = v18;
              v26 = (unsigned int *)sub_186B300(v22 - 1, v25);
              v18 = v36;
              v22 = v26 + 2;
              *v21 = v26 + 2;
              *v26 = v24;
              result = (__int64)&v26[v26[1] + 2];
            }
            else
            {
              result = (__int64)v22 + 4 * v19;
            }
          }
          else
          {
            v31 = (_QWORD *)sub_186B270(0x10u);
            v18 = v20 ^ 1;
            v22 = v31 + 1;
            *v31 = 2;
            *v21 = v31 + 1;
            result = (__int64)(v31 + 1);
          }
          *(_DWORD *)result = v18;
          ++*((_DWORD *)v22 - 1);
LABEL_27:
          if ( v17 == ++v16 )
            return result;
        }
      }
    }
  }
  return result;
}


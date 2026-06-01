__int64 __fastcall sub_5A1ED0(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  char **v5; // rbp
  char **exception; // rbp
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 v12; // rbx
  _QWORD *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rsi
  unsigned int *v17; // rdi
  _QWORD *v18; // r8
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rsi
  unsigned int *v22; // rdi
  unsigned int v23; // r8d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rsi
  unsigned int v27; // r9d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rsi
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // [rsp+0h] [rbp-88h]
  unsigned int v34; // [rsp+10h] [rbp-78h]
  unsigned int v35; // [rsp+10h] [rbp-78h]
  _QWORD *v36; // [rsp+10h] [rbp-78h]
  _QWORD *v37; // [rsp+18h] [rbp-70h]
  __int64 v38; // [rsp+28h] [rbp-60h] BYREF
  __int64 v39[11]; // [rsp+30h] [rbp-58h] BYREF

  result = *a2;
  if ( *a2 )
  {
    v8 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v8 )
    {
      v12 = 0;
      v33 = *(_QWORD *)(a1 + 24);
      while ( 1 )
      {
        v18 = (_QWORD *)(result + 8 * v12);
        if ( *(_BYTE *)(a3 + v12) )
        {
          if ( !(unsigned __int8)sub_4C4270(v33, (_QWORD *)(result + 8 * v12), (__int64)&v38) )
          {
            sub_1872CE0("");
            sub_1873130(114, 133);
          }
          v14 = (_QWORD *)*a4;
          if ( *a4 )
          {
            v15 = *((_DWORD *)v14 - 1);
            if ( v15 == *((_DWORD *)v14 - 2) )
            {
              v23 = (3 * v15 + 1) >> 1;
              v24 = 8 * v23 + 8;
              if ( 8 * v15 + 8 >= (unsigned int)v24 || v15 >= v23 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v39, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v39);
                sub_233E40((__int64)v39);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v34 = (3 * v15 + 1) >> 1;
              v25 = (unsigned int *)sub_186B300(v14 - 1, v24);
              v26 = v25[1];
              v14 = v25 + 2;
              *v25 = v34;
              *a4 = v25 + 2;
              v17 = &v25[2 * v26 + 2];
              result = (unsigned int)(v26 + 1);
            }
            else
            {
              v16 = v15;
              result = v15 + 1;
              v17 = (unsigned int *)&v14[v16];
            }
          }
          else
          {
            v31 = (_QWORD *)sub_186B270(0x18u);
            v14 = v31 + 1;
            *v31 = 2;
            result = 1;
            *a4 = v14;
            v17 = (unsigned int *)v14;
          }
          ++v12;
          *(_QWORD *)v17 = v38;
          *((_DWORD *)v14 - 1) = result;
          if ( v12 == v8 )
            return result;
        }
        else
        {
          v19 = (_QWORD *)*a5;
          if ( *a5 )
          {
            v20 = *((_DWORD *)v19 - 1);
            if ( v20 == *((_DWORD *)v19 - 2) )
            {
              v27 = (3 * v20 + 1) >> 1;
              v28 = 8 * v27 + 8;
              if ( 8 * v20 + 8 >= (unsigned int)v28 || v20 >= v27 )
              {
                v5 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v39, "Overflow encountered when expanding vector");
                *v5 = (char *)off_1C63128;
                sub_2333C0(v5 + 1, v39);
                sub_233E40((__int64)v39);
                __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v37 = v18;
              v35 = (3 * v20 + 1) >> 1;
              v29 = (unsigned int *)sub_186B300(v19 - 1, v28);
              v18 = v37;
              v30 = v29[1];
              v19 = v29 + 2;
              *v29 = v35;
              *a5 = v29 + 2;
              v22 = &v29[2 * v30 + 2];
              result = (unsigned int)(v30 + 1);
            }
            else
            {
              v21 = v20;
              result = v20 + 1;
              v22 = (unsigned int *)&v19[v21];
            }
          }
          else
          {
            v36 = (_QWORD *)(result + 8 * v12);
            v32 = (_QWORD *)sub_186B270(0x18u);
            v18 = v36;
            v19 = v32 + 1;
            *v32 = 2;
            result = 1;
            *a5 = v19;
            v22 = (unsigned int *)v19;
          }
          ++v12;
          *(_QWORD *)v22 = *v18;
          *((_DWORD *)v19 - 1) = result;
          if ( v12 == v8 )
            return result;
        }
        result = *a2;
      }
    }
  }
  return result;
}


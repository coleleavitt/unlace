_DWORD *__fastcall sub_1B08DE0(__int64 *a1, unsigned __int64 a2, unsigned int a3, int a4, int a5, int a6)
{
  unsigned int v6; // ebx
  int v7; // r13d
  int v8; // ebp
  int v9; // r12d
  __int64 v10; // rdi
  __int64 v11; // r10
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  _DWORD *result; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // r13
  unsigned __int64 v22; // rax
  void *v23[2]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v24; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v25; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v27[184]; // [rsp+40h] [rbp-B8h] BYREF

  while ( 1 )
  {
    v6 = a3;
    if ( (_DWORD)a2 == 4 )
      break;
    v7 = a4;
    v8 = a5;
    v9 = a6;
    if ( (_DWORD)a2 == 1 )
    {
      v20 = a1[1];
      *(_DWORD *)(sub_1AE5FF0(v20) + 928) = 2;
      *(_DWORD *)(sub_1AE5FF0(v20) + 932) = v6;
LABEL_7:
      v12 = (_QWORD *)sub_168B6C0(v11);
      v15 = v12[294];
      v12[304] += 24LL;
      v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v12[295] >= v16 + 24 && v15 )
      {
        v12[294] = v16 + 24;
        result = (_DWORD *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      }
      else
      {
        result = (_DWORD *)sub_986170((__int64)(v12 + 294), 24, 24, 3, v13, v14);
      }
      *result = v7;
      result[1] = v9;
      result[2] = 20;
      result[3] = v8;
      result[4] = a2;
      result[5] = v6;
      return result;
    }
    if ( (int)a2 <= 1 )
    {
      if ( !(_DWORD)a2 )
      {
        v18 = a1[1];
        *(_DWORD *)(sub_1AE5FF0(v18) + 928) = 1;
        *(_DWORD *)(sub_1AE5FF0(v18) + 932) = v6;
        goto LABEL_7;
      }
    }
    else
    {
      if ( (_DWORD)a2 == 2 )
      {
        v19 = a1[1];
        *(_DWORD *)(sub_1AE5FF0(v19) + 928) = 4;
        *(_DWORD *)(sub_1AE5FF0(v19) + 932) = v6;
        goto LABEL_7;
      }
      if ( (_DWORD)a2 == 3 )
      {
        v10 = a1[1];
        *(_DWORD *)(sub_1AE5FF0(v10) + 928) = 8;
        *(_DWORD *)(sub_1AE5FF0(v10) + 932) = v6;
        goto LABEL_7;
      }
    }
    v22 = a2;
    a4 = *(_DWORD *)a2;
    a3 = *(_DWORD *)(a2 + 20);
    a2 = *(unsigned int *)(a2 + 16);
    a1 = *(__int64 **)(*a1 + 760);
    a6 = *(_DWORD *)(v22 + 4);
    a5 = *(_DWORD *)(v22 + 12);
  }
  sub_168B9F0((__int64)v27, a1, a3, 0x1217u, 0);
  sub_1AEE640(v23, 20, 0, 4u, nullptr, 0);
  v21 = sub_1682AF0((__int64)v27, (__int64)v23);
  sub_1AF81E0(&v25, 0x14u);
  sub_1682AF0(v21, (__int64)&v25);
  if ( (__int64 *)v25.m128i_i64[0] != &v26 )
    operator delete((void *)v25.m128i_i64[0]);
  if ( v23[0] != &v24 )
    operator delete(v23[0]);
  sub_15F7200(v27);
  return nullptr;
}

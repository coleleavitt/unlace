__int64 __fastcall sub_D9D0D0(_QWORD *a1)
{
  char **exception; // rbp
  __int64 v3; // rsi
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  int v6; // r8d
  int v7; // r9d
  __int64 result; // rax
  _QWORD *v9; // r12
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // r15
  unsigned int v14; // eax
  unsigned int v15; // r14d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rcx
  _DWORD *v19; // rdx
  _QWORD *v20; // rax
  int v21; // [rsp+0h] [rbp-78h]
  __int64 v22; // [rsp+8h] [rbp-70h]
  __int64 v23; // [rsp+10h] [rbp-68h] BYREF
  __int64 v24[11]; // [rsp+20h] [rbp-58h] BYREF

  sub_D9BAA0(a1, a1 + 7);
  sub_D9BD10(a1, a1 + 10);
  v3 = a1[13];
  v4 = *(_QWORD *)(v3 + 64);
  *(_BYTE *)(v3 + 132) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, v3 + 72);
  result = a1[2];
  v9 = *(_QWORD **)result;
  if ( *(_QWORD *)result )
  {
    result = *((unsigned int *)v9 - 1);
    v10 = &v9[result];
    if ( v10 != v9 )
    {
      while ( 1 )
      {
        sub_1435270(
          *(_QWORD *)(a1[13] + 64LL),
          *v9,
          (unsigned int)&v23,
          (_DWORD)v5,
          v6,
          v7,
          v21,
          v22,
          0,
          *(_QWORD *)(a1[13] + 8LL),
          v24[0]);
        v12 = (_QWORD *)a1[6];
        v13 = v23;
        if ( !v12 )
          break;
        v14 = *((_DWORD *)v12 - 1);
        if ( v14 == *((_DWORD *)v12 - 2) )
        {
          v15 = (3 * v14 + 1) >> 1;
          v16 = 8 * v15 + 8;
          if ( 8 * v14 + 8 >= (unsigned int)v16 || v14 >= v15 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v24, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v24);
            sub_233E40((__int64)v24);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v17 = (unsigned int *)sub_186B300(v12 - 1, v16);
          v18 = v17[1];
          v19 = v17 + 2;
          *v17 = v15;
          ++v9;
          a1[6] = v17 + 2;
          LODWORD(v17) = v18;
          v5 = &v19[2 * v18];
          result = (unsigned int)((_DWORD)v17 + 1);
          *v5 = v13;
          *(v19 - 1) = result;
          if ( v10 == v9 )
            return result;
        }
        else
        {
          v11 = v14;
          result = v14 + 1;
          v5 = &v12[v11];
LABEL_5:
          ++v9;
          *v5 = v13;
          *((_DWORD *)v12 - 1) = result;
          if ( v10 == v9 )
            return result;
        }
      }
      v20 = (_QWORD *)sub_186B270(0x18u);
      v12 = v20 + 1;
      *v20 = 2;
      result = 1;
      a1[6] = v12;
      v5 = v12;
      goto LABEL_5;
    }
  }
  return result;
}


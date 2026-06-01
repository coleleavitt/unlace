__int64 __fastcall sub_9CC0F0(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  char v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rbx
  _QWORD *v8; // rdx
  bool v9; // zf
  void *v10; // rdi
  __int64 v11; // r14
  char v12; // dl
  _QWORD *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rdx
  _QWORD *v16; // rdx
  unsigned int v17; // r12d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  char **exception; // rbx
  __int64 v23[11]; // [rsp+0h] [rbp-58h] BYREF

  result = a3;
  v4 = a3;
  v5 = a1[81];
  if ( v5 )
  {
    if ( a2 < *(_DWORD *)(v5 - 4) )
    {
      v6 = *(_QWORD *)(v5 + 8LL * a2);
      if ( v6 )
      {
        v8 = a1 + 12;
        v9 = (*(_BYTE *)(a1[74] + 4LL * *(unsigned int *)(v6 + 8) + 3) & 0x40) == 0;
        v10 = qword_1C7F2C0;
        if ( !v9 )
          v8 = a1 + 8;
        v11 = (__int64)v8;
        v12 = (4 * (result & 1)) | *(_BYTE *)(v6 + 88) & 0xFB;
        *(_BYTE *)(v6 + 88) = v12;
        if ( (_BYTE)result )
        {
          sub_27B950((__int64)v10, v6 + 16, (int *)(v6 + 56));
          v4 = *(_BYTE *)(v6 + 88) & 1;
        }
        else if ( (v12 & 3) != 0 )
        {
          sub_27B950((__int64)v10, v6 + 16, (int *)(v6 + 56));
          sub_2FC4A0((__int64)qword_1C7F2C0, v6 + 16, v11, v6 + 16);
        }
        else
        {
          sub_27B950((__int64)v10, v6 + 16, (int *)(v6 + 56));
          v4 = 1;
          sub_89ABF0((__int64)qword_1C7F2C0, v6 + 16, v11, v6 + 16);
        }
        v13 = (_QWORD *)a1[84];
        *(_BYTE *)(v6 + 48) = v4 & 1 | *(_BYTE *)(v6 + 48) & 0xFE;
        if ( v13 )
        {
          v14 = *((_DWORD *)v13 - 1);
          if ( v14 == *((_DWORD *)v13 - 2) )
          {
            v17 = (3 * v14 + 1) >> 1;
            v18 = 8 * v17 + 8;
            if ( 8 * v14 + 8 >= (unsigned int)v18 || v14 >= v17 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_98B3B0(v23, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v23);
              sub_233E40((__int64)v23);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v19 = (unsigned int *)sub_186B300(v13 - 1, v18);
            v20 = v19[1];
            v13 = v19 + 2;
            *v19 = v17;
            a1[84] = v19 + 2;
            LODWORD(v19) = v20;
            v16 = &v13[v20];
            result = (unsigned int)((_DWORD)v19 + 1);
          }
          else
          {
            v15 = v14;
            result = v14 + 1;
            v16 = &v13[v15];
          }
        }
        else
        {
          v21 = (_QWORD *)sub_186B270(0x18u);
          v13 = v21 + 1;
          *v21 = 2;
          result = 1;
          a1[84] = v13;
          v16 = v13;
        }
        *v16 = v6;
        *((_DWORD *)v13 - 1) = result;
      }
    }
  }
  return result;
}


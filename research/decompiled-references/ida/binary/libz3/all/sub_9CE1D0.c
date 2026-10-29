__int64 __fastcall sub_9CE1D0(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  char v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r12
  char v9; // dl
  _QWORD *v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rdx
  _QWORD *v13; // rdx
  unsigned int v14; // r12d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rax
  char **exception; // rbx
  __int64 v20[11]; // [rsp+0h] [rbp-58h] BYREF

  result = a3;
  v4 = a3;
  v5 = a1[89];
  if ( v5 )
  {
    if ( a2 < *(_DWORD *)(v5 - 4) )
    {
      v6 = *(_QWORD *)(v5 + 8LL * a2);
      if ( v6 )
      {
        v7 = (__int64)(a1 + 8);
        if ( (*(_BYTE *)(a1[82] + 4LL * *(unsigned int *)(v6 + 8) + 3) & 0x40) == 0 )
          v7 = (__int64)(a1 + 16);
        v9 = (4 * (result & 1)) | *(_BYTE *)(v6 + 152) & 0xFB;
        *(_BYTE *)(v6 + 152) = v9;
        if ( (_BYTE)result )
        {
          sub_98B520(v6 + 16, (int *)(v6 + 88));
          v4 = *(_BYTE *)(v6 + 152) & 1;
        }
        else if ( (v9 & 3) != 0 )
        {
          sub_98B520(v6 + 16, (int *)(v6 + 88));
          sub_2FC4A0((__int64)qword_1C7F2C0, v6 + 16, v7, v6 + 16);
          sub_2FC4A0((__int64)qword_1C7F2C0, v6 + 48, v7 + 32, v6 + 48);
        }
        else
        {
          sub_98B520(v6 + 16, (int *)(v6 + 88));
          v4 = 1;
          sub_992DA0(v6 + 16, v7);
        }
        v10 = (_QWORD *)a1[92];
        *(_BYTE *)(v6 + 80) = v4 & 1 | *(_BYTE *)(v6 + 80) & 0xFE;
        if ( v10 )
        {
          v11 = *((_DWORD *)v10 - 1);
          if ( v11 == *((_DWORD *)v10 - 2) )
          {
            v14 = (3 * v11 + 1) >> 1;
            v15 = 8 * v14 + 8;
            if ( 8 * v11 + 8 >= (unsigned int)v15 || v11 >= v14 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_98B3B0(v20, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v20);
              sub_233E40((__int64)v20);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v16 = (unsigned int *)sub_186B300(v10 - 1, v15);
            v17 = v16[1];
            v10 = v16 + 2;
            *v16 = v14;
            a1[92] = v16 + 2;
            LODWORD(v16) = v17;
            v13 = &v10[v17];
            result = (unsigned int)((_DWORD)v16 + 1);
          }
          else
          {
            v12 = v11;
            result = v11 + 1;
            v13 = &v10[v12];
          }
        }
        else
        {
          v18 = (_QWORD *)sub_186B270(0x18u);
          v10 = v18 + 1;
          *v18 = 2;
          result = 1;
          a1[92] = v10;
          v13 = v10;
        }
        *v13 = v6;
        *((_DWORD *)v10 - 1) = result;
      }
    }
  }
  return result;
}


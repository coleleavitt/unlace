__int64 __fastcall sub_8ED430(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // r12
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  _QWORD *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v12; // rcx
  unsigned int v13; // r13d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _BYTE v18[16]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v19; // [rsp+10h] [rbp-58h]
  __int64 v20[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 856LL);
  sub_B67520(a1, v2);
  *(_BYTE *)(*(_QWORD *)(a1 + 8848) + (unsigned int)dword_1C7EC64) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 8848) + (unsigned int)dword_1C7EC60) = -1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 104) + 712LL) )
  {
    v6 = sub_15DE010();
    sub_B725E0(v18, a1, v6, 1);
    v7 = sub_180C100(a1 + 8400, 24);
    v8 = *(_QWORD **)(a1 + 8600);
    *(_BYTE *)(v7 + 8) = v18[8] & 3 | *(_BYTE *)(v7 + 8) & 0xFC;
    *(_QWORD *)v7 = off_1C57620;
    *(_QWORD *)(v7 + 16) = v19;
    if ( v8 )
    {
      v9 = *((_DWORD *)v8 - 1);
      if ( v9 == *((_DWORD *)v8 - 2) )
      {
        v13 = (3 * v9 + 1) >> 1;
        v14 = 8 * v13 + 8;
        if ( 8 * v9 + 8 >= (unsigned int)v14 || v9 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_8E4EB0(v20, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v20);
          sub_233E40((__int64)v20);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = (unsigned int *)sub_186B300(v8 - 1, v14);
        v16 = v15[1];
        v8 = v15 + 2;
        *v15 = v13;
        *(_QWORD *)(a1 + 8600) = v15 + 2;
        LODWORD(v15) = v16;
        v12 = &v8[v16];
        v11 = (_DWORD)v15 + 1;
      }
      else
      {
        v10 = v9;
        v11 = v9 + 1;
        v12 = &v8[v10];
      }
    }
    else
    {
      v17 = (_QWORD *)sub_186B270(0x18u);
      v8 = v17 + 1;
      *v17 = 2;
      v11 = 1;
      *(_QWORD *)(a1 + 8600) = v8;
      v12 = v8;
    }
    *v12 = v7;
    *((_DWORD *)v8 - 1) = v11;
    **(_QWORD **)(a1 + 8872) = v7 | 3;
  }
  else
  {
    **(_QWORD **)(a1 + 8872) = 2;
  }
  *(_QWORD *)(a1 + 8640) = sub_B68280(a1, v2, 1, 1, 0, v3);
  result = sub_B68280(a1, *(_QWORD *)(*(_QWORD *)(a1 + 104) + 864LL), 1, 1, 0, v4);
  *(_QWORD *)(a1 + 8648) = result;
  return result;
}


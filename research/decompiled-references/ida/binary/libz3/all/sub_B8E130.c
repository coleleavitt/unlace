__int64 __fastcall sub_B8E130(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  _QWORD *v6; // r15
  __int64 v7; // rax
  _QWORD *v8; // rax
  void *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int v13; // r14d
  size_t v14; // rdi
  __int64 v15; // rax
  _DWORD *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rax
  _QWORD *v19; // rdx
  _DWORD *v20; // rsi
  _DWORD *i; // rax
  int v22; // ecx
  char v23; // di
  __int64 v24; // rcx
  char v25; // di
  __int64 v26; // rcx
  __int64 v27; // rax
  void *v28; // r13
  _DWORD *v29; // rsi
  _QWORD *v30; // rax
  char **exception; // rbp
  _DWORD *v33; // [rsp+18h] [rbp-A0h]
  _DWORD *v34; // [rsp+20h] [rbp-98h]
  unsigned int v35; // [rsp+2Ch] [rbp-8Ch]
  __int64 v36[4]; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v37; // [rsp+50h] [rbp-68h]
  __int64 v38; // [rsp+58h] [rbp-60h] BYREF
  __int64 v39; // [rsp+60h] [rbp-58h]
  __int64 v40; // [rsp+68h] [rbp-50h] BYREF
  __int64 v41; // [rsp+70h] [rbp-48h]

  v4 = 32LL * a2;
  v5 = *(_QWORD *)(a1 + 24);
  v37 = a2;
  v38 = 0;
  v39 = 0;
  v40 = 1;
  v41 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v38, (int *)(v4 + v5));
  v6 = *(_QWORD **)(a1 + 32);
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v7 == *((_DWORD *)v6 - 2) )
    {
      v13 = (unsigned int)(3 * v7 + 1) >> 1;
      v35 = v13;
      v14 = 40 * v13 + 8;
      if ( 40 * (int)v7 + 8 >= (unsigned int)v14 || (unsigned int)v7 >= v13 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_B75C60(v36, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v36);
        sub_233E40((__int64)v36);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v15 = sub_186B270(v14);
      v16 = *(_DWORD **)(a1 + 32);
      v34 = (_DWORD *)v15;
      v6 = (_QWORD *)(v15 + 8);
      if ( v16 )
      {
        v17 = v15;
        v18 = (unsigned int)*(v16 - 1);
        v19 = v6;
        *(_DWORD *)(v17 + 4) = v18;
        v20 = &v16[10 * v18];
        for ( i = v16; v20 != i; *(v19 - 1) = v26 )
        {
          v22 = *i;
          i += 10;
          v19 += 5;
          *((_DWORD *)v19 - 10) = v22;
          v23 = *((_BYTE *)i - 28);
          *((_DWORD *)v19 - 8) = *(i - 8);
          *((_BYTE *)v19 - 28) = v23 & 3 | *((_BYTE *)v19 - 28) & 0xFC;
          v24 = *((_QWORD *)i - 3);
          *((_QWORD *)i - 3) = 0;
          *(v19 - 3) = v24;
          v25 = *((_BYTE *)i - 12);
          *((_DWORD *)v19 - 4) = *(i - 4);
          *((_BYTE *)v19 - 12) = v25 & 3 | *((_BYTE *)v19 - 12) & 0xFC;
          v26 = *((_QWORD *)i - 1);
          *((_QWORD *)i - 1) = 0;
        }
        v27 = (unsigned int)*(v16 - 1);
        if ( (_DWORD)v27 )
        {
          v33 = &v16[10 * v27];
          do
          {
            v28 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v16 + 2);
            v29 = v16 + 6;
            v16 += 10;
            sub_182CBA0(v28, v29);
          }
          while ( v16 != v33 );
          v16 = *(_DWORD **)(a1 + 32);
        }
        sub_186B220(v16 - 2);
        v8 = &v6[5 * (unsigned int)v34[1]];
      }
      else
      {
        *(_DWORD *)(v15 + 4) = 0;
        v8 = (_QWORD *)(v15 + 8);
      }
      *(_QWORD *)(a1 + 32) = v6;
      *v34 = v35;
    }
    else
    {
      v8 = &v6[5 * v7];
    }
  }
  else
  {
    v30 = (_QWORD *)sub_186B270(0x58u);
    v6 = v30 + 1;
    *v30 = 2;
    *(_QWORD *)(a1 + 32) = v30 + 1;
    v8 = v30 + 1;
  }
  v9 = qword_1C7F2C0;
  *(_DWORD *)v8 = v37;
  *((_DWORD *)v8 + 2) = v38;
  *((_BYTE *)v8 + 12) = BYTE4(v38) & 3 | *((_BYTE *)v8 + 12) & 0xFC;
  v10 = v39;
  v39 = 0;
  v8[2] = v10;
  *((_DWORD *)v8 + 6) = v40;
  *((_BYTE *)v8 + 28) = BYTE4(v40) & 3 | *((_BYTE *)v8 + 28) & 0xFC;
  v11 = v41;
  v41 = 0;
  v8[4] = v11;
  ++*((_DWORD *)v6 - 1);
  sub_182CBA0(v9, &v38);
  sub_182CBA0(v9, &v40);
  return sub_2FC4A0((__int64)qword_1C7F2C0, *(_QWORD *)(a1 + 24) + v4, a3, *(_QWORD *)(a1 + 24) + v4);
}


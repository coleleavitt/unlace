__int64 __fastcall sub_8D0990(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbx
  int *v5; // r14
  _QWORD *v6; // r15
  __int64 v7; // rax
  _QWORD *v8; // rax
  void *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 result; // rax
  unsigned int v14; // esi
  unsigned int v15; // edi
  unsigned int v16; // esi
  size_t v17; // rdi
  __int64 v18; // rax
  _DWORD *v19; // r13
  __int64 v20; // rsi
  __int64 v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rsi
  _DWORD *v24; // rax
  _DWORD *v25; // rsi
  int v26; // ecx
  char v27; // di
  __int64 v28; // rcx
  char v29; // di
  __int64 v30; // rcx
  __int64 v31; // rax
  void *v32; // r14
  _DWORD *v33; // rsi
  _QWORD *v34; // rax
  char **exception; // rbp
  __int64 v36; // rdx
  _DWORD *v38; // [rsp+18h] [rbp-A0h]
  _DWORD *v39; // [rsp+20h] [rbp-98h]
  unsigned int v40; // [rsp+2Ch] [rbp-8Ch]
  __int64 v41[4]; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v42; // [rsp+50h] [rbp-68h]
  __int64 v43; // [rsp+58h] [rbp-60h] BYREF
  __int64 v44; // [rsp+60h] [rbp-58h]
  __int64 v45; // [rsp+68h] [rbp-50h] BYREF
  __int64 v46; // [rsp+70h] [rbp-48h]
  int v47; // [rsp+78h] [rbp-40h]

  v4 = 40LL * a2;
  v5 = (int *)(v4 + *(_QWORD *)(a1 + 24));
  v42 = a2;
  v43 = 0;
  v44 = 0;
  v45 = 1;
  v46 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v43, v5);
  v6 = *(_QWORD **)(a1 + 32);
  v47 = v5[8];
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v7 == *((_DWORD *)v6 - 2) )
    {
      v14 = 3 * v7 + 1;
      v15 = v14 & 0xFFFFFFFE;
      v16 = v14 >> 1;
      v40 = v16;
      v17 = 16 * (v16 + v15) + 8;
      if ( 48 * (int)v7 + 8 >= (unsigned int)v17 || (unsigned int)v7 >= v16 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(v41, "Overflow encountered when expanding vector", v36);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v41);
        sub_233E40((__int64)v41);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v18 = sub_186B270(v17);
      v19 = *(_DWORD **)(a1 + 32);
      v39 = (_DWORD *)v18;
      v6 = (_QWORD *)(v18 + 8);
      if ( v19 )
      {
        v20 = v18;
        v21 = (unsigned int)*(v19 - 1);
        v22 = v6;
        *(_DWORD *)(v20 + 4) = v21;
        v23 = 3 * v21;
        v24 = v19;
        v25 = &v19[4 * v23];
        if ( v19 != v25 )
        {
          do
          {
            v26 = *v24;
            v24 += 12;
            v22 += 6;
            *((_DWORD *)v22 - 12) = v26;
            v27 = *((_BYTE *)v24 - 36);
            *((_DWORD *)v22 - 10) = *(v24 - 10);
            *((_BYTE *)v22 - 36) = v27 & 3 | *((_BYTE *)v22 - 36) & 0xFC;
            v28 = *((_QWORD *)v24 - 4);
            *((_QWORD *)v24 - 4) = 0;
            *(v22 - 4) = v28;
            v29 = *((_BYTE *)v24 - 20);
            *((_DWORD *)v22 - 6) = *(v24 - 6);
            *((_BYTE *)v22 - 20) = v29 & 3 | *((_BYTE *)v22 - 20) & 0xFC;
            v30 = *((_QWORD *)v24 - 2);
            *((_QWORD *)v24 - 2) = 0;
            *(v22 - 2) = v30;
            *((_DWORD *)v22 - 2) = *(v24 - 2);
          }
          while ( v25 != v24 );
        }
        v31 = (unsigned int)*(v19 - 1);
        if ( (_DWORD)v31 )
        {
          v38 = &v19[12 * v31];
          do
          {
            v32 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v19 + 2);
            v33 = v19 + 6;
            v19 += 12;
            sub_182CBA0(v32, v33);
          }
          while ( v19 != v38 );
          v19 = *(_DWORD **)(a1 + 32);
        }
        sub_186B220(v19 - 2);
        v8 = &v6[6 * (unsigned int)v39[1]];
      }
      else
      {
        *(_DWORD *)(v18 + 4) = 0;
        v8 = (_QWORD *)(v18 + 8);
      }
      *(_QWORD *)(a1 + 32) = v6;
      *v39 = v40;
    }
    else
    {
      v8 = &v6[6 * v7];
    }
  }
  else
  {
    v34 = (_QWORD *)sub_186B270(0x68u);
    v6 = v34 + 1;
    *v34 = 2;
    *(_QWORD *)(a1 + 32) = v34 + 1;
    v8 = v34 + 1;
  }
  v9 = qword_1C7F2C0;
  *(_DWORD *)v8 = v42;
  *((_DWORD *)v8 + 2) = v43;
  *((_BYTE *)v8 + 12) = BYTE4(v43) & 3 | *((_BYTE *)v8 + 12) & 0xFC;
  v10 = v44;
  v44 = 0;
  v8[2] = v10;
  *((_DWORD *)v8 + 6) = v45;
  *((_BYTE *)v8 + 28) = BYTE4(v45) & 3 | *((_BYTE *)v8 + 28) & 0xFC;
  v11 = v46;
  v46 = 0;
  v8[4] = v11;
  *((_DWORD *)v8 + 10) = v47;
  ++*((_DWORD *)v6 - 1);
  sub_182CBA0(v9, &v43);
  sub_182CBA0(v9, &v45);
  v12 = *(_QWORD *)(a1 + 24) + v4;
  sub_2FC4A0((__int64)qword_1C7F2C0, v12, a3, v12);
  result = *(unsigned int *)(a3 + 32);
  *(_DWORD *)(v12 + 32) += result;
  return result;
}


__int64 __fastcall sub_E0FB00(__int64 a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned int v10; // r15d
  __int64 v11; // rax
  unsigned int v12; // eax
  bool v13; // zf
  unsigned int v14; // eax
  __int64 *v15; // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rax
  _QWORD *v19; // r14
  unsigned __int64 v20; // rax
  _QWORD *v21; // r13
  _QWORD *v22; // rdi
  void *v23; // rdi
  void **v24; // r14
  void **v25; // r13
  __int64 v26; // rdi
  unsigned __int64 v27; // rsi
  __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // [rsp+Ch] [rbp-5Ch]
  unsigned int v31; // [rsp+Ch] [rbp-5Ch]
  __int64 v32; // [rsp+10h] [rbp-58h]
  __int64 *v35; // [rsp+20h] [rbp-48h]
  unsigned int v37; // [rsp+2Ch] [rbp-3Ch]

  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
  if ( !*(_QWORD *)(v7 + 8) )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, 0);
    return 0;
  }
  v8 = v7;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1) )
    return 0;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1) - 1;
  v30 = v10;
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 104LL))(a1);
  v12 = *(_DWORD *)(sub_A3ED80(v11) + 28);
  v37 = v12;
  if ( v12 )
  {
    v29 = v12 + 1;
    if ( v10 <= v29 )
      v29 = v10;
    v30 = v29;
  }
  v13 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) == 0;
  v14 = 0;
  if ( v13 )
    v14 = v30;
  v31 = v14;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 80LL))(a1, 1);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, a5 ^ 1u);
  v15 = *(__int64 **)(v8 + 8);
  v35 = v15;
  v32 = *v15;
  v16 = *v15 + 32LL * *((unsigned int *)v15 + 2);
  if ( *v15 == v16 )
  {
    v26 = *(_QWORD *)(v8 + 8);
  }
  else
  {
    do
    {
      v16 -= 32;
      v17 = *(_QWORD *)(v16 + 8);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v16 + 16);
        if ( v18 )
        {
          if ( v17 < v18 || v17 > v18 + 14848 )
          {
            v19 = *(_QWORD **)(v17 + 528);
            v20 = (unsigned __int64)*(unsigned int *)(v17 + 536) << 6;
            v21 = (_QWORD *)((char *)v19 + v20);
            if ( v19 != (_QWORD *)((char *)v19 + v20) )
            {
              do
              {
                while ( 1 )
                {
                  v21 -= 8;
                  v22 = (_QWORD *)v21[3];
                  if ( v22 == v21 + 5 )
                    break;
                  operator delete(v22);
                  if ( v19 == v21 )
                    goto LABEL_14;
                }
              }
              while ( v19 != v21 );
LABEL_14:
              v21 = *(_QWORD **)(v17 + 528);
            }
            if ( v21 != (_QWORD *)(v17 + 544) )
              free(v21);
            v23 = *(void **)(v17 + 416);
            if ( v23 != (void *)(v17 + 432) )
              free(v23);
            v24 = (void **)(v17 + 384);
            v25 = (void **)(v17 + 64);
            do
            {
              while ( *v24 != v24 + 2 )
              {
                operator delete(*v24);
                v24 -= 4;
                if ( v25 == v24 )
                  goto LABEL_22;
              }
              v24 -= 4;
            }
            while ( v25 != v24 );
LABEL_22:
            operator delete((void *)v17, 0x3A0u);
          }
          else
          {
            v28 = *(unsigned int *)(v18 + 14976);
            *(_DWORD *)(v18 + 14976) = v28 + 1;
            *(_QWORD *)(v18 + 8 * v28 + 14848) = v17;
          }
        }
      }
    }
    while ( v32 != v16 );
    v26 = *(_QWORD *)(v8 + 8);
  }
  *((_DWORD *)v35 + 2) = 0;
  v27 = v31 + a4 + 1;
  if ( v27 > *(unsigned int *)(v26 + 12) )
    sub_E0E630(v26, v27);
  sub_E0E850(a1, a2, a3);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) )
    sub_E0EAB0(a1, v37);
  return **(_QWORD **)(v8 + 8) + 8LL;
}


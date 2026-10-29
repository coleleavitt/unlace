void __fastcall sub_9399C0(__int64 a1, unsigned int a2, unsigned int a3, int *a4, unsigned int a5)
{
  __int64 v5; // r13
  __int64 v9; // rax
  __int64 v10; // r8
  _DWORD *v11; // rsi
  _DWORD *v12; // rdx
  _QWORD *v13; // r14
  __int64 v14; // rax
  __int64 **v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rdx
  int v22; // ebx
  unsigned int v23; // esi
  unsigned int v24; // edi
  unsigned int v25; // esi
  size_t v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r13
  _DWORD *v29; // r12
  __int64 v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rdi
  _QWORD *v33; // rax
  _QWORD *v34; // rdi
  __int64 v35; // rcx
  char v36; // si
  __int64 v37; // rcx
  char v38; // si
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r15
  char *v42; // rdi
  _QWORD *v43; // rax
  char **exception; // r12
  unsigned int v46; // [rsp+0h] [rbp-A8h]
  __int64 v48; // [rsp+10h] [rbp-98h]
  char v49; // [rsp+1Bh] [rbp-8Dh]
  unsigned int v50; // [rsp+1Ch] [rbp-8Ch] BYREF
  __int64 v51[4]; // [rsp+20h] [rbp-88h] BYREF
  __int64 *v52; // [rsp+40h] [rbp-68h] BYREF
  __int64 v53; // [rsp+48h] [rbp-60h] BYREF
  __int64 *v54; // [rsp+50h] [rbp-58h]
  __int64 v55; // [rsp+58h] [rbp-50h]
  __int64 v56; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v57; // [rsp+68h] [rbp-40h]

  v5 = a2;
  v9 = *(_QWORD *)(a1 + 248);
  v50 = a5;
  v10 = a3;
  v11 = (_DWORD *)(*(_QWORD *)(v9 + 8LL * a3) + 48LL * a2);
  if ( *v11 == -1 )
  {
LABEL_2:
    v12 = (_DWORD *)(*(_QWORD *)(v9 + 8 * v5) + 48 * v10);
    if ( *v12 == -1 || sub_3ED700((__int64)qword_1C7F2C0, (__int64)a4, (__int64)(v12 + 2)) )
    {
      v52 = (__int64 *)__PAIR64__(a3, a2);
      v53 = 0;
      v54 = nullptr;
      v55 = 1;
      v56 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v53, a4);
      v13 = *(_QWORD **)(a1 + 240);
      v57 = a5;
      if ( v13 )
      {
        v14 = *((unsigned int *)v13 - 1);
        if ( (_DWORD)v14 == *((_DWORD *)v13 - 2) )
        {
          v23 = 3 * v14 + 1;
          v24 = v23 & 0xFFFFFFFE;
          v25 = v23 >> 1;
          v46 = v25;
          v26 = 16 * (v25 + v24) + 8;
          if ( 48 * (int)v14 + 8 >= (unsigned int)v26 || (unsigned int)v14 >= v25 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_91CD50(v51, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v51);
            sub_233E40((__int64)v51);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v27 = sub_186B270(v26);
          v28 = *(_QWORD *)(a1 + 240);
          v29 = (_DWORD *)v27;
          v13 = (_QWORD *)(v27 + 8);
          if ( v28 )
          {
            v30 = *(unsigned int *)(v28 - 4);
            v31 = v13;
            v32 = 3 * v30;
            v29[1] = v30;
            v33 = (_QWORD *)v28;
            v34 = (_QWORD *)(v28 + 16 * v32);
            if ( (_QWORD *)v28 != v34 )
            {
              do
              {
                v35 = *v33;
                v36 = *((_BYTE *)v31 + 12);
                v33 += 6;
                v31 += 6;
                *(v31 - 6) = v35;
                *((_DWORD *)v31 - 10) = *((_DWORD *)v33 - 10);
                *((_BYTE *)v31 - 36) = v36 & 0xFC | *((_BYTE *)v33 - 36) & 3;
                v37 = *(v33 - 4);
                *(v33 - 4) = 0;
                v38 = *((_BYTE *)v31 - 20);
                *(v31 - 4) = v37;
                *((_DWORD *)v31 - 6) = *((_DWORD *)v33 - 6);
                *((_BYTE *)v31 - 20) = v38 & 0xFC | *((_BYTE *)v33 - 20) & 3;
                v39 = *(v33 - 2);
                *(v33 - 2) = 0;
                *(v31 - 2) = v39;
                *((_DWORD *)v31 - 2) = *((_DWORD *)v33 - 2);
              }
              while ( v34 != v33 );
            }
            v40 = *(unsigned int *)(v28 - 4);
            if ( (_DWORD)v40 )
            {
              v41 = v28 + 48 * v40;
              do
              {
                v42 = (char *)(v28 + 8);
                v28 += 48;
                sub_25A130(v42);
              }
              while ( v28 != v41 );
              v28 = *(_QWORD *)(a1 + 240);
            }
            sub_186B220((void *)(v28 - 8));
            v15 = (__int64 **)&v13[6 * (unsigned int)v29[1]];
          }
          else
          {
            *(_DWORD *)(v27 + 4) = 0;
            v15 = (__int64 **)(v27 + 8);
          }
          *(_QWORD *)(a1 + 240) = v13;
          *v29 = v46;
        }
        else
        {
          v15 = (__int64 **)&v13[6 * v14];
        }
      }
      else
      {
        v43 = (_QWORD *)sub_186B270(0x68u);
        v13 = v43 + 1;
        *v43 = 2;
        *(_QWORD *)(a1 + 240) = v43 + 1;
        v15 = (__int64 **)(v43 + 1);
      }
      *v15 = v52;
      *((_DWORD *)v15 + 2) = v53;
      *((_BYTE *)v15 + 12) = BYTE4(v53) & 3 | *((_BYTE *)v15 + 12) & 0xFC;
      v16 = v54;
      v54 = nullptr;
      v15[2] = v16;
      *((_DWORD *)v15 + 6) = v55;
      *((_BYTE *)v15 + 28) = BYTE4(v55) & 3 | *((_BYTE *)v15 + 28) & 0xFC;
      v17 = v56;
      v56 = 0;
      v15[4] = (__int64 *)v17;
      *((_DWORD *)v15 + 10) = v57;
      ++*((_DWORD *)v13 - 1);
      sub_25A130((char *)&v53);
      sub_936DC0((_QWORD *)a1);
    }
    return;
  }
  v48 = a3;
  sub_3EBD70((__int64)&v52, (__int64)(v11 + 2));
  v49 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)a4, (__int64)&v52);
  sub_25A130((char *)&v52);
  v10 = v48;
  if ( !v49 )
  {
    v9 = *(_QWORD *)(a1 + 248);
    goto LABEL_2;
  }
  v18 = *(_QWORD *)(a1 + 312);
  if ( v18 )
    *(_DWORD *)(v18 - 4) = 0;
  sub_928D10((_QWORD *)a1, a3, a2, (_QWORD *)(a1 + 312));
  if ( a5 != -2 )
    sub_91D6F0((_QWORD *)(a1 + 312), &v50);
  v19 = *(_QWORD *)(a1 + 312);
  v20 = *(_QWORD *)(a1 + 16);
  if ( v19 )
    v21 = *(unsigned int *)(v19 - 4);
  else
    v21 = 0;
  v22 = *(_DWORD *)(a1 + 8);
  sub_B727F0(&v52, *(_QWORD *)(a1 + 16), v21);
  LODWORD(v55) = v22;
  v56 = 0;
  v52 = (__int64 *)&off_1C578E0;
  sub_B72D20(&v52, v20);
  v51[0] = sub_9382C0(v20, (__int64)&v52) | 3;
  sub_8E8670(v20, v51, -2);
  v52 = qword_1C6F870;
  sub_4EB210(&v56);
}


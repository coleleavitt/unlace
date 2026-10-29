__int64 __fastcall sub_8627A0(__int64 a1, __int64 *a2)
{
  char **exception; // r12
  __int64 v3; // rsi
  _DWORD *v4; // rax
  unsigned int v6; // r13d
  __int64 v7; // rdi
  __int64 (*v8)(void); // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // rdi
  __int64 *v14; // r14
  _BYTE *v15; // rdi
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  char v17; // al
  __int64 v18; // r12
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  unsigned int v21; // r9d
  __int64 *v22; // r12
  __int64 v23; // rax
  __int64 *v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // ecx
  size_t v28; // rsi
  unsigned int *v29; // rax
  unsigned int *v30; // r12
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  bool v35; // zf
  __int64 *v36; // r12
  unsigned __int64 v37; // r14
  __int64 v38; // rsi
  __int64 v39; // [rsp+0h] [rbp-A0h]
  __int64 v41; // [rsp+10h] [rbp-90h]
  unsigned __int8 v42; // [rsp+1Bh] [rbp-85h]
  unsigned int v43; // [rsp+1Ch] [rbp-84h]
  __int64 v44; // [rsp+20h] [rbp-80h]
  __int64 v45; // [rsp+20h] [rbp-80h]
  __int64 v47[10]; // [rsp+50h] [rbp-50h] BYREF

  v3 = *a2;
  if ( *(_WORD *)(v3 + 4) )
  {
    return 0;
  }
  else
  {
    v42 = 0;
    v4 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
    if ( v4 && *(_DWORD *)(a1 + 112) == *v4 && v4[1] == 13 )
    {
      v6 = 0;
      v41 = sub_1684260(a1 + 112, v3);
      while ( 1 )
      {
        v7 = *(_QWORD *)(a1 + 80);
        v8 = *(__int64 (**)(void))(*(_QWORD *)v7 + 440LL);
        if ( (char *)v8 == (char *)sub_79F010 )
          v9 = v7 + 1592;
        else
          v9 = v8();
        v10 = *(_QWORD *)sub_13D3750(v9, v41);
        if ( !v10 || v6 >= *(_DWORD *)(v10 - 4) )
          return v42;
        v11 = *(_QWORD *)(a1 + 80);
        v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 440LL);
        v13 = v12 == sub_79F010 ? v11 + 1592 : ((__int64 (*)(void))v12)();
        v14 = *(__int64 **)(*(_QWORD *)sub_13D3750(v13, v41) + 8LL * v6);
        v15 = *(_BYTE **)(a1 + 80);
        v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 488LL);
        if ( v16 != sub_795570 )
          break;
        if ( v15[168] )
        {
          v17 = *((_BYTE *)v14 + 16);
          goto LABEL_17;
        }
LABEL_19:
        v39 = *(_QWORD *)(a1 + 72);
        v18 = *a2;
        if ( *a2 )
          ++*(_DWORD *)(v18 + 8);
        v19 = (_QWORD *)sub_186B270(0x18u);
        v19[1] = v18;
        v20 = v19 + 1;
        v21 = 1;
        *v19 = 0x100000002LL;
        v22 = (__int64 *)(*v14 + 32);
        v23 = *(unsigned int *)(*v14 + 24);
        v24 = &v22[v23];
        if ( v23 * 8 )
        {
          do
          {
            v26 = *v22;
            if ( *v22 )
            {
              ++*(_DWORD *)(v26 + 8);
              v21 = *((_DWORD *)v20 - 1);
            }
            if ( v21 == *((_DWORD *)v20 - 2) )
            {
              v27 = (3 * v21 + 1) >> 1;
              v28 = 8 * v27 + 8;
              if ( 8 * v21 + 8 >= (unsigned int)v28 || v21 >= v27 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v47, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v47);
                sub_233E40((__int64)v47);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v43 = (3 * v21 + 1) >> 1;
              v44 = v26;
              v29 = (unsigned int *)sub_186B300(v20 - 1, v28);
              v21 = v29[1];
              v20 = v29 + 2;
              v26 = v44;
              *v29 = v43;
            }
            v25 = v21;
            ++v22;
            ++v21;
            v20[v25] = v26;
            *((_DWORD *)v20 - 1) = v21;
          }
          while ( v24 != v22 );
          v45 = *(_QWORD *)(a1 + 72);
        }
        else
        {
          v45 = *(_QWORD *)(a1 + 72);
        }
        v30 = (unsigned int *)sub_15DCAD0(*(_QWORD *)(a1 + 120), (int)v20, 0);
        if ( v30 )
          ++v30[2];
        if ( v14[8] != *(_QWORD *)(sub_7E5940(a1, v30) + 64) )
        {
          v31 = sub_7E58D0(a1, (__int64)v30, *v14);
          sub_7E5160(a1, v31, nullptr, v32, v33, v34);
          v42 = 1;
        }
        if ( v30 )
        {
          v35 = v30[2]-- == 1;
          if ( v35 )
            sub_15D7BC0(v45, v30);
        }
        v36 = v20;
        v37 = (unsigned __int64)&v20[*((unsigned int *)v20 - 1)];
        if ( (unsigned __int64)v20 < v37 )
        {
          do
          {
            while ( 1 )
            {
              v38 = *v36;
              if ( *v36 )
              {
                v35 = (*(_DWORD *)(v38 + 8))-- == 1;
                if ( v35 )
                  break;
              }
              if ( (unsigned __int64)++v36 >= v37 )
                goto LABEL_44;
            }
            ++v36;
            sub_15D7BC0(v39, v38);
          }
          while ( (unsigned __int64)v36 < v37 );
        }
LABEL_44:
        sub_186B220(v20 - 1);
LABEL_18:
        ++v6;
      }
      v17 = v16((__int64)v15, (__int64)v14);
LABEL_17:
      if ( !v17 )
        goto LABEL_18;
      goto LABEL_19;
    }
  }
  return v42;
}


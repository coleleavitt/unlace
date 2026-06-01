void __fastcall sub_51DA70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  char **exception; // rbp
  char **v6; // rbp
  _QWORD *v10; // r14
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // r8d
  _QWORD *v15; // rcx
  unsigned int v16; // edx
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  _QWORD *v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // r15
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 *v29; // rcx
  __int64 v30; // rdi
  _QWORD *v31; // rax
  _QWORD *v32; // r12
  __int64 v33; // rbp
  __int64 v34; // rax
  _QWORD *v35; // rdx
  __int64 v36; // r13
  unsigned int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 *v40; // rcx
  __int64 v41; // rdi
  _QWORD *v42; // rax
  unsigned int v43; // r14d
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // ecx
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  unsigned int v53; // [rsp+Ch] [rbp-6Ch]
  __int64 v54[11]; // [rsp+20h] [rbp-58h] BYREF

  v10 = *(_QWORD **)a2;
  v11 = *(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8);
  if ( *(_QWORD *)a2 != v11 )
  {
    while ( *v10 <= 1u )
    {
      v10 += 2;
      if ( (_QWORD *)v11 == v10 )
        goto LABEL_34;
    }
    if ( (_QWORD *)v11 != v10 )
    {
      v12 = *v10;
      while ( 1 )
      {
        v13 = *(unsigned int *)(a3 + 8);
        v14 = *(_DWORD *)(v12 + 12);
        v15 = *(_QWORD **)a3;
        v16 = v13 - 1;
        v13 *= 16;
        v17 = (_QWORD *)(*(_QWORD *)a3 + v13);
        v18 = 16LL * (v14 & v16);
        v19 = (_QWORD *)(*(_QWORD *)a3 + v18);
        if ( v18 != v13 )
        {
          v20 = (_QWORD *)(*(_QWORD *)a3 + v18);
          do
          {
            while ( 1 )
            {
              v21 = *v20;
              if ( *v20 <= 1u )
                break;
              if ( *(_DWORD *)(v21 + 12) == v14 && v21 == v12 )
                goto LABEL_24;
              v20 += 2;
              if ( v17 == v20 )
                goto LABEL_15;
            }
            if ( !v21 )
              goto LABEL_58;
            v20 += 2;
          }
          while ( v17 != v20 );
        }
LABEL_15:
        if ( v15 == v19 )
LABEL_58:
          BUG();
        while ( 1 )
        {
          v22 = *v15;
          if ( *v15 > 1u )
            break;
          if ( !v22 )
            goto LABEL_58;
LABEL_19:
          v15 += 2;
          if ( v19 == v15 )
            goto LABEL_58;
        }
        if ( *(_DWORD *)(v22 + 12) != v14 || v22 != v12 )
          goto LABEL_19;
        v20 = v15;
LABEL_24:
        v23 = sub_4DAC90(*((_DWORD *)v10 + 2), *((_DWORD *)v20 + 2));
        v24 = (_QWORD *)*a5;
        v25 = v23;
        if ( *a5 )
        {
          v26 = *((_DWORD *)v24 - 1);
          if ( v26 == *((_DWORD *)v24 - 2) )
          {
            v47 = (3 * v26 + 1) >> 1;
            v48 = 8 * v47 + 8;
            if ( 8 * v26 + 8 >= (unsigned int)v48 || v26 >= v47 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v54, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v54);
              sub_233E40((__int64)v54);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v53 = (3 * v26 + 1) >> 1;
            v49 = (unsigned int *)sub_186B300(v24 - 1, v48);
            v24 = v49 + 2;
            *v49 = v53;
            v50 = v49[1];
            *a5 = v49 + 2;
            LODWORD(v49) = v50;
            v29 = &v24[v50];
            v28 = (_DWORD)v49 + 1;
          }
          else
          {
            v27 = v26;
            v28 = v26 + 1;
            v29 = &v24[v27];
          }
        }
        else
        {
          v51 = (_QWORD *)sub_186B270(0x18u);
          v24 = v51 + 1;
          *v51 = 2;
          v28 = 1;
          *a5 = v24;
          v29 = v24;
        }
        v30 = a5[1];
        *v29 = v25;
        *((_DWORD *)v24 - 1) = v28;
        if ( v30 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 16LL))(v30, v25);
        v31 = v10 + 2;
        if ( (_QWORD *)v11 != v10 + 2 )
        {
          while ( 1 )
          {
            v12 = *v31;
            v10 = v31;
            if ( *v31 > 1u )
              break;
            v31 += 2;
            if ( (_QWORD *)v11 == v31 )
              goto LABEL_34;
          }
          if ( (_QWORD *)v11 != v31 )
            continue;
        }
        break;
      }
    }
  }
LABEL_34:
  v32 = *(_QWORD **)a4;
  v33 = *(_QWORD *)a4 + 16LL * *(unsigned int *)(a4 + 8);
  if ( v32 != (_QWORD *)v33 )
  {
    while ( *v32 <= 1u )
    {
      v32 += 2;
      if ( (_QWORD *)v33 == v32 )
        return;
    }
    if ( v32 != (_QWORD *)v33 )
    {
      do
      {
        v34 = sub_4DAB00(*((_DWORD *)v32 + 2));
        v35 = (_QWORD *)*a5;
        v36 = v34;
        if ( *a5 )
        {
          v37 = *((_DWORD *)v35 - 1);
          if ( v37 == *((_DWORD *)v35 - 2) )
          {
            v43 = (3 * v37 + 1) >> 1;
            v44 = 8 * v43 + 8;
            if ( 8 * v37 + 8 >= (unsigned int)v44 || v37 >= v43 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v54, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v54);
              sub_233E40((__int64)v54);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v45 = (unsigned int *)sub_186B300(v35 - 1, v44);
            v46 = v45[1];
            v35 = v45 + 2;
            *v45 = v43;
            *a5 = v45 + 2;
            LODWORD(v45) = v46;
            v40 = &v35[v46];
            v39 = (_DWORD)v45 + 1;
          }
          else
          {
            v38 = v37;
            v39 = v37 + 1;
            v40 = &v35[v38];
          }
        }
        else
        {
          v52 = (_QWORD *)sub_186B270(0x18u);
          v35 = v52 + 1;
          *v52 = 2;
          v39 = 1;
          *a5 = v35;
          v40 = v35;
        }
        v41 = a5[1];
        *v40 = v36;
        *((_DWORD *)v35 - 1) = v39;
        if ( v41 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 16LL))(v41, v36);
        v42 = v32 + 2;
        if ( (_QWORD *)v33 == v32 + 2 )
          break;
        while ( 1 )
        {
          v32 = v42;
          if ( *v42 > 1u )
            break;
          v42 += 2;
          if ( (_QWORD *)v33 == v42 )
            return;
        }
      }
      while ( (_QWORD *)v33 != v42 );
    }
  }
}


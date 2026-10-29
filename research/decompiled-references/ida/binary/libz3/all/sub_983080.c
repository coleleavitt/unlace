__int64 __fastcall sub_983080(__int64 a1, unsigned int a2, _DWORD *a3)
{
  char **v3; // rbp
  char **exception; // rbp
  unsigned int v6; // r15d
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 result; // rax
  char v10; // dl
  unsigned int v11; // r14d
  double *v14; // rax
  double v15; // xmm0_8
  __int64 v16; // rax
  _DWORD *v17; // rcx
  __int64 v18; // rsi
  unsigned int *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdi
  void (*v23)(); // rax
  _QWORD *v24; // rdi
  int v25; // ebp
  __int64 v26; // rax
  int *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbp
  _QWORD *v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // rdx
  _QWORD *v33; // rdx
  unsigned int v34; // r12d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rax
  unsigned int v38; // r12d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  _DWORD *v44; // [rsp+8h] [rbp-70h]
  _DWORD *v45; // [rsp+8h] [rbp-70h]
  _DWORD *v46; // [rsp+8h] [rbp-70h]
  __int64 v47[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = a2 >> 1;
  v7 = a2 >> 1;
  v8 = *(_QWORD *)(a1 + 24);
  result = *(_QWORD *)(v8 + 8872) + 16 * v7;
  v10 = *(_BYTE *)(result + 11);
  if ( (v10 & 1) == 0 )
  {
    v11 = *(_DWORD *)(result + 8) & 0xFFFFFF;
    if ( *(_DWORD *)(v8 + 9468) < v11 )
    {
      *(_BYTE *)(result + 11) = v10 | 1;
      v14 = (double *)(*(_QWORD *)(v8 + 8880) + 8 * v7);
      v15 = *v14 + *(double *)(v8 + 8960);
      *v14 = v15;
      if ( v15 > 1.0e100 )
      {
        v46 = a3;
        sub_8E86F0(v8);
        a3 = v46;
      }
      v44 = a3;
      (***(void (__fastcall ****)(_QWORD, _QWORD))(v8 + 8952))(*(_QWORD *)(v8 + 8952), v6);
      v16 = *(_QWORD *)(a1 + 24);
      v17 = v44;
      v18 = *(_QWORD *)(*(_QWORD *)(v16 + 8840) + 8 * v7);
      if ( !*(_WORD *)(v18 + 4) )
      {
        v19 = *(unsigned int **)(*(_QWORD *)(v18 + 16) + 24LL);
        if ( v19 )
        {
          v20 = *v19;
          if ( (_DWORD)v20 != -1 )
          {
            v21 = *(_QWORD *)(v16 + 8672);
            if ( v21 )
            {
              if ( (unsigned int)v20 < *(_DWORD *)(v21 - 4) )
              {
                v22 = *(_QWORD *)(v21 + 8 * v20);
                if ( v22 )
                {
                  v23 = *(void (**)())(*(_QWORD *)v22 + 224LL);
                  if ( v23 != nullsub_527 )
                  {
                    ((void (__fastcall *)(__int64, __int64, _QWORD, _DWORD *))v23)(v22, v18, v6, v44);
                    v17 = v44;
                  }
                }
              }
            }
          }
        }
      }
      result = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(result + 912) )
      {
        v45 = v17;
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_AA5520(*(_QWORD *)(a1 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 912LL) + 16LL, a2 ^ 1);
        result = std::__ostream_insert<char,std::char_traits<char>>();
        v17 = v45;
      }
      if ( *(_DWORD *)(a1 + 48) == v11 )
      {
        ++*v17;
      }
      else
      {
        v24 = *(_QWORD **)(a1 + 56);
        v25 = a2 ^ 1;
        if ( v24 )
        {
          v26 = *((unsigned int *)v24 - 1);
          if ( (_DWORD)v26 == *((_DWORD *)v24 - 2) )
          {
            v34 = (unsigned int)(3 * v26 + 1) >> 1;
            v35 = 4 * v34 + 8;
            if ( 4 * (int)v26 + 8 >= (unsigned int)v35 || (unsigned int)v26 >= v34 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v47, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v47);
              sub_233E40((__int64)v47);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v36 = (unsigned int *)sub_186B300(v24 - 1, v35);
            v24 = v36 + 2;
            *v36 = v34;
            v37 = v36[1];
            *(_QWORD *)(a1 + 56) = v24;
            v27 = (int *)v24 + v37;
          }
          else
          {
            v27 = (int *)v24 + v26;
          }
        }
        else
        {
          v42 = (_QWORD *)sub_186B270(0x10u);
          v24 = v42 + 1;
          *v42 = 2;
          *(_QWORD *)(a1 + 56) = v42 + 1;
          v27 = (int *)(v42 + 1);
        }
        *v27 = v25;
        v28 = *(_QWORD *)(a1 + 24);
        ++*((_DWORD *)v24 - 1);
        v29 = *(_QWORD *)(*(_QWORD *)(v28 + 8840) + 8 * v7);
        if ( v29 )
          ++*(_DWORD *)(v29 + 8);
        v30 = *(_QWORD **)(a1 + 72);
        if ( v30 )
        {
          v31 = *((_DWORD *)v30 - 1);
          if ( v31 == *((_DWORD *)v30 - 2) )
          {
            v38 = (3 * v31 + 1) >> 1;
            v39 = 8 * v38 + 8;
            if ( 8 * v31 + 8 >= (unsigned int)v39 || v31 >= v38 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v47, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, v47);
              sub_233E40((__int64)v47);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v40 = (unsigned int *)sub_186B300(v30 - 1, v39);
            v41 = v40[1];
            v30 = v40 + 2;
            *v40 = v38;
            *(_QWORD *)(a1 + 72) = v40 + 2;
            LODWORD(v40) = v41;
            v33 = &v30[v41];
            result = (unsigned int)((_DWORD)v40 + 1);
          }
          else
          {
            v32 = v31;
            result = v31 + 1;
            v33 = &v30[v32];
          }
        }
        else
        {
          v43 = (_QWORD *)sub_186B270(0x18u);
          v30 = v43 + 1;
          *v43 = 2;
          result = 1;
          *(_QWORD *)(a1 + 72) = v30;
          v33 = v30;
        }
        *v33 = v29;
        *((_DWORD *)v30 - 1) = result;
      }
    }
  }
  return result;
}


char *__fastcall sub_543930(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 (__fastcall *v4)(__int64); // rax
  char *result; // rax
  __int64 (__fastcall *v6)(__int64); // rax
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 v13; // rbx
  bool v14; // di
  bool v15; // cl
  bool v16; // si
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // r12
  void *v23; // rdi
  bool v24; // al
  __int64 v25; // rdx
  __int64 v26; // rsi
  void *v27; // rdi
  bool v28; // al
  __int64 v29; // rdx
  unsigned __int8 v30; // al
  int v31; // eax
  __int64 v32; // r9
  __int64 v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rbx
  void *v37; // rbp
  int v38; // eax
  _QWORD *v39; // rdx
  _BYTE *v40; // rbx
  unsigned int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  _BYTE *v44; // rcx
  unsigned int v45; // ebp
  unsigned int *v46; // rax
  _QWORD *v47; // rax
  char **exception; // rbx
  __int64 v49; // [rsp+8h] [rbp-C0h]
  unsigned int v50; // [rsp+8h] [rbp-C0h]
  __int64 v51; // [rsp+8h] [rbp-C0h]
  __int64 v52; // [rsp+8h] [rbp-C0h]
  unsigned int v53; // [rsp+8h] [rbp-C0h]
  _QWORD *v54; // [rsp+10h] [rbp-B8h]
  unsigned int v55; // [rsp+10h] [rbp-B8h]
  unsigned int v56; // [rsp+10h] [rbp-B8h]
  unsigned int v57; // [rsp+10h] [rbp-B8h]
  __int64 *v58; // [rsp+18h] [rbp-B0h]
  __int64 v59; // [rsp+18h] [rbp-B0h]
  __int64 v62; // [rsp+38h] [rbp-90h]
  __int64 v63; // [rsp+40h] [rbp-88h]
  unsigned int v64; // [rsp+48h] [rbp-80h]
  unsigned int v65; // [rsp+4Ch] [rbp-7Ch]
  unsigned __int64 *v66; // [rsp+50h] [rbp-78h]
  _BYTE *v67; // [rsp+58h] [rbp-70h]
  __int64 v68[11]; // [rsp+70h] [rbp-58h] BYREF

  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL);
  if ( v4 == sub_539710 )
    result = (char *)*(unsigned __int8 *)(a2 + 80);
  else
    result = (char *)v4(a2);
  if ( (_BYTE)result )
  {
    if ( a3 )
      a3[80] = 1;
  }
  else
  {
    if ( !*(_BYTE *)(a2 + 144) )
    {
      if ( (unsigned __int8)sub_537E40(
                              *(_QWORD *)(a2 + 32),
                              (unsigned __int64 *)(a2 + 120),
                              (std::chrono::_V2::steady_clock *)(a2 + 88)) )
        *(_BYTE *)(a2 + 144) = 1;
      else
        *(_BYTE *)(a2 + 80) = 1;
    }
    v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL);
    if ( v6 == sub_539710 )
      v7 = *(_BYTE *)(a1 + 80);
    else
      v7 = v6(a1);
    if ( !v7 )
    {
      if ( !*(_BYTE *)(a1 + 144) )
      {
        if ( (unsigned __int8)sub_537E40(
                                *(_QWORD *)(a1 + 32),
                                (unsigned __int64 *)(a1 + 120),
                                (std::chrono::_V2::steady_clock *)(a1 + 88)) )
          *(_BYTE *)(a1 + 144) = 1;
        else
          *(_BYTE *)(a1 + 80) = 1;
      }
      v8 = *(_QWORD *)(a1 + 120);
      if ( v8 )
      {
        v64 = *(_DWORD *)(v8 - 4);
        v9 = *(_QWORD *)(a2 + 120);
        if ( !v9 )
        {
          *(_BYTE *)(a1 + 112) = 0;
          goto LABEL_45;
        }
      }
      else
      {
        v64 = 0;
        v9 = *(_QWORD *)(a2 + 120);
        if ( !v9 )
        {
          *(_BYTE *)(a1 + 112) = 0;
          return (char *)a1;
        }
      }
      v67 = a3;
      v10 = 0;
      v66 = (unsigned __int64 *)(a1 + 120);
      while ( v10 < *(_DWORD *)(v9 - 4) )
      {
        v11 = v10;
        v12 = 8LL * v10;
        v62 = 32LL * v10;
        if ( v64 )
        {
          v65 = v10;
          v13 = 0;
          v63 = v10;
          while ( 1 )
          {
            v18 = *(_QWORD *)(v9 + v12);
            if ( v18 )
            {
              v54 = (_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v13);
              v58 = (__int64 *)(v9 + v12);
              v19 = 0;
              while ( v19 < *(_DWORD *)(v18 - 4) )
              {
                v20 = 32LL * v19;
                v21 = v18 + v20;
                v22 = v20 + *v54;
                v23 = qword_1C7F2C0;
                if ( (*(_BYTE *)(v18 + v20 + 4) & 1) != 0 || (*(_BYTE *)(v22 + 4) & 1) != 0 )
                {
                  v23 = qword_1C7F2C0;
                  if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v21, v20 + *v54) )
                    goto LABEL_16;
                }
                else if ( *(_DWORD *)v21 != *(_DWORD *)v22 )
                {
                  goto LABEL_16;
                }
                if ( (*(_BYTE *)(v21 + 20) & 1) != 0 || (*(_BYTE *)(v22 + 20) & 1) != 0 )
                  v24 = (unsigned int)sub_182C7B0(v23, v21 + 16, v22 + 16) == 0;
                else
                  v24 = *(_DWORD *)(v21 + 16) == *(_DWORD *)(v22 + 16);
                if ( !v24 )
                  goto LABEL_16;
                ++v19;
                v18 = *v58;
                if ( !*v58 )
                  break;
              }
            }
            v25 = *(_QWORD *)(a1 + 128) + 32 * v13;
            v26 = *(_QWORD *)(a2 + 128) + v62;
            v27 = qword_1C7F2C0;
            if ( (*(_BYTE *)(v26 + 4) & 1) != 0 || (*(_BYTE *)(v25 + 4) & 1) != 0 )
            {
              v59 = *(_QWORD *)(a1 + 128) + 32 * v13;
              v31 = sub_182C7B0(qword_1C7F2C0, v26, v25);
              v25 = v59;
              if ( v31 )
                goto LABEL_16;
            }
            else if ( *(_DWORD *)v26 != *(_DWORD *)v25 )
            {
              goto LABEL_16;
            }
            if ( (*(_BYTE *)(v26 + 20) & 1) != 0 || (*(_BYTE *)(v25 + 20) & 1) != 0 )
              v28 = (unsigned int)sub_182C7B0(v27, v26 + 16, v25 + 16) == 0;
            else
              v28 = *(_DWORD *)(v26 + 16) == *(_DWORD *)(v25 + 16);
            if ( v28 )
            {
              v29 = *(_QWORD *)(a2 + 136);
              v30 = *(_BYTE *)(*(_QWORD *)(a1 + 136) + v13);
              v14 = *(_BYTE *)(v29 + v63) == v30;
              v15 = *(_BYTE *)(v29 + v63) != v30;
              goto LABEL_17;
            }
LABEL_16:
            v14 = 0;
            v15 = 1;
LABEL_17:
            v16 = (int)v13++ + 1 < v64;
            v17 = *(_QWORD *)(a2 + 120);
            v9 = v17;
            if ( !v15 || !v16 )
            {
              v10 = v65;
              v11 = v63;
              if ( v14 )
                goto LABEL_43;
              break;
            }
          }
        }
        v55 = v10;
        v49 = v11;
        sub_536E30(v66, (__int64 *)(v9 + v12));
        v32 = v49;
        v10 = v55;
        v33 = *(_QWORD *)(a2 + 128) + v62;
        v34 = *(_QWORD *)(a1 + 128);
        if ( !v34 || (v35 = *(unsigned int *)(v34 - 4), (_DWORD)v35 == *(_DWORD *)(v34 - 8)) )
        {
          sub_53D790((__int64 *)(a1 + 128));
          v10 = v55;
          v32 = v49;
          v34 = *(_QWORD *)(a1 + 128);
          v35 = *(unsigned int *)(v34 - 4);
        }
        v36 = 32 * v35 + v34;
        *(_QWORD *)v36 = 0;
        *(_QWORD *)(v36 + 8) = 0;
        v37 = qword_1C7F2C0;
        *(_QWORD *)(v36 + 16) = 1;
        *(_QWORD *)(v36 + 24) = 0;
        if ( (*(_BYTE *)(v33 + 4) & 1) != 0 )
        {
          v57 = v10;
          v52 = v32;
          sub_182C690(v37, v36, v33);
          v10 = v57;
          v32 = v52;
        }
        else
        {
          *(_DWORD *)v36 = *(_DWORD *)v33;
        }
        if ( (*(_BYTE *)(v33 + 20) & 1) != 0 )
        {
          v56 = v10;
          v51 = v32;
          sub_182C690(v37, v36 + 16, v33 + 16);
          v10 = v56;
          v32 = v51;
        }
        else
        {
          v38 = *(_DWORD *)(v33 + 16);
          *(_BYTE *)(v36 + 20) &= ~1u;
          *(_DWORD *)(v36 + 16) = v38;
        }
        v39 = *(_QWORD **)(a1 + 136);
        ++*(_DWORD *)(*(_QWORD *)(a1 + 128) - 4LL);
        v40 = (_BYTE *)(v32 + *(_QWORD *)(a2 + 136));
        if ( v39 )
        {
          v41 = *((_DWORD *)v39 - 1);
          if ( v41 == *((_DWORD *)v39 - 2) )
          {
            v45 = (3 * v41 + 1) >> 1;
            if ( v41 + 8 >= v45 + 8 || v41 >= v45 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v68, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v68);
              sub_233E40((__int64)v68);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v50 = v10;
            v46 = (unsigned int *)sub_186B300(v39 - 1, v45 + 8);
            v10 = v50;
            v39 = v46 + 2;
            *v46 = v45;
            *(_QWORD *)(a1 + 136) = v46 + 2;
            LODWORD(v46) = v46[1];
            v44 = (char *)v39 + (unsigned int)v46;
            v43 = (_DWORD)v46 + 1;
          }
          else
          {
            v42 = v41;
            v43 = v41 + 1;
            v44 = (char *)v39 + v42;
          }
        }
        else
        {
          v53 = v10;
          v47 = (_QWORD *)sub_186B270(0xAu);
          v10 = v53;
          *v47 = 2;
          v39 = v47 + 1;
          *(_QWORD *)(a1 + 136) = v47 + 1;
          v44 = v47 + 1;
          v43 = 1;
        }
        *v44 = *v40;
        *((_DWORD *)v39 - 1) = v43;
        v17 = *(_QWORD *)(a2 + 120);
LABEL_43:
        ++v10;
        v9 = v17;
        if ( !v17 )
          break;
      }
      a3 = v67;
      v8 = *(_QWORD *)(a1 + 120);
      *(_BYTE *)(a1 + 112) = 0;
      if ( !v8 )
      {
        result = nullptr;
LABEL_46:
        if ( a3 )
        {
          if ( (_DWORD)result != v64 )
          {
            sub_53C690(a3 + 88, (char *)(a1 + 88));
            sub_53C690(a3 + 120, (char *)(a1 + 120));
            a3[144] = *(_BYTE *)(a1 + 144);
            a3[112] = *(_BYTE *)(a1 + 112);
            result = (char *)*(unsigned __int8 *)(a1 + 80);
            a3[80] = (_BYTE)result;
          }
        }
        return result;
      }
LABEL_45:
      result = (char *)*(unsigned int *)(v8 - 4);
      goto LABEL_46;
    }
    result = sub_53C690((char *)(a1 + 120), (char *)(a2 + 120));
    *(_BYTE *)(a1 + 144) = 1;
    *(_BYTE *)(a1 + 80) = 0;
    *(_BYTE *)(a1 + 112) = 0;
    if ( a3 )
    {
      sub_53C690(a3 + 88, (char *)(a1 + 88));
      sub_53C690(a3 + 120, (char *)(a1 + 120));
      a3[144] = *(_BYTE *)(a1 + 144);
      a3[112] = *(_BYTE *)(a1 + 112);
      result = (char *)*(unsigned __int8 *)(a1 + 80);
      a3[80] = (_BYTE)result;
    }
  }
  return result;
}


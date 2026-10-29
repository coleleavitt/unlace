__int64 __fastcall sub_B42910(__int64 a1, unsigned int *a2)
{
  char **v2; // rbp
  char **exception; // rbp
  unsigned int v4; // r13d
  _QWORD *v7; // rax
  _QWORD *v8; // r12
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned int *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // edx
  __int64 result; // rax
  __int16 v17; // di
  _DWORD *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  int v21; // ecx
  unsigned int v22; // edx
  char v23; // cl
  _DWORD *v24; // rdi
  __int64 v25; // r8
  __int64 v26; // rdi
  int v27; // esi
  _QWORD *v28; // rdi
  unsigned int v29; // eax
  __int64 v30; // rdx
  unsigned int **v31; // rdx
  __int64 v32; // r8
  unsigned int i; // r15d
  __int64 v34; // rdx
  _QWORD *v35; // rdx
  unsigned int v36; // ecx
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  unsigned int v41; // r12d
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // rax
  unsigned int v46; // [rsp+4h] [rbp-74h]
  __int64 v47; // [rsp+8h] [rbp-70h]
  __int64 v48; // [rsp+10h] [rbp-68h] BYREF
  void *v49; // [rsp+18h] [rbp-60h]
  __int64 v50[2]; // [rsp+20h] [rbp-58h] BYREF
  void *ptr; // [rsp+30h] [rbp-48h]

  v4 = 0;
  v7 = (_QWORD *)sub_186B270(0x18u);
  v7[1] = a2;
  v8 = v7 + 1;
  *v7 = 0x100000002LL;
  v9 = 1;
  do
  {
    v10 = v9 - 1;
    v11 = (unsigned int *)v8[v10];
    --v9;
    *((_DWORD *)v8 - 1) = v10;
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8656LL);
    if ( v12 && (v13 = *v11, (unsigned int)v13 < *(_DWORD *)(v12 - 4)) && (v14 = *(_QWORD *)(v12 + 8 * v13)) != 0 )
    {
      v15 = *(_DWORD *)(v14 + 36);
      if ( v4 < v15 )
        v4 = v15;
    }
    else if ( !*((_WORD *)v11 + 2) && v11[6] )
    {
      v32 = *((_QWORD *)v11 + 4);
      for ( i = 0; ; v32 = *(_QWORD *)&v11[2 * i + 8] )
      {
        if ( *((_DWORD *)v8 - 2) == v9 )
        {
          v36 = (3 * v9 + 1) >> 1;
          v37 = 8 * v36 + 8;
          if ( 8 * v9 + 8 >= (unsigned int)v37 || v9 >= v36 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v50, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v50);
            sub_233E40((__int64)v50);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v47 = v32;
          v46 = (3 * v9 + 1) >> 1;
          v38 = (unsigned int *)sub_186B300(v8 - 1, v37);
          v39 = v38[1];
          v8 = v38 + 2;
          v32 = v47;
          *v38 = v46;
          LODWORD(v38) = v39;
          v35 = &v8[v39];
          v9 = (_DWORD)v38 + 1;
        }
        else
        {
          v34 = v9++;
          v35 = &v8[v34];
        }
        *v35 = v32;
        ++i;
        *((_DWORD *)v8 - 1) = v9;
        if ( i >= v11[6] )
          break;
      }
    }
  }
  while ( v9 );
  sub_186B220(v8 - 1);
  if ( !v4 )
  {
    if ( *(_DWORD *)(a1 + 64) )
    {
      v40 = *(_QWORD *)(a1 + 8);
      LODWORD(v49) = *(_DWORD *)(a1 + 64);
      v50[1] = 0;
      v48 = v40;
      ptr = nullptr;
      sub_B3C620((__int64)&v48, (__int64)v50, a2);
      if ( ptr )
        sub_186B220(ptr);
    }
  }
  result = sub_15D2CB0(*(_QWORD *)(a1 + 24), a2);
  if ( (_BYTE)result )
  {
    v17 = *((_WORD *)a2 + 2);
    if ( v17 || (v18 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) == nullptr || *v18 )
    {
      v19 = *(_QWORD *)(a1 + 8);
      result = *(_QWORD *)(v19 + 8832);
      if ( !result )
        return result;
      v20 = *a2;
      if ( (unsigned int)v20 >= *(_DWORD *)(result - 4) )
        return result;
      v21 = 0;
    }
    else
    {
      v19 = *(_QWORD *)(a1 + 8);
      v21 = v18[1];
      result = *(_QWORD *)(v19 + 8832);
      if ( !result || (v20 = *a2, (unsigned int)v20 >= *(_DWORD *)(result - 4)) )
      {
        if ( v21 != 6 )
          return result;
        goto LABEL_46;
      }
      LOBYTE(v21) = v21 == 6;
    }
    v22 = *(_DWORD *)(result + 4 * v20);
    result = v21 ^ 1u;
    v23 = (v21 ^ 1) & (v22 == 0x7FFFFFFF);
    if ( v23 )
      return result;
    if ( v22 != 0x7FFFFFFF )
    {
      if ( !v17 )
      {
        v24 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
        if ( v24 )
        {
          if ( !*v24 )
            v23 = v24[1] == 5;
        }
      }
      v25 = *(_QWORD *)(v19 + 8848);
      v26 = 2 * v22;
      v27 = *(char *)(v25 + v26);
      if ( *(_BYTE *)(v25 + v26) && (v27 != 1 || (_BYTE)result) && (!v23 || v27 != -1) )
        return result;
      if ( v22 < *(_DWORD *)(a1 + 44) )
      {
LABEL_27:
        v28 = *(_QWORD **)(a1 + 32);
        if ( v28 )
        {
          v29 = *((_DWORD *)v28 - 1);
          if ( v29 == *((_DWORD *)v28 - 2) )
          {
            v41 = (3 * v29 + 1) >> 1;
            v42 = 8 * v41 + 8;
            if ( 8 * v29 + 8 >= (unsigned int)v42 || v29 >= v41 )
            {
              v2 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v50, "Overflow encountered when expanding vector");
              *v2 = (char *)off_1C63128;
              sub_2333C0(v2 + 1, v50);
              sub_233E40((__int64)v50);
              __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v43 = (unsigned int *)sub_186B300(v28 - 1, v42);
            v44 = v43[1];
            v28 = v43 + 2;
            *v43 = v41;
            *(_QWORD *)(a1 + 32) = v43 + 2;
            LODWORD(v43) = v44;
            v31 = (unsigned int **)&v28[v44];
            result = (unsigned int)((_DWORD)v43 + 1);
          }
          else
          {
            v30 = v29;
            result = v29 + 1;
            v31 = (unsigned int **)&v28[v30];
          }
        }
        else
        {
          v45 = (_QWORD *)sub_186B270(0x18u);
          v28 = v45 + 1;
          *v45 = 2;
          result = 1;
          *(_QWORD *)(a1 + 32) = v28;
          v31 = (unsigned int **)v28;
        }
        *v31 = a2;
        *((_DWORD *)v28 - 1) = result;
        return result;
      }
      return (__int64)sub_B424A0((_QWORD *)a1, (__int64)a2);
    }
LABEL_46:
    if ( !*(_BYTE *)(v19 + 10320) && *(_DWORD *)(a1 + 44) > 0x7FFFFFFFu )
      goto LABEL_27;
    return (__int64)sub_B424A0((_QWORD *)a1, (__int64)a2);
  }
  return result;
}


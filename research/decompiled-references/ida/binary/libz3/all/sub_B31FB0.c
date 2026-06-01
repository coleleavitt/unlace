__int64 __fastcall sub_B31FB0(__int64 a1, unsigned int a2, unsigned int a3)
{
  char **exception; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 *v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // r13d
  __int64 v15; // rsi
  unsigned int v16; // edi
  _QWORD *v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rdx
  _DWORD *v20; // rbx
  _DWORD *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // rbx
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 result; // rax
  unsigned int v33; // r13d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // [rsp+8h] [rbp-70h]
  __int64 v39[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a3;
  v5 = a2;
  v6 = a1 + 328;
  v10 = a2;
  v11 = *(_QWORD *)(a1 + 344);
  do
  {
    v12 = (__int64 *)v10;
    v13 = v10;
    v10 = *(_DWORD *)(v11 + 4LL * v10);
  }
  while ( v13 != v10 );
  v14 = v4;
  do
  {
    v15 = v14;
    v16 = v14;
    v14 = *(_DWORD *)(v11 + 4LL * v14);
  }
  while ( v16 != v14 );
  if ( v13 != v14 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 352) + 4 * v15) >= *(_DWORD *)(*(_QWORD *)(a1 + 352) + 4LL * (_QWORD)v12) )
    {
      v14 = v10;
      v10 = v16;
      LODWORD(v5) = v4;
    }
    v38 = v6;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 328) + 448LL))(
      *(_QWORD *)(a1 + 328),
      v10,
      v14,
      (unsigned int)v5);
    v17 = *(_QWORD **)(a1 + 336);
    *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * v14) = v10;
    v18 = 4LL * v10;
    *(_DWORD *)(*(_QWORD *)(a1 + 352) + v18) += *(_DWORD *)(*(_QWORD *)(a1 + 352) + 4LL * v14);
    v19 = *(_QWORD *)(a1 + 360);
    v20 = (_DWORD *)(v19 + v18);
    v21 = (_DWORD *)(v19 + 4LL * v14);
    LODWORD(v19) = *v21;
    *v21 = *v20;
    *v20 = v19;
    v22 = sub_180C100(v17 + 2, 24);
    v23 = (_QWORD *)*v17;
    v24 = v22;
    *(_QWORD *)v22 = off_1C56E50;
    *(_QWORD *)(v22 + 8) = v38;
    *(_DWORD *)(v22 + 16) = v14;
    if ( v23 )
    {
      v25 = *((_DWORD *)v23 - 1);
      if ( v25 == *((_DWORD *)v23 - 2) )
      {
        v33 = (3 * v25 + 1) >> 1;
        v34 = 8 * v33 + 8;
        if ( 8 * v25 + 8 >= (unsigned int)v34 || v25 >= v33 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v39, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v39);
          sub_233E40((__int64)v39);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v35 = (unsigned int *)sub_186B300(v23 - 1, v34);
        v36 = v35[1];
        v23 = v35 + 2;
        *v17 = v35 + 2;
        *v35 = v33;
        LODWORD(v35) = v36;
        v12 = &v23[v36];
        v27 = (_DWORD)v35 + 1;
      }
      else
      {
        v26 = v25;
        v27 = v25 + 1;
        v12 = &v23[v26];
      }
    }
    else
    {
      v37 = (_QWORD *)sub_186B270(0x18u);
      v23 = v37 + 1;
      *v37 = 2;
      v27 = 1;
      *v17 = v23;
      v12 = v23;
    }
    *v12 = v24;
    *((_DWORD *)v23 - 1) = v27;
  }
  v28 = *(_QWORD *)(a1 + 32);
  v29 = *(_QWORD *)(v28 + 8LL * a2);
  v30 = *(_QWORD *)(v28 + 8LL * a3);
  v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v29 + 16LL) + 24LL);
  if ( v31 && (*(_BYTE *)(v31 + 18) & 2) != 0 )
    return sub_BE1440(a1, v29, v30, v12, v4, v5);
  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30 + 16LL) + 24LL);
  if ( result )
  {
    if ( (*(_BYTE *)(result + 18) & 2) != 0 )
      return sub_BE1440(a1, v29, v30, v12, v4, v5);
  }
  return result;
}


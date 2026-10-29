__int64 __fastcall sub_4DE790(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  _QWORD *v24; // rbp
  void *v25; // rdi
  __int64 *v26; // rdi
  unsigned __int64 v27; // rsi
  void *v28; // rdi
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rdx
  signed __int32 v31; // eax
  __int64 v33; // rax
  int v34; // edx
  int v35; // edx
  char v36; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v37; // [rsp+8h] [rbp-20h]

  v1 = *a1;
  v37 = __readfsqword(0x28u);
  ++*(_QWORD *)(v1 + 56);
  v3 = a1[76];
  if ( (_UNKNOWN *)(v3 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v34 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 - 8), 0xFFFFFFFF);
    }
    else
    {
      v34 = *(_DWORD *)(v3 - 8);
      *(_DWORD *)(v3 - 8) = v34 - 1;
    }
    if ( v34 <= 0 )
      std::string::_Rep::_M_destroy(v3 - 24, &v36);
  }
  v4 = a1[75];
  if ( (_UNKNOWN *)(v4 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v35 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 - 8), 0xFFFFFFFF);
    }
    else
    {
      v35 = *(_DWORD *)(v4 - 8);
      *(_DWORD *)(v4 - 8) = v35 - 1;
    }
    if ( v35 <= 0 )
      std::string::_Rep::_M_destroy(v4 - 24, &v36);
  }
  v5 = (void *)a1[72];
  if ( v5 )
  {
    a1[73] = 0;
    qfree(v5);
  }
  v6 = (void *)a1[68];
  if ( v6 )
    operator delete(v6, a1[70] - (_QWORD)v6);
  v7 = (void *)a1[64];
  if ( v7 )
    operator delete(v7, a1[66] - (_QWORD)v7);
  v8 = (void *)a1[61];
  if ( v8 )
    operator delete(v8, a1[63] - (_QWORD)v8);
  v9 = (void *)a1[58];
  if ( v9 )
    operator delete(v9, a1[60] - (_QWORD)v9);
  v10 = (void *)a1[55];
  if ( v10 )
    operator delete(v10, a1[57] - (_QWORD)v10);
  v11 = (void *)a1[51];
  if ( v11 )
    operator delete(v11, a1[53] - (_QWORD)v11);
  v12 = (void *)a1[48];
  if ( v12 )
    operator delete(v12, a1[50] - (_QWORD)v12);
  v13 = (void *)a1[45];
  if ( v13 )
    operator delete(v13, a1[47] - (_QWORD)v13);
  v14 = (void *)a1[42];
  if ( v14 )
    operator delete(v14, a1[44] - (_QWORD)v14);
  v15 = (void *)a1[38];
  if ( v15 )
    operator delete(v15, a1[40] - (_QWORD)v15);
  v16 = (void *)a1[35];
  if ( v16 )
    operator delete(v16, a1[37] - (_QWORD)v16);
  v17 = (void *)a1[32];
  if ( v17 )
    operator delete(v17, a1[34] - (_QWORD)v17);
  v18 = (void *)a1[29];
  if ( v18 )
    operator delete(v18, a1[31] - (_QWORD)v18);
  v19 = (void *)a1[25];
  if ( v19 )
    operator delete(v19, a1[27] - (_QWORD)v19);
  v20 = (void *)a1[22];
  if ( v20 )
    operator delete(v20, a1[24] - (_QWORD)v20);
  v21 = (void *)a1[19];
  if ( v21 )
    operator delete(v21, a1[21] - (_QWORD)v21);
  v22 = (void *)a1[16];
  if ( v22 )
    operator delete(v22, a1[18] - (_QWORD)v22);
  v23 = (void *)a1[13];
  if ( v23 )
    operator delete(v23, a1[15] - (_QWORD)v23);
  v24 = (_QWORD *)a1[8];
  while ( v24 )
  {
    v25 = v24;
    v24 = (_QWORD *)*v24;
    operator delete(v25, 0x18u);
  }
  memset((void *)a1[6], 0, 8 * a1[7]);
  v26 = (__int64 *)a1[6];
  a1[9] = 0;
  a1[8] = 0;
  v27 = a1[7];
  if ( v26 != a1 + 12 )
  {
    v27 *= 8LL;
    operator delete(v26, v27);
  }
  v28 = (void *)a1[2];
  if ( v28 )
  {
    v27 = a1[4] - (_QWORD)v28;
    operator delete(v28, v27);
  }
  v29 = (volatile signed __int32 *)a1[1];
  if ( !v29 )
    return v37 - __readfsqword(0x28u);
  v30 = v29 + 2;
  if ( *((_QWORD *)v29 + 1) == 0x100000001LL )
  {
    v33 = *(_QWORD *)v29;
    *((_QWORD *)v29 + 1) = 0;
    (*(void (__fastcall **)(volatile signed __int32 *, unsigned __int64, volatile signed __int32 *))(v33 + 16))(
      v29,
      v27,
      v30);
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 24LL))(v29);
  }
  else
  {
    if ( &_pthread_key_create )
    {
      v31 = _InterlockedExchangeAdd(v30, 0xFFFFFFFF);
    }
    else
    {
      v31 = *((_DWORD *)v29 + 2);
      *((_DWORD *)v29 + 2) = v31 - 1;
    }
    if ( v31 != 1 )
      return v37 - __readfsqword(0x28u);
    return sub_434350(v29);
  }
}

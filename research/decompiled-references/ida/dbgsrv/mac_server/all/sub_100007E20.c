/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007E20
// Address: 0x0000000100007E20

//----- (0000000100007E20) ----------------------------------------------------
__int64 __fastcall sub_100007E20(unsigned int *a1, double a2, double a3)
{
  unsigned int *v4; // r14
  unsigned int *v5; // r12
  unsigned int v6; // r14d
  int v7; // eax
  unsigned int v8; // r15d
  int *v9; // rax
  const char *v10; // rax
  unsigned int *v11; // rcx
  unsigned int *v12; // rax
  bool v13; // zf
  unsigned int v14; // ebx
  unsigned int *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rdi
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  unsigned int *v21; // rcx
  unsigned int *v22; // rax
  _Unwind_Exception *v23; // rax
  int v24; // edx
  __int64 v25; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+10h] [rbp-B0h]
  char v27; // [rsp+18h] [rbp-A8h]
  __int128 v28; // [rsp+1Ch] [rbp-A4h]
  __int128 v29; // [rsp+2Ch] [rbp-94h]
  __int128 v30; // [rsp+3Ch] [rbp-84h]
  int v31; // [rsp+4Ch] [rbp-74h]
  _QWORD v32[2]; // [rsp+50h] [rbp-70h] BYREF
  char v33; // [rsp+60h] [rbp-60h]
  __int128 v34; // [rsp+64h] [rbp-5Ch]
  __int128 v35; // [rsp+74h] [rbp-4Ch]
  __int128 v36; // [rsp+84h] [rbp-3Ch]
  int v37; // [rsp+94h] [rbp-2Ch]

  if ( *((_QWORD *)a1 + 121) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 672LL))(a1) )
    {
      if ( under_debugger == 1 )
        BUG();
      interr(0x7595u);
      if ( !v24 )
        _Unwind_Resume(v23);
      sub_100001690(v23);
    }
    *((_QWORD *)a1 + 121) = 0;
  }
  v32[0] = 0xFFFFFFFFLL;
  v32[1] = -1;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  if ( sub_100007BC0(a1, (__int64)v32, 0.0, a3) )
  {
    v4 = *((unsigned int **)a1 + 151);
    v5 = a1 + 304;
    if ( v4 != a1 + 304 )
    {
      do
      {
        if ( v4[14] == 2 )
        {
          v4[12] = -1;
          sub_100003050((__int64)a1, (int *)v4 + 10);
        }
        v11 = *((unsigned int **)v4 + 1);
        if ( v11 )
        {
          do
          {
            v12 = v11;
            v11 = *(unsigned int **)v11;
          }
          while ( v11 );
        }
        else
        {
          do
          {
            v12 = *((unsigned int **)v4 + 2);
            v13 = *(_QWORD *)v12 == (_QWORD)v4;
            v4 = v12;
          }
          while ( !v13 );
        }
        v4 = v12;
      }
      while ( v12 != v5 );
    }
    qsleep(250);
    sub_100006420((__int64)a1);
    v6 = a1[132];
    v7 = ptrace(11, v6, (caddr_t)1, 0);
    if ( *((_BYTE *)a1 + 664) == 1 )
    {
      v8 = v7;
      if ( v7 )
      {
        v9 = __error();
        v10 = (const char *)winerr(*v9);
      }
      else
      {
        v10 = "ok";
      }
      sub_100000AE0((int)"%s(%u, %p, 0x%X) => 0x%X (%s)\n", "PT_DETACH", v6, 1, 0, v8, v10);
    }
    v15 = *((unsigned int **)a1 + 151);
    if ( v15 != v5 )
    {
      do
      {
        sub_100003180((__int64)a1, (__int64)(v15 + 10));
        v21 = *((unsigned int **)v15 + 1);
        if ( v21 )
        {
          do
          {
            v22 = v21;
            v21 = *(unsigned int **)v21;
          }
          while ( v21 );
        }
        else
        {
          do
          {
            v22 = *((unsigned int **)v15 + 2);
            v13 = *(_QWORD *)v22 == (_QWORD)v15;
            v15 = v22;
          }
          while ( !v13 );
        }
        v15 = v22;
      }
      while ( v22 != v5 );
    }
    v25 = 0xFFFFFFFFLL;
    v26 = -1;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    set_debug_event_code((__int64)&v25, 12);
    LODWORD(v25) = a1[132];
    HIDWORD(v25) = *(_DWORD *)(*((_QWORD *)a1 + 151) + 32LL);
    v26 = -1;
    v27 = 1;
    v16 = *((_QWORD *)a1 + 16);
    v17 = 0;
    if ( *((_QWORD *)a1 + 17) != v16 )
      v17 = 56 * ((unsigned __int64)(*((_QWORD *)a1 + 17) - v16) >> 3) - 1;
    v18 = *((_QWORD *)a1 + 19) + *((_QWORD *)a1 + 20);
    if ( v17 == v18 )
    {
      sub_10000AF80((__int64)(a1 + 30));
      v16 = *((_QWORD *)a1 + 16);
      v18 = *((_QWORD *)a1 + 20) + *((_QWORD *)a1 + 19);
    }
    v19 = *(_QWORD *)(v16 + 8 * (v18 / 0x38)) + 72 * (v18 % 0x38);
    *(_QWORD *)v19 = 0xFFFFFFFFLL;
    *(_QWORD *)(v19 + 8) = -1;
    *(_BYTE *)(v19 + 16) = 0;
    *(_DWORD *)(v19 + 20) = 0;
    ((void (__fastcall *)(unsigned __int64, __int64 *))copy_debug_event)(v19, &v25);
    ++*((_QWORD *)a1 + 20);
    free_debug_event((__int64)&v25);
    v14 = 1;
  }
  else
  {
    v14 = 8 * ((v34 & 0xFFFFFFF) == 2) - 7;
  }
  free_debug_event((__int64)v32);
  return v14;
}
// 1000081D9: variable 'v24' is possibly undefined
// 1000081DE: variable 'v23' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;

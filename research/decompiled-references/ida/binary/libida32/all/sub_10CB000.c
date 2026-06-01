void __fastcall sub_10CB000(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // r12
  int v6; // r8d
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // r15
  __int64 v11; // r14
  char *v12; // rsi
  char *v13; // rsi
  __int64 v14; // rcx
  _BYTE *v15; // rdi
  char *v16; // rax
  __int64 v17; // r12
  int v18; // r8d
  __int64 *v19; // rdx
  int v20; // r15d
  __int64 v21; // r14
  __int64 v22; // r12
  __int64 v23; // rax
  _BYTE *v24; // rdi
  int v25; // [rsp+24h] [rbp-F4h]
  __int64 v26; // [rsp+28h] [rbp-F0h]
  __int64 v27; // [rsp+38h] [rbp-E0h] BYREF
  void *v28; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-D0h]
  _BYTE v30[24]; // [rsp+50h] [rbp-C8h] BYREF
  void *v31; // [rsp+68h] [rbp-B0h]
  __int64 v32; // [rsp+70h] [rbp-A8h]
  _BYTE v33[24]; // [rsp+78h] [rbp-A0h] BYREF
  void *v34; // [rsp+90h] [rbp-88h]
  __int64 v35; // [rsp+98h] [rbp-80h]
  _BYTE v36[24]; // [rsp+A0h] [rbp-78h] BYREF
  void *ptr; // [rsp+B8h] [rbp-60h]
  __int64 v38; // [rsp+C0h] [rbp-58h]
  _BYTE v39[80]; // [rsp+C8h] [rbp-50h] BYREF

  if ( *(_QWORD *)(a1 + 160) )
  {
    v16 = sub_FD3E40(0);
    v17 = *(_QWORD *)(a1 + 160);
    v18 = *(_DWORD *)(a1 + 64);
    v28 = v30;
    v31 = v33;
    v29 = 0x300000000LL;
    v32 = 0x300000000LL;
    v35 = 0x300000000LL;
    v38 = 0x300000000LL;
    v19 = *(__int64 **)(a1 + 16);
    v34 = v36;
    ptr = v39;
    sub_10AE5F0((__int64)&v28, v17, *v19, (__int64)v16, v18);
    v20 = *(_DWORD *)(v17 + 12);
    v21 = *(_QWORD *)(a1 + 8);
    v22 = operator new(0x88u);
    sub_10AFA70(v22, (__int64)&v28, v20);
    v27 = v22;
    sub_10C7210(v21 + 88, &v27);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
    v23 = *(unsigned int *)(a2 + 8);
    if ( v23 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      sub_22134E0(a2, a2 + 16, v23 + 1, 8);
      v23 = *(unsigned int *)(a2 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a2 + 8 * v23) = v22;
    v24 = ptr;
    ++*(_DWORD *)(a2 + 8);
    if ( v24 != v39 )
      free(v24);
    if ( v34 != v36 )
      free(v34);
    if ( v31 != v33 )
      free(v31);
    if ( v28 != v30 )
      free(v28);
    *(_DWORD *)(a1 + 128) = 0;
    *(_QWORD *)(a1 + 160) = 0;
  }
  else if ( *(_DWORD *)(a1 + 128) )
  {
    v4 = *(_DWORD *)(a1 + 80);
    if ( v4 )
    {
      v5 = 0;
      v26 = 8LL * (unsigned int)(v4 - 1) + 8;
      do
      {
        while ( 1 )
        {
          v6 = *(_DWORD *)(a1 + 64);
          v7 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + v5);
          v8 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + v5);
          v31 = v33;
          ptr = v39;
          v28 = v30;
          v29 = 0x300000000LL;
          v32 = 0x300000000LL;
          v35 = 0x300000000LL;
          v38 = 0x300000000LL;
          v9 = *(__int64 **)(a1 + 16);
          v34 = v36;
          sub_10AE5F0((__int64)&v28, v7, *v9, v8, v6);
          v10 = *(_QWORD *)(a1 + 8);
          v25 = *(_DWORD *)(v7 + 12);
          v11 = operator new(0x88u);
          sub_10AFA70(v11, (__int64)&v28, v25);
          v27 = v11;
          v12 = *(char **)(v10 + 96);
          if ( v12 == *(char **)(v10 + 104) )
          {
            sub_10C6F70(v10 + 88, v12, &v27);
          }
          else
          {
            v27 = 0;
            v13 = v12 + 8;
            *((_QWORD *)v13 - 1) = v11;
            *(_QWORD *)(v10 + 96) = v13;
          }
          if ( v27 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
          v14 = *(unsigned int *)(a2 + 8);
          if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
          {
            sub_22134E0(a2, a2 + 16, v14 + 1, 8);
            v14 = *(unsigned int *)(a2 + 8);
          }
          *(_QWORD *)(*(_QWORD *)a2 + 8 * v14) = v11;
          v15 = ptr;
          ++*(_DWORD *)(a2 + 8);
          if ( v15 != v39 )
            free(v15);
          if ( v34 != v36 )
            free(v34);
          if ( v31 != v33 )
            free(v31);
          if ( v28 == v30 )
            break;
          free(v28);
          v5 += 8;
          if ( v5 == v26 )
            goto LABEL_19;
        }
        v5 += 8;
      }
      while ( v26 != v5 );
    }
LABEL_19:
    *(_DWORD *)(a1 + 128) = 0;
  }
}


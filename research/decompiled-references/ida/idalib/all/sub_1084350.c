__int64 __fastcall sub_1084350(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, char ***a6)
{
  size_t v8; // rdx
  const void *v9; // r14
  _BYTE *v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r14d
  __int64 *v17; // r15
  __int64 *v18; // rax
  __int64 v19; // r9
  size_t v20; // r15
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // r10
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // r15d
  __int64 *v31; // rcx
  __int64 *v32; // rax
  __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rax
  unsigned int v37; // eax
  unsigned int v38; // eax
  void *v41; // [rsp+10h] [rbp-68h]
  __int64 *v42; // [rsp+10h] [rbp-68h]
  __int64 v43; // [rsp+10h] [rbp-68h]
  unsigned int v44; // [rsp+1Ch] [rbp-5Ch]
  __int64 *v45; // [rsp+20h] [rbp-58h]
  void *src; // [rsp+28h] [rbp-50h]
  __int64 *v47[8]; // [rsp+38h] [rbp-40h] BYREF

  v8 = *(_QWORD *)(a1 + 520);
  if ( v8 )
  {
    v9 = *(const void **)(a1 + 512);
    v10 = memchr(v9, 116, v8);
    if ( v10 )
    {
      if ( v10 - (_BYTE *)v9 != -1 )
      {
        v11 = sub_2244B30("audio", 5);
        v12 = sub_2244CB0(a2, "audio", 5, v11);
        v16 = v12;
        v17 = (__int64 *)(*(_QWORD *)a2 + 8LL * v12);
        if ( *v17 )
        {
          if ( *v17 != -8 )
          {
            sub_10298F0(v47, v17, 0);
            v18 = v47[0];
LABEL_29:
            *(_BYTE *)(*v18 + 8) = 1;
            goto LABEL_7;
          }
          --*(_DWORD *)(a2 + 16);
        }
        v36 = sub_22300B0(22, 8, v12, v13, v14, v15);
        *(_DWORD *)(v36 + 16) = 1768191329;
        *(_BYTE *)(v36 + 20) = 111;
        *(_BYTE *)(v36 + 21) = 0;
        *(_QWORD *)v36 = 5;
        *(_BYTE *)(v36 + 8) = 0;
        *v17 = v36;
        ++*(_DWORD *)(a2 + 12);
        v37 = sub_22450D0(a2, v16);
        sub_10298F0(v47, (__int64 *)(*(_QWORD *)a2 + 8LL * v37), 0);
        v18 = v47[0];
        goto LABEL_29;
      }
    }
  }
LABEL_7:
  v19 = a4;
  v20 = a5;
  if ( a5 <= 6 )
    goto LABEL_23;
  if ( *(_DWORD *)a4 == 1635280232 && *(_WORD *)(a4 + 4) == 28519 && *(_BYTE *)(a4 + 6) == 110 )
  {
    v20 = a5 - 7;
    v19 = a4 + 7;
LABEL_23:
    if ( !v20 )
      goto LABEL_16;
  }
  if ( *(_BYTE *)(v19 + v20 - 1) != 116 )
    goto LABEL_13;
  if ( v20 > v20 - 1 )
    --v20;
  if ( v20 )
  {
LABEL_13:
    v41 = (void *)v19;
    v21 = sub_2244B30(v19, v20);
    v22 = sub_2244CB0(a2, v41, v20, v21);
    v25 = (__int64 *)(*(_QWORD *)a2 + 8LL * v22);
    if ( *v25 )
    {
      if ( *v25 != -8 )
      {
        sub_10298F0(v47, v25, 0);
        *(_BYTE *)(*v47[0] + 8) = 1;
        goto LABEL_16;
      }
      --*(_DWORD *)(a2 + 16);
    }
    v45 = v25;
    v44 = v22;
    src = v41;
    v43 = sub_22300B0(v20 + 17, 8, v22, v23, v24, v41);
    memcpy((void *)(v43 + 16), src, v20);
    *(_BYTE *)(v43 + v20 + 16) = 0;
    *(_QWORD *)v43 = v20;
    *(_BYTE *)(v43 + 8) = 0;
    *v45 = v43;
    ++*(_DWORD *)(a2 + 12);
    v38 = sub_22450D0(a2, v44);
    sub_10298F0(v47, (__int64 *)(*(_QWORD *)a2 + 8LL * v38), 0);
    *(_BYTE *)(*v47[0] + 8) = 1;
  }
LABEL_16:
  v26 = sub_2244B30("long-calls", 10);
  v30 = sub_2244CB0(a2, "long-calls", 10, v26);
  v31 = (__int64 *)(*(_QWORD *)a2 + 8LL * v30);
  if ( !*v31 )
  {
LABEL_26:
    v42 = v31;
    v34 = sub_22300B0(27, 8, v27, v31, v28, v29);
    strcpy((char *)(v34 + 16), "long-calls");
    *(_QWORD *)v34 = 10;
    *(_BYTE *)(v34 + 8) = 0;
    *v42 = v34;
    ++*(_DWORD *)(a2 + 12);
    v35 = sub_22450D0(a2, v30);
    sub_10298F0(v47, (__int64 *)(*(_QWORD *)a2 + 8LL * v35), 0);
    v32 = v47[0];
    goto LABEL_19;
  }
  if ( *v31 == -8 )
  {
    --*(_DWORD *)(a2 + 16);
    goto LABEL_26;
  }
  sub_10298F0(v47, v31, 0);
  v32 = v47[0];
LABEL_19:
  *(_BYTE *)(*v32 + 8) = 0;
  return sub_102FFA0(a1, a2, a3, a4, a5, a6);
}

__int64 __fastcall sub_20FFD30(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v7; // rax
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r9
  unsigned int v12; // r15d
  __int64 *v13; // r8
  __int64 v14; // rcx
  int v15; // edx
  __int64 v17; // rax
  __int64 *v18; // r8
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rbp
  const void *v23; // r13
  int v24; // eax
  size_t v25; // rbp
  int v26; // [rsp+8h] [rbp-80h]
  __int64 *v27; // [rsp+10h] [rbp-78h]
  __int64 v28; // [rsp+18h] [rbp-70h]
  __int64 *v29[12]; // [rsp+28h] [rbp-60h] BYREF

  v7 = *(_QWORD *)(a2 + 48);
  v29[1] = a3;
  v29[2] = a4;
  v26 = v7;
  v8 = sub_2244B30(a3, a4);
  v9 = sub_2244CB0(a2 + 8, a3, a4, v8);
  v12 = v9;
  v13 = (__int64 *)(*(_QWORD *)(a2 + 8) + 8LL * v9);
  if ( !*v13 )
  {
LABEL_6:
    v27 = v13;
    v17 = sub_22300B0((char *)a4 + 17, 8, v9, v10, v13, v11);
    v18 = v27;
    v19 = v17;
    if ( a4 )
    {
      v28 = v17;
      memcpy((void *)(v17 + 16), a3, (size_t)a4);
      v19 = v28;
      v18 = v27;
    }
    *((_BYTE *)a4 + v19 + 16) = 0;
    *(_QWORD *)v19 = a4;
    *(_DWORD *)(v19 + 8) = v26;
    *v18 = v19;
    ++*(_DWORD *)(a2 + 20);
    v20 = sub_22450D0(a2 + 8, v12);
    sub_E37610(v29, (__int64 *)(*(_QWORD *)(a2 + 8) + 8LL * v20), 0);
    v21 = *(_QWORD *)(a2 + 48);
    v22 = **(_QWORD **)v29[0];
    v23 = (const void *)(*v29[0] + 16);
    v24 = *(_DWORD *)(*v29[0] + 8);
    *(_QWORD *)a1 = v23;
    *(_QWORD *)(a1 + 8) = v22;
    v25 = v22 + 1;
    *(_DWORD *)(a1 + 16) = v24;
    if ( v25 + v21 > *(_QWORD *)(a2 + 56) )
    {
      sub_2236E10(a2 + 40, a2 + 64, v25 + v21, 1);
      v21 = *(_QWORD *)(a2 + 48);
      if ( !v25 )
        goto LABEL_11;
    }
    else if ( !v25 )
    {
LABEL_11:
      *(_QWORD *)(a2 + 48) = v21 + v25;
      return a1;
    }
    memcpy((void *)(*(_QWORD *)(a2 + 40) + v21), v23, v25);
    v21 = *(_QWORD *)(a2 + 48);
    goto LABEL_11;
  }
  if ( *v13 == -8 )
  {
    --*(_DWORD *)(a2 + 24);
    goto LABEL_6;
  }
  sub_E37610(v29, v13, 0);
  v14 = **(_QWORD **)v29[0];
  v15 = *(_DWORD *)(*v29[0] + 8);
  *(_QWORD *)a1 = *v29[0] + 16;
  *(_QWORD *)(a1 + 8) = v14;
  *(_DWORD *)(a1 + 16) = v15;
  return a1;
}

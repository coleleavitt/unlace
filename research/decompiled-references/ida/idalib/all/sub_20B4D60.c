__int64 __fastcall sub_20B4D60(__int64 *a1, const void *a2, size_t a3)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // r15
  __int64 v10; // rax
  _QWORD *v11; // rbp
  char *v12; // rdx
  _QWORD *v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rax
  int v18; // [rsp+Ch] [rbp-4Ch]
  int v19; // [rsp+Ch] [rbp-4Ch]
  __int64 *v20[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = *a1;
  v5 = sub_2244B30(a2, a3);
  v6 = (unsigned int)sub_2244CB0(v4 + 376, a2, a3, v5);
  v8 = (__int64 *)(*(_QWORD *)(v4 + 376) + 8 * v6);
  if ( *v8 )
  {
    if ( *v8 != -8 )
    {
      sub_20AF510(v20, v8, 0);
      return *v20[0] + 8;
    }
    --*(_DWORD *)(v4 + 392);
  }
  v10 = *(_QWORD *)(v4 + 400);
  *(_QWORD *)(v4 + 480) += a3 + 25;
  v11 = (_QWORD *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v12 = (char *)v11 + a3 + 25;
  if ( *(_QWORD *)(v4 + 408) >= (unsigned __int64)v12 && v10 )
  {
    *(_QWORD *)(v4 + 400) = v12;
  }
  else
  {
    v19 = v6;
    v17 = sub_986170(v4 + 400, a3 + 25, a3 + 25, 3, v6, v7);
    LODWORD(v6) = v19;
    v11 = (_QWORD *)v17;
  }
  v13 = v11 + 3;
  if ( a3 )
  {
    v18 = v6;
    v16 = memcpy(v11 + 3, a2, a3);
    LODWORD(v6) = v18;
    v13 = v16;
  }
  *((_BYTE *)v13 + a3) = 0;
  *v11 = a3;
  v11[1] = 0;
  v11[2] = 0;
  *v8 = (__int64)v11;
  ++*(_DWORD *)(v4 + 388);
  v14 = sub_22450D0(v4 + 376, (unsigned int)v6);
  sub_20AF510(v20, (__int64 *)(*(_QWORD *)(v4 + 376) + 8LL * v14), 0);
  v15 = *v20[0];
  *(_QWORD *)(v15 + 16) = v15;
  return v15 + 8;
}

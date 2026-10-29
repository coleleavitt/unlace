__int64 __fastcall sub_20922F0(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rbp
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r15d
  __int64 *v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // r13
  unsigned int v16; // eax
  int v18; // [rsp+4h] [rbp-74h]
  __int64 *v19; // [rsp+8h] [rbp-70h]
  __int64 *v20[12]; // [rsp+18h] [rbp-60h] BYREF

  v4 = *a1;
  v20[1] = a2;
  v5 = *(_DWORD *)(v4 + 2700);
  v20[2] = a3;
  v18 = v5;
  v6 = sub_2244B30(a2, a3);
  v7 = sub_2244CB0(v4 + 2688, a2, a3, v6);
  v10 = v7;
  v11 = (__int64 *)(*(_QWORD *)(v4 + 2688) + 8LL * v7);
  if ( *v11 )
  {
    if ( *v11 != -8 )
    {
      sub_E37610(v20, v11, 0);
      v12 = v20[0];
      return *(unsigned int *)(*v12 + 8);
    }
    --*(_DWORD *)(v4 + 2704);
  }
  v19 = v11;
  v13 = sub_22300B0((char *)a3 + 17, 8, v7, v11, v8, v9);
  v14 = v19;
  v15 = v13;
  if ( a3 )
  {
    memcpy((void *)(v13 + 16), a2, (size_t)a3);
    v14 = v19;
  }
  *((_BYTE *)a3 + v15 + 16) = 0;
  *(_QWORD *)v15 = a3;
  *(_DWORD *)(v15 + 8) = v18;
  *v14 = v15;
  ++*(_DWORD *)(v4 + 2700);
  v16 = sub_22450D0(v4 + 2688, v10);
  sub_E37610(v20, (__int64 *)(*(_QWORD *)(v4 + 2688) + 8LL * v16), 0);
  v12 = v20[0];
  return *(unsigned int *)(*v12 + 8);
}

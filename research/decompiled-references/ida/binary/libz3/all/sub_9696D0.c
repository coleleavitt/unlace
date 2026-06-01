void __fastcall sub_9696D0(__int64 a1, __int64 a2, __m128i a3, __m128 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // r12
  __int64 i; // r13
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rbp
  bool v15; // zf
  __int64 *v16; // r13
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // r15
  void (__fastcall ***v20)(_QWORD); // rbx
  __int64 v21; // r12
  __int64 v22; // rdi
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-78h]
  __int64 v26; // [rsp+8h] [rbp-70h]
  __int64 *v27; // [rsp+8h] [rbp-70h]
  __int64 v29; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v31[9]; // [rsp+30h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(a6 + 8);
  *(_DWORD *)(*(_QWORD *)(a1 + 112) + 540LL) = 1;
  v29 = *(_QWORD *)(a1 + 104);
  if ( !v8 || (v26 = v8 + 8LL * *(unsigned int *)(v8 - 4), v8 == v26) )
  {
    ptr = nullptr;
    v16 = *(__int64 **)(a7 + 8);
    if ( !v16 )
      return;
    v14 = 0;
    v27 = &v16[*((unsigned int *)v16 - 1)];
    if ( v16 == v27 )
      return;
  }
  else
  {
    for ( i = 0; ; i = v14 )
    {
      sub_8F7BA0(a1, a3, a4);
      v10 = *(_QWORD *)(a2 + 8);
      if ( v10 )
      {
        v11 = v10 + 8LL * *(unsigned int *)(v10 - 4);
        if ( v11 != v10 )
        {
          v12 = *(_QWORD *)(a2 + 8);
          do
          {
            sub_8F8A20(a1);
            v12 += 8;
          }
          while ( v11 != v12 );
        }
      }
      v13 = sub_15E1A70(*(_QWORD *)(a1 + 104));
      v14 = v13;
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      if ( i )
      {
        v15 = (*(_DWORD *)(i + 8))-- == 1;
        if ( v15 )
          sub_15D7BC0(v29, i);
      }
      sub_8F8A20(a1);
      if ( (unsigned int)sub_8FD5F0(a1, 0, nullptr, 1u, a3, a4) == 1 )
      {
        sub_1872CE0("");
        sub_1873130(114, 650);
      }
      sub_8F96B0(a1, 1u);
      v8 += 8;
      if ( v26 == v8 )
        break;
    }
    ptr = nullptr;
    v16 = *(__int64 **)(a7 + 8);
    if ( !v16 )
      goto LABEL_28;
    v27 = &v16[*((unsigned int *)v16 - 1)];
    if ( v27 == v16 )
      goto LABEL_28;
  }
  do
  {
    v25 = *v16;
    sub_8F7BA0(a1, a3, a4);
    v17 = *(_QWORD *)(a2 + 8);
    if ( v17 )
    {
      v18 = v17 + 8LL * *(unsigned int *)(v17 - 4);
      if ( v18 != v17 )
      {
        v19 = *(_QWORD *)(a2 + 8);
        do
        {
          sub_8F8A20(a1);
          v19 += 8;
        }
        while ( v18 != v19 );
      }
    }
    if ( (unsigned int)sub_8FD5F0(a1, 0, nullptr, 1u, a3, a4) == 1 )
    {
      sub_8ECB50(a1, (void (****)(void))&ptr);
      sub_1374250(v31, ptr, v25);
      v21 = v31[0];
      v31[0] = v14;
      if ( v14 )
      {
        v22 = v31[1];
        v15 = (*(_DWORD *)(v14 + 8))-- == 1;
        if ( v15 )
          sub_15D7BC0(v22, v14);
      }
      v14 = v21;
      if ( (unsigned __int8)sub_15D26C0(*(_QWORD *)(a1 + 104), v21) )
      {
        v23 = *(_QWORD *)(a1 + 104);
        sub_15E1B70(v23);
        v24 = sub_15E1A70(v23);
        v14 = v24;
        if ( v24 )
          ++*(_DWORD *)(v24 + 8);
        if ( v21 )
        {
          v15 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v15 )
            sub_15D7BC0(v29, v21);
        }
        sub_8F8A20(a1);
        sub_8FD5F0(a1, 0, nullptr, 1u, a3, a4);
      }
    }
    sub_8F96B0(a1, 1u);
    ++v16;
  }
  while ( v27 != v16 );
  v20 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    v15 = (*((_DWORD *)ptr + 4))-- == 1;
    if ( v15 )
    {
      (**v20)(v20);
      sub_186B220(v20);
    }
  }
LABEL_28:
  if ( v14 )
  {
    v15 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v29, v14);
  }
}


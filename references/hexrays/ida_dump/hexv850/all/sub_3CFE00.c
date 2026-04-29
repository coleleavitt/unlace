__int64 __fastcall sub_3CFE00(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 j; // r12
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rdi
  __int64 result; // rax
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 k; // r14
  volatile signed __int32 *v21; // rdi
  signed __int32 v22; // edx
  __int64 v23; // rdi
  __int64 v24; // rdi
  _QWORD *v25; // rbx
  void (__fastcall *v26)(_QWORD *); // rdx
  __int64 v27; // rdi
  __int64 v28; // r13
  __int64 i; // r12
  _QWORD *v30; // rbx
  __int64 v31; // rdi
  volatile signed __int32 *v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // r12
  __int64 v36; // r14
  volatile signed __int32 *v37; // rdi
  signed __int32 v38; // edx
  __int64 v39; // rdi
  __int64 v40; // rdi
  _QWORD *v41; // rbx
  void (__fastcall *v42)(_QWORD *); // rdx

  if ( !*(_BYTE *)(a1 + 2112) )
  {
    v27 = *(_QWORD *)(a1 + 2088);
    if ( v27 )
    {
      v28 = *(_QWORD *)(a1 + 2096);
      if ( v28 )
      {
        for ( i = 0; i != v28; ++i )
        {
          v30 = *(_QWORD **)(v27 + 8 * i);
          if ( v30 )
          {
            v31 = v30[10];
            *v30 = 0;
            v30[11] = 0;
            if ( v31 )
              qfree(v31);
            v32 = (volatile signed __int32 *)v30[9];
            if ( v32 )
              sub_3CF660(v32);
            v33 = v30[2];
            if ( v33 )
            {
              v30[3] = 0;
              qfree(v33);
            }
            operator delete(v30, 0x60u);
            v27 = *(_QWORD *)(a1 + 2088);
          }
        }
      }
      *(_QWORD *)(a1 + 2096) = 0;
      qfree(v27);
    }
    *(_QWORD *)(a1 + 2064) = &off_4BF1A0;
    remove_event_listener(a1 + 2064);
    *(_QWORD *)(a1 + 2040) = &off_4BF1A0;
    result = remove_event_listener(a1 + 2040);
    v34 = *(_QWORD *)(a1 + 2016);
    if ( !v34 )
      return result;
    v35 = *(_QWORD *)(a1 + 2024);
    if ( !v35 )
    {
LABEL_65:
      *(_QWORD *)(a1 + 2024) = 0;
      return qfree(v34);
    }
    v36 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v41 = *(_QWORD **)(v34 + 8 * v36);
        if ( v41 )
          break;
LABEL_61:
        if ( v35 == ++v36 )
          goto LABEL_65;
      }
      v42 = *(void (__fastcall **)(_QWORD *))(*v41 + 8LL);
      if ( v42 == sub_3C9BD0 )
      {
        v37 = (volatile signed __int32 *)v41[12];
        *v41 = &off_4BC7D8;
        if ( v37 )
        {
          if ( &_pthread_key_create )
          {
            v38 = _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF);
          }
          else
          {
            v38 = *((_DWORD *)v37 + 3);
            *((_DWORD *)v37 + 3) = v38 - 1;
          }
          if ( v38 == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 24LL))(v37);
        }
        v39 = v41[8];
        if ( v39 )
        {
          v41[9] = 0;
          qfree(v39);
        }
        v40 = v41[2];
        *v41 = &off_4BC798;
        if ( v40 )
        {
          v41[3] = 0;
          qfree(v40);
        }
        operator delete(v41, 0x68u);
        v34 = *(_QWORD *)(a1 + 2016);
        goto LABEL_61;
      }
      ++v36;
      v42(v41);
      v34 = *(_QWORD *)(a1 + 2016);
      if ( v35 == v36 )
        goto LABEL_65;
    }
  }
  sub_337FC0(*(_QWORD *)a1, (__int64)sub_3D2BA0, a1);
  unhook_event_listener(1, a1 + 2064, v2, v3, v4, v5);
  unhook_event_listener(3, a1 + 2040, v6, v7, v8, v9);
  v10 = *(_QWORD *)(a1 + 2088);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 2096);
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = *(_QWORD **)(v10 + 8 * j);
        if ( v13 )
        {
          v14 = v13[10];
          *v13 = 0;
          v13[11] = 0;
          if ( v14 )
            qfree(v14);
          v15 = (volatile signed __int32 *)v13[9];
          if ( v15 )
            sub_3CF660(v15);
          v16 = v13[2];
          if ( v16 )
          {
            v13[3] = 0;
            qfree(v16);
          }
          operator delete(v13, 0x60u);
          v10 = *(_QWORD *)(a1 + 2088);
        }
      }
    }
    *(_QWORD *)(a1 + 2096) = 0;
    qfree(v10);
  }
  *(_QWORD *)(a1 + 2064) = &off_4BF1A0;
  remove_event_listener(a1 + 2064);
  *(_QWORD *)(a1 + 2040) = &off_4BF1A0;
  result = remove_event_listener(a1 + 2040);
  v18 = *(_QWORD *)(a1 + 2016);
  if ( v18 )
  {
    v19 = *(_QWORD *)(a1 + 2024);
    if ( v19 )
    {
      for ( k = 0; k != v19; ++k )
      {
        while ( 1 )
        {
          v25 = *(_QWORD **)(v18 + 8 * k);
          if ( v25 )
            break;
LABEL_28:
          if ( v19 == ++k )
            goto LABEL_32;
        }
        v26 = *(void (__fastcall **)(_QWORD *))(*v25 + 8LL);
        if ( v26 == sub_3C9BD0 )
        {
          v21 = (volatile signed __int32 *)v25[12];
          *v25 = &off_4BC7D8;
          if ( v21 )
          {
            if ( &_pthread_key_create )
            {
              v22 = _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF);
            }
            else
            {
              v22 = *((_DWORD *)v21 + 3);
              *((_DWORD *)v21 + 3) = v22 - 1;
            }
            if ( v22 == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 24LL))(v21);
          }
          v23 = v25[8];
          if ( v23 )
          {
            v25[9] = 0;
            qfree(v23);
          }
          v24 = v25[2];
          *v25 = &off_4BC798;
          if ( v24 )
          {
            v25[3] = 0;
            qfree(v24);
          }
          operator delete(v25, 0x68u);
          v18 = *(_QWORD *)(a1 + 2016);
          goto LABEL_28;
        }
        v26(v25);
        v18 = *(_QWORD *)(a1 + 2016);
      }
    }
LABEL_32:
    *(_QWORD *)(a1 + 2024) = 0;
    return qfree(v18);
  }
  return result;
}

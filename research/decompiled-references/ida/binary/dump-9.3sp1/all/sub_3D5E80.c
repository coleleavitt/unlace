__int64 __fastcall sub_3D5E80(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 j; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 k; // r14
  volatile signed __int32 *v14; // rdi
  signed __int32 v15; // edx
  __int64 v16; // rdi
  __int64 v17; // rdi
  _QWORD *v18; // rbx
  void (__fastcall *v19)(_QWORD *); // rdx
  __int64 v20; // rdi
  __int64 v21; // r13
  __int64 i; // r12
  _QWORD *v23; // rbx
  __int64 v24; // rdi
  volatile signed __int32 *v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // r12
  __int64 v29; // r14
  volatile signed __int32 *v30; // rdi
  signed __int32 v31; // edx
  __int64 v32; // rdi
  __int64 v33; // rdi
  _QWORD *v34; // rbx
  void (__fastcall *v35)(_QWORD *); // rdx

  if ( !*(_BYTE *)(a1 + 2112) )
  {
    v20 = *(_QWORD *)(a1 + 2088);
    if ( v20 )
    {
      v21 = *(_QWORD *)(a1 + 2096);
      if ( v21 )
      {
        for ( i = 0; i != v21; ++i )
        {
          v23 = *(_QWORD **)(v20 + 8 * i);
          if ( v23 )
          {
            v24 = v23[10];
            *v23 = 0;
            v23[11] = 0;
            if ( v24 )
              qfree(v24);
            v25 = (volatile signed __int32 *)v23[9];
            if ( v25 )
              sub_3D56E0(v25);
            v26 = v23[2];
            if ( v26 )
            {
              v23[3] = 0;
              qfree(v26);
            }
            operator delete(v23, 0x60u);
            v20 = *(_QWORD *)(a1 + 2088);
          }
        }
      }
      *(_QWORD *)(a1 + 2096) = 0;
      qfree(v20);
    }
    *(_QWORD *)(a1 + 2064) = &off_4EC308;
    remove_event_listener();
    *(_QWORD *)(a1 + 2040) = &off_4EC308;
    result = remove_event_listener();
    v27 = *(_QWORD *)(a1 + 2016);
    if ( !v27 )
      return result;
    v28 = *(_QWORD *)(a1 + 2024);
    if ( !v28 )
    {
LABEL_65:
      *(_QWORD *)(a1 + 2024) = 0;
      return qfree(v27);
    }
    v29 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v34 = *(_QWORD **)(v27 + 8 * v29);
        if ( v34 )
          break;
LABEL_61:
        if ( v28 == ++v29 )
          goto LABEL_65;
      }
      v35 = *(void (__fastcall **)(_QWORD *))(*v34 + 8LL);
      if ( v35 == sub_3CFC50 )
      {
        v30 = (volatile signed __int32 *)v34[12];
        *v34 = &off_4E8E58;
        if ( v30 )
        {
          if ( &_pthread_key_create )
          {
            v31 = _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF);
          }
          else
          {
            v31 = *((_DWORD *)v30 + 3);
            *((_DWORD *)v30 + 3) = v31 - 1;
          }
          if ( v31 == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 24LL))(v30);
        }
        v32 = v34[8];
        if ( v32 )
        {
          v34[9] = 0;
          qfree(v32);
        }
        v33 = v34[2];
        *v34 = &off_4E8E18;
        if ( v33 )
        {
          v34[3] = 0;
          qfree(v33);
        }
        operator delete(v34, 0x68u);
        v27 = *(_QWORD *)(a1 + 2016);
        goto LABEL_61;
      }
      ++v29;
      v35(v34);
      v27 = *(_QWORD *)(a1 + 2016);
      if ( v28 == v29 )
        goto LABEL_65;
    }
  }
  sub_33E040(*(_QWORD *)a1, (__int64)sub_3D8C20, a1);
  unhook_event_listener();
  v2 = a1 + 2040;
  unhook_event_listener();
  v3 = *(_QWORD *)(a1 + 2088);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 2096);
    if ( v4 )
    {
      for ( j = 0; j != v4; ++j )
      {
        v6 = *(_QWORD **)(v3 + 8 * j);
        if ( v6 )
        {
          v7 = v6[10];
          *v6 = 0;
          v6[11] = 0;
          if ( v7 )
            qfree(v7);
          v8 = (volatile signed __int32 *)v6[9];
          if ( v8 )
            sub_3D56E0(v8);
          v9 = v6[2];
          if ( v9 )
          {
            v6[3] = 0;
            qfree(v9);
          }
          v2 = 96;
          operator delete(v6, 0x60u);
          v3 = *(_QWORD *)(a1 + 2088);
        }
      }
    }
    *(_QWORD *)(a1 + 2096) = 0;
    qfree(v3);
  }
  *(_QWORD *)(a1 + 2064) = &off_4EC308;
  remove_event_listener();
  *(_QWORD *)(a1 + 2040) = &off_4EC308;
  result = remove_event_listener();
  v11 = *(_QWORD *)(a1 + 2016);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 2024);
    if ( v12 )
    {
      for ( k = 0; k != v12; ++k )
      {
        while ( 1 )
        {
          v18 = *(_QWORD **)(v11 + 8 * k);
          if ( v18 )
            break;
LABEL_28:
          if ( v12 == ++k )
            goto LABEL_32;
        }
        v19 = *(void (__fastcall **)(_QWORD *))(*v18 + 8LL);
        if ( v19 == sub_3CFC50 )
        {
          v14 = (volatile signed __int32 *)v18[12];
          *v18 = &off_4E8E58;
          if ( v14 )
          {
            if ( &_pthread_key_create )
            {
              v15 = _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF);
            }
            else
            {
              v15 = *((_DWORD *)v14 + 3);
              *((_DWORD *)v14 + 3) = v15 - 1;
            }
            if ( v15 == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 24LL))(v14);
          }
          v16 = v18[8];
          if ( v16 )
          {
            v18[9] = 0;
            qfree(v16);
          }
          v17 = v18[2];
          *v18 = &off_4E8E18;
          if ( v17 )
          {
            v18[3] = 0;
            qfree(v17);
          }
          v2 = 104;
          operator delete(v18, 0x68u);
          v11 = *(_QWORD *)(a1 + 2016);
          goto LABEL_28;
        }
        ((void (__fastcall *)(_QWORD *, __int64))v19)(v18, v2);
        v11 = *(_QWORD *)(a1 + 2016);
      }
    }
LABEL_32:
    *(_QWORD *)(a1 + 2024) = 0;
    return qfree(v11);
  }
  return result;
}

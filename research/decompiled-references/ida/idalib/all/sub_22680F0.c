__int64 __fastcall sub_22680F0(__int64 a1, char a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  const void *v6; // rbp
  __int64 v7; // rdx
  size_t v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // r9d
  __int64 *v11; // rcx
  __int64 v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // r12d
  unsigned int v15; // ebp
  volatile signed __int32 *v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rdx
  volatile signed __int32 *v19; // rbx
  _QWORD *v20; // rcx
  volatile signed __int32 *v21; // rbp
  __int64 v22; // rax
  volatile signed __int32 *v23; // rbx
  _BYTE *v24; // rdi
  int v26; // eax
  signed __int32 v27; // eax
  __int64 v28; // rax
  unsigned int v29; // r9d
  __int64 *v30; // rcx
  _QWORD *v31; // r15
  unsigned int v32; // eax
  int v33; // eax
  signed __int32 v34; // eax
  __int64 v35; // [rsp+10h] [rbp-78h]
  unsigned int v36; // [rsp+10h] [rbp-78h]
  __int64 *v37; // [rsp+18h] [rbp-70h]
  void *v38; // [rsp+20h] [rbp-68h] BYREF
  __int64 v39; // [rsp+28h] [rbp-60h]
  _BYTE v40[16]; // [rsp+30h] [rbp-58h] BYREF
  int v41; // [rsp+40h] [rbp-48h]
  int v42; // [rsp+44h] [rbp-44h]

  std::_V2::system_category((std::_V2 *)a1);
  v35 = a1 + 8;
  while ( 2 )
  {
    v12 = *(_QWORD *)(a1 + 192);
    if ( a2 )
    {
      if ( !v12 )
        goto LABEL_12;
      goto LABEL_3;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 16LL))(*(_QWORD *)(a1 + 192));
    v12 = *(_QWORD *)(a1 + 192);
    v14 = v13;
    v15 = v13;
    if ( *(_QWORD *)(v12 + 16) )
    {
      if ( !v13 )
        goto LABEL_47;
      goto LABEL_28;
    }
    v16 = *(volatile signed __int32 **)(a1 + 200);
    *(_OWORD *)(a1 + 192) = 0;
    if ( v16 )
      sub_4343A0(v16);
    if ( v14 )
    {
LABEL_28:
      v42 = 0;
      v38 = v40;
      v39 = 0;
      v40[0] = 0;
      v41 = 9;
      sub_A0AAD0(v35, &v38);
      v24 = v38;
      *(_DWORD *)(a1 + 40) = v41;
      if ( v24 != v40 )
        operator delete(v24);
      return v15;
    }
    if ( *(_QWORD *)(a1 + 192) )
      goto LABEL_46;
LABEL_12:
    do
    {
      v17 = *(_DWORD *)(a1 + 56);
      if ( !v17 )
        break;
      v18 = *(_QWORD *)(a1 + 48);
      v19 = *(volatile signed __int32 **)(a1 + 200);
      v20 = (_QWORD *)(v18 + 16LL * v17 - 16);
      v21 = (volatile signed __int32 *)v20[1];
      *(_QWORD *)(a1 + 192) = *v20;
      if ( v21 == v19 )
        goto LABEL_21;
      if ( v21 )
      {
        if ( &_pthread_key_create )
        {
          _InterlockedAdd(v21 + 2, 1u);
          v19 = *(volatile signed __int32 **)(a1 + 200);
        }
        else
        {
          ++*((_DWORD *)v21 + 2);
        }
      }
      if ( v19 )
      {
        if ( &_pthread_key_create )
        {
          if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
            goto LABEL_42;
        }
        else
        {
          v33 = *((_DWORD *)v19 + 2);
          *((_DWORD *)v19 + 2) = v33 - 1;
          if ( v33 == 1 )
          {
LABEL_42:
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
            if ( &_pthread_key_create )
            {
              v34 = _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF);
            }
            else
            {
              v34 = *((_DWORD *)v19 + 3);
              *((_DWORD *)v19 + 3) = v34 - 1;
            }
            if ( v34 == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 24LL))(v19);
          }
        }
      }
      v17 = *(_DWORD *)(a1 + 56);
      v18 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 200) = v21;
LABEL_21:
      v22 = v17 - 1;
      *(_DWORD *)(a1 + 56) = v22;
      v23 = *(volatile signed __int32 **)(v18 + 16 * v22 + 8);
      if ( v23 )
      {
        if ( &_pthread_key_create )
        {
          if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
            goto LABEL_32;
        }
        else
        {
          v26 = *((_DWORD *)v23 + 2);
          *((_DWORD *)v23 + 2) = v26 - 1;
          if ( v26 == 1 )
          {
LABEL_32:
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
            if ( &_pthread_key_create )
            {
              v27 = _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF);
            }
            else
            {
              v27 = *((_DWORD *)v23 + 3);
              *((_DWORD *)v23 + 3) = v27 - 1;
            }
            if ( v27 == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 24LL))(v23);
          }
        }
      }
    }
    while ( !*(_QWORD *)(a1 + 192) );
    if ( a2 )
    {
      v38 = nullptr;
      v39 = 0;
      if ( sub_225AAE0((__int64 *)(a1 + 192), (__int64 *)&v38) )
      {
        v15 = 2;
        std::_V2::generic_category((std::_V2 *)(a1 + 192));
        goto LABEL_28;
      }
    }
LABEL_46:
    v12 = *(_QWORD *)(a1 + 192);
LABEL_47:
    if ( !v12 )
    {
      v15 = 0;
      goto LABEL_28;
    }
LABEL_3:
    sub_9EE8A0(v35, v12 + 8);
    v4 = *(_QWORD *)(a1 + 16);
    v5 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(v12 + 40);
    v6 = (const void *)sub_228AA60(v5, v4, 0);
    v8 = v7;
    v9 = sub_2244B30((__int64)v6, v7);
    v10 = sub_2244CB0(a1 + 208, v6, v8, v9);
    v11 = (__int64 *)(*(_QWORD *)(a1 + 208) + 8LL * v10);
    if ( *v11 )
    {
      if ( *v11 != -8 )
      {
        sub_A45C10((__int64 **)&v38, v11, 0);
        continue;
      }
      --*(_DWORD *)(a1 + 224);
    }
    break;
  }
  v37 = v11;
  v36 = v10;
  v28 = sub_22300B0(v8 + 9, 8);
  v29 = v36;
  v30 = v37;
  v31 = (_QWORD *)v28;
  if ( v8 )
  {
    memcpy((void *)(v28 + 8), v6, v8);
    v30 = v37;
    v29 = v36;
  }
  *((_BYTE *)v31 + v8 + 8) = 0;
  *v31 = v8;
  *v30 = (__int64)v31;
  ++*(_DWORD *)(a1 + 220);
  v32 = sub_22450D0(a1 + 208, v29);
  sub_A45C10((__int64 **)&v38, (__int64 *)(*(_QWORD *)(a1 + 208) + 8LL * v32), 0);
  return 0;
}

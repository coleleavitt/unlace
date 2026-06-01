__int64 **__fastcall sub_2260F50(__int64 **a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  volatile signed __int32 *v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // rdx
  volatile signed __int32 *v12; // rdi
  __int64 *v13; // rax
  volatile signed __int32 *v14; // rdi
  __int64 v15; // rdx
  __int64 *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rdi
  __int128 v24; // [rsp+0h] [rbp-68h] BYREF
  __int64 v25; // [rsp+10h] [rbp-58h] BYREF
  volatile signed __int32 *v26; // [rsp+18h] [rbp-50h]
  _QWORD v27[4]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v28; // [rsp+40h] [rbp-28h]

  v4 = a1[1];
  v24 = 0;
  v5 = v4[1];
  if ( *((_BYTE *)v4 + 24) )
  {
    *((_BYTE *)v4 + 24) = 0;
LABEL_3:
    if ( v5 != *v4 )
    {
      while ( 1 )
      {
        *(_DWORD *)a2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 - 16) + 16LL))(*(_QWORD *)(v5 - 16));
        v6 = *(_QWORD *)(v5 - 16);
        *(_QWORD *)(a2 + 8) = v7;
        if ( *(_QWORD *)(v6 + 16) )
          break;
        v8 = *(volatile signed __int32 **)(v5 - 8);
        *(_OWORD *)(v5 - 16) = 0;
        if ( v8 )
        {
          sub_4343A0(v8);
          v9 = a1[1];
          v10 = v9[1];
          if ( *(_QWORD *)(v5 - 16) )
            goto LABEL_7;
        }
        else
        {
          v9 = a1[1];
          v10 = v9[1];
        }
        v12 = *(volatile signed __int32 **)(v10 - 8);
        v5 = v10 - 16;
        v9[1] = v10 - 16;
        if ( v12 )
        {
          sub_4343A0(v12);
          v13 = a1[1];
          v5 = v13[1];
          if ( *v13 == v5 )
            goto LABEL_12;
        }
        else if ( *v9 == v5 )
        {
          goto LABEL_12;
        }
      }
      v9 = a1[1];
      v10 = v9[1];
LABEL_7:
      if ( *v9 != v10 )
        return a1;
    }
LABEL_12:
    v14 = (volatile signed __int32 *)a1[2];
    *(_OWORD *)(a1 + 1) = 0;
    if ( v14 )
      goto LABEL_13;
    return a1;
  }
  v15 = *(_QWORD *)(v5 - 16);
  if ( *(_DWORD *)(v15 + 40) != 3 )
    goto LABEL_3;
  v16 = *a1;
  v17 = *(_QWORD *)(v15 + 8);
  v18 = *(_QWORD *)(v15 + 16);
  v19 = **a1;
  v28 = 261;
  v27[0] = v17;
  v27[1] = v18;
  (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD *, __int64))(v19 + 64))(&v25, v16, v27, a2);
  if ( sub_225AAE0(&v25, (__int64 *)&v24) )
  {
    if ( v26 )
      sub_4343A0(v26);
    v4 = a1[1];
    v5 = v4[1];
    goto LABEL_3;
  }
  v20 = (__int64)a1[1];
  v21 = *(_QWORD *)(v20 + 8);
  if ( v21 != *(_QWORD *)(v20 + 16) )
  {
    v22 = v26;
    *(_QWORD *)v21 = v25;
    *(_QWORD *)(v21 + 8) = v22;
    if ( v22 )
    {
      if ( &_pthread_key_create )
      {
        _InterlockedAdd(v22 + 2, 1u);
        *(_QWORD *)(v20 + 8) += 16LL;
        v23 = v26;
        v22 = *((volatile signed __int32 **)&v24 + 1);
        if ( !v26 )
          goto LABEL_27;
      }
      else
      {
        ++*((_DWORD *)v22 + 2);
        *(_QWORD *)(v20 + 8) = v21 + 16;
        v23 = v26;
        if ( !v26 )
          return a1;
        v22 = nullptr;
      }
    }
    else
    {
      *(_QWORD *)(v20 + 8) = v21 + 16;
      v23 = v26;
      if ( !v26 )
        return a1;
    }
    sub_4343A0(v23);
LABEL_27:
    if ( v22 )
    {
      sub_4343A0(v22);
      return a1;
    }
    return a1;
  }
  sub_2260CC0(v20, (char *)v21, &v25);
  v14 = v26;
  if ( !v26 )
    return a1;
LABEL_13:
  sub_4343A0(v14);
  return a1;
}

__int64 __fastcall sub_84A8A0(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v4; // r12d
  _QWORD *v5; // r15
  __int64 result; // rax
  __int64 v8; // r14
  int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int i; // r13d
  __int64 v13; // rdx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  unsigned int v18; // r13d
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  _QWORD *v21; // rsi
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // [rsp+0h] [rbp-88h]
  int v27; // [rsp+Ch] [rbp-7Ch]
  _QWORD v28[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD *v29; // [rsp+20h] [rbp-68h]
  __int64 v30; // [rsp+28h] [rbp-60h]
  _QWORD v31[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v32; // [rsp+40h] [rbp-48h]
  __int64 v33; // [rsp+48h] [rbp-40h]

  v4 = *((_DWORD *)a1 + 4);
  if ( !v4 )
  {
    v5 = nullptr;
    result = 0;
    goto LABEL_3;
  }
  v8 = *a1;
  v9 = v4 - 1;
  v29 = nullptr;
  v28[0] = sub_69F620();
  v28[1] = v10;
  v30 = 0;
  v32 = nullptr;
  v31[0] = sub_69F630(a1, a2);
  v31[1] = v11;
  v33 = 0;
  v27 = 1;
  v26 = nullptr;
  for ( i = v9 & sub_84A6B0(a2, (__int64)(a2 + 2)); ; i = v9 & v18 )
  {
    v5 = (_QWORD *)(v8 + 40LL * i);
    result = sub_69F550(a2, v5);
    if ( (_BYTE)result )
    {
      v19 = a2[3];
      if ( v19 == v5[3] )
      {
        v20 = (_QWORD *)a2[2];
        v21 = &v20[v19];
        if ( v20 == v21 )
          goto LABEL_3;
        v22 = (_QWORD *)v5[2];
        while ( *v20 == *v22 )
        {
          ++v20;
          ++v22;
          if ( v21 == v20 )
            goto LABEL_3;
        }
      }
    }
    if ( (unsigned __int8)sub_69F550((_QWORD *)(v8 + 40LL * i), v28) )
    {
      v13 = v5[3];
      if ( v13 == v30 )
        break;
    }
LABEL_8:
    if ( (unsigned __int8)sub_69F550((_QWORD *)(v8 + 40LL * i), v31) )
    {
      v14 = v5[3];
      if ( v14 == v33 )
      {
        v15 = (_QWORD *)v5[2];
        v16 = &v15[v14];
        if ( v15 == v16 )
        {
LABEL_28:
          if ( v26 )
            v5 = v26;
          v26 = v5;
        }
        else
        {
          v17 = v32;
          while ( *v15 == *v17 )
          {
            ++v15;
            ++v17;
            if ( v16 == v15 )
              goto LABEL_28;
          }
        }
      }
    }
    v18 = v27 + i;
    ++v27;
  }
  v23 = (_QWORD *)v5[2];
  v24 = &v23[v13];
  if ( v23 != v24 )
  {
    v25 = v29;
    while ( *v23 == *v25 )
    {
      ++v23;
      ++v25;
      if ( v24 == v23 )
        goto LABEL_25;
    }
    goto LABEL_8;
  }
LABEL_25:
  if ( v26 )
    v5 = v26;
  result = 0;
LABEL_3:
  *a3 = v5;
  return result;
}


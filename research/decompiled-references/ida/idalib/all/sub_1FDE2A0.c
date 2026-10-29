__int64 __fastcall sub_1FDE2A0(__int64 a1, _BYTE *a2, size_t a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v10; // rsi
  _QWORD *v11; // rbp
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v19; // rax
  char v20; // dl
  _QWORD *v21; // [rsp+0h] [rbp-48h] BYREF
  char v22; // [rsp+8h] [rbp-40h]

  v10 = *(_QWORD *)(a1 + 120);
  if ( a3 == 1 && *a2 == 45 )
  {
    sub_FDCE70((__int64)&v21, v10);
    if ( (v22 & 1) != 0 )
    {
      v19 = sub_1FDE260(&v21);
      if ( !v20 )
        v19 = 0;
      v14 = 0;
      *a6 = v19;
      sub_A04D90((__int64 *)&v21);
    }
    else
    {
      *a6 = (__int64)v21;
      v14 = 0;
      sub_A04D90((__int64 *)&v21);
    }
  }
  else
  {
    sub_FD9C70((__int64)&v21, v10, a2, a3, 1, 0, 1);
    v11 = v21;
    if ( (v22 & 1) != 0 )
    {
      v16 = sub_1FDE260(&v21);
      v14 = v17;
      if ( !(_BYTE)v17 )
      {
        sub_A04D90((__int64 *)&v21);
        *a6 = 0;
        return v14;
      }
      v11 = (_QWORD *)v16;
    }
    sub_A04D90((__int64 *)&v21);
    *a6 = (__int64)v11;
    if ( v11 )
    {
      if ( a4 )
      {
        v12 = (unsigned __int64)v11;
        while ( 1 )
        {
          v13 = *(_QWORD *)(v12 + 8);
          if ( !v13 )
            break;
          v12 = v13 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v13 & 4) == 0 || !v12 )
          {
            v14 = 1;
            if ( a4 != *(_QWORD *)(v12 + 32) )
              return v14;
            goto LABEL_11;
          }
        }
        v14 = 1;
        if ( a4 != 64 )
          return v14;
      }
LABEL_11:
      v14 = 0;
      if ( a5 )
      {
        while ( 1 )
        {
          v15 = v11[1];
          if ( !v15 )
            break;
          v11 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v15 & 4) == 0 || !v11 )
            goto LABEL_15;
        }
        v11 = nullptr;
LABEL_15:
        LOBYTE(v14) = v11[5] != a5;
      }
    }
    else
    {
      return 0;
    }
  }
  return v14;
}

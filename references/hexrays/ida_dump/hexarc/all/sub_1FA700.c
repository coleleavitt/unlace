__int64 __fastcall sub_1FA700(__int64 a1, unsigned __int64 *a2, _QWORD *a3, __int64 a4)
{
  unsigned __int8 v4; // r15
  _QWORD *v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r14
  unsigned __int8 v14; // al
  unsigned int v15; // r14d
  __int64 v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // ebx
  int v24; // eax
  __int64 v27; // [rsp+18h] [rbp-80h]
  __int64 v28; // [rsp+20h] [rbp-78h] BYREF
  __int128 v29; // [rsp+28h] [rbp-70h] BYREF
  __int128 v30; // [rsp+38h] [rbp-60h]
  int v31; // [rsp+48h] [rbp-50h]
  int v32; // [rsp+4Ch] [rbp-4Ch]
  char v33; // [rsp+50h] [rbp-48h]
  unsigned __int64 v34; // [rsp+58h] [rbp-40h]

  v4 = 0;
  v34 = __readfsqword(0x28u);
  v7 = (_QWORD *)*a2;
  v27 = -1;
  if ( !(unsigned __int8)sub_5E300(a3) )
  {
    v23 = sub_5E3E0(a3, 0);
    v24 = sub_5E680(a3) + 1;
    v28 = 0;
    *(_QWORD *)&v30 = v23;
    v27 = v24;
    BYTE8(v30) = 1;
    v31 = v24 - v23;
    v32 = -1;
    v33 = 1;
    v29 = 0;
    v7 = sub_FDAE0(a2, (__int64)&v28);
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28);
    }
    v4 = 1;
  }
  v8 = a3[3];
  v9 = *a2;
  if ( v8 )
  {
    v10 = (__int64 *)a3[2];
    v4 = 5;
    v11 = *(_QWORD *)(a1 + 1440);
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL);
    v13 = v12 & (v10[2 * v8 - 1] + v10[2 * v8 - 2] - v11);
    v27 = (int)v13;
    if ( v7 != (_QWORD *)v9 )
    {
      while ( 1 )
      {
LABEL_4:
        v14 = *((_BYTE *)v7 + 56);
        if ( v14 >= v4 && (v4 < v14 || v7[6] >= v27) )
          return 0;
        if ( v7[4] )
          break;
        v17 = *v7;
        v15 = 0;
        if ( (*v7 & 2) == 0 )
        {
          v18 = (_QWORD *)v7[2];
          if ( (*(_BYTE *)v18 & 2) == 0 )
          {
            do
            {
LABEL_12:
              v7 = v18;
              v18 = (_QWORD *)v18[1];
            }
            while ( (*(_BYTE *)v18 & 2) == 0 );
            goto LABEL_13;
          }
LABEL_23:
          v19 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
          v20 = *v19;
          if ( (*v19 & 2) == 0 )
          {
            while ( v7 == (_QWORD *)v19[2] )
            {
              v7 = v19;
              v21 = v20 & 0xFFFFFFFFFFFFFFFCLL;
              v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v20 & 2) != 0 )
              {
                v7 = (_QWORD *)v21;
                goto LABEL_13;
              }
              v19 = (_QWORD *)v21;
            }
          }
          v7 = v19;
          goto LABEL_13;
        }
LABEL_14:
        if ( (_QWORD *)*a2 == v7 )
          return 0;
      }
      v30 = 0;
      v28 = 0;
      v29 = 0u;
      sub_FD6A0((__int64)(v7 + 3), a1, (__int64)&v28);
      if ( (unsigned __int8)sub_5E200(a3, &v28) || (unsigned __int8)sub_3110F0(a3 + 2, (char *)&v29 + 8) )
      {
        if ( !*(_QWORD *)(a4 + 16) )
          std::__throw_bad_function_call();
        v15 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *))(a4 + 24))(a4, v7 + 3, &v28);
      }
      else
      {
        v15 = 0;
      }
      if ( *((_QWORD *)&v29 + 1) )
      {
        *(_QWORD *)&v30 = 0;
        qfree(*((_QWORD *)&v29 + 1));
      }
      qfree(v28);
      v17 = *v7;
      if ( (*v7 & 2) == 0 )
      {
        v18 = (_QWORD *)v7[2];
        if ( (*(_BYTE *)v18 & 2) == 0 )
          goto LABEL_12;
        goto LABEL_23;
      }
LABEL_13:
      if ( v15 )
        return v15;
      goto LABEL_14;
    }
    v22 = *v10;
    BYTE8(v30) = 5;
    v28 = 0;
    v33 = 1;
    v29 = 0;
    *(_QWORD *)&v30 = v12 & (v22 - v11);
    v31 = v13 - v30;
    v32 = -1;
    v7 = sub_FDAE0(a2, (__int64)&v28);
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28);
    }
    v9 = *a2;
    v4 = 5;
    v27 = (int)v13;
  }
  if ( v7 != (_QWORD *)v9 )
    goto LABEL_4;
  return 0;
}

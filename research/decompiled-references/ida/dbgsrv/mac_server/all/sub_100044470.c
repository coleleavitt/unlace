/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100044470
// Address: 0x0000000100044470

//----- (0000000100044470) ----------------------------------------------------
__int64 __fastcall sub_100044470(unsigned __int8 *a1, __int64 a2)
{
  _QWORD **v3; // r15
  __int64 v4; // rdi
  unsigned __int8 *v5; // r13
  __int64 **v6; // r14
  __int64 v7; // rax
  __int64 *v8; // rsi
  _QWORD *v9; // rax
  unsigned __int8 *v10; // rcx
  unsigned __int8 *v11; // rax
  bool v12; // zf
  int v13; // eax
  _QWORD *v14; // r14
  _QWORD *v15; // r15
  _QWORD *v16; // r14
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  void *v20; // rdi
  __int64 v21; // [rsp+18h] [rbp-68h]
  __int64 v22; // [rsp+28h] [rbp-58h] BYREF
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v24; // [rsp+38h] [rbp-48h] BYREF

  if ( *a1 == 5 )
  {
    v21 = a2;
    v3 = (_QWORD **)operator new(0x20u);
    v4 = *((_QWORD *)a1 + 1);
    *(_OWORD *)(v3 + 1) = 0;
    *v3 = v3 + 1;
    v5 = *(unsigned __int8 **)v4;
    if ( *(_QWORD *)v4 == v4 + 8 )
    {
      *((_DWORD *)v3 + 6) = 1;
      *((_DWORD *)v3 + 7) = *(_DWORD *)(v4 + 28);
    }
    else
    {
      do
      {
        v6 = (__int64 **)sub_100043D50(v3, v3 + 1, &v23, &v22, (char *)v5 + 32);
        if ( !*v6 )
        {
          sub_100044010((__int64)&v24, (__int64)v3, (__int64)(v5 + 32));
          v7 = v23;
          v8 = v24;
          *(_OWORD *)v24 = 0;
          v8[2] = v7;
          *v6 = v8;
          v9 = (_QWORD *)**v3;
          if ( v9 )
          {
            *v3 = v9;
            v8 = *v6;
          }
          sub_10000C830(v3[1], v8);
          v3[2] = (_QWORD *)((char *)v3[2] + 1);
        }
        v10 = *((unsigned __int8 **)v5 + 1);
        if ( v10 )
        {
          do
          {
            v11 = v10;
            v10 = *(unsigned __int8 **)v10;
          }
          while ( v10 );
        }
        else
        {
          do
          {
            v11 = *((unsigned __int8 **)v5 + 2);
            v12 = *(_QWORD *)v11 == (_QWORD)v5;
            v5 = v11;
          }
          while ( !v12 );
        }
        v5 = v11;
      }
      while ( v11 != (unsigned __int8 *)(v4 + 8) );
      v13 = *a1;
      *((_DWORD *)v3 + 6) = 1;
      *((_DWORD *)v3 + 7) = *(_DWORD *)(v4 + 28);
      if ( v13 == 7 )
      {
        v20 = *((void **)a1 + 1);
        if ( v20 )
        {
          *((_QWORD *)a1 + 2) = 0;
          qfree(v20);
          *((_QWORD *)a1 + 1) = 0;
          *((_QWORD *)a1 + 3) = 0;
        }
        goto LABEL_19;
      }
      if ( v13 != 5 )
      {
LABEL_19:
        *a1 = 5;
        *((_QWORD *)a1 + 1) = v3;
        a2 = v21;
        goto LABEL_20;
      }
      v4 = *((_QWORD *)a1 + 1);
    }
    sub_1000380B0((unsigned __int8 **)v4, a1);
    goto LABEL_19;
  }
LABEL_20:
  v14 = *(_QWORD **)(a2 + 8);
  v15 = (_QWORD *)*v14;
  v16 = v14 + 1;
  if ( v15 != v16 )
  {
    do
    {
      sub_100044A00(*((_QWORD **)a1 + 1), (__int64)(v15 + 4));
      v18 = (_QWORD *)v15[1];
      if ( v18 )
      {
        do
        {
          v19 = v18;
          v18 = (_QWORD *)*v18;
        }
        while ( v18 );
      }
      else
      {
        do
        {
          v19 = (_QWORD *)v15[2];
          v12 = *v19 == (_QWORD)v15;
          v15 = v19;
        }
        while ( !v12 );
      }
      v15 = v19;
    }
    while ( v19 != v16 );
  }
  return 0;
}

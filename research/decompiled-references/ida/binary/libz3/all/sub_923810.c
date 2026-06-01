__int64 __fastcall sub_923810(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r14
  __int64 i; // rbx
  int *v4; // rdx
  _QWORD *v5; // r13
  __int64 v6; // rsi
  char v7; // al
  void *v8; // r15
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // rax
  void *v12; // r13
  __int64 v13; // [rsp+8h] [rbp-88h]
  __int64 v14; // [rsp+18h] [rbp-78h]
  void *v15; // [rsp+20h] [rbp-70h]
  char v16; // [rsp+37h] [rbp-59h] BYREF
  __int64 v17; // [rsp+38h] [rbp-58h] BYREF
  __int64 v18; // [rsp+40h] [rbp-50h]
  __int64 v19; // [rsp+48h] [rbp-48h] BYREF
  __int64 v20; // [rsp+50h] [rbp-40h]

  result = *(_QWORD *)(a1 + 32);
  if ( result )
  {
    v2 = *(unsigned int *)(result - 4);
    if ( (int)v2 > 0 )
    {
      for ( i = 0; i != v2; ++i )
      {
        while ( 2 )
        {
          result = *(_QWORD *)(a1 + 336);
          if ( !result || *(_DWORD *)(result - 4) <= (int)i )
            return result;
          v5 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * i);
          v6 = *v5;
          v17 = 0;
          v18 = 0;
          v19 = 1;
          v20 = 0;
          v7 = sub_1666AE0(a1 + 144, v6, &v17, &v16);
          v8 = qword_1C7F2C0;
          if ( !v7 || (_DWORD)v17 )
          {
            sub_182CBA0(qword_1C7F2C0, &v17);
            ++i;
            result = sub_182CBA0(v8, &v19);
            if ( i != v2 )
              continue;
            return result;
          }
          break;
        }
        sub_182CBA0(qword_1C7F2C0, &v17);
        sub_182CBA0(v8, &v19);
        v4 = (int *)(*(_QWORD *)(a1 + 336) + 32 * i);
        result = (unsigned int)*v4;
        if ( !(_DWORD)result )
          continue;
        v17 = 0;
        v18 = 0;
        v19 = 1;
        v20 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v17, v4);
        v9 = sub_15D1F10(*v5);
        v10 = 0;
        v13 = 8 * v2;
        do
        {
          while ( v9 != sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 32) + v10)) )
          {
LABEL_13:
            v10 += 8;
            if ( v13 == v10 )
              goto LABEL_18;
          }
          v11 = *(_QWORD *)(a1 + 336) + 4 * v10;
          if ( (*(_BYTE *)(v11 + 20) & 1) == 0
            && *(_DWORD *)(v11 + 16) == 1
            && (v19 & 0x100000000LL) == 0
            && (_DWORD)v19 == 1 )
          {
            v14 = *(_QWORD *)(a1 + 336) + 4 * v10;
            v15 = qword_1C7F2C0;
            sub_1832A70(qword_1C7F2C0, v11, &v17);
            sub_182CBA0(v15, v14 + 16);
            *(_BYTE *)(v14 + 20) &= ~1u;
            *(_DWORD *)(v14 + 16) = 1;
            goto LABEL_13;
          }
          sub_1852000(qword_1C7F2C0, *(_QWORD *)(a1 + 336) + 4 * v10, &v17);
          v10 += 8;
        }
        while ( v13 != v10 );
LABEL_18:
        v12 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v17);
        result = sub_182CBA0(v12, &v19);
      }
    }
  }
  return result;
}


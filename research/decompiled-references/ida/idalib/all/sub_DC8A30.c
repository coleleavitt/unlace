__int64 __fastcall sub_DC8A30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned int v5; // r14d
  __int64 v7; // rsi
  __int64 *v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  _BYTE _0[48]; // [rsp+0h] [rbp+0h] BYREF
  _DWORD vars30[6]; // [rsp+30h] [rbp+30h] BYREF
  int vars48; // [rsp+48h] [rbp+48h]
  __int64 vars50; // [rsp+50h] [rbp+50h]
  unsigned int vars58; // [rsp+58h] [rbp+58h]
  _BYTE vars60[104]; // [rsp+60h] [rbp+60h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  sub_E21760(v4, 48);
  sub_E23260(_0);
  sub_E21790(v4, 48);
  v5 = sub_DC8930(a1, a2, (__int64)_0, 0);
  if ( (_BYTE)v5 )
  {
    sub_E231E0(vars30, _0);
    if ( !vars48 )
    {
      v7 = vars50;
      if ( vars50 )
      {
        v8 = *(__int64 **)(vars50 + 32);
        v9 = vars58;
        v10 = *((_DWORD *)v8 + 6);
        if ( vars58 )
        {
          if ( v10 != vars58 )
          {
            do
            {
              if ( v10 != (_DWORD)v9 && (_DWORD)v9 )
                v8 = *(__int64 **)(v7 + (unsigned int)v9 + 32);
              v11 = *v8;
              if ( (v11 & 2) != 0
                || (v11 & 0xFFFFFFFFFFFFFFFCLL) == 0
                || (*(_BYTE *)(v7 + (unsigned int)v9 + 28) & 4) == 0 )
              {
                break;
              }
              if ( (_DWORD)v9 == -1 )
                sub_E23220(vars60, v7, v9, 0);
              else
                sub_E23220(
                  vars60,
                  v7,
                  (unsigned int)(v9 - *(_DWORD *)(v7 + (unsigned int)v9 + 24)),
                  (unsigned int)(v9 - *(_DWORD *)(v7 + (unsigned int)v9 + 24)));
              sub_E23400(vars30, vars60);
              sub_E232A0(vars60);
              if ( vars48 )
                break;
              v7 = vars50;
              if ( !vars50 )
                break;
              v8 = *(__int64 **)(vars50 + 32);
              v9 = vars58;
              v10 = *((_DWORD *)v8 + 6);
              if ( vars58 == v10 )
                break;
            }
            while ( vars58 );
          }
        }
      }
    }
    v12 = sub_CFDF60((__int64)vars30);
    v13 = sub_E31FC0(*(_QWORD *)(v12 + 32), a3);
    v14 = *(_QWORD *)(a1 + 176);
    sub_E23220(
      vars60,
      vars50,
      (unsigned int)(vars30[0] + *(_DWORD *)(v13 + 8)),
      (unsigned int)(vars30[0] + *(_DWORD *)(v13 + 8)));
    v15 = sub_E216C0(v14, 48);
    sub_E23260(v15);
    sub_E232A0(vars60);
    sub_E232A0(vars30);
  }
  sub_E232A0(_0);
  return v5;
}

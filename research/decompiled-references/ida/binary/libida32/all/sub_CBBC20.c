__int64 __fastcall sub_CBBC20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 *v9; // r14
  __int64 v10; // r13
  _WORD *v11; // r15
  int v12; // edi
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned int v15; // r12d
  char v17; // [rsp+7h] [rbp-81h]
  __int64 v19; // [rsp+18h] [rbp-70h] BYREF
  __int64 (__fastcall **v20)(); // [rsp+20h] [rbp-68h] BYREF
  __int64 v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+38h] [rbp-50h]
  int v24; // [rsp+40h] [rbp-48h]
  unsigned int v25; // [rsp+44h] [rbp-44h]
  char v26; // [rsp+48h] [rbp-40h]

  v22 = *(_QWORD *)(a1 + 1328);
  *(_QWORD *)(a1 + 1328) = &v20;
  v21 = a1;
  v20 = &off_2B21738;
  v6 = *(_BYTE *)(a1 + 1361);
  *(_BYTE *)(a1 + 1361) = 1;
  v7 = *(_QWORD *)(a2 + 16);
  v17 = v6;
  v8 = *(unsigned int *)(v7 + 4);
  v9 = (unsigned __int64 *)(v7 + 16);
  v23 = 0;
  v24 = 1;
  v10 = v7 + 8 * v8 + 16;
  v26 = 0;
  if ( v10 == v7 + 16 )
  {
LABEL_18:
    v15 = 1;
  }
  else
  {
    v11 = *(_WORD **)(v7 + 8 * v8 + 8);
    v12 = v8;
    if ( (*v11 & 0x1FF) == 0xEE )
    {
      v13 = v7 + 8 * v8 + 8;
      while ( (unsigned __int64 *)v13 != v9 )
      {
        v11 = *(_WORD **)(v13 - 8);
        v13 -= 8;
        a3 = (unsigned __int16)*v11;
        LOWORD(a3) = a3 & 0x1FF;
        if ( (_WORD)a3 != 238 )
          goto LABEL_8;
      }
      v11 = nullptr;
      if ( v12 )
        v11 = *(_WORD **)(v7 + 8LL * (unsigned int)(v12 - 1) + 16);
    }
LABEL_8:
    v14 = *(_QWORD *)(v7 + 16);
    if ( (_WORD *)v14 == v11 )
    {
LABEL_12:
      if ( ((*v11 + 509) & 0x1FFu) <= 0x7E )
      {
        v15 = sub_CBBC10(a1, (unsigned __int64)v11, a3, a4, a5);
      }
      else
      {
        v19 = a2 | 4;
        v15 = sub_CE4840(a1, &v19);
      }
    }
    else
    {
      while ( 1 )
      {
        v15 = sub_CB8E80(a1, v14, a3, a4, a5);
        if ( !(_BYTE)v15 )
          break;
        if ( ++v9 == (unsigned __int64 *)v10 )
        {
          if ( !v26 )
            goto LABEL_18;
          v19 = 4;
          v15 = sub_C97A90((__int64)&v20, 0);
          sub_CDBA30(v21, v25, &v19);
          break;
        }
        v14 = *v9;
        if ( (_WORD *)*v9 == v11 )
          goto LABEL_12;
      }
    }
  }
  *(_BYTE *)(a1 + 1361) = v17;
  v20 = &off_2B21738;
  sub_C977B0((__int64)&v20);
  return v15;
}


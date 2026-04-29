__int64 __fastcall sub_2E450(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r13d
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // r11d
  __int64 *v11; // rax
  char v12; // al
  unsigned __int8 v14; // [rsp+Ch] [rbp-94h]
  unsigned __int8 v15; // [rsp+Ch] [rbp-94h]
  __int64 v16; // [rsp+18h] [rbp-88h] BYREF
  __int64 v17; // [rsp+20h] [rbp-80h] BYREF
  __int128 v18; // [rsp+28h] [rbp-78h]
  char v19; // [rsp+38h] [rbp-68h]
  __int64 *v20; // [rsp+40h] [rbp-60h] BYREF
  __int128 v21; // [rsp+48h] [rbp-58h]
  char v22; // [rsp+58h] [rbp-48h]
  unsigned __int64 v23; // [rsp+68h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  result = a3 == 161;
  LOBYTE(result) = (a3 == 13) | result;
  if ( !(_BYTE)result )
  {
    LOBYTE(v4) = a4 == 13 || a4 == 161;
    if ( (_BYTE)v4 )
      return result;
    v7 = *(_QWORD *)(a2 + 16);
    v17 = 0;
    v19 = 0;
    v18 = 0;
    if ( !(unsigned __int8)sub_81F70(a1, &v17, v7, a3, 0, 0) )
    {
      v8 = v17;
      v4 = 0;
      if ( !v17 )
        return v4;
      goto LABEL_6;
    }
    if ( (unsigned __int8)(v19 - 10) > 1u )
    {
LABEL_5:
      v8 = v17;
      if ( !v17 )
        return v4;
LABEL_6:
      *(_QWORD *)&v18 = 0;
      qfree(v8);
      return v4;
    }
    v9 = *(_QWORD *)(a2 + 16);
    v22 = 0;
    v20 = 0;
    v21 = 0;
    LOBYTE(v10) = sub_81F70(a1, &v20, v9, a4, 0, 0);
    if ( !(_BYTE)v10 || (unsigned __int8)(v22 - 10) > 1u )
    {
LABEL_16:
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree((__int64)v20);
      }
      goto LABEL_5;
    }
    if ( a4 == 15 && (_QWORD)v18 == 1 )
    {
      if ( (_QWORD)v21 == 1 || (v11 = v20 + 3, 24LL * (_QWORD)v21 == 24) )
      {
LABEL_24:
        v15 = v10;
        v12 = sub_2E200(a1, a2, *v20, a3, v17);
        v10 = v15;
        if ( v12 )
        {
LABEL_15:
          v4 = v10;
          goto LABEL_16;
        }
      }
      else
      {
        while ( *v11 == *v20 )
        {
          v11 += 3;
          if ( &v20[3 * (_QWORD)v21] == v11 )
            goto LABEL_24;
        }
      }
    }
    v14 = v10;
    if ( !(unsigned __int8)sub_22880((unsigned __int64 *)&v16, (__int64)&v17, (__int64)&v20, a1) )
      goto LABEL_16;
    sub_2D9A0(a1, a2, 0, 1, v16, (__int64)&v20, 1, 1);
    v10 = v14;
    goto LABEL_15;
  }
  return 0;
}

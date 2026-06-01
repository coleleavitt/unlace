unsigned __int64 __fastcall sub_5230C0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v7; // r15
  int v8; // ecx
  __int64 (__fastcall *v9)(QT::QAbstractItemView *); // rax
  const char *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rdx
  unsigned int v17; // [rsp+8h] [rbp-80h]
  int v18; // [rsp+Ch] [rbp-7Ch]
  __int64 v19; // [rsp+10h] [rbp-78h] BYREF
  __int128 v20; // [rsp+18h] [rbp-70h]
  __int64 v21; // [rsp+28h] [rbp-60h] BYREF
  __int128 v22; // [rsp+30h] [rbp-58h]
  char v23; // [rsp+40h] [rbp-48h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v3 = qword_8D2500;
  v4 = qword_8D2500 + 8 * xmmword_8D2508;
  if ( qword_8D2500 != v4 )
  {
    v18 = a3 == 0 ? 7 : 135;
    do
    {
      v7 = *(_QWORD *)v3;
      if ( a3 )
      {
        if ( (*(_BYTE *)(v7 + 1985) & 0x10) != 0 )
        {
LABEL_20:
          v17 = 135;
LABEL_7:
          v23 = 0;
          v20 = 0;
          v19 = 0;
          v21 = 0;
          v22 = 0;
          v9 = *(__int64 (__fastcall **)(QT::QAbstractItemView *))(*(_QWORD *)v7 + 968LL);
          if ( v9 == sub_51F1D0 )
            sub_4962F0((QT::QAbstractItemView *)v7, (__int64)&v19, 7);
          else
            ((void (__fastcall *)(__int64, __int64 *, __int64))v9)(v7, &v19, 7);
          v10 = (const char *)(*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v7 + 1032LL))(
                                v7,
                                &v19,
                                v17);
          sub_4E0B20(v7 + 304, (__int64)v10, 0);
          sub_4DE2C0(&v21);
          v11 = v19;
          if ( v19 )
          {
            v12 = v20;
            if ( (_QWORD)v20 )
            {
              v13 = 0;
              do
              {
                v14 = v13++;
                sub_4DE2C0((__int64 *)(32 * v14 + v11));
                v11 = v19;
              }
              while ( v12 != v13 );
            }
            *(_QWORD *)&v20 = 0;
            qfree(v11, v10);
          }
          goto LABEL_14;
        }
        while ( 1 )
        {
          v8 = *(_DWORD *)(v7 + 2212);
          if ( v8 >= 0 )
            break;
          v3 += 8;
          if ( v4 == v3 )
            return v24 - __readfsqword(0x28u);
          v7 = *(_QWORD *)v3;
          if ( (*(_BYTE *)(*(_QWORD *)v3 + 1985LL) & 0x10) != 0 )
            goto LABEL_20;
        }
      }
      else
      {
        v8 = *(_DWORD *)(v7 + 2212);
        if ( v8 < 0 )
          goto LABEL_14;
      }
      if ( a2 & ((unsigned __int64)((v8 & 0x40) != 0) << v8) | a1 & ((unsigned __int64)((v8 & 0x40) == 0) << v8) )
      {
        v17 = v18;
        goto LABEL_7;
      }
LABEL_14:
      v3 += 8;
    }
    while ( v4 != v3 );
  }
  return v24 - __readfsqword(0x28u);
}

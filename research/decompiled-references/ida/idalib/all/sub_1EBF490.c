__int64 __fastcall sub_1EBF490(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // [rsp+8h] [rbp-60h] BYREF
  _QWORD *v8; // [rsp+10h] [rbp-58h] BYREF
  char v9; // [rsp+18h] [rbp-50h]
  _QWORD *v10; // [rsp+20h] [rbp-48h] BYREF
  char v11; // [rsp+28h] [rbp-40h]

  while ( 1 )
  {
    sub_1EAFE10((__int64)&v8, a1);
    v2 = v9 & 1;
    if ( (v9 & 1) != 0 )
      break;
    if ( (_DWORD)v8 == 2 )
    {
      if ( a2 == HIDWORD(v8) )
      {
        sub_202A150(&v7, a1, a2, 0);
        v3 = v7;
        if ( !v7 )
          goto LABEL_14;
LABEL_9:
        v10 = v3;
        v7 = nullptr;
        sub_A0E8E0(&v10);
        if ( v10 )
          (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
        if ( v7 )
          (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
LABEL_13:
        v2 = 1;
        goto LABEL_14;
      }
      sub_A0BAF0((__int64 *)&v7, a1);
      v3 = v7;
      if ( v7 )
        goto LABEL_9;
    }
    else
    {
      if ( (unsigned int)v8 < 2 )
        goto LABEL_13;
      if ( (_DWORD)v8 == 3 )
      {
        sub_2023270(&v10, a1, HIDWORD(v8));
        v2 = v11 & 1;
        if ( (v11 & 1) != 0 )
        {
          v6 = v10;
          v10 = nullptr;
          v7 = v6;
          sub_A0E8E0(&v7);
          if ( v7 )
            (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
          sub_A0AE90((__int64 *)&v10);
          goto LABEL_14;
        }
        sub_A0AE90((__int64 *)&v10);
      }
    }
    sub_A0B030((__int64 *)&v8);
  }
  v5 = v8;
  v8 = nullptr;
  v10 = v5;
  sub_A0E8E0(&v10);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
LABEL_14:
  sub_A0B030((__int64 *)&v8);
  return v2;
}

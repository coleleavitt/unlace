__int64 __fastcall sub_3B4BC0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // r13d
  __int64 v7; // rdx
  int v8; // r15d
  int v9; // eax
  __int64 v10; // [rsp-10h] [rbp-D0h]
  __int64 v11; // [rsp-8h] [rbp-C8h]
  int v12; // [rsp+20h] [rbp-A0h]
  char v13; // [rsp+20h] [rbp-A0h]
  __int64 v14; // [rsp+28h] [rbp-98h]
  int v15; // [rsp+34h] [rbp-8Ch] BYREF
  __int64 v16; // [rsp+38h] [rbp-88h] BYREF
  __int64 v17; // [rsp+40h] [rbp-80h] BYREF
  __int64 v18; // [rsp+48h] [rbp-78h] BYREF
  __int64 v19; // [rsp+50h] [rbp-70h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-68h] BYREF
  __int128 v21; // [rsp+60h] [rbp-60h] BYREF
  __int64 v22; // [rsp+70h] [rbp-50h] BYREF
  int v23; // [rsp+78h] [rbp-48h]
  __int16 v24; // [rsp+7Ch] [rbp-44h]
  unsigned __int64 v25; // [rsp+88h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  sub_383B90(a2, 0);
  v16 = 0;
  v14 = sub_385E20(a2 + 80);
  v12 = -1;
  if ( !v14 )
  {
    v12 = sub_385AD0(a2 + 80, nullptr, &v16, nullptr);
    if ( v12 == -1 )
    {
      v5 = 0;
      goto LABEL_3;
    }
  }
  v3 = *(_QWORD *)(a2 + 128);
  v15 = 0;
  v4 = ((__int64 (__fastcall *)(__int64, int *, __int64, const char *, _QWORD, _QWORD, __int64 (__fastcall *)(unsigned int, _QWORD *), _QWORD))callui)(
         205,
         &v15,
         1,
         "Select a structure",
         0,
         *(unsigned int *)(*(_QWORD *)(v3 + 880) + 40LL),
         sub_3B3510,
         0);
  v5 = 1;
  if ( v4 )
  {
    v7 = *(_QWORD *)(a2 + 128);
    v17 = 0;
    *(_DWORD *)(*(_QWORD *)(v7 + 880) + 40LL) = v4;
    LOWORD(v22) = 1;
    *((_QWORD *)&v21 + 1) = v4;
    *(_QWORD *)&v21 = get_idati(205, v11, 1, v10);
    create_tinfo(&v17, 61, 189, &v21);
    v8 = v15;
    v18 = 0;
    if ( v15 )
    {
      if ( v14 )
      {
        a3 = 0.0;
        v19 = 0;
        tinfo_property = 0;
        v21 = 0;
        copy_tinfo_t((char *)&v21 + 8, &tinfo_property);
        v22 = 0;
        copy_tinfo_t(&v22, &v19);
        v23 = 0;
        v24 = 0;
        clear_tinfo_t(&tinfo_property);
        clear_tinfo_t(&v19);
        v23 = v8;
        HIBYTE(v24) = 0x80;
        copy_tinfo_t(&v22, &v17);
        tinfo_property = 0;
        tinfo_property = get_tinfo_property(*(_QWORD *)(v14 + 80), 10);
        copy_tinfo_t(&v21, &tinfo_property);
        clear_tinfo_t(&tinfo_property);
        v13 = create_tinfo(&v18, 10, 10, &v21);
        clear_tinfo_t(&v22);
        clear_tinfo_t((char *)&v21 + 8);
        clear_tinfo_t(&v21);
        if ( v13 )
          goto LABEL_7;
      }
    }
    else
    {
      sub_325010(&v21, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), &v17);
      copy_tinfo_t(&v18, &v21);
      clear_tinfo_t(&v21);
      if ( v14 )
      {
LABEL_7:
        v5 = (unsigned __int8)sub_391D30(a2, v14, &v18, a3);
LABEL_9:
        clear_tinfo_t(&v18);
        clear_tinfo_t(&v17);
        goto LABEL_3;
      }
      if ( v12 != -1 )
      {
        v9 = set_tinfo_property4(&v16, 12, v12, &v18, 0, 4);
        if ( sub_383E70(v9, "Setting field type") )
        {
          sub_3888D0(a2);
          v5 = 1;
          goto LABEL_9;
        }
      }
    }
    v5 = 0;
    goto LABEL_9;
  }
LABEL_3:
  clear_tinfo_t(&v16);
  return v5;
}

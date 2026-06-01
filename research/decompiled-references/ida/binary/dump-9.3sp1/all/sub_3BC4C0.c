__int64 __fastcall sub_3BC4C0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // r13d
  __int64 v7; // rdx
  int v8; // r15d
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // [rsp+20h] [rbp-A0h]
  char tinfo; // [rsp+20h] [rbp-A0h]
  __int64 v14; // [rsp+28h] [rbp-98h]
  int v15; // [rsp+34h] [rbp-8Ch] BYREF
  __int64 v16; // [rsp+38h] [rbp-88h] BYREF
  __int64 v17; // [rsp+40h] [rbp-80h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-78h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-68h]
  __int128 v20; // [rsp+60h] [rbp-60h] BYREF
  __int64 v21; // [rsp+70h] [rbp-50h]
  int v22; // [rsp+78h] [rbp-48h]
  __int16 v23; // [rsp+7Ch] [rbp-44h]
  unsigned __int64 v24; // [rsp+88h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  sub_38B490(a2, 0);
  v16 = 0;
  v14 = sub_38D720(a2 + 80);
  v12 = -1;
  if ( !v14 )
  {
    v12 = sub_38D3D0(a2 + 80, nullptr, &v16, nullptr);
    if ( v12 == -1 )
    {
      v5 = 0;
      goto LABEL_3;
    }
  }
  v3 = *(_QWORD *)(a2 + 128);
  v15 = 0;
  v4 = ((__int64 (__fastcall *)(__int64, int *, __int64, const char *, _QWORD, _QWORD, __int64 (*)(), _QWORD))callui)(
         205,
         &v15,
         1,
         "Select a structure",
         0,
         *(unsigned int *)(*(_QWORD *)(v3 + 880) + 40LL),
         sub_3BAE10,
         0);
  v5 = 1;
  if ( v4 )
  {
    v7 = *(_QWORD *)(a2 + 128);
    v17 = 0;
    *(_DWORD *)(*(_QWORD *)(v7 + 880) + 40LL) = v4;
    LOWORD(v21) = 1;
    *((_QWORD *)&v20 + 1) = v4;
    *(_QWORD *)&v20 = get_idati();
    create_tinfo();
    v8 = v15;
    v18[0] = 0;
    if ( v15 )
    {
      if ( v14 )
      {
        a3 = 0.0;
        v18[1] = 0;
        tinfo_property = 0;
        v20 = 0;
        copy_tinfo_t();
        v21 = 0;
        copy_tinfo_t();
        v22 = 0;
        v23 = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        v22 = v8;
        HIBYTE(v23) = 0x80;
        copy_tinfo_t();
        tinfo_property = 0;
        tinfo_property = get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
        tinfo = create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
        if ( tinfo )
          goto LABEL_7;
      }
    }
    else
    {
      sub_32C540(&v20, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), &v17);
      copy_tinfo_t();
      clear_tinfo_t();
      if ( v14 )
      {
LABEL_7:
        v5 = (unsigned __int8)sub_399630(a2, v14, v18, a3);
LABEL_9:
        clear_tinfo_t();
        clear_tinfo_t();
        goto LABEL_3;
      }
      if ( v12 != -1 )
      {
        v9 = set_tinfo_property4();
        if ( sub_38B770(v9, "Setting field type") )
        {
          sub_3901D0(a2, (__int64)"Setting field type", v10, v11);
          v5 = 1;
          goto LABEL_9;
        }
      }
    }
    v5 = 0;
    goto LABEL_9;
  }
LABEL_3:
  clear_tinfo_t();
  return v5;
}

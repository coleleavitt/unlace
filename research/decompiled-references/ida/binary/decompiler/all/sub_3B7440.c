__int64 __fastcall sub_3B7440(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // r13d
  __int64 v8; // rdx
  int v9; // r15d
  unsigned int v10; // eax
  int v11; // [rsp+20h] [rbp-A0h]
  char tinfo; // [rsp+20h] [rbp-A0h]
  __int64 v13; // [rsp+28h] [rbp-98h]
  int v14; // [rsp+34h] [rbp-8Ch] BYREF
  __int64 v15; // [rsp+38h] [rbp-88h] BYREF
  __int64 v16; // [rsp+40h] [rbp-80h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-78h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-68h]
  __int128 v19; // [rsp+60h] [rbp-60h] BYREF
  __int64 v20; // [rsp+70h] [rbp-50h]
  int v21; // [rsp+78h] [rbp-48h]
  __int16 v22; // [rsp+7Ch] [rbp-44h]
  unsigned __int64 v23; // [rsp+88h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  sub_386C90(a2, 0);
  v15 = 0;
  v13 = sub_388F20(a2 + 80);
  v11 = -1;
  if ( !v13 )
  {
    v11 = sub_388BD0((int)a2 + 80, 0, (unsigned int)&v15, 0, v2, v3);
    if ( v11 == -1 )
    {
      v6 = 0;
      goto LABEL_3;
    }
  }
  v4 = *(_QWORD *)(a2 + 128);
  v14 = 0;
  v5 = ((__int64 (__fastcall *)(__int64, int *, __int64, const char *, _QWORD, _QWORD, __int64 (*)(), _QWORD))callui)(
         204,
         &v14,
         1,
         "Select a structure",
         0,
         *(unsigned int *)(*(_QWORD *)(v4 + 872) + 40LL),
         sub_3B5D90,
         0);
  v6 = 1;
  if ( v5 )
  {
    v8 = *(_QWORD *)(a2 + 128);
    v16 = 0;
    *(_DWORD *)(*(_QWORD *)(v8 + 872) + 40LL) = v5;
    LOWORD(v20) = 1;
    *((_QWORD *)&v19 + 1) = v5;
    *(_QWORD *)&v19 = get_idati();
    create_tinfo();
    v9 = v14;
    v17[0] = 0;
    if ( v14 )
    {
      if ( v13 )
      {
        v17[1] = 0;
        tinfo_property = 0;
        v19 = 0;
        copy_tinfo_t();
        v20 = 0;
        copy_tinfo_t();
        v21 = 0;
        v22 = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        v21 = v9;
        HIBYTE(v22) = 0x80;
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
      sub_3290F0(&v19, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), &v16);
      copy_tinfo_t();
      clear_tinfo_t();
      if ( v13 )
      {
LABEL_7:
        v6 = (unsigned __int8)sub_394880(a2, v13, v17);
LABEL_9:
        clear_tinfo_t();
        clear_tinfo_t();
        goto LABEL_3;
      }
      if ( v11 != -1 )
      {
        v10 = set_tinfo_property4();
        if ( (unsigned __int8)sub_386F70(v10, "Setting field type") )
        {
          sub_38B9D0(a2);
          v6 = 1;
          goto LABEL_9;
        }
      }
    }
    v6 = 0;
    goto LABEL_9;
  }
LABEL_3:
  clear_tinfo_t();
  return v6;
}

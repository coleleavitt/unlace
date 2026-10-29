__int64 __fastcall sub_BF4AE0(__int64 *a1, __int64 a2)
{
  __int64 (*v2)(); // rax
  int v3; // r12d
  __int64 v4; // rbp
  _BYTE *v5; // rdx
  unsigned int v6; // r12d
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbp
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // r13
  _QWORD *v18; // rbp
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v24; // rax
  __int64 *v25; // [rsp+8h] [rbp-50h] BYREF
  __int64 v26[2]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+20h] [rbp-38h] BYREF
  __int64 v28; // [rsp+28h] [rbp-30h]

  v25 = a1;
  if ( !(unsigned __int8)sub_BC9860(&v25, a2) )
    return 0;
  v2 = *(__int64 (**)())(*v25 + 4296);
  if ( v2 != sub_BC62E0 && !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v2)(v25, a2) )
    return 0;
  v3 = *(unsigned __int16 *)(a2 + 4);
  if ( *(_WORD *)(a2 + 4) )
  {
    v4 = 0;
    do
    {
      v5 = (_BYTE *)(sub_C95050(a2) + 16 * v4);
      if ( ((*v5 & 1) == 0 || *((_BYTE *)v25 + 10))
        && !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _BYTE *, _QWORD))(*v25 + 72))(
              v25,
              a2,
              v5,
              *(_QWORD *)(a2 + 8 * v4 + 32)) )
      {
        return 0;
      }
    }
    while ( v3 != (_DWORD)++v4 );
  }
  v6 = *((unsigned __int8 *)v25 + 10);
  if ( !(_BYTE)v6 )
  {
    v7 = *(_QWORD *)(sub_C95340(a2) + 56);
    v8 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v7 & 4) != 0 )
      v8 = (__int64 *)v8[4];
    v9 = *v8;
    v26[1] = (__int64)(v8 + 1);
    v26[0] = v9;
    v27 = sub_BF48A0(v26);
    v28 = v10;
    v11 = sub_C95360(a2);
    if ( (unsigned __int8)sub_BC92E0(&v25, v11) )
    {
      v12 = v27;
      if ( (*(_QWORD *)a2 & 0x200000LL) != 0 && *(_BYTE *)(v27 + 16) != 25 && *(_WORD *)(v27 + 22) )
      {
        v13 = 16;
        v14 = 8LL * ((unsigned int)*(unsigned __int16 *)(v27 + 22) - 1) + 24;
        while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v25 + 56))(v25, *(_QWORD *)(v28 + v13)) )
        {
          v13 += 8;
          if ( v14 == v13 )
          {
            v12 = v27;
            goto LABEL_20;
          }
        }
      }
      else
      {
LABEL_20:
        v15 = sub_6F33F0(v12);
        v17 = (_QWORD *)(v15 + 8 * v16);
        v18 = (_QWORD *)v15;
        if ( (_QWORD *)v15 == v17 )
        {
LABEL_23:
          if ( ((*(_BYTE *)(v12 + 19) >> 1) & 0xFu) - 6 > 2
            || !*(_QWORD *)sub_BD3360(v12)
            || (*(unsigned __int8 (__fastcall **)(__int64 *))(*v25 + 96))(v25) )
          {
            if ( (*(_QWORD *)a2 & 0x400000LL) == 0
              || (v19 = sub_BEB490((__int64)&v27),
                  (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*v25 + 136))(v25, v19)) )
            {
              v20 = (_QWORD *)sub_C953A0(a2);
              if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v25 + 96))(v25, *v20) )
              {
                v21 = sub_C94E80(a2);
                v22 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v25 + 96))(v25, v21);
                if ( (_BYTE)v22 )
                  return v22;
              }
            }
          }
        }
        else
        {
          while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v25 + 128))(v25, *v18) )
          {
            if ( v17 == ++v18 )
              goto LABEL_23;
          }
        }
      }
    }
    return v6;
  }
  v24 = sub_C95330(a2);
  return (*(unsigned int (__fastcall **)(__int64 *, __int64))(*v25 + 56))(v25, v24);
}

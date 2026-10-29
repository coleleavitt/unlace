__int64 __fastcall sub_11CCF0(_QWORD *a1, int a2, __int64 (__fastcall ***a3)(_QWORD, __int64, int *))
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 (__fastcall **v6)(_QWORD, __int64, int *); // rax
  __int64 extlang; // rbp
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r12
  char v11; // bp
  __int64 v12; // rax
  __int64 (__fastcall **v13)(_QWORD, __int64, int *); // rax
  char v14; // al
  _QWORD *v15; // rdi
  __int64 v16; // rdi
  int v17; // edx
  int v18; // [rsp+Ch] [rbp-4Ch] BYREF
  _QWORD *v19; // [rsp+10h] [rbp-48h] BYREF
  __int128 v20; // [rsp+18h] [rbp-40h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  if ( !*((_BYTE *)a1 + 112) && !*((_BYTE *)a1 + 113) )
  {
    *((_BYTE *)a1 + 112) = 1;
    switch ( a2 )
    {
      case -4:
      case -3:
        if ( !*a1 )
          goto LABEL_6;
        if ( a2 != -3 )
          goto LABEL_11;
        if ( (**(unsigned __int8 (__fastcall ***)(_QWORD))*a1)(*a1)
          || (v17 = sub_92580(
                      0,
                      (__int64)"HIDECANCEL\n"
                               "IDA cannot save snippets because there is no IDB. All modifications will be lost.\n"
                               "Are you sure?"),
              result = 0,
              v17 == 1) )
        {
          if ( *a1 )
          {
LABEL_11:
            sub_11C830(a1, 0);
            (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 64LL))(*a1, 4);
          }
          *(_OWORD *)a1 = 0;
          goto LABEL_6;
        }
        return result;
      case -2:
      case 51:
        v4 = sub_19BD30(unk_24F116);
        if ( v4 )
          goto LABEL_5;
        goto LABEL_6;
      case -1:
        a1[1] = a3;
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 56LL))(*a1, 0);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a1[1] + 56LL))(a1[1], 45);
        *((_BYTE *)a1 + 114) = 0;
        goto LABEL_6;
      case 30:
        v6 = *a3;
        v18 = 0;
        if ( !(unsigned __int8)(*v6)(a3, 30, &v18) )
        {
          if ( !under_debugger )
            interr();
          BUG();
        }
        v19 = (_QWORD *)v18;
        extlang = find_extlang();
        if ( extlang )
        {
          reg_str_set();
          v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, **(_QWORD **)(*a1 + 16LL));
          v9 = *(_QWORD *)(v8 + 24);
          v10 = v8;
          if ( strcmp(*(const char **)(v9 + 16), *(const char **)(extlang + 16)) )
          {
            if ( v9 )
              --*(_DWORD *)(v9 + 12);
            *(_QWORD *)(v10 + 24) = extlang;
            ++*(_DWORD *)(extlang + 12);
            *(_BYTE *)(v10 + 64) = 1;
            sub_11C1A0(a1);
            (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a1[1] + 56LL))(a1[1], 45);
          }
          --*(_DWORD *)(extlang + 12);
        }
        else
        {
          sub_92200((__int64)"ICON ERROR\nInvalid extlang!", 2);
        }
        goto LABEL_6;
      case 31:
        v4 = sub_19BD30(unk_24F11E);
        if ( !v4 )
          goto LABEL_6;
        goto LABEL_5;
      case 40:
        v11 = 1;
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, **(_QWORD **)(*a1 + 16LL));
        if ( !*(_BYTE *)(v12 + 64) )
          v11 = *(_QWORD *)(v12 + 56) == -1;
        sub_11C1A0(a1);
        sub_11C7D0(a1, v11);
        goto LABEL_6;
      case 45:
        v13 = *a3;
        v19 = nullptr;
        v20 = 0;
        v14 = (*v13)(a3, 45, (int *)&v19);
        v15 = v19;
        if ( v14 && (_QWORD)v20 && *v19 != **(_QWORD **)(*a1 + 16LL) )
        {
          sub_11C830(a1, 0);
          v16 = *a1;
          **(_QWORD **)(*a1 + 16LL) = *v19;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 64LL))(v16, 2);
          sub_11C620(a1);
          v15 = v19;
        }
        if ( v15 )
        {
          *(_QWORD *)&v20 = 0;
          qfree();
        }
        goto LABEL_6;
      case 52:
        v4 = sub_19BD30(unk_24F11A);
        if ( !v4 )
          goto LABEL_6;
        goto LABEL_5;
      case 53:
        v4 = sub_19BD30(unk_24F118);
        if ( !v4 )
          goto LABEL_6;
LABEL_5:
        sub_19BD80(v4);
        goto LABEL_6;
      default:
LABEL_6:
        *((_BYTE *)a1 + 112) = 0;
        break;
    }
  }
  return 1;
}


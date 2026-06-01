__int64 __fastcall sub_31D910(
        _QWORD *a1,
        int a2,
        __int64 (__fastcall ***a3)(_QWORD, __int64, __int64 *),
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // rax
  __int64 result; // rax
  __int64 (__fastcall **v14)(_QWORD, __int64, __int64 *); // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 extlang; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // r12
  int v28; // eax
  char v29; // bp
  __int64 v30; // rax
  __int64 (__fastcall **v31)(_QWORD, __int64, __int64 *); // rax
  const char *v32; // rsi
  char v33; // al
  _QWORD *v34; // rdi
  __int64 v35; // rdi
  int v36; // edx
  char v37; // [rsp+0h] [rbp-58h]
  int v38; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v39; // [rsp+10h] [rbp-48h] BYREF
  __int128 v40; // [rsp+18h] [rbp-40h]
  unsigned __int64 v41; // [rsp+28h] [rbp-30h]

  v41 = __readfsqword(0x28u);
  if ( !*((_BYTE *)a1 + 72) && !*((_BYTE *)a1 + 73) )
  {
    *((_BYTE *)a1 + 72) = 1;
    switch ( a2 )
    {
      case -4:
      case -3:
        if ( !*a1 )
          goto LABEL_6;
        if ( a2 != -3 )
          goto LABEL_11;
        if ( (**(unsigned __int8 (__fastcall ***)(_QWORD))*a1)(*a1)
          || (v36 = sub_1698A0(
                      0,
                      (int)"HIDECANCEL\n"
                           "IDA cannot save snippets because there is no IDB. All modifications will be lost.\n"
                           "Are you sure?"),
              result = 0,
              v36 == 1) )
        {
          if ( *a1 )
          {
LABEL_11:
            sub_31D450(a1, 0);
            (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 64LL))(*a1, 4);
          }
          *(_OWORD *)a1 = 0;
          goto LABEL_6;
        }
        return result;
      case -2:
      case 51:
        v12 = sub_5313F0(unk_8CA988);
        if ( v12 )
          goto LABEL_5;
        goto LABEL_6;
      case -1:
        a1[1] = a3;
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 56LL))(*a1, 0);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a1[1] + 56LL))(a1[1], 45);
        *((_BYTE *)a1 + 74) = 0;
        goto LABEL_6;
      case 30:
        v14 = *a3;
        v38 = 0;
        if ( !(unsigned __int8)(*v14)(a3, 30, (__int64 *)&v38) )
        {
          if ( !under_debugger )
            interr(40220, 30, v15, v16, *(double *)a4.m128_u64);
          BUG();
        }
        v39 = v38;
        extlang = find_extlang(&v39, 2);
        v24 = extlang;
        if ( extlang )
        {
          reg_str_set("LastSnippetsExtlang", 0, *(_QWORD *)(extlang + 16));
          v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, **(_QWORD **)(*a1 + 16LL));
          v26 = *(_QWORD *)(v25 + 24);
          v27 = v25;
          if ( !strcmp(*(const char **)(v26 + 16), *(const char **)(v24 + 16)) )
          {
            v28 = *(_DWORD *)(v24 + 12);
          }
          else
          {
            if ( v26 )
              --*(_DWORD *)(v26 + 12);
            *(_QWORD *)(v27 + 24) = v24;
            ++*(_DWORD *)(v24 + 12);
            *(_BYTE *)(v27 + 64) = 1;
            sub_31CCE0(a1);
            (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a1[1] + 56LL))(a1[1], 45);
            ++*(_DWORD *)(v24 + 12);
            v39 = v24;
            sub_31D160(a1, &v39);
            v28 = *(_DWORD *)(v24 + 12) - 1;
          }
          *(_DWORD *)(v24 + 12) = v28 - 1;
        }
        else
        {
          sub_169630(
            (int)"ICON ERROR\nInvalid extlang!",
            2,
            v18,
            v19,
            v20,
            v21,
            a4,
            a5,
            a6,
            a7,
            v22,
            v23,
            a10,
            a11,
            v37);
        }
        goto LABEL_6;
      case 31:
        v12 = sub_5313F0(unk_8CA9A8);
        if ( !v12 )
          goto LABEL_6;
        goto LABEL_5;
      case 40:
        v29 = 1;
        v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, **(_QWORD **)(*a1 + 16LL));
        if ( !*(_BYTE *)(v30 + 64) )
          v29 = *(_QWORD *)(v30 + 56) == -1;
        sub_31CCE0(a1);
        sub_31D3F0(a1, v29);
        goto LABEL_6;
      case 45:
        v31 = *a3;
        v39 = 0;
        v40 = 0;
        v32 = (_BYTE *)(&qword_28 + 5);
        v33 = (*v31)(a3, 45, &v39);
        v34 = (_QWORD *)v39;
        if ( v33 && (_QWORD)v40 && *(_QWORD *)v39 != **(_QWORD **)(*a1 + 16LL) )
        {
          sub_31D450(a1, 0);
          v35 = *a1;
          v32 = (_BYTE *)(&dword_0 + 2);
          **(_QWORD **)(*a1 + 16LL) = *(_QWORD *)v39;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 64LL))(v35, 2);
          sub_31D200(a1);
          v34 = (_QWORD *)v39;
        }
        if ( v34 )
        {
          *(_QWORD *)&v40 = 0;
          qfree(v34, v32);
        }
        goto LABEL_6;
      case 52:
        v12 = sub_5313F0(unk_8CA998);
        if ( !v12 )
          goto LABEL_6;
        goto LABEL_5;
      case 53:
        v12 = sub_5313F0(unk_8CA990);
        if ( !v12 )
          goto LABEL_6;
LABEL_5:
        sub_5314B0(v12);
        goto LABEL_6;
      default:
LABEL_6:
        *((_BYTE *)a1 + 72) = 0;
        break;
    }
  }
  return 1;
}

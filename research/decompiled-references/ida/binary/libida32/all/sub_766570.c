__int64 __fastcall sub_766570(__int64 a1, const char *a2, char a3, int a4)
{
  __int64 v7; // rax
  __int64 (__fastcall ***v8)(_QWORD, const char *); // rdi
  unsigned int v9; // esi
  __int64 result; // rax
  int v11; // edx
  unsigned __int8 v12; // si
  __int64 *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int8 v16; // si
  __int64 *v17; // r13
  char v18; // r12
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v24; // [rsp+8h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v7 = sub_765DE0((_QWORD *)a1, a2, &v23);
  switch ( v23 )
  {
    case 0:
    case 5:
      v8 = *(__int64 (__fastcall ****)(_QWORD, const char *))(a1 + 408);
      if ( v8 )
      {
        v9 = (**v8)(v8, a2);
        if ( v9 != -1 )
        {
          sub_7655E0(a1, v9);
          return 0;
        }
      }
      set_error_string();
      return 53;
    case 1:
      if ( a3 )
      {
        LOBYTE(v11) = 64;
        v12 = 64;
      }
      else
      {
        LOBYTE(v11) = 96;
        v12 = 96;
      }
      if ( (unsigned __int16)v7 <= 0xFu )
        goto LABEL_28;
      sub_764420(a1, v12, v7);
      goto LABEL_10;
    case 2:
      if ( a3 )
      {
        if ( *(_QWORD *)(a1 + 176) && !v7 )
          return 1539;
        v11 = (unsigned __int16)v7;
        v16 = 80;
        LOBYTE(v7) = 80;
      }
      else
      {
        v11 = (unsigned __int16)v7;
        v16 = 112;
        LOBYTE(v7) = 112;
      }
      if ( v11 <= 15 )
      {
LABEL_28:
        v17 = *(__int64 **)(a1 + 192);
        v18 = v7 + v11;
        *(_BYTE *)(a1 + 204) = v7 + v11;
        v19 = v17[1];
        v20 = *v17;
        if ( v17[2] < (unsigned __int64)(v19 + 1) )
        {
          v22 = qvector_reserve(v17, v20, v19 + 1, 1);
          *v17 = v22;
          v20 = v22;
          v19 = v17[1];
        }
        *(_BYTE *)(v20 + v19) = v18;
        ++v17[1];
        ++*(_DWORD *)(a1 + 200);
      }
      else
      {
        sub_764420(a1, v16, v11);
      }
LABEL_10:
      if ( a4 )
        return sub_766070((_QWORD *)a1, a4);
      else
        return 0;
    case 3:
      sub_765430(a1, a3 == 0 ? -43 : -39, v7);
      goto LABEL_10;
    case 4:
      if ( a3 )
        result = sub_765CD0(a1, a2);
      else
        result = sub_765BC0(a1, a2);
      if ( (_DWORD)result )
        return result;
      goto LABEL_10;
    case 6:
      if ( a3 )
        return 53;
      sub_765200(a1, a2, 0);
      v13 = *(__int64 **)(a1 + 192);
      *(_BYTE *)(a1 + 204) = -82;
      v14 = v13[1];
      v15 = *v13;
      if ( v13[2] < (unsigned __int64)(v14 + 1) )
      {
        v21 = qvector_reserve(v13, v15, v14 + 1, 1);
        *v13 = v21;
        v15 = v21;
        v14 = v13[1];
      }
      *(_BYTE *)(v15 + v14) = -82;
      ++v13[1];
      ++*(_DWORD *)(a1 + 200);
      goto LABEL_10;
    default:
      if ( !under_debugger )
        interr(271);
      BUG();
  }
}


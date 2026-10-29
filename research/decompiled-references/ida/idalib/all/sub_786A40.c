__int64 __fastcall sub_786A40(__int64 a1, const char *a2, char a3, int a4)
{
  __int64 v8; // rax
  __int64 (__fastcall ***v9)(_QWORD, const char *); // rdi
  unsigned __int64 v10; // rsi
  __int64 result; // rax
  int v12; // edx
  unsigned __int8 v13; // si
  __int64 *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int8 v17; // si
  __int64 *v18; // r13
  char v19; // r12
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v25; // [rsp+8h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v8 = sub_7862B0((_QWORD *)a1, a2, &v24);
  switch ( v24 )
  {
    case 0:
    case 5:
      v9 = *(__int64 (__fastcall ****)(_QWORD, const char *))(a1 + 416);
      if ( v9 )
      {
        v10 = (**v9)(v9, a2);
        if ( v10 != -1 )
        {
          sub_785A20(a1, v10);
          return 0;
        }
      }
      set_error_string(0, a2);
      return 53;
    case 1:
      if ( a3 )
      {
        LOBYTE(v12) = 64;
        v13 = 64;
      }
      else
      {
        LOBYTE(v12) = 96;
        v13 = 96;
      }
      if ( (unsigned __int16)v8 <= 0xFu )
        goto LABEL_28;
      sub_784860(a1, v13, v8);
      goto LABEL_10;
    case 2:
      if ( a3 )
      {
        if ( *(_QWORD *)(a1 + 184) && !v8 )
          return 1539;
        v12 = (unsigned __int16)v8;
        v17 = 80;
        LOBYTE(v8) = 80;
      }
      else
      {
        v12 = (unsigned __int16)v8;
        v17 = 112;
        LOBYTE(v8) = 112;
      }
      if ( v12 <= 15 )
      {
LABEL_28:
        v18 = *(__int64 **)(a1 + 200);
        v19 = v8 + v12;
        *(_BYTE *)(a1 + 212) = v8 + v12;
        v20 = v18[1];
        v21 = *v18;
        if ( v18[2] < (unsigned __int64)(v20 + 1) )
        {
          v23 = qvector_reserve(v18, v21, v20 + 1, 1);
          *v18 = v23;
          v21 = v23;
          v20 = v18[1];
        }
        *(_BYTE *)(v21 + v20) = v19;
        ++v18[1];
        ++*(_DWORD *)(a1 + 208);
      }
      else
      {
        sub_784860(a1, v17, v12);
      }
LABEL_10:
      if ( a4 )
        return sub_786540((_QWORD *)a1, a4);
      else
        return 0;
    case 3:
      sub_785870(a1, a3 == 0 ? -43 : -39, v8);
      goto LABEL_10;
    case 4:
      if ( a3 )
        result = sub_7861A0(a1, a2);
      else
        result = sub_786090(a1, a2);
      if ( (_DWORD)result )
        return result;
      goto LABEL_10;
    case 6:
      if ( a3 )
        return 53;
      sub_785640(a1, a2, 0);
      v14 = *(__int64 **)(a1 + 200);
      *(_BYTE *)(a1 + 212) = -82;
      v15 = v14[1];
      v16 = *v14;
      if ( v14[2] < (unsigned __int64)(v15 + 1) )
      {
        v22 = qvector_reserve(v14, v16, v15 + 1, 1);
        *v14 = v22;
        v16 = v22;
        v15 = v14[1];
      }
      *(_BYTE *)(v16 + v15) = -82;
      ++v14[1];
      ++*(_DWORD *)(a1 + 208);
      goto LABEL_10;
    default:
      if ( !under_debugger )
        interr(271);
      BUG();
  }
}

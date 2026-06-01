__int64 __fastcall sub_142710(bool a1, int *a2, _BYTE *a3, bool *a4)
{
  bool v4; // r15
  __int64 license_manager; // rax
  __int64 (*v9)(); // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int8 (__fastcall *v12)(__int64, __int64, int *); // r8
  __int64 result; // rax
  int v14; // edx
  char v15; // dl
  __int16 v16; // ax
  time_t v17; // rax
  char *v18; // rax
  char *v19; // rdi
  char *v20; // rax
  char *v21; // rax
  char *v22; // rdi
  char *v23; // rax
  void *dest; // [rsp+8h] [rbp-470h]
  char *destb; // [rsp+8h] [rbp-470h]
  char *destc; // [rsp+8h] [rbp-470h]
  char *desta; // [rsp+8h] [rbp-470h]
  char v28; // [rsp+17h] [rbp-461h]
  unsigned __int8 (__fastcall *v29)(__int64, __int64, int *); // [rsp+18h] [rbp-460h]
  __int16 v30; // [rsp+2Ah] [rbp-44Eh] BYREF
  int v31; // [rsp+2Ch] [rbp-44Ch] BYREF
  char haystack[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v33; // [rsp+438h] [rbp-40h]

  v4 = a1;
  v33 = __readfsqword(0x28u);
  license_manager = get_license_manager();
  v28 = 0;
  if ( license_manager )
  {
    v9 = *(__int64 (**)())(*(_QWORD *)license_manager + 128LL);
    if ( v9 != sub_13E6F0 )
      v28 = ((__int64 (__fastcall *)(__int64))v9)(license_manager);
  }
  v10 = sub_173B10();
  v11 = get_license_manager();
  v12 = *(unsigned __int8 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v11 + 96LL);
  if ( !v10 )
  {
    v29 = *(unsigned __int8 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v11 + 96LL);
    dest = (void *)v11;
    v17 = time(nullptr);
    v12 = v29;
    v11 = (__int64)dest;
    v10 = v17;
  }
  if ( v12(v11, v10, &v31) && (unsigned int)(v31 - 1) > 4 && !v28 )
  {
    if ( (unsigned int)sub_924A0(
                         0,
                         (__int64)"HIDECANCEL\n"
                                  "Your license has expired.\n"
                                  "\n"
                                  "IDA will not save any changes.\n"
                                  "Are you sure you want to quit?") != 1 )
      return 0xFFFFFFFFLL;
    *a2 = 0;
    *a3 = 0;
    *a4 = 0;
    return 0;
  }
  if ( !a1 )
    v4 = unk_2530DC != 0;
  itext();
  qstrncpy();
  if ( !(unsigned __int8)is_debugger_on() )
  {
    v20 = strstr(haystack, "DEBUG SESSION IN PROCESS");
    if ( v20 )
    {
      if ( haystack < v20 )
      {
        while ( *(v20 - 1) != 10 )
        {
          if ( --v20 == haystack )
          {
            destc = v20;
            sub_13F2D0(v20, (unsigned __int64)v20);
            v23 = destc;
            goto LABEL_40;
          }
        }
        destb = v20;
        sub_13F2D0(v20, (unsigned __int64)haystack);
        v23 = destb;
        if ( !destb )
          goto LABEL_42;
      }
      else
      {
        desta = v20;
        sub_13F2D0(v20, (unsigned __int64)haystack);
        v23 = desta;
      }
LABEL_40:
      if ( *v23 == 10 )
        sub_13F2D0(v23, (unsigned __int64)haystack);
    }
LABEL_42:
    v21 = strstr(haystack, "memory snapshot");
    v22 = v21;
    if ( v21 )
    {
      if ( haystack < v21 )
      {
        do
        {
          if ( *(v22 - 1) == 10 )
            break;
          --v22;
        }
        while ( v22 != haystack );
      }
      sub_13F2D0(v22, (unsigned __int64)haystack);
    }
  }
  if ( !v4 )
  {
    v18 = strstr(haystack, "BUTTON NO");
    v19 = v18;
    if ( v18 )
    {
      if ( haystack < v18 )
      {
        do
        {
          if ( *(v19 - 1) == 10 )
            break;
          --v19;
        }
        while ( v19 != haystack );
      }
      sub_13F2D0(v19, (unsigned __int64)haystack);
    }
    qstrncat();
    v16 = 0;
    if ( !*a2 )
      goto LABEL_21;
    v16 = 1;
    if ( *a2 == 1 )
      goto LABEL_21;
    goto LABEL_20;
  }
  qstrncat();
  if ( *a2 )
  {
    if ( *a2 == 1 )
    {
      v30 = 1;
      goto LABEL_15;
    }
LABEL_20:
    v16 = 2;
LABEL_21:
    v30 = v16;
    LOWORD(v31) = (unsigned __int8)*a3 | (unsigned __int16)(2 * *a4);
    result = sub_8F730((__int64)haystack, 0, &v30, &v31);
    if ( !v4 && !(_DWORD)result )
      result = 0xFFFFFFFFLL;
    goto LABEL_16;
  }
  v30 = 0;
LABEL_15:
  LOWORD(v31) = (unsigned __int8)*a3 | (unsigned __int16)(2 * *a4);
  result = sub_8F730((__int64)haystack, 0, &v30, &v31);
LABEL_16:
  v14 = 0;
  if ( v30 )
    v14 = (v30 != 1) + 1;
  *a2 = v14;
  v15 = v31;
  *a3 = v31;
  *a3 &= 1u;
  *a4 = (v15 & 2) != 0;
  return result;
}


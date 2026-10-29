__int64 __fastcall sub_302E40(
        bool a1,
        int *a2,
        _BYTE *a3,
        bool *a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  bool v12; // r15
  __int64 license_manager; // rax
  __int64 (*v17)(); // rdx
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int8 (__fastcall *v20)(__int64, __int64, int *); // r8
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  __int64 result; // rax
  int v28; // edx
  char v29; // dl
  __int16 v30; // ax
  time_t v31; // rax
  char *v32; // rax
  char *v33; // rdi
  char *v34; // rax
  char *v35; // rax
  char *v36; // rdi
  char *v37; // rax
  char v38; // [rsp+0h] [rbp-478h]
  void *dest; // [rsp+8h] [rbp-470h]
  char *destb; // [rsp+8h] [rbp-470h]
  char *destc; // [rsp+8h] [rbp-470h]
  char *desta; // [rsp+8h] [rbp-470h]
  char v43; // [rsp+17h] [rbp-461h]
  unsigned __int8 (__fastcall *v44)(__int64, __int64, int *); // [rsp+18h] [rbp-460h]
  __int16 v45; // [rsp+2Ah] [rbp-44Eh] BYREF
  int v46; // [rsp+2Ch] [rbp-44Ch] BYREF
  char haystack[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v48; // [rsp+438h] [rbp-40h]

  v12 = a1;
  v48 = __readfsqword(0x28u);
  license_manager = get_license_manager();
  v43 = 0;
  if ( license_manager )
  {
    v17 = *(__int64 (**)())(*(_QWORD *)license_manager + 128LL);
    if ( v17 != sub_2FE950 )
      v43 = ((__int64 (__fastcall *)(__int64))v17)(license_manager);
  }
  v18 = sub_55C580();
  v19 = get_license_manager();
  v20 = *(unsigned __int8 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v19 + 96LL);
  if ( !v18 )
  {
    v44 = *(unsigned __int8 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v19 + 96LL);
    dest = (void *)v19;
    v31 = time(nullptr);
    v20 = v44;
    v19 = (__int64)dest;
    v18 = v31;
  }
  if ( v20(v19, v18, &v46) && (unsigned int)(v46 - 1) > 4 && !v43 )
  {
    if ( (unsigned int)sub_1698A0(
                         0,
                         (int)"HIDECANCEL\n"
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
    v12 = dword_8CD7E0 != 0;
  v22 = itext(1208, v18, v21);
  qstrncpy(haystack, v22, 1024);
  if ( !(unsigned __int8)is_debugger_on() )
  {
    v34 = strstr(haystack, "DEBUG SESSION IN PROCESS");
    if ( v34 )
    {
      if ( haystack < v34 )
      {
        while ( *(v34 - 1) != 10 )
        {
          if ( --v34 == haystack )
          {
            destc = v34;
            sub_2FEEA0(v34, (unsigned __int64)v34);
            v37 = destc;
            goto LABEL_40;
          }
        }
        destb = v34;
        sub_2FEEA0(v34, (unsigned __int64)haystack);
        v37 = destb;
        if ( !destb )
          goto LABEL_42;
      }
      else
      {
        desta = v34;
        sub_2FEEA0(v34, (unsigned __int64)haystack);
        v37 = desta;
      }
LABEL_40:
      if ( *v37 == 10 )
        sub_2FEEA0(v37, (unsigned __int64)haystack);
    }
LABEL_42:
    v35 = strstr(haystack, "memory snapshot");
    v36 = v35;
    if ( v35 )
    {
      if ( haystack < v35 )
      {
        do
        {
          if ( *(v36 - 1) == 10 )
            break;
          --v36;
        }
        while ( v36 != haystack );
      }
      sub_2FEEA0(v36, (unsigned __int64)haystack);
    }
  }
  if ( !v12 )
  {
    v32 = strstr(haystack, "BUTTON NO");
    v33 = v32;
    if ( v32 )
    {
      if ( haystack < v32 )
      {
        do
        {
          if ( *(v33 - 1) == 10 )
            break;
          --v33;
        }
        while ( v33 != haystack );
      }
      sub_2FEEA0(v33, (unsigned __int64)haystack);
    }
    qstrncat(haystack, ">\n\n", 1024);
    v30 = 0;
    if ( !*a2 )
      goto LABEL_21;
    v30 = 1;
    if ( *a2 == 1 )
      goto LABEL_21;
    goto LABEL_20;
  }
  qstrncat(haystack, ">\n\n", 1024);
  if ( *a2 )
  {
    if ( *a2 == 1 )
    {
      v45 = 1;
      goto LABEL_15;
    }
LABEL_20:
    v30 = 2;
LABEL_21:
    v45 = v30;
    LOWORD(v46) = (unsigned __int8)*a3 | (unsigned __int16)(2 * *a4);
    result = sub_1697D0(
               (int)haystack,
               0,
               (__int64)&v45,
               (__int64)&v46,
               v23,
               v24,
               a5,
               a6,
               a7,
               a8,
               v25,
               v26,
               a11,
               a12,
               v38);
    if ( !v12 && !(_DWORD)result )
      result = 0xFFFFFFFFLL;
    goto LABEL_16;
  }
  v45 = 0;
LABEL_15:
  LOWORD(v46) = (unsigned __int8)*a3 | (unsigned __int16)(2 * *a4);
  result = sub_1697D0((int)haystack, 0, (__int64)&v45, (__int64)&v46, v23, v24, a5, a6, a7, a8, v25, v26, a11, a12, v38);
LABEL_16:
  v28 = 0;
  if ( v45 )
    v28 = (v45 != 1) + 1;
  *a2 = v28;
  v29 = v46;
  *a3 = v46;
  *a3 &= 1u;
  *a4 = (v29 & 2) != 0;
  return result;
}

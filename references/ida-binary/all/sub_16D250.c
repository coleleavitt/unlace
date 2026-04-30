unsigned __int64 __fastcall sub_16D250(
        char a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  void *v9; // r12
  __int64 license_manager; // rax
  size_t v11; // r13
  const void **v12; // rbx
  __int64 v13; // rax
  _BOOL8 v14; // rdx
  int v15; // eax
  __int64 v16; // rbx
  char *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  int v24; // r13d
  time_t v25; // r15
  int v26; // eax
  bool v27; // [rsp+Bh] [rbp-75h]
  __int16 v28; // [rsp+1Ch] [rbp-64h] BYREF
  __int16 v29; // [rsp+1Eh] [rbp-62h] BYREF
  _BYTE v30[40]; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-38h]

  v9 = nullptr;
  v31 = __readfsqword(0x28u);
  license_manager = get_license_manager();
  v11 = *(_QWORD *)(license_manager + 184);
  v12 = (const void **)license_manager;
  if ( v11 )
  {
    v9 = (void *)qalloc_or_throw(*(_QWORD *)(license_manager + 184));
    memcpy(v9, v12[22], v11);
  }
  v13 = (*((__int64 (__fastcall **)(const void **, _QWORD, _QWORD))*v12 + 11))(v12, 0, 0);
  if ( v13 )
  {
    v27 = *(_DWORD *)(v13 + 8) == 3;
    v14 = *(_DWORD *)(v13 + 8) != 3;
  }
  else
  {
    v27 = 0;
    v14 = 1;
  }
  v28 = (unsigned int)reg_int_op("AutoCheckUpdates", 0, v14, 0) != 0;
  v29 = (unsigned int)reg_int_op("AutoUseLumina", 0, 1, 0) != 0;
  v15 = reg_int_op("LastUpdateCheck", 0, 0, 0);
  v16 = v15;
  if ( v15 )
  {
    v17 = (_BYTE *)(&off_18 + 6);
    qstrftime(v30, 30, "%d %B %Y", v15);
  }
  else
  {
    v17 = "Never";
    qstrncpy(v30, "Never", 30);
  }
  if ( !a1
    || !v27
    && (!(unsigned int)reg_int_op("InformedAboutUpdates3", 0, 0, 0)
     || (v17 = nullptr, !(unsigned __int8)reg_exists("AutoUseLumina", 0))) )
  {
    v24 = sub_1697D0(
            (int)"BUTTON CANCEL NONE\n"
                 "IDA and Internet\n"
                 "%/IDA can connect to Hex-Rays servers and check for updates or use Lumina.\n"
                 "Below are the current settings, please verify if they suit you.\n"
                 "\n"
                 "<#Check for new versions once a week#Automatically check for ~n~ew versions:C2::>>\n"
                 "If set, IDA will ping Hex-Rays servers once a week and check if there is a\n"
                 "new version. If there is a new version, it will display a message about it.\n"
                 "\n"
                 "Last check: %7A\n"
                 "\n"
                 "<#Automatically fetch function metadata from the lumina server after initial auto-analysis#Automaticall"
                 "y use ~L~umina server for analysis:C8::>>\n"
                 "Lumina server can improve analysis by recognizing well-known functions.\n"
                 "Please read the following link for more information:\n"
                 "%9h\n"
                 "\n"
                 "\n"
                 "<#Your license ID and build number will be sent to the server#Check for ~u~pdates now:B3:1:::> <#Open H"
                 "ex-Rays web site to request the update manually#~M~anual update:B4:1:::>\n"
                 "\n"
                 "\n",
            (__int64)sub_16B5B0,
            (__int64)&v28,
            (__int64)v30,
            (__int64)&v29,
            (__int64)"<a href=\"https://www.hex-rays.com/products/ida/lumina\">https://www.hex-rays.com/products/ida/lumina</a>",
            a2,
            a3,
            a4,
            a5,
            v21,
            v22,
            a8,
            a9,
            (char)sub_16EBF0);
    v17 = (_BYTE *)(&dword_0 + 1);
    if ( (unsigned int)reg_int_op("InformedAboutUpdates3", 1, 1, 0) )
    {
      v17 = nullptr;
      reg_exists("AutoUseLumina", 0);
      if ( v24 <= 0 )
        goto LABEL_16;
    }
    else if ( v24 <= 0 )
    {
      goto LABEL_16;
    }
    reg_int_op("AutoCheckUpdates", 1, v28 != 0, 0);
    v17 = (_BYTE *)(&dword_0 + 1);
    reg_int_op("AutoUseLumina", 1, v29 != 0, 0);
LABEL_16:
    if ( !a1 )
      goto LABEL_10;
  }
  if ( v28 )
  {
    v25 = time(nullptr);
    v26 = rand();
    v19 = (unsigned int)(v26 >> 31);
    v18 = 3600 * (v26 % 30);
    if ( v25 - v16 - v18 > 604799 )
    {
      v17 = nullptr;
      qword_8C90E0 = qthread_create(sub_16EBD0, 0);
    }
  }
LABEL_10:
  if ( v9 )
    qfree(v9, v17, v18, v19, v20);
  return v31 - __readfsqword(0x28u);
}

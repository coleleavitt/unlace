unsigned __int64 __fastcall sub_93B10(char a1)
{
  void *v1; // r12
  __int64 license_manager; // rax
  size_t v3; // r13
  const void **v4; // rbx
  __int64 v5; // rax
  bool v6; // r15
  int v7; // eax
  __int64 v8; // rbx
  int v10; // r15d
  time_t v11; // rbp
  __int16 v12; // [rsp+Ch] [rbp-6Ch] BYREF
  __int16 v13; // [rsp+Eh] [rbp-6Ah] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-40h]

  v1 = nullptr;
  v14 = __readfsqword(0x28u);
  license_manager = get_license_manager();
  v3 = *(_QWORD *)(license_manager + 184);
  v4 = (const void **)license_manager;
  if ( v3 )
  {
    v1 = (void *)qalloc_or_throw();
    memcpy(v1, v4[22], v3);
  }
  v5 = (*((__int64 (__fastcall **)(const void **, _QWORD, _QWORD))*v4 + 11))(v4, 0, 0);
  if ( v5 )
    v6 = *(_DWORD *)(v5 + 8) == 3;
  else
    v6 = 0;
  v12 = (unsigned int)reg_int_op() != 0;
  v13 = (unsigned int)reg_int_op() != 0;
  v7 = reg_int_op();
  v8 = v7;
  if ( v7 )
    qstrftime();
  else
    qstrncpy();
  if ( !a1 || !v6 && (!(unsigned int)reg_int_op() || !(unsigned __int8)reg_exists()) )
  {
    v10 = sub_8F730(
            (__int64)"BUTTON CANCEL NONE\n"
                     "IDA and Internet\n"
                     "%/IDA can connect to Hex-Rays servers and check for updates or use Lumina.\n"
                     "Below are the current settings, please verify if they suit you.\n"
                     "\n"
                     "<#Check for new versions once a week#Automatically check for ~n~ew versions:C2::>>\n"
                     "<#Automatically fetch function metadata from the lumina server after initial auto-analysis#Automati"
                     "cally use ~L~umina server for analysis:C8::>>\n"
                     "\n"
                     "<#Your license ID and build number will be sent to the server#Check for ~u~pdates now:B3:1:::> <#Op"
                     "en Hex-Rays web site to request the update manually#~M~anual update:B4:1:::>\n"
                     "\n"
                     "\n",
            sub_91C70,
            &v12,
            &v13,
            sub_95170,
            sub_941E0);
    if ( (unsigned int)reg_int_op() )
    {
      reg_exists();
      if ( v10 <= 0 )
        goto LABEL_16;
    }
    else if ( v10 <= 0 )
    {
      goto LABEL_16;
    }
    reg_int_op();
    reg_int_op();
LABEL_16:
    if ( !a1 )
      goto LABEL_10;
  }
  if ( v12 )
  {
    v11 = time(nullptr);
    if ( v11 - v8 - 3600 * (rand() % 30) > 604799 )
      qword_2503F0 = qthread_create();
  }
LABEL_10:
  if ( v1 )
    qfree();
  return v14 - __readfsqword(0x28u);
}


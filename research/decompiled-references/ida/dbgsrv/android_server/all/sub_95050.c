/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95050
// Address: 0x0000000000095050

//----- (0000000000095050) ----------------------------------------------------
char *__fastcall sub_95050(__int64 a1)
{
  __int64 *v1; // x22
  __int64 v2; // x8
  char *v3; // x19
  char *v4; // x20
  _QWORD *v6; // x0
  void *v7; // x19
  char s[4096]; // [xsp+8h] [xbp-3038h] BYREF
  _QWORD v9[512]; // [xsp+1008h] [xbp-2038h] BYREF
  pthread_mutex_t v10[102]; // [xsp+2008h] [xbp-1038h] BYREF
  __int64 v11; // [xsp+3008h] [xbp-38h]
  int8x16x2_t v12; // 0:q0.32

  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = *(__int64 **)(a1 + 136);
  v2 = *v1;
  if ( *v1 && *(_DWORD *)(v2 + 8) == 1 )
  {
    if ( *(_QWORD *)(v2 + 24) )
    {
      v3 = *(char **)(v2 + 16);
      v4 = (char *)v1[24];
      if ( !v4 )
        return v4;
    }
    else
    {
      v3 = &byte_F154B;
      v4 = (char *)v1[24];
      if ( !v4 )
        return v4;
    }
    if ( (qisabspath((unsigned __int8 *)v4) & 1) != 0 )
    {
      qstrncpy(v10, v4, 4096);
LABEL_18:
      v6 = open_linput((const char *)v10, 0);
      if ( v6 )
      {
        v7 = v6;
        sub_4ECD4((__int64)v9, (__int64)v6, 0, v12);
        sub_4B3A8((__int64)v9, nullptr);
        if ( sub_4B3EC((__int64)v9) && (sub_4B520(v9) & 1) != 0 )
        {
          if ( (sub_4F984((__int64)v9) & 1) != 0 )
          {
            v4 = (char *)operator new(0x28u);
            *((_DWORD *)v4 + 2) = 1;
            *(_QWORD *)v4 = off_15DEE8;
            sub_39140((_QWORD *)v4 + 2, (char *)v10);
LABEL_25:
            sub_4BE70(v9);
            close_linput(v7);
            return v4;
          }
          sub_39FA0((__int64)"Failed to read ELF sections from: %s\n", (const char *)v10);
        }
        else
        {
          sub_39FA0((__int64)"Failed to read ELF ident/header from: %s\n", (const char *)v10);
        }
        v4 = nullptr;
        goto LABEL_25;
      }
      sub_39FA0((__int64)"Cannot open file: %s.\n", (const char *)v10);
      return nullptr;
    }
    if ( (qisabspath((unsigned __int8 *)v3) & 1) != 0 )
    {
      if ( (qdirname((char *)v9, 0x1000u, v3) & 1) != 0 )
      {
LABEL_17:
        qmakepath((size_t)v10, 0x1000u, (char *)v9, v1[24], 0);
        goto LABEL_18;
      }
    }
    else if ( qmake_full_path((unsigned __int64)s, 4096, v3) && (qdirname((char *)v9, 0x1000u, s) & 1) != 0 )
    {
      goto LABEL_17;
    }
  }
  else
  {
    sub_39FA0((__int64)"Input source is not local file.\n");
  }
  return nullptr;
}
// 951AC: variable 'v12' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 15DEE8: using guessed type __int64 (__fastcall *off_15DEE8[4])();

__int64 __fastcall sub_12C50(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v4; // r12d
  unsigned __int8 v6; // dl
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned int v11; // r13d
  unsigned __int8 v12; // r14
  const char *v13; // rax
  bool v14; // zf
  const char *v16; // rsi
  __int64 v18; // [rsp+18h] [rbp-58h] BYREF
  const char *idati; // [rsp+20h] [rbp-50h] BYREF
  __int128 v20; // [rsp+28h] [rbp-48h]
  unsigned __int64 v21; // [rsp+38h] [rbp-38h]

  v4 = *(_DWORD *)(a1 + 404);
  v21 = __readfsqword(0x28u);
  if ( v4 <= 115 )
  {
    v8 = *(_DWORD *)(a1 + 536);
    v9 = *a4;
    if ( (v8 & 2) != 0 )
    {
      if ( v4 == 110 && *(_QWORD *)(v9 + 456) && !strcmp(*(const char **)(v9 + 448), "funcID") )
      {
        idati = nullptr;
        v20 = 0;
        sub_F6F0();
        sub_F880((__int64 *)&idati);
        v16 = s1;
        if ( (_QWORD)v20 )
          v16 = idati;
        sub_A420(a3, v16);
        if ( idati )
        {
          *(_QWORD *)&v20 = 0;
          qfree();
        }
      }
      goto LABEL_19;
    }
    if ( (unsigned int)v4 <= 0x70 && *(_QWORD *)(v9 + 456) )
    {
      v10 = *(_QWORD *)(v9 + 448);
      if ( !strcmp((const char *)v10, "frame") )
      {
        v11 = 103;
        if ( v4 > 110 )
        {
          v12 = 17;
          v11 = 103;
          v13 = "MAP_TYPE111";
          goto LABEL_13;
        }
        goto LABEL_16;
      }
      if ( *(_BYTE *)v10 == 95 && !*(_BYTE *)(v10 + 1) )
      {
        v11 = 106;
        if ( v4 > 110 )
        {
          v12 = 17;
          v11 = 106;
          v13 = "MAP_TYPE111";
LABEL_13:
          v18 = 0;
          WORD4(v20) = 256;
          *(_QWORD *)&v20 = v13;
          idati = (const char *)get_idati();
          if ( (unsigned __int8)create_tinfo() )
            set_tinfo_property4();
          sub_FE10(a1, v12, (__int64)&v18, 1);
          clear_tinfo_t();
          v8 = *(_DWORD *)(a1 + 536);
          goto LABEL_16;
        }
        goto LABEL_16;
      }
      if ( !strcmp((const char *)v10, "funcID") )
      {
        if ( v4 <= 110 )
        {
          v12 = 16;
          v11 = 111;
          v13 = "MAP_TYPE105";
          goto LABEL_13;
        }
        v11 = 111;
        goto LABEL_16;
      }
      if ( !strcmp((const char *)v10, "deferreturn") )
      {
        if ( v4 <= 110 )
        {
          v12 = 16;
          v11 = 112;
          v13 = "MAP_TYPE105";
          goto LABEL_13;
        }
        v11 = 112;
LABEL_16:
        v14 = byte_284D0 == 0;
        *(_DWORD *)(a1 + 404) = v11;
        *(_DWORD *)(a1 + 536) = v8 | 2;
        if ( v14 )
        {
          netnode_check();
          v18 = v11;
          netnode_supset();
          netnode_check();
          v18 = *(unsigned int *)(a1 + 536);
          netnode_supset();
          *(_BYTE *)(a1 + 556) = 1;
          if ( (unsigned __int8)getinf_flag() )
          {
            netnode_check();
            if ( (unsigned int)netnode_altval() > 0x74 )
              get_ph();
          }
          setinf();
        }
      }
    }
LABEL_19:
    v6 = 3;
    return sub_10EA0(a1, a2, v6, (__int64)a4, 1);
  }
  v6 = 4;
  if ( v4 > 117 )
    v6 = (v4 != 118) + 5;
  return sub_10EA0(a1, a2, v6, (__int64)a4, 1);
}

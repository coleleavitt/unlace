__int64 __fastcall sub_38D340(__int64 a1)
{
  int v2; // esi
  unsigned int v3; // ebp
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  void *v9; // rdi
  char v10; // al
  char v11; // al
  _QWORD *v12; // r13
  char *v13; // rdx
  __int64 v14; // r14
  __int64 i; // r12
  char *v16; // rax
  void *v17; // rdi
  char v18; // al
  int v19; // r12d
  int v20; // esi
  unsigned int v21; // esi
  __int64 v22; // rsi
  int v23; // eax
  unsigned __int8 v24; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  int s; // [rsp+0h] [rbp-1108h]
  int v28; // [rsp+8h] [rbp-1100h]
  int v29; // [rsp+10h] [rbp-10F8h]
  void *n; // [rsp+18h] [rbp-10F0h]
  void *v31; // [rsp+20h] [rbp-10E8h]
  int v32; // [rsp+28h] [rbp-10E0h]
  int v33; // [rsp+30h] [rbp-10D8h]
  void *v34; // [rsp+38h] [rbp-10D0h]
  __int64 v35; // [rsp+40h] [rbp-10C8h]
  int v36; // [rsp+48h] [rbp-10C0h]
  int v37; // [rsp+50h] [rbp-10B8h]
  void *v38; // [rsp+58h] [rbp-10B0h]
  __int64 v39; // [rsp+60h] [rbp-10A8h]
  int v40; // [rsp+68h] [rbp-10A0h]
  __int64 v41; // [rsp+70h] [rbp-1098h]
  char v42[4104]; // [rsp+C0h] [rbp-1048h] BYREF
  unsigned __int64 v43; // [rsp+10C8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  sub_38AB20(nullptr);
  v2 = *(unsigned __int8 *)(a1 + 274);
  v3 = sub_38CC30((_QWORD *)a1, v2);
  if ( !v3 && !*(_BYTE *)(a1 + 274) )
  {
    if ( (unsigned int)sub_389770(a1) )
      return 4;
    v9 = *(void **)(a1 + 248);
    if ( v9 )
    {
      v2 = 1;
      if ( !(unsigned __int8)set_compiler_string(
                               v9,
                               s,
                               v28,
                               v29,
                               n,
                               (__int64)v31,
                               v32,
                               v33,
                               v34,
                               v35,
                               v36,
                               v37,
                               v38,
                               v39,
                               v40,
                               v41) )
        sub_378D50();
    }
    v10 = sub_38AF30((_QWORD **)a1, v2, v5, v6, v7, v8);
    if ( *(_BYTE *)(a1 + 267) )
    {
      if ( !v10 )
      {
LABEL_30:
        term_database();
        return 4;
      }
      v11 = sub_389970((__int64 *)a1);
    }
    else
    {
      v11 = sub_38A690((const char ***)a1);
    }
    if ( v11 )
    {
      *(_BYTE *)(*(_QWORD *)a1 + 158LL) = 1;
      v12 = *(_QWORD **)a1;
      v13 = *(char **)(*(_QWORD *)a1 + 104LL);
      if ( v13 )
      {
        v14 = v12[14];
        if ( v14 )
        {
          for ( i = 0; i != v14; ++i )
          {
            v16 = &v13[24 * i];
            v17 = *(void **)v16;
            if ( *(_QWORD *)v16 )
            {
              *((_QWORD *)v16 + 1) = 0;
              qfree(v17);
              v13 = (char *)v12[13];
            }
          }
        }
        v12[14] = 0;
        qfree(v13);
        v12[13] = 0;
        v12[15] = 0;
      }
      v18 = *(_BYTE *)(a1 + 266);
      if ( v18 == -1 )
      {
LABEL_23:
        v23 = *(_DWORD *)(a1 + 256);
        if ( v23 != -1 )
          setinf_flag(2, 1, v23 != 0);
        if ( *(_BYTE *)(a1 + 267) )
        {
          if ( !*(_BYTE *)(a1 + 276) )
            set_database_flag(1, 0);
          v24 = getinf_flag(2, 1);
          enable_auto(v24);
          callui();
        }
        get_root_filename(v42);
        sub_387DF0(1429, (__int64)v42, v25, v26);
      }
      v19 = v18;
      getinf(3);
      v20 = getinf(3);
      if ( v19 == 2 )
      {
        v21 = v20 | 0x400;
      }
      else
      {
        v21 = v20 & 0xFFFFFBFF;
        if ( v19 == 1 )
        {
          v22 = v21 | 0x200;
LABEL_22:
          setinf(3, v22);
          goto LABEL_23;
        }
      }
      v22 = v21 & 0xFFFFFDFF;
      goto LABEL_22;
    }
    goto LABEL_30;
  }
  return v3;
}

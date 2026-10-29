__int64 __fastcall sub_388890(__int64 a1)
{
  __int64 v2; // rsi
  unsigned int v3; // ebp
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rdi
  __int64 v10; // rdi
  char v11; // al
  char v12; // al
  _QWORD *v13; // r13
  char *v14; // rdx
  __int64 v15; // r14
  __int64 i; // r12
  char *v17; // rax
  void *v18; // rdi
  char v19; // al
  int v20; // r12d
  int v21; // eax
  unsigned int v22; // esi
  __int64 v23; // rsi
  int v24; // eax
  unsigned __int8 v25; // al
  __int64 v26; // rdx
  __int64 v27; // rcx
  int s; // [rsp+0h] [rbp-1108h]
  int v29; // [rsp+8h] [rbp-1100h]
  int v30; // [rsp+10h] [rbp-10F8h]
  void *n; // [rsp+18h] [rbp-10F0h]
  void *v32; // [rsp+20h] [rbp-10E8h]
  int v33; // [rsp+28h] [rbp-10E0h]
  int v34; // [rsp+30h] [rbp-10D8h]
  void *v35; // [rsp+38h] [rbp-10D0h]
  __int64 v36; // [rsp+40h] [rbp-10C8h]
  int v37; // [rsp+48h] [rbp-10C0h]
  int v38; // [rsp+50h] [rbp-10B8h]
  void *v39; // [rsp+58h] [rbp-10B0h]
  __int64 v40; // [rsp+60h] [rbp-10A8h]
  int ptr; // [rsp+68h] [rbp-10A0h]
  __int64 v42; // [rsp+70h] [rbp-1098h]
  char v43[4104]; // [rsp+C0h] [rbp-1048h] BYREF
  unsigned __int64 v44; // [rsp+10C8h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  sub_386720(nullptr);
  v2 = *(unsigned __int8 *)(a1 + 226);
  v3 = sub_3881C0((_QWORD *)a1);
  if ( !v3 )
  {
    if ( (unsigned int)sub_3854A0(a1) )
      return 4;
    v9 = *(void **)(a1 + 200);
    if ( v9 )
    {
      v2 = 1;
      if ( !(unsigned __int8)set_compiler_string(
                               v9,
                               1,
                               v5,
                               v6,
                               v7,
                               v8,
                               s,
                               v29,
                               v30,
                               n,
                               (__int64)v32,
                               v33,
                               v34,
                               v35,
                               v36,
                               v37,
                               v38,
                               v39,
                               v40,
                               ptr,
                               v42) )
        sub_375400();
    }
    v10 = a1;
    v11 = sub_386B30(a1, v2, v5, v6, v7, v8);
    if ( *(_BYTE *)(a1 + 219) )
    {
      if ( !v11 )
      {
LABEL_28:
        term_database(v10, v2);
        return 4;
      }
      v10 = a1;
      v12 = sub_3856A0((__int64 *)a1);
    }
    else
    {
      v10 = a1;
      v12 = sub_386290((const char ***)a1);
    }
    if ( v12 )
    {
      *(_BYTE *)(*(_QWORD *)a1 + 158LL) = 1;
      v13 = *(_QWORD **)a1;
      v14 = *(char **)(*(_QWORD *)a1 + 104LL);
      if ( v14 )
      {
        v15 = v13[14];
        if ( v15 )
        {
          for ( i = 0; i != v15; ++i )
          {
            v17 = &v14[24 * i];
            v18 = *(void **)v17;
            if ( *(_QWORD *)v17 )
            {
              *((_QWORD *)v17 + 1) = 0;
              qfree(v18);
              v14 = (char *)v13[13];
            }
          }
        }
        v13[14] = 0;
        qfree(v14);
        v13[13] = 0;
        v13[15] = 0;
      }
      v19 = *(_BYTE *)(a1 + 218);
      if ( v19 == -1 )
      {
LABEL_22:
        v24 = *(_DWORD *)(a1 + 208);
        if ( v24 != -1 )
          setinf_flag(2, 1, v24 != 0);
        if ( *(_BYTE *)(a1 + 219) )
        {
          if ( !*(_BYTE *)(a1 + 228) )
            set_database_flag(1, 0);
          v25 = getinf_flag(2, 1);
          enable_auto(v25);
          callui();
        }
        get_root_filename(v43);
        sub_3840D0(1429, (__int64)v43, v26, v27);
      }
      v20 = v19;
      getinf(3);
      v21 = getinf(3);
      if ( v20 == 2 )
      {
        v22 = v21 | 0x400;
      }
      else
      {
        v22 = v21 & 0xFFFFFBFF;
        if ( v20 == 1 )
        {
          v23 = v21 & 0xFFFFF9FF | 0x200;
          goto LABEL_21;
        }
      }
      v23 = v22 & 0xFFFFFDFF;
LABEL_21:
      setinf(3, v23);
      goto LABEL_22;
    }
    goto LABEL_28;
  }
  return v3;
}


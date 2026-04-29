__int64 __fastcall sub_1A2E0(__int64 a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 result; // rax
  _QWORD *std_dirtree; // r13
  __int64 func_qty; // r12
  __int64 i; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  const char *v14; // rdx
  const char *v15; // rdx
  const char *v16; // [rsp+0h] [rbp-68h] BYREF
  __int128 v17; // [rsp+8h] [rbp-60h]
  const char *v18; // [rsp+20h] [rbp-48h] BYREF
  __int128 v19; // [rsp+28h] [rbp-40h]
  unsigned __int64 v20; // [rsp+38h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  switch ( (int)a2 )
  {
    case 0:
      return sub_D820(a1);
    case 1:
      if ( (*(_BYTE *)(a1 + 240) & 1) == 0 || !*(_QWORD *)(a1 + 136) )
        goto LABEL_3;
      v12 = *(_QWORD *)(a1 + 104);
      v16 = nullptr;
      v17 = 0;
      if ( netnode_qsupstr(v12, &v16, 1, 82) <= 0 )
        goto LABEL_24;
      v13 = netnode_altval(*(_QWORD *)(a1 + 104), 2, 82);
      v18 = nullptr;
      v19 = 0;
      v14 = s1;
      if ( (_QWORD)v17 )
        v14 = v16;
      if ( !(unsigned __int8)sub_9BF0(a1, (__int64 *)&v18, v14, v13 != 0) )
      {
        if ( v18 )
        {
          *(_QWORD *)&v19 = 0;
          qfree(v18);
        }
LABEL_24:
        if ( v16 )
        {
          *(_QWORD *)&v17 = 0;
          qfree(v16);
        }
        goto LABEL_3;
      }
      v15 = s1;
      if ( (_QWORD)v19 )
        v15 = v18;
      netnode_supset(*(_QWORD *)(a1 + 104), 0, v15, 0, 82);
      if ( v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(v18);
      }
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree(v16);
      }
      goto LABEL_9;
    case 2:
      if ( !(unsigned __int8)getinf_flag(3, 4) || *(_DWORD *)(get_ph() + 4) && *(_DWORD *)(get_ph() + 4) != 13 )
        goto LABEL_3;
      return sub_198E0(a1, 0, a3, a4, a5, a6);
    case 3:
    case 4:
      if ( !(unsigned __int8)getinf_flag(3, 4)
        || *(_DWORD *)(get_ph() + 4) && *(_DWORD *)(get_ph() + 4) != 13
        || !(unsigned __int8)sub_198E0(a1, 1, a3, a4, a5, a6) )
      {
        goto LABEL_3;
      }
      if ( a2 == 3 )
        sub_18250(a1);
      else
        sub_18570(a1);
      goto LABEL_9;
    case 5:
      if ( !(unsigned __int8)getinf_flag(3, 4) || *(_DWORD *)(get_ph() + 4) && *(_DWORD *)(get_ph() + 4) != 13 )
        goto LABEL_3;
      sub_198E0(a1, 1, a3, a4, a5, a6);
      if ( (*(_BYTE *)(a1 + 240) & 1) != 0 && *(_QWORD *)(a1 + 136) )
        sub_15EB0(a1);
      goto LABEL_9;
    case 6:
      if ( (*(_BYTE *)(a1 + 240) & 1) == 0 )
        goto LABEL_3;
      if ( !*(_QWORD *)(a1 + 136) )
        goto LABEL_3;
      std_dirtree = (_QWORD *)get_std_dirtree(1);
      if ( !std_dirtree )
        goto LABEL_3;
      func_qty = get_func_qty();
      if ( func_qty )
      {
        for ( i = 0; i != func_qty; ++i )
        {
          v11 = (_QWORD *)getn_func(i);
          v18 = nullptr;
          v19 = 0;
          if ( get_ea_name(&v18, *v11, 0, 0) > 0 )
            sub_10DE0(a1, std_dirtree, (__int64)v18);
          if ( v18 )
          {
            *(_QWORD *)&v19 = 0;
            qfree(v18);
          }
        }
      }
LABEL_9:
      result = 1;
      break;
    default:
      sub_CB10((__int64)"Error: unknown run code %d\n", a2);
LABEL_3:
      result = 0;
      break;
  }
  return result;
}

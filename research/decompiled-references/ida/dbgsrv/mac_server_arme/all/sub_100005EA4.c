/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100005EA4
// Address: 0x0000000100005EA4

//----- (0000000100005EA4) ----------------------------------------------------
__int64 sub_100005EA4()
{
  __int64 v0; // x0
  char v1; // w1
  char v2; // w21
  __int64 v3; // x20
  mach_msg_type_number_t v4; // w8
  thread_act_array_t v5; // x1
  __int64 v6; // x19
  char *v7; // x8
  char **v8; // x27
  char **v9; // x26
  int v10; // w8
  char *v11; // x21
  __int64 v12; // x8
  mach_msg_type_number_t act_listCnt; // [xsp+4h] [xbp-10FCh] BYREF
  thread_act_array_t act_list; // [xsp+8h] [xbp-10F8h] BYREF
  _DWORD __src[517]; // [xsp+10h] [xbp-10F0h] BYREF
  __int64 v17; // [xsp+828h] [xbp-8D8h]
  int v18; // [xsp+830h] [xbp-8D0h]
  void *v19; // [xsp+838h] [xbp-8C8h]
  __int128 v20; // [xsp+840h] [xbp-8C0h]
  char v21; // [xsp+850h] [xbp-8B0h]
  int v22; // [xsp+858h] [xbp-8A8h]
  _BYTE v23[2068]; // [xsp+860h] [xbp-8A0h] BYREF
  __int64 v24; // [xsp+1078h] [xbp-88h]
  int v25; // [xsp+1080h] [xbp-80h]
  void *v26; // [xsp+1088h] [xbp-78h]
  __int128 v27; // [xsp+1090h] [xbp-70h]
  char v28; // [xsp+10A0h] [xbp-60h]

  v0 = __chkstk_darwin();
  v2 = v1;
  v3 = v0;
  if ( task_threads(*(_DWORD *)(v0 + 1544), &act_list, &act_listCnt) )
  {
    if ( under_debugger != 1 )
      interr(30091);
LABEL_26:
    __break(1u);
  }
  v4 = act_listCnt;
  if ( !act_listCnt )
  {
    if ( under_debugger != 1 )
      interr(30092);
    goto LABEL_26;
  }
  v5 = act_list;
  v6 = *act_list;
  if ( (v2 & 1) == 0 )
  {
    __src[0] = *act_list;
    __src[1] = v6;
    v17 = 0;
    v18 = 0;
    __src[4] = 0;
    __src[2] = 0;
    *(_DWORD *)((char *)&__src[2] + 3) = 0;
    v21 = 0;
    v22 = v6;
    memcpy(v23, __src, sizeof(v23));
    v24 = 0;
    v25 = 0;
    v26 = nullptr;
    v19 = nullptr;
    v27 = 0u;
    v20 = 0u;
    v28 = 0;
    v7 = *(char **)(v3 + 1912);
    if ( v7 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = (char **)v7;
          v10 = *((_DWORD *)v7 + 8);
          if ( (int)v6 >= v10 )
            break;
          v7 = *v9;
          v8 = v9;
          if ( !*v9 )
            goto LABEL_11;
        }
        if ( v10 >= (int)v6 )
          break;
        v7 = v9[1];
        if ( !v7 )
        {
          v8 = v9 + 1;
          goto LABEL_11;
        }
      }
    }
    else
    {
      v8 = (char **)(v3 + 1912);
      v9 = (char **)(v3 + 1912);
LABEL_11:
      v11 = (char *)operator new(0x870u);
      *((_DWORD *)v11 + 8) = v6;
      memcpy(v11 + 40, __src, 0x814u);
      *((_QWORD *)v11 + 264) = v17;
      *((_DWORD *)v11 + 530) = v18;
      *((_QWORD *)v11 + 266) = 0;
      v26 = nullptr;
      *(_OWORD *)(v11 + 2136) = 0u;
      v27 = 0u;
      v11[2152] = 0;
      *(_OWORD *)v11 = 0u;
      *((_QWORD *)v11 + 2) = v9;
      *v8 = v11;
      v12 = **(_QWORD **)(v3 + 1904);
      if ( v12 )
      {
        *(_QWORD *)(v3 + 1904) = v12;
        v11 = *v8;
      }
      sub_10000BD00(*(__int64 **)(v3 + 1912), (__int64 *)v11);
      ++*(_QWORD *)(v3 + 1920);
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v26);
        v26 = nullptr;
        *((_QWORD *)&v27 + 1) = 0;
      }
    }
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree(v19);
    }
    *(_DWORD *)(*(_QWORD *)(v3 + 1904) + 56LL) = 2;
    v5 = act_list;
    v4 = act_listCnt;
  }
  if ( mach_vm_deallocate(mach_task_self_, (mach_vm_address_t)v5, 4LL * v4) )
  {
    if ( under_debugger != 1 )
      interr(30093);
    goto LABEL_26;
  }
  return v6;
}
// 100005EE0: variable 'v1' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
// 1000A6A30: using guessed type __int64 __chkstk_darwin(void);

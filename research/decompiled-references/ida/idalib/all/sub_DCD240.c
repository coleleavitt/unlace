__int64 __fastcall sub_DCD240(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 result; // rax
  unsigned __int8 **v10; // rax
  unsigned __int8 **v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-40h] BYREF
  __int64 v15; // [rsp+Ch] [rbp-34h] BYREF
  char v16; // [rsp+14h] [rbp-2Ch]

  v4 = *(_DWORD *)(a3 + 24);
  if ( v4 )
  {
    if ( v4 == 2 )
      return 1;
LABEL_4:
    v14 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v10 = (unsigned __int8 **)sub_E33D20(a1, &v14, 2417, 0);
    v11 = v10;
    if ( v10 )
    {
      sub_AE9DF0(v10, 2, 2u);
      v12 = sub_E32240(a1);
      sub_AE9DF0(v11, (*(_BYTE *)(v12 + 1) & 8) != 0, 3u);
      v13 = sub_E20720(*(_QWORD *)(a1 + 400), a2);
      v16 = 1;
      v15 = v13;
      sub_AEC610((__int64 *)v11, &v15);
      if ( !*(_DWORD *)(a3 + 24) )
      {
LABEL_6:
        if ( *(_QWORD *)(a3 + 32)
          && a4 != *(unsigned __int8 *)(*(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24))
                                                  + 17448)
                                      + 8LL) )
        {
          return sub_CFEE20(a1, a2);
        }
      }
    }
    else
    {
      sub_E32240(a1);
      sub_E20720(*(_QWORD *)(a1 + 400), a2);
      if ( !*(_DWORD *)(a3 + 24) )
        goto LABEL_6;
    }
    return 1;
  }
  v5 = *(_QWORD *)(a3 + 32);
  if ( !v5 )
    goto LABEL_4;
  v6 = *(_QWORD *)(v5 + 32);
  result = 0;
  if ( !*(_BYTE *)(v6 + 61) )
    goto LABEL_4;
  return result;
}

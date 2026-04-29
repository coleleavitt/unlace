__int64 __fastcall sub_309F70(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  bool (__fastcall *v3)(__int64); // rax
  __int64 v4; // rax
  int v5; // edx
  int v6; // ebp
  bool (__fastcall **v8)(__int64); // rax
  bool (__fastcall *v9)(__int64); // rcx
  bool (__fastcall **v10)(__int64); // rcx
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v12[5]; // [rsp+10h] [rbp-28h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( sub_309B20((__int64)a1) )
  {
    if ( a2 >= a1[6] )
      sub_2AE1C0();
    v2 = a1[5] + 80 * a2;
    v3 = **(bool (__fastcall ***)(__int64))v2;
    if ( v3 == sub_2AD4C0 )
    {
      if ( *(_QWORD *)(v2 + 8) != *(_QWORD *)(v2 + 56) )
        goto LABEL_5;
      if ( *(_DWORD *)(v2 + 16) != *(_DWORD *)(v2 + 64) )
      {
        v4 = a1[9];
        v11 = v4;
        if ( v4 )
          goto LABEL_6;
        goto LABEL_12;
      }
    }
    else if ( v3(v2) )
    {
LABEL_5:
      v4 = a1[9];
      v11 = v4;
      if ( v4 )
      {
LABEL_6:
        v5 = *(_DWORD *)(v4 + 104);
        *(_DWORD *)(v4 + 104) = v5 + 1;
        v6 = *(_DWORD *)(v2 + 72);
        if ( v6 != -2 )
        {
LABEL_7:
          sub_13FB80(&v11, a2);
          return v6;
        }
        v10 = *(bool (__fastcall ***)(__int64))v2;
        v12[0] = v4;
        v9 = v10[2];
        *(_DWORD *)(v4 + 104) = v5 + 2;
LABEL_15:
        a2 = (unsigned __int64)v12;
        *(_DWORD *)(v2 + 72) = ((__int64 (__fastcall *)(__int64, _QWORD *))v9)(v2, v12);
        sub_13FB80(v12, (__int64)v12);
        v6 = *(_DWORD *)(v2 + 72);
        goto LABEL_7;
      }
LABEL_12:
      v6 = *(_DWORD *)(v2 + 72);
      if ( v6 != -2 )
        goto LABEL_7;
      v8 = *(bool (__fastcall ***)(__int64))v2;
      v12[0] = 0;
      v9 = v8[2];
      goto LABEL_15;
    }
  }
  return -1;
}
